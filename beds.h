#ifndef BEDS_H
#define BEDS_H

#include <QString>

class beds {
private:
    int bedid;
    int roomid;
    int asspatientid;
    QString asspatientname;

public:

    beds(int bedid, int asspatientid, QString asspatientname, int roomid);


    int getbedid();
    int getroomid();
    int getasspatientid();
    QString getasspatientname();
};

#endif // BEDS_H
