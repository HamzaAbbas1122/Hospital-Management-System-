#include "staff.h"


staff::staff(QString name, QString birthdate, QString gender,QString address, QString phonenumber, int uniqueid,QString avail,float salary ):
        person(name, birthdate, gender, address,phonenumber,uniqueid),salary(salary),avail(avail){}

float staff::getsalary(){return salary;}
QString staff::getavail(){return avail;}
