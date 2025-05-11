#ifndef APPOINTMENT_H
#define APPOINTMENT_H
#include<QString>
#include<QDebug>
class appointment{

private:
    int docid;
    int patid;
    int appid;
    QString pname;
    QString dname;
    QString appdate;
    QString appstat;
    QString apurpose;
public:
    appointment(QString ptnm,QString dtmn,int dcid, int pid, int apid, QString apdate,QString appurpose, QString apstat);
    void display();
    void setdocid(int docid);
    int getdocid() ;
    void setpatid(int patid) ;
    int getpatid() ;
    int getapid();
    QString getapurpose();
    void setappdate(QString appdate);
    QString getappdate();
    void setappstat(QString appstat) ;
    QString getappstat() ;
    QString getpname();
    QString getdname();





};

#endif // APPOINTMENT_H
