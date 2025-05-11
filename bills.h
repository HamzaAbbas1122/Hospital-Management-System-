#ifndef BILLS_H
#define BILLS_H
#include<QString>
#include<QDebug>
class bills {

private:

    int patid;
    int billid;
    float trtcost;
    float doctorfee;
    float medicinefee;
    float totalfee;

    QString bstat;
    QString bdate;

public:
    bills(
        int patid, int billid,
        float totalfee, float doctorfee, float medicinefee, float trtcost,
        QString bstat, QString bdate);

    float calculatebill();

    int getbid();
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
