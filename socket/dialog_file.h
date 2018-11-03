#ifndef DIALOG_FILE_H
#define DIALOG_FILE_H

#include <QDialog>

namespace Ui {
class Dialog_file;
}

class Dialog_file : public QDialog
{
    Q_OBJECT

public:
    explicit Dialog_file(QWidget *parent = nullptr);
    ~Dialog_file();

private:
    Ui::Dialog_file *ui;
};

#endif // DIALOG_FILE_H
