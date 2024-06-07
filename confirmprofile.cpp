#include "confirmprofile.h"
#include "ui_confirmprofile.h"

confirmprofile::confirmprofile(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::confirmprofile)
{
    ui->setupUi(this);
    ui->lineEdit_12->setInputMask("00/00/00");
}

confirmprofile::~confirmprofile()
{
    delete ui;
}
