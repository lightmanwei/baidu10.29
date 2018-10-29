#ifndef CLIENT_H
#define CLIENT_H

#include <QMainWindow>
#include <QTcpSocket>
#include <QDebug>
namespace Ui {
class client;
}

class client : public QMainWindow
{
    Q_OBJECT

public:
    explicit client(QWidget *parent = nullptr);
    ~client();
    void read_data();
    void disconnected();

private slots:
    void on_push_connect_clicked();

    void on_push_send_clicked();

private:
    Ui::client *ui;
    QTcpSocket *socket;
};

#endif // CLIENT_H
