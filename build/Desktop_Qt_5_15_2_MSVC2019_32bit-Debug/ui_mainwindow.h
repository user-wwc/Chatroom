/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDockWidget>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QPushButton *sendBtn;
    QTextEdit *showText;
    QTextEdit *inText;
    QLineEdit *ipText;
    QLabel *nameLb;
    QLineEdit *portText;
    QLabel *ipLb;
    QLabel *portLb;
    QPushButton *cntBt;
    QLineEdit *nameText;
    QPushButton *fcntBtn;
    QMenuBar *menubar;
    QStatusBar *statusbar;
    QDockWidget *dockWidget_3;
    QWidget *dockWidgetContents_3;
    QPushButton *infileBtn;
    QPushButton *recvfileBtn;
    QTextEdit *fileText;
    QPushButton *sendfileBtn;
    QTextEdit *filedownText;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(800, 600);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        sendBtn = new QPushButton(centralwidget);
        sendBtn->setObjectName(QString::fromUtf8("sendBtn"));
        sendBtn->setGeometry(QRect(440, 440, 93, 28));
        showText = new QTextEdit(centralwidget);
        showText->setObjectName(QString::fromUtf8("showText"));
        showText->setGeometry(QRect(80, 130, 391, 261));
        inText = new QTextEdit(centralwidget);
        inText->setObjectName(QString::fromUtf8("inText"));
        inText->setGeometry(QRect(90, 440, 291, 87));
        ipText = new QLineEdit(centralwidget);
        ipText->setObjectName(QString::fromUtf8("ipText"));
        ipText->setGeometry(QRect(90, 60, 113, 25));
        nameLb = new QLabel(centralwidget);
        nameLb->setObjectName(QString::fromUtf8("nameLb"));
        nameLb->setGeometry(QRect(80, 10, 69, 19));
        portText = new QLineEdit(centralwidget);
        portText->setObjectName(QString::fromUtf8("portText"));
        portText->setGeometry(QRect(280, 60, 113, 25));
        ipLb = new QLabel(centralwidget);
        ipLb->setObjectName(QString::fromUtf8("ipLb"));
        ipLb->setGeometry(QRect(40, 60, 41, 19));
        ipLb->setAlignment(Qt::AlignCenter);
        portLb = new QLabel(centralwidget);
        portLb->setObjectName(QString::fromUtf8("portLb"));
        portLb->setGeometry(QRect(230, 60, 41, 19));
        portLb->setAlignment(Qt::AlignCenter);
        cntBt = new QPushButton(centralwidget);
        cntBt->setObjectName(QString::fromUtf8("cntBt"));
        cntBt->setGeometry(QRect(440, 60, 93, 28));
        nameText = new QLineEdit(centralwidget);
        nameText->setObjectName(QString::fromUtf8("nameText"));
        nameText->setGeometry(QRect(160, 10, 113, 25));
        fcntBtn = new QPushButton(centralwidget);
        fcntBtn->setObjectName(QString::fromUtf8("fcntBtn"));
        fcntBtn->setGeometry(QRect(550, 60, 93, 28));
        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 800, 25));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        MainWindow->setStatusBar(statusbar);
        dockWidget_3 = new QDockWidget(MainWindow);
        dockWidget_3->setObjectName(QString::fromUtf8("dockWidget_3"));
        dockWidgetContents_3 = new QWidget();
        dockWidgetContents_3->setObjectName(QString::fromUtf8("dockWidgetContents_3"));
        infileBtn = new QPushButton(dockWidgetContents_3);
        infileBtn->setObjectName(QString::fromUtf8("infileBtn"));
        infileBtn->setGeometry(QRect(0, 10, 93, 28));
        recvfileBtn = new QPushButton(dockWidgetContents_3);
        recvfileBtn->setObjectName(QString::fromUtf8("recvfileBtn"));
        recvfileBtn->setGeometry(QRect(0, 360, 93, 28));
        fileText = new QTextEdit(dockWidgetContents_3);
        fileText->setObjectName(QString::fromUtf8("fileText"));
        fileText->setGeometry(QRect(0, 60, 104, 87));
        sendfileBtn = new QPushButton(dockWidgetContents_3);
        sendfileBtn->setObjectName(QString::fromUtf8("sendfileBtn"));
        sendfileBtn->setGeometry(QRect(0, 170, 93, 28));
        filedownText = new QTextEdit(dockWidgetContents_3);
        filedownText->setObjectName(QString::fromUtf8("filedownText"));
        filedownText->setGeometry(QRect(0, 240, 104, 87));
        dockWidget_3->setWidget(dockWidgetContents_3);
        MainWindow->addDockWidget(Qt::RightDockWidgetArea, dockWidget_3);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        sendBtn->setText(QCoreApplication::translate("MainWindow", "\345\217\221\351\200\201", nullptr));
        nameLb->setText(QCoreApplication::translate("MainWindow", "\345\220\215\345\255\227", nullptr));
        ipLb->setText(QCoreApplication::translate("MainWindow", "ip:", nullptr));
        portLb->setText(QCoreApplication::translate("MainWindow", "\347\253\257\345\217\243\357\274\232", nullptr));
        cntBt->setText(QCoreApplication::translate("MainWindow", "\350\277\236\346\216\245", nullptr));
        fcntBtn->setText(QCoreApplication::translate("MainWindow", "\346\226\255\345\274\200\350\277\236\346\216\245", nullptr));
        infileBtn->setText(QCoreApplication::translate("MainWindow", "\346\267\273\345\212\240\346\226\207\344\273\266", nullptr));
        recvfileBtn->setText(QCoreApplication::translate("MainWindow", "\346\216\245\346\224\266\346\226\207\344\273\266", nullptr));
        sendfileBtn->setText(QCoreApplication::translate("MainWindow", "\345\217\221\351\200\201\346\226\207\344\273\266", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
