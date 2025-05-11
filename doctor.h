#ifndef DOCTOR_H
#define DOCTOR_H

#include "person.h"
#include <QStringList>

class Doctor : public person {
private:
    int doctorid;
    int depid;          // Department ID
    QString specialization;
    int experience;     // Years of experience
    QStringList availabilty;
int fee;    // Availability schedule

public:
    // Constructor with logical parameter grouping
    Doctor(QString name, QString dob, QString gender, QString address, QString phone,
           int docid, int departmentId, QString specialization, int experienceYears,
           QStringList availability,int fee);

    // Getters
    int getDoctorId() const;
    int getDepartmentId() const;
    QString getSpecialization() const;
    int getExperience() const;
    QStringList getAvailability() const;
    int getfee() const;
    // Setters
    void setDepartmentId(int departmentId);
    void setSpecialization(const QString &specialization);
    void setExperience(int years);
    void setAvailability(const QStringList &availability);
};

#endif // DOCTOR_H
