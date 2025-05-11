#include "bills.h"

bills::
    bills(
         int patid, int billid,
        float totalfee, float doctorfee, float medicinefee, float trtcost,
         QString bstat, QString bdate){

        this-> patid = patid;
        this-> billid = billid;
        this-> totalfee = totalfee;
        this-> doctorfee = doctorfee;
        this-> medicinefee = medicinefee;
        this-> trtcost = trtcost;
       this->  bstat = bstat;
        this->  bdate = bdate;

    }

    float bills::calculatebill() {

        totalfee = 0;
        totalfee = doctorfee + medicinefee + trtcost;
        return totalfee;

    }




    void bills:: setpatid(int patid) {
        this->patid = patid;
    }

    int bills:: getpatid() {
        return patid;
    }

    void bills:: setbdate(QString bdate) {
        this->bdate = bdate;
    }
    QString bills:: getbdate() {
        return bdate;
    }

    void  bills:: setbstat(QString bstat) {
        this->bstat = bstat;
    }
    QString bills:: getbstat() {
        return bstat;
    }
    void bills:: setdocfee(float doctorfee) {
        this->doctorfee = doctorfee;
    }
    float bills:: getdocfee() {
        return doctorfee;
    }
    void bills:: setmedicinefee(float medicinefee) {
        this->medicinefee = medicinefee;
    }
    float bills:: getmedicinefee() {
        return medicinefee;
    }
    void bills:: settrtcoste(float trtcost) {
        this->trtcost = trtcost;
    }
    float bills:: gettrtcost() {
        return trtcost;
    }
    void bills:: settotalfee(float totalfee) {
        this->totalfee = totalfee;
    }
    float bills::getttotalfee() {
        return totalfee;
    }
    int bills::getbid(){
        return billid;
    }
