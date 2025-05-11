#include "form.h"
#include "adminlogin.h"
#include "ui_form.h"

Form::Form(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Form)
{
    ui->setupUi(this);
}

Form::~Form()
{
    delete ui;
}

void Form::on_enterButton_clicked()
{
    AdminLogin *ui=new AdminLogin;
    ui->show();
    this->hide();
}

