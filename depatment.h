#ifndef DEPARTMENT_H
#define DEPARTMENT_H

#include <QString>

class Department
{
public:
    // Constructor
    Department(int id = 0,  QString name = QString(),  QString headDoctor = QString(),
               int numWards = 0, int numDoctors = 0, int numRooms = 0, int numBeds = 0,
                QString services = QString());

    // Getters
    int getId() const;
    QString getName() const;
    QString getHeadDoctor() const;
    int getNumWards() const;
    int getNumDoctors() const;
    int getNumRooms() const;
    int getNumBeds() const;
    QString getServices() const;

    // Setters
    void setId(int id);
    void setName(const QString& name);
    void setHeadDoctor(const QString& headDoctor);
    void setNumWards(int numWards);
    void setNumDoctors(int numDoctors);
    void setNumRooms(int numRooms);
    void setNumBeds(int numBeds);
private:
    int dep_id;
    QString dep_name;
    QString dep_headDoctor;
    int dep_numWards;
    int dep_numDoctors;
    int dep_numRooms;
    int dep_numBeds;
    QString dep_services;
};

#endif // DEPARTMENT_H
