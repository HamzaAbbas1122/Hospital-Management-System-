#ifndef PATIENT_H
#define PATIENT_H

#include "person.h"

class patient : public person {

private:
    QString disease;
    QString status;
    QString assigneddoctor;
    int assdocid;
    int patientid;
    int depart;
    int ward;
    int room;
    int bed;

public:

    patient(QString nam, QString dob, QString ge, QString add, QString phon, int pid, QString dis, QString stat,QString assdoc,
            int assdcid,int depart,int ward,int room,int bed);


    QString getdisease() ;
    void setdisease(QString disease) ;

    QString getstatuse() ;
    void setstatus(QString status) ;

    QString getassigneddoctor() ;
    void setassigneddoctor(QString assigneddoctor) ;

    int getbed() ;
    void setbed(int bed) ;

    int getdocid() ;
    void setassdocid(int assdocid) ;

    int getdepartid() ;
    void setdepartid(int depart) ;

    int getwardid() ;
    void setwardid(int ward) ;

    int getroomid() ;
    void setroomid(int room) ;




};
#endif // PATIENT_H
