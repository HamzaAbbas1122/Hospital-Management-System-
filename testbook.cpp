#include "testbook.h"
#include "laboratory.h"

testbook::testbook(QString tid,QString tnmae,QString tprice,QString tstat,
         QString bookid,QString patientID,QString doctorid,
                   QString bookstatus,QString bookdate):laboratory(tid,tnmae,tprice,tstat),bookid(bookid),
    patientID(patientID),doctorid(doctorid),bookstatus(bookstatus),bookdate(bookdate){}

QString testbook:: getBookId(){ return bookid; }
QString testbook:: getPatientId(){ return patientID; }
QString testbook::getDoctorId(){ return doctorid; }
QString testbook:: getBookStatus(){ return bookstatus; }
QString testbook::getBookDate() { return bookdate; }
void testbook::setbookstatus(std::string a){ bookstatus=QString::fromStdString(a);}
