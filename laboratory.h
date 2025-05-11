#ifndef LABORATORY_H
#define LABORATORY_H
#include <QString>
class laboratory
{
private:
    QString testid;
    QString testname;
    QString testprice;
    QString testStatus;



public:
    laboratory(    QString testid,
               QString testname,
               QString testprice,
               QString testStatus);

    QString getTestId() ;      // Returns testid
    QString getTestName() ;    // Returns testname
   QString getTestPrice() ;   // Returns testprice
   QString getTestStatus() ;
};

#endif // LABORATORY_H
