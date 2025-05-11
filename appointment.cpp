#include "appointment.h"


appointment::	appointment(
        QString ptnm,QString dtmn,int dcid, int pid, int apid, QString apdate, QString apstat,QString appurpose) {
        pname = ptnm;
        dname = dtmn;
        docid = dcid;
        patid = pid;
        appid = apid;
        appdate = apdate;
        appstat = apstat;
        apurpose=appurpose;
    }
    void
    appointment:: display() {
        qDebug() << "Appointment id : " << appid << "\n" << "Appointment Status: " << appstat << "\n"
            << "Appointment date: " << appdate << "\n" << "Appointment is Between Doctor : "
            <<dname<< " with Doctor id : " << docid
            << "  and patient: "<<pname<< " with patient id:  "<< patid << "\n";
    }

    void
    appointment:: setdocid(int docid) {
        this->docid = docid;
    }
    int
    appointment:: getdocid() {
        return docid;
    }
    void
    appointment:: setpatid(int patid) {
        this->patid = patid;
    }
    int
    appointment:: getpatid() {
        return patid;
    }
    int
    appointment:: getapid() {
        return appid;
    }
    void
    appointment:: setappdate(QString appdate) {
        this->appdate = appdate;
    }
    QString
    appointment:: getappdate(){
        return appdate;
    }
    QString
    appointment:: getapurpose(){
        return apurpose;
    }
    void
    appointment:: setappstat(QString appstat) {
        this->appstat = appstat;
    }
    QString
    appointment::getappstat() {
        return appstat;
    }
    QString
    appointment::getpname() {
        return pname;
    }
    QString
    appointment::getdname() {
        return dname;
    }



