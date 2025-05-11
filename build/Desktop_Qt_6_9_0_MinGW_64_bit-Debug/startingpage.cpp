include "startingpage.h"
#include "ui_startingpage.h"

startingpage::startingpage(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::startingpage)
{
    ui->setupUi(this);
}

startingpage::~startingpage()
{
    delete ui;
}
