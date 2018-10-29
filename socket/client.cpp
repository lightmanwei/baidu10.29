#include "client.h"
#include "ui_client.h"


client::client(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::client)
{

    ui->setupUi(this);

    socket= new QTcpSocket;
    QObject::connect(socket, &QTcpSocket::readyRead, this, &client::read_data);
    QObject::connect(socket, &QTcpSocket::disconnected,this ,&client::disconnected);
    ui->line_ip->setText("127.0.0.1");

    ui->push_send->setEnabled(false);
    this->show();
}

client::~client()
{
    delete this->socket;
    delete ui;
}


void client::on_push_connect_clicked()
{
    if(ui->push_connect->text()=="connect")
    {
        QString IP;
       int port;
       IP=ui->line_ip->text();
       port=ui->line_port->text().toInt();//获取IP和port
        socket->abort();//断掉之前的链接
        socket->connectToHost(IP, port);
        if(!socket->waitForConnected(30000))//超时否
        {
            qDebug()<<"failed";
            return;
        }
        qDebug()<<"succeed";
        ui->push_send->setEnabled(true);
        ui->push_connect->setText("disconnect");
    }
    else
        {
            socket->disconnectFromHost();//如果现在的文字不是“connect”，按下按钮就是断开连接
            ui->push_connect->setText("connect");
            ui->push_send->setEnabled(false);
        }

}

void client::on_push_send_clicked()
{

    socket->write(ui->text_send->toPlainText().toLatin1());
    socket->flush();
}

void client::read_data()
{
    QByteArray buffer;
    buffer=socket->readAll();//读到缓冲区
    if(!buffer.isEmpty())
    {
        QString str=ui->text_receive->toPlainText();
        str+=tr(buffer);
        ui->text_receive->setText(str);
    }
}

void client::disconnected()
{
    ui->push_send->setEnabled(false);
    ui->push_connect->setText("connected");
    qDebug()<<"diconnected !";
}
