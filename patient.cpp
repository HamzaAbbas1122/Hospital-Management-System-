#include "patient.h"


patient::patient(QString nam, QString dob, QString ge, QString add, QString phon, int pid, QString dis, QString stat,QString assdoc,
            int assdcid,int depart,int ward,int room ,int bed)

    : person(nam, dob, ge, add, phon, pid), disease(dis),status(stat), assigneddoctor(assdoc),
            assdocid(assdcid),patientid(pid),depart(depart),ward(ward),room(room),bed(bed){ }


    QString patient::	 getdisease() {
        return disease;
    }
    void patient::	setdisease(QString disease) {
        this->disease = disease;
    }
    QString patient::	 getstatuse() {
        return status;
    }
    void patient::	setstatus(QString status) {
        this->status = status;
    }
    QString patient::	 getassigneddoctor() {
        return assigneddoctor;
    }
    void patient::	 setassigneddoctor(QString assigneddoctor) {
        this->assigneddoctor = assigneddoctor;
    }
    void patient::	setbed(int bed) {
        this->bed = bed;
    }
    int patient:: getbed(){
        return bed;
    }
    int patient::	getdocid() {
        return assdocid;
    }
    void patient::	setassdocid(int assdocid) {
        this->assdocid = assdocid;
    }

    int patient::getdepartid() {
        return depart;  // Returns the stored department ID
    }
    void patient::setdepartid(int depart) {
        this->depart = depart;  // Uses 'this->' to avoid naming conflicts
    }
    int patient::getwardid() {
        return ward;  // Returns the stored ward ID
    }
    int patient::getroomid() {
        return room;  // Returns the stored room ID
    }
    void patient::setroomid(int room) {
        this->room = room;  // Updates the room ID
    }
