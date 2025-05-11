#include <QFile>
#include <QTextStream>
#include <QDate>
#include <QMessageBox>
#include "medicine.h"


medicine::medicine(QString id, QString name,QString company,QString price,QString quantityStr):id(id),name(name),
    company(company),priceStr(price),quantityStr(quantityStr){}

QString medicine::getmedid(){return id;}
QString medicine::getmedname(){return name;}
QString medicine::getmedcompany(){return company;}
QString medicine::getmedprice(){return priceStr;}
QString medicine::getmedquantity(){return quantityStr;}

