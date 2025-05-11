#ifndef PERSON_H
#define PERSON_H
#include <QString>
#include<QDebug>
using namespace std;
class person {

protected:
    QString name;
    QString birthdate;
    QString gender;
    QString address;
    QString phonenumber;
    int uniqueid;
public:
    person(QString , QString , QString ,
           QString , QString , int );

    void setname(QString );
    QString getname();
    void setdob(QString) ;
    QString getdob();
    void setgender(QString );
    QString getgender() ;
    void setaddress(QString ) ;
    QString getaddress() ;
    void setnumber(QString);
    QString getnumber() ;
    void setid(int);
    int getid() ;
    ~person();
};

#endif // PERSON_H
