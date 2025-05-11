#ifndef ROOMS_H
#define ROOMS_H
#include<QString>

class rooms{

    int roomid;
    int wardid;
    int nobeds;
        int aasnurseid;
    QString assnurse;

public:
    rooms(int wardid=0,int roomid=0,int noofbeds=0,QString assignednurse="",int assnurseid=0);

    int getroomId() const;

    QString geAssignedNurse() const;
    int getbeds();
    int getwardid() const;
    int getassnurseid()const;
};

#endif // ROOMS_H
