#ifndef NURSES_H
#define NURSES_H

#include <QString>
#include"staff.h"
class Nurses {
    int id;
    QString name;
    QString dob;
    QString gender;
    QString address;
    QString contact;
    QString specialization;
    QString experience;
    QString availability;

public:
    Nurses(int id, QString name, QString dob, QString gender, QString address,
           QString contact, QString specialization, QString experience, QString availability);

    int getId() const;
    QString getName() const;
    QString getDob() const;
    QString getGender() const;
    QString getAddress() const;
    QString getContact() const;
    QString getSpecialization() const;
    QString getExperience() const;
    QString getAvailability() const;
};

#endif // NURSES_H

