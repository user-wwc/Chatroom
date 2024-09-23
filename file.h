#ifndef FILE_H
#define FILE_H

#include <QFile>
#include <QObject>

class Createfile : public QObject
{
    Q_OBJECT
public:
    explicit Createfile(QObject *parent = nullptr);

     void recvpath(QByteArray path);
void handlepath();
     void handledata();
signals:
    void sendfilename(QString filenamestr);
void sendInformation(QString filenamestr);
private:
    QByteArray filename;
    QString filenamestr;
    QString filedata;
    QByteArray filesize;
    const char* str;
     //QFile *recvfile;
    QString filestr;

};



#endif // FILE_H
