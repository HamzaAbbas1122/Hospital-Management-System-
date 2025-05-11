#ifndef FUNCTIONS_H
#define FUNCTIONS_H

#include "beds.h"
#include "bills.h"
#include "depatment.h"
#include "patient.h"
#include "doctor.h"
#include "appointment.h"
#include "patient.h"
#include <QString>
#include <QDebug>
#include <string>
#include "medicine.h"
#include "laboratory.h"
#include "rooms.h"
#include "testbook.h"
#include "ward.h"
#include"nurses.h"
#include<QFile>
//Patient fuunctions

void objecttofile_patient(patient**arrp,int pcount);
void objecttofile_patientforedit(patient**arrp,int pcount);

void  takeinput_patient(QString name,QString gender,QString Address,QString Phone,int Patientid,
                       QString Disease,QString Status,QString Assigned_Doctor,int did,
                       int departid,int wardid,int roomid,int bedno
                       );

patient** fetchdata_patient();




//Doctor functions

void objecttofile_doctor(Doctor**arrd,int dcount);
void objecttofile_doctorforedit(Doctor**arrd,int dcount);
Doctor** fetchdata_doctor();

void takeinput_doctor(QString name, QString dob, QString gender, QString address,
                      QString phone, int docid, int depid, QString specs,
                      int experience, QStringList avail);





//Appointment Functions

void takeinput_appointment(QString ptnm,QString dtmn,int dcid, int pid, int apid, QString apdate, QString apstat,QString apurpose);
appointment** fetchdata_appointment();
void objecttofile_appointment(appointment**arra,int acount);
void objecttofile_appointmentforedit(appointment**arra,int acount);




//Pharmacy Functions

void takeinput_medicine(QString medid,QString medname,QString medcompany, QString price,QString medquant);
medicine** fetchdata_medicine();
void objecttofile_medicine(medicine**arra,int acount);
void objecttofile_medicineforedit(medicine**arra,int acount);

void takeinput_medicine(QString medid,QString medname,QString medcompany, QString price,QString medquant);
medicine** fetchdata_medicine();
void objecttofile_medicine(medicine**arra,int acount);
void objecttofile_medicineforedit(medicine**arra,int acount);



//laboratory test booking function

void takeinput_test_booking(QString tid,QString tnmae,QString tprice,QString tstat,
                            QString bookid,QString patientID,QString doctorid,
                            QString bookstatus,QString bookdate);

testbook** fetchdata_test_booking();
void objecttofile_testbook(testbook**arra,int acount);
void objecttofile_testbookforedit(testbook**arra,int acount);

//laboratory test data functions

void takeinput_test_data(QString testid,
                         QString testname,
                         QString testprice,
                         QString testStatus);

laboratory** fetchdata_test_data();
void objecttofile_test_data(laboratory**arra,int acount);
void objecttofile_test_dataforedit(laboratory**arra,int acount);


//              bed functions
beds** fetchdata_bed(int *count);
void takeinput_bed(int bid, int rid, QString api, int apn);

void objecttofile_bed(beds**arra,int bcount);

void objecttofile_bedforedit(beds**arra,int bcount);


rooms** fetchdata_room() ;

void takeinput_room(int wid, int rid,int nob, QString asn_nurse,int nid);

void objecttofile_room(rooms**arra,int rcount);

void objecttofile_roomforedit(rooms**arra,int rcount);

Ward** fetchdata_Ward() ;

void takeinput_ward(int WardId, int departmentId, QString wardName, QString headNurse,int no_nurses, int numRooms, int numBeds);

void objecttofile_Ward(Ward**arra,int wcount);

void objecttofile_Wardforedit(Ward**arra,int wcount);


Department** fetchdata_Department() ;

void takeinput_department(int did, QString naam, QString head_doctor, int num_wards,int num_docs, int num_rooms, int num_beds, QString services);

void objecttofile_Department(Department**arra,int dcount);

void objecttofile_Departmentforedit(Department**arra,int Departmentcount);


QString qstr(const std::string& s);
#endif // FUNCTIONS_H
/////////// Nurse //////////

void takeInputNurses(QString name, QString dob, QString gender, QString address, QString contact,
                     QString specialization, QString experience, int id, QString availability);
Nurses** fetchDataNurses(int* nurseCount);
void objectToFileNurses(Nurses** arr, int count);
void objectToFileNursesForEdit(Nurses** arr, int count);




void takeInputbills(int patid, int billid,float totalfee, float doctorfee, float medicinefee, float trtcost, QString bstat, QString bdate);

bills** fetchdata_bills();
void objectToFilebills(bills** arr, int count);
void objectToFilebillsForEdit(bills** arr, int count);

