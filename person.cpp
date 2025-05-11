#include "person.h"



person::person(QString name, QString birthdate, QString gender,
       QString address, QString phonenumber, int uniqueid) {
    this->name = name;
    this->birthdate = birthdate;
    this->gender = gender;
    this->address = address;
    this->phonenumber = phonenumber;
    this->uniqueid = uniqueid;

}
void person::setname(QString name) {
    this->name = name;
}
QString person::getname() {
    return name;
}
void person::setdob(QString birthdate) {
    this->birthdate = birthdate;
}
QString person::getdob() {
    return birthdate;
}
void person::setgender(QString gender){
    this->gender = gender;
}
QString person:: getgender() {
    return gender;
}
void person::setaddress(QString address) {
    this->address = address;
}
QString person:: getaddress() {
    return address;
}

void person::setnumber(QString phonenumber) {
    this->phonenumber = phonenumber;
}
QString person::getnumber() {
    return phonenumber;
}
void person::setid(int uniqueid) {
    this->uniqueid = uniqueid;
}
int person::getid() {
    return uniqueid;
}

person::~person() {
    qDebug() << "destructor called" << "\n";
}
