#include "rooms.h"

rooms::rooms(int wardid,int roomid,int noofbeds,QString assignednurse,int assnurseid):


    roomid(roomid),
    wardid(wardid),
    nobeds(noofbeds),
    aasnurseid(assnurseid),
    assnurse(assignednurse){}


;

QString rooms:: geAssignedNurse() const{return assnurse;}
int rooms::getroomId() const{return roomid;}
int rooms::getbeds(){return nobeds;}
int rooms:: getwardid() const{return wardid;}
int rooms:: getassnurseid()const{return aasnurseid;}
