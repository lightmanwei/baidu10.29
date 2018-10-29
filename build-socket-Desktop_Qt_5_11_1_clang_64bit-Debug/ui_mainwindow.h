/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.11.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

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
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QGroupBox *groupBox;
    QLabel *label;
    QLineEdit *line_port;
    QPushButton *push_listen;
    QTextEdit *text_receive;
    QTextEdit *text_send;
    QPushButton *push_send;
    QPushButton *push_save;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(740, 490);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        groupBox = new QGroupBox(centralWidget);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        groupBox->setGeometry(QRect(12, 0, 401, 101));
        label = new QLabel(groupBox);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(15, 33, 59, 16));
        line_port = new QLineEdit(groupBox);
        line_port->setObjectName(QStringLiteral("line_port"));
        line_port->setGeometry(QRect(82, 33, 125, 21));
        push_listen = new QPushButton(groupBox);
        push_listen->setObjectName(QStringLiteral("push_listen"));
        push_listen->setGeometry(QRect(76, 58, 114, 32));
        text_receive = new QTextEdit(centralWidget);
        text_receive->setObjectName(QStringLiteral("text_receive"));
        text_receive->setGeometry(QRect(10, 120, 256, 192));
        text_send = new QTextEdit(centralWidget);
        text_send->setObjectName(QStringLiteral("text_send"));
        text_send->setGeometry(QRect(320, 130, 256, 192));
        push_send = new QPushButton(centralWidget);
        push_send->setObjectName(QStringLiteral("push_send"));
        push_send->setGeometry(QRect(580, 330, 72, 32));
        push_save = new QPushButton(centralWidget);
        push_save->setObjectName(QStringLiteral("push_save"));
        push_save->setGeometry(QRect(430, 330, 114, 32));
        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 740, 22));
        MainWindow->setMenuBar(menuBar);
        mainToolBar = new QToolBar(MainWindow);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        MainWindow->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        MainWindow->setStatusBar(statusBar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", nullptr));
        groupBox->setTitle(QApplication::translate("MainWindow", "GroupBox", nullptr));
        label->setText(QApplication::translate("MainWindow", "port", nullptr));
        push_listen->setText(QApplication::translate("MainWindow", "listen", nullptr));
        push_send->setText(QApplication::translate("MainWindow", "send", nullptr));
        push_save->setText(QApplication::translate("MainWindow", "save", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
