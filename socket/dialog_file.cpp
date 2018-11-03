#include "dialog_file.h"
#include "ui_dialog_file.h"

Dialog_file::Dialog_file(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Dialog_file)
{
    ui->setupUi(this);
}

Dialog_file::~Dialog_file()
{
    delete ui;
}
