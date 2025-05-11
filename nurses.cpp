#include "nurses.h"

Nurses::Nurses(int id, QString name, QString dob, QString gender, QString address,
               QString contact, QString specialization, QString experience, QString availability)
    : id(id), name(name), dob(dob), gender(gender), address(address),
    contact(contact), specialization(specialization), experience(experience), availability(availability) {}

int Nurses::getId() const { return id; }
QString Nurses::getName() const { return name; }
QString Nurses::getDob() const { return dob; }
QString Nurses::getGender() const { return gender; }
QString Nurses::getAddress() const { return address; }
QString Nurses::getContact() const { return contact; }
QString Nurses::getSpecialization() const { return specialization; }
QString Nurses::getExperience() const { return experience; }
QString Nurses::getAvailability() const { return availability; }
