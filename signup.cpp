#include "signup.h"
#include "ui_signup.h"
#include "QString"
#include "QMessageBox"
#include "welcome.h"
#include "confirmprofile.h"
#include "code.h"

QString b;
signup::signup(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::signup)
{
    ui->setupUi(this);
    ui->lineEdit_7->setEnabled(false);
    int a;
    for(int i = 0; i<5; i++ )
    {
        int r = rand()%2;
        a = rand()%26;
        if(r ==1)
        {
            b[i] = 'a'+a;
        }
        if(r==0)
        {
            b[i]= 'A'+a;
        }
    }
    ui->lineEdit_7->setText(b);
}
signup::~signup()
{
    delete ui;
}

void signup::on_pushButton_2_clicked()
{
    int a;
    for(int i = 0; i<5; i++ )
    {
        int r = rand()%2;
        a = rand()%26;
        if(r ==1)
        {
            b[i] = 'a'+a;
        }
        if(r==0)
        {
            b[i]= 'A'+a;
        }
    }
    ui->lineEdit_7->setText(b);

}


void signup::on_pushButton_clicked()
{
    QString a;
    a = ui->lineEdit_8->text();
    for (int i = 0; i<5 ;i++ )
    {
        if(b[i] != a[i])
        {
            QMessageBox::warning(this,"wrong captcha!","you entered a wrong captcha!","ok");
            break;
        }
        else
        {
            code *w2=new code;
            w2->show();
            this->close();
            break;
        }
    }
}


void signup::on_pushButton_3_clicked()
{
    welcome *w=new welcome;
    w->show();
    this->close();

}

