#ifndef RECEPTIONISTS_H
#define RECEPTIONISTS_H

#include "staff.h"

class receptionists : public staff
{
public:
    receptionists(QString, QString, QString, QString, QString, int, QString, float);
};

#endif // RECEPTIONISTS_H
