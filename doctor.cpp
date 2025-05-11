#include "doctor.h"


#include "doctor.h"

Doctor::Doctor(QString name, QString dob, QString gender, QString address, QString phone,
               int docid, int departmentId, QString specs, int experienceYears,
               QStringList availability)
    : person(name, dob, gender, address, phone, docid),
    doctorid(docid),
    depid(departmentId),
    specialization(specs),
    experience(experienceYears),
    availabilty(availability) {}


int Doctor::getDoctorId() const { return doctorid; }
int Doctor::getDepartmentId() const { return depid; }
QString Doctor::getSpecialization() const { return specialization; }
int Doctor::getExperience() const { return experience; }
QStringList Doctor::getAvailability() const { return availabilty; }

void Doctor::setDepartmentId(int departmentId) { depid = departmentId; }
void Doctor::setSpecialization(const QString &specialization) { this->specialization = specialization; }
void Doctor::setExperience(int years) { experience = years; }
void Doctor::setAvailability(const QStringList &availability) { availabilty = availability; }
