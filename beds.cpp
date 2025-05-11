#include "beds.h"

beds::beds(int bedid, int asspatientid, QString asspatientname, int roomid)
    : bedid(bedid), roomid(roomid), asspatientid(asspatientid), asspatientname(asspatientname) {}

int beds::getbedid() { return bedid; }

int beds::getroomid() { return roomid; }

int beds::getasspatientid() { return asspatientid; }

QString beds::getasspatientname() { return asspatientname; }
