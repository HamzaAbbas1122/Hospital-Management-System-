#ifndef ADMINISTRATORS_H
#define ADMINISTRATORS_H

#include "staff.h"

class administrators : public staff
{
    QString position;
    QString status;
public:

    administrators(QString, QString, QString, QString, QString, int, QString, float,QString,QString);
    QString getposition();
    QString getstatusofadmin();

};

#endif // ADMINISTRATORS_H
