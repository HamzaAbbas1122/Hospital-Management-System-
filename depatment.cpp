#include "depatment.h"

// Constructor implementation
Department::Department(int id, QString name, QString headDoctor,
                       int numWards, int numDoctors, int numRooms, int numBeds,
                       QString services) :
    dep_id(id),
    dep_name(name),
    dep_headDoctor(headDoctor),
    dep_numWards(numWards),
    dep_numDoctors(numDoctors),
    dep_numRooms(numRooms),
    dep_numBeds(numBeds),
    dep_services(services)
{
}

// Getter implementations
int Department::getId() const {
    return dep_id;
}

QString Department::getName() const {
    return dep_name;
}

QString Department::getHeadDoctor() const {
    return dep_headDoctor;
}

int Department::getNumWards() const {
    return dep_numWards;
}

int Department::getNumDoctors() const {
    return dep_numDoctors;
}

int Department::getNumRooms() const {
    return dep_numRooms;
}

int Department::getNumBeds() const {
    return dep_numBeds;
}

QString Department::getServices() const {
    return dep_services;
}

// Setter implementations
void Department::setId(int id) {
    dep_id = id;
}

void Department::setName(const QString& name) {
    dep_name = name;
}

void Department::setHeadDoctor(const QString& headDoctor) {
    dep_headDoctor = headDoctor;
}

void Department::setNumWards(int numWards) {
    dep_numWards = numWards;
}

void Department::setNumDoctors(int numDoctors) {
    dep_numDoctors = numDoctors;
}

void Department::setNumRooms(int numRooms) {
    dep_numRooms = numRooms;
}

void Department::setNumBeds(int numBeds) {
    dep_numBeds = numBeds;
}


