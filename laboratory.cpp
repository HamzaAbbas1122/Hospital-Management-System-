#include "laboratory.h"

laboratory::laboratory( QString testid,
                       QString testname,
                       QString testprice,
                       QString testStatus):testid(testid),testname(testname),testprice(testprice),testStatus(testStatus) {}

QString laboratory::getTestId()  {
    return testid;
}


QString laboratory::getTestName()  {
    return testname;
}


QString laboratory::getTestPrice()  {
    return testprice;
}


QString laboratory::getTestStatus()  {
    return testStatus;
}
