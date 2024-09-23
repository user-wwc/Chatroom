#include "file.h"
#include<QDebug>
#define FILENAME_LEN 20
Createfile::Createfile(QObject *parent)
    : QObject{parent}
{

}

void Createfile::recvpath(QByteArray path)
{
    filename=path;
    if (filename.startsWith("file:"))  handlepath();
   else if (filename.startsWith("data:"))  handledata();
    else sendInformation(filename);
}



void Createfile::handlepath()
{


        // 提取文件名
         filestr = filename.mid(5, FILENAME_LEN).trimmed();
        filesize=filename.mid(25,30 ).trimmed();
         str=filesize;
        filenamestr = u8"D:\\" + filestr;
        qDebug() << "File path:" << filenamestr;
        emit sendfilename(filenamestr);
qDebug() << "File size:" << str;

}

void Createfile::handledata()
{
    //qDebug() << "File size:" << str;
    QByteArray filedata = filename.mid(5);  // 去掉前缀 "data:"

    QFile recvfile(u8"D:\\b.txt");
    if (!recvfile.open( QIODevice::ReadWrite | QIODevice::Text)) {
        qWarning() << "Failed to open file for writing:" << filenamestr;
        return;
    }
     recvfile.write(filedata);

}





