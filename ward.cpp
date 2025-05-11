#include "ward.h"

// Constructor
Ward::Ward(int wardId, int departmentId,  QString  wardName,  QString headNurse, int no_nurses, int numRooms, int numBeds):
    ward_id(wardId),
    department_id(departmentId),
    ward_name(wardName),
    head_nurse(headNurse),
    num_rooms(numRooms),
    totalnurses(no_nurses),
    num_beds(numBeds){}

int Ward::getWardId() const {
    return ward_id;
}
int Ward::getNumBeds() const{
    return num_beds;
}

// Getter implementations

int Ward::getDepartmentId() const {
    return department_id;
}

QString Ward::getWardName() const {
    return ward_name;
}

int Ward::getnursesno() const{return totalnurses; }

QString Ward::getHeadNurse() const {
    return head_nurse;
}

int Ward::getNumRooms() const {
    return num_rooms;
}



// Setter implementations
void Ward::setWardId(int wardId) {
    ward_id = wardId;
}

void Ward::setDepartmentId(int departmentId) {
    department_id = departmentId;
}

void Ward::setWardName(const QString& wardName) {
    ward_name = wardName;
}

void Ward::setHeadNurse(const QString& headNurse) {
    head_nurse = headNurse;
}

void Ward::setNumRooms(int numRooms) {
    num_rooms = numRooms;
}

void Ward::setNumBeds(int numBeds) {
    num_beds = numBeds;
}
