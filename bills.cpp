#include "bills.h"

bills::	bills(
        QString ptnm, QString dtmn, int dcid, int pid, int bid,
        float tocost, float dfee, float mfee, float tfee,
        float tretcost, QString billstat, QString billdate, int patbed) {
        pname = ptnm;
        dname = dtmn;
        docid = dcid;
        patid = pid;
        billid = bid;
        totalfee = tocost;
        doctorfee = dfee;
        medicinefee = mfee;
        trtcost = tretcost;
        bstat = billstat;
        bdate = billdate;
        pbed = patbed;
    }
    void bills::calculatebill() {
        totalfee = 0;
        totalfee = doctorfee + medicinefee + trtcost;

    }

    void bills:: display() {
        qDebug() << "Bill id : " << billid << "\n" << "Bill date: " << bdate << "\n"
            << "Bill Status: " << bstat << "\n" << "Bill date: " << bdate << "\n"
            << "Patient: " << pname << " with patient id:  " << patid << " Bed Number: " << pbed << "\n"
            << "Doctor : " << dname << " Doctor id : " << docid<<"\n"
            << "Doctor Fees : " << doctorfee << "\n"
            << "Medicine Fees : " << medicinefee << "\n"
            << "Treatement Fees : " << trtcost << "\n"
            << "Total Fees : " << totalfee << "\n";

    }



    void bills:: setdocid(int docid) {
        this->docid = docid;
    }
    int bills:: getdocid() {
        return docid;
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
