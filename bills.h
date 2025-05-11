#ifndef BILLS_H
#define BILLS_H
#include<QString>
#include<QDebug>
class bills {

private:
    int docid;

    int patid;
    int billid;
    float trtcost;
    float doctorfee;
    float medicinefee;
    float totalfee;
    QString pname;
    QString dname;
    QString bstat;
    QString bdate;
    int pbed;

public:
    bills(
        QString ptnm, QString dtmn, int dcid, int pid, int bid,
        float tocost, float dfee, float mfee, float tfee,
        float tretcost, QString billstat, QString billdate, int patbed);

    void calculatebill();
    void display();
    void setdocid(int docid);
    int getdocid() ;
    void setpatid(int patid);
    int getpatid() ;
    void setbdate(QString bdate);
    QString getbdate();
    void setbstat(QString bstat);
    QString getbstat();
    void setdocfee(float doctorfee);
    float getdocfee();
    void setmedicinefee(float medicinefee);
    float getmedicinefee();
    void settrtcoste(float trtcost);
    float gettrtcost();
    void settotalfee(float totalfee);
    float getttotalfee();

};
#endif // BILLS_H
