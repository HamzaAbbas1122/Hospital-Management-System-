#ifndef WARD_H
#define WARD_H

#include <QString>

class Ward
{
public:
    // Constructo
    Ward(int wardId = 0, int departmentId = 0,  QString wardName="",
          QString headNurse="", int no_nurses=0, int numRooms = 0, int numBeds = 0);

    // Getters
    int getWardId() const;
    int getDepartmentId() const;
    QString getWardName() const;
    QString getHeadNurse() const;

    int getNumRooms() const;
    int getNumBeds() const;
    int getnursesno()const;

    // Setters
    void setWardId(int wardId);
    void setDepartmentId(int departmentId);
    void setWardName(const QString& wardName);
    void setHeadNurse(const QString& headNurse);
    void settotalnurse(const int nonurses);
    void setNumRooms(int numRooms);
    void setNumBeds(int numBeds);

private:
    int ward_id;
    int department_id;
    QString ward_name;
    QString head_nurse;
    int num_rooms;
    int totalnurses;
    int num_beds;
};

#endif // WARD_H
