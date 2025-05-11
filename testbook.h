#ifndef TESTBOOK_H
#define TESTBOOK_H

#include "laboratory.h"
#include "string"

class testbook : public laboratory
{
private:
    QString bookid;
    QString patientID;
    QString doctorid;
    QString bookstatus;
    QString bookdate;
public:
    testbook(QString tid,QString tnmae,QString tprice,QString tstat,
             QString bookid,QString patientID,QString doctorid,
             QString bookstatus,QString bookdate);

    QString getBookId();
        QString getPatientId() ;
    QString getDoctorId();
        QString getBookStatus();
    QString getBookDate() ;
        void setbookstatus(std::string a);
};

#endif // TESTBOOK_H
