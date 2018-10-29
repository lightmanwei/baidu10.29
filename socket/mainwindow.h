#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QTcpSocket>
#include <QTcpServer>
#include <QFile>
#include <QMessageBox>
#include <QtCore/QTextStream>
#include <QtCore/QFile>
#include <QtCore/QIODevice>
namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = nullptr);
    ~MainWindow();
void new_connect();
void read_data();
void disconnected();

private slots:
void on_push_listen_clicked();

void on_push_send_clicked();

void on_push_save_clicked();

private:
    Ui::MainWindow *ui;
    QTcpSocket *socket;
    QTcpServer *server;

};

#endif // MAINWINDOW_H
