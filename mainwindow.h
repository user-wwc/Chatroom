#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QTcpSocket>
#include <QFile>
#include<QLabel>
QT_BEGIN_NAMESPACE


namespace Ui {
class MainWindow;
}
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();
signals:
    void sendpath(QByteArray);
    void senddata(QByteArray);

private slots:
    void readData();
    void on_cntBt_clicked();
    void on_sendBtn_clicked();

    void on_infileBtn_clicked();

    void on_sendfileBtn_clicked();
    void on_recvfileBtn_clicked();


    void on_fcntBtn_clicked();

private:
    Ui::MainWindow *ui;
    QLabel* state;
    QTcpSocket* clnt_sock;


    QString filename;
    qint64 fileSize;//文件大小
    qint64 recvSize;//已经接收文件的大小
    QByteArray btfile;
     QString filenamestr;


};
#endif // MAINWINDOW_H
