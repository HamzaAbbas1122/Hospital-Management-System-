#ifndef STAFF_H
#define STAFF_H

#include "person.h"

class staff : public person
{

public:

    float salary;
    QString avail;

public:

    staff(QString , QString , QString ,
           QString , QString , int,QString,float );
    float getsalary();
    QString getavail();
};

#endif // STAFF_H
