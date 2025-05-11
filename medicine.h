#ifndef MEDICINE_H
#define MEDICINE_H

#include <QString>

class medicine{

    QString id;
    QString name;
    QString company;
    QString priceStr;
    QString quantityStr;

public:
    medicine(    QString id,
             QString name,
             QString company,
             QString priceStr,
             QString quantityStr);

    QString getmedid();
    QString getmedname();
    QString getmedcompany();
    QString getmedprice();
    QString getmedquantity();

};

#endif // MEDICINE_H
