/********************************************************************************
** Form generated from reading UI file 'client.ui'
**
** Created by: Qt User Interface Compiler version 5.11.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CLIENT_H
#define UI_CLIENT_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_client
{
public:
    QWidget *centralwidget;
    QPushButton *push_connect;
    QPushButton *push_send;
    QGroupBox *groupBox;
    QLineEdit *line_ip;
    QLabel *label;
    QGroupBox *groupBox_2;
    QLineEdit *line_port;
    QLabel *label_2;
    QTextEdit *text_receive;
    QTextEdit *text_send;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *client)
    {
        if (client->objectName().isEmpty())
            client->setObjectName(QStringLiteral("client"));
        client->resize(800, 600);
        centralwidget = new QWidget(client);
        centralwidget->setObjectName(QStringLiteral("centralwidget"));
        push_connect = new QPushButton(centralwidget);
        push_connect->setObjectName(QStringLiteral("push_connect"));
        push_connect->setGeometry(QRect(479, 11, 114, 32));
        push_send = new QPushButton(centralwidget);
        push_send->setObjectName(QStringLiteral("push_send"));
        push_send->setGeometry(QRect(630, 360, 114, 32));
        groupBox = new QGroupBox(centralwidget);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        groupBox->setGeometry(QRect(12, 0, 191, 91));
        line_ip = new QLineEdit(groupBox);
        line_ip->setObjectName(QStringLiteral("line_ip"));
        line_ip->setGeometry(QRect(60, 30, 113, 16));
        label = new QLabel(groupBox);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(0, 30, 59, 16));
        groupBox_2 = new QGroupBox(centralwidget);
        groupBox_2->setObjectName(QStringLiteral("groupBox_2"));
        groupBox_2->setGeometry(QRect(230, 0, 241, 91));
        line_port = new QLineEdit(groupBox_2);
        line_port->setObjectName(QStringLiteral("line_port"));
        line_port->setGeometry(QRect(60, 30, 113, 21));
        label_2 = new QLabel(groupBox_2);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(0, 30, 59, 16));
        text_receive = new QTextEdit(centralwidget);
        text_receive->setObjectName(QStringLiteral("text_receive"));
        text_receive->setGeometry(QRect(10, 100, 256, 281));
        text_send = new QTextEdit(centralwidget);
        text_send->setObjectName(QStringLiteral("text_send"));
        text_send->setGeometry(QRect(330, 101, 256, 281));
        client->setCentralWidget(centralwidget);
        menubar = new QMenuBar(client);
        menubar->setObjectName(QStringLiteral("menubar"));
        menubar->setGeometry(QRect(0, 0, 800, 22));
        client->setMenuBar(menubar);
        statusbar = new QStatusBar(client);
        statusbar->setObjectName(QStringLiteral("statusbar"));
        client->setStatusBar(statusbar);

        retranslateUi(client);

        QMetaObject::connectSlotsByName(client);
    } // setupUi

    void retranslateUi(QMainWindow *client)
    {
        client->setWindowTitle(QApplication::translate("client", "MainWindow", nullptr));
        push_connect->setText(QApplication::translate("client", "connect", nullptr));
        push_send->setText(QApplication::translate("client", "send", nullptr));
        groupBox->setTitle(QApplication::translate("client", "GroupBox", nullptr));
        label->setText(QApplication::translate("client", "IP", nullptr));
        groupBox_2->setTitle(QApplication::translate("client", "GroupBox", nullptr));
        label_2->setText(QApplication::translate("client", "port", nullptr));
    } // retranslateUi

};

namespace Ui {
    class client: public Ui_client {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CLIENT_H
