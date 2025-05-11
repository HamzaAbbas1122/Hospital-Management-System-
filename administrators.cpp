#include "administrators.h"

administrators::administrators(QString name, QString birthdate, QString gender, QString address, QString phonenumber, int uniqueid, QString salary, float avail, QString position, QString status):
    staff(name, birthdate, gender, address,phonenumber,uniqueid,salary,avail),position(position),status(status){}

QString administrators::getposition(){return position;}
QString administrators::getstatusofadmin(){return status;}


///////////abdullah///
