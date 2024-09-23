#include "file.h"
#include "mainwindow.h"
#include "ui_mainwindow.h"

#include <QFileDialog>

#include <QFile>
#include <QHostAddress>
#include <QThread>
//包含头文件
#include<QLabel>

//启动软件

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    //连接状态bar：
    state=new QLabel;
    state->setText(u8"未连接：");
    ui->statusbar->addWidget(new QLabel(u8"连接状态："));
     ui->statusbar->addWidget(state);

    clnt_sock=new QTcpSocket();
//默认ip
    ui->ipText->setText("127.0.0.1");
   ui->portText->setText("9527");

  //创建线程：


   QThread* t1 = new QThread;
   Createfile* cfile = new Createfile;
   cfile->moveToThread(t1);
 t1->start();
   connect(this, &MainWindow::sendpath, cfile, &Createfile::recvpath);
   connect(cfile, &Createfile::sendfilename, this, [=](QString filestr){
       ui->filedownText->setText(filestr);
   });
   connect(cfile, &Createfile::sendInformation, this, [=](QString filestr){
       ui->showText->setText(filestr);
   });
   // 启动线程


   connect(clnt_sock, &QTcpSocket::readyRead, this, [=]() {
       while (clnt_sock->bytesAvailable()) {
           QByteArray showbyte = clnt_sock->readAll();
           emit sendpath(showbyte);

       }
   });



   connect(clnt_sock,&QTcpSocket::disconnected,[=](){
        clnt_sock->deleteLater();
        state->setText(u8"未连接");
    });

}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::readData()
{

}

//点击按钮连接
void MainWindow::on_cntBt_clicked()
{
    QString ip;
    unsigned short port;
    ip=ui->ipText->text();
    port=ui->portText->text().toUShort();

    clnt_sock->abort();//忘掉之前的连接
    qDebug() << "Connecting to IP:" << ip << "Port:" << port;
    clnt_sock->connectToHost(QHostAddress(ip),port);
    if(!clnt_sock->waitForConnected(3000)){
        qDebug("connect fail:\n");
        return;
    }
 state->setText(u8"已连接");
    qDebug("connect success");
}


void MainWindow::on_sendBtn_clicked()
{
    if (!clnt_sock->isOpen()) {
        qDebug() << "Socket is not open.";
        return;
    }
    QString namestr=ui->nameText->text();
    QString instr = ui->inText->toPlainText();
    QByteArray data = namestr.toUtf8()+":"+instr.toUtf8();
    //ui->showText->setText(data);
    clnt_sock->write(data);
    qDebug() << "Write error:" << clnt_sock->errorString();
    clnt_sock->flush(); // Ensure all data is sent

}


void MainWindow::on_infileBtn_clicked()
{
      QString filepath= QFileDialog::getOpenFileName(NULL,"file","D:\\Qt5_Projects\\Chat_room_2","*.*");

      QFileInfo info(filepath);
    filename=info.fileName();
      fileSize=info.size();
     //qDebug()<<fileSize;
     ui->fileText->append(filename);
    QFile file(filepath);
     file.open(QIODevice::ReadOnly);
    btfile="data:"+file.readAll();
         //qDebug()<<btfile;


}


void MainWindow::on_sendfileBtn_clicked()
{

    QString head = QString("file:%1%2").arg(filename,20).arg(fileSize,5);
    QByteArray headbyte=head.toUtf8();
    clnt_sock->write(headbyte);

    clnt_sock->write(btfile);//数据

}


void MainWindow::on_recvfileBtn_clicked()
{
    QString download="download";
    clnt_sock->write(download.toUtf8());
}


void MainWindow::on_fcntBtn_clicked()
{
    clnt_sock->close();
}

