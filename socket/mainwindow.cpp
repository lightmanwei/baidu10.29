#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    server= new QTcpServer;
    ui->push_send->setEnabled(false);

  connect(server, &QTcpServer::newConnection, this, &MainWindow::new_connect);

  }

MainWindow::~MainWindow()
{
    server->close();
    server->deleteLater();
    delete ui;
}

void MainWindow::on_push_listen_clicked()
{
    if(ui->push_listen->text()=="listen")
    {
        int port = ui->line_port->text().toInt();
        if(!server->listen(QHostAddress::Any, port))
        {
            qDebug()<<server->errorString();
            return;
        }
        ui->push_listen->setText("stop listen");
        qDebug()<<"listen success";
    }
    else
    {
        socket->abort();
        server->close();
        ui->push_listen->setText("listen");
        ui->push_send->setEnabled(false);
    }
}

void MainWindow::on_push_send_clicked()
{
    qDebug()<<ui->text_send->toPlainText().toLatin1();
    socket->write(ui->text_send->toPlainText().toLatin1());
    socket->flush();
}



void MainWindow::new_connect()
{
    socket=server->nextPendingConnection();


       QObject::connect(socket, &QTcpSocket::readyRead, this, &MainWindow::read_data);
       QObject::connect(socket, &QTcpSocket::disconnected, this, &MainWindow::disconnected);
       ui->push_send->setEnabled(true);
       qDebug() << "A Client connect!";

}


void MainWindow::read_data()
{
    QByteArray buffer;
        //读取缓冲区数据
        buffer = socket->readAll();
        if(!buffer.isEmpty())
        {
            QString str = ui->text_receive->toPlainText();
            str+=tr(buffer);
            //刷新显示
            ui->text_receive->setText(str);
        }
}
void MainWindow::disconnected()
{
    ui->push_send->setEnabled(false);
    qDebug()<<"disconnected";
}

void MainWindow::on_push_save_clicked()


    {
         QFile file("/Users/gikosei/qtstudy/baidu/socket/save.txt");

         if(!file.open(QIODevice::WriteOnly|QIODevice::Text))
         {
          QMessageBox::critical(NULL,"attention!","error");
          qDebug()<<"!!!no";
          return;

          }
         QTextStream out(&file);
         out<<ui->text_receive->toPlainText();
         qDebug()<<"saving success!";
         file.close();

    }



