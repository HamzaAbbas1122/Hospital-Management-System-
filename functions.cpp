#include "functions.h"
#include "global.h"
#include "medicine.h"
#include <fstream>
#include <QTextStream>
#include <QFile>
#include <QStringList>

QString s_to_q(string&s){
    return QString::fromStdString(s);
}


void objecttofile_patient(patient**arrp,int pcount){

    ofstream patient_ka_data_likhdo("patientrecord.txt",ios::app);

    if (patient_ka_data_likhdo.is_open()) {
        qDebug() << "patient file opened" << "\n";
        for (int i = 0; i < pcount; i++) {
            patient_ka_data_likhdo
                << arrp[i]->getname().toStdString() << " | "
                << arrp[i]->getdob().toStdString() << " | "
                << arrp[i]->getgender().toStdString() << " | "
                << arrp[i]->getaddress().toStdString() << " | "
                << arrp[i]->getnumber().toStdString() << " | "
                << arrp[i]->getdisease().toStdString() << " | "
                << arrp[i]->getstatuse().toStdString() << " | "
                << arrp[i]->getassigneddoctor().toStdString() << " | "
                << arrp[i]->getdocid() << " | "
                << arrp[i]->getdepartid() << " | "  // Added department ID
                << arrp[i]->getwardid() << " | "   // Added ward ID
                << arrp[i]->getroomid() << " | "    // Added room ID
                << arrp[i]->getbed() << " | "       // Bed ID (already present)
                << arrp[i]->getid() << "\n";        // Patient ID (assuming this exists)
        }
        patient_ka_data_likhdo.close();
    }
    else {
        qDebug() << "Unable to open patient file for writing";
    }


}


void objecttofile_patientforedit(patient**arrp,int pcount){

    ofstream patient_ka_data_likhdo("patientrecord.txt");

    if (patient_ka_data_likhdo.is_open()) {
        qDebug() << "patient file opened" << "\n";
        for (int i = 0; i < pcount; i++) {
            patient_ka_data_likhdo
                << arrp[i]->getid() << " | "                // [0] Patient ID
                << arrp[i]->getname().toStdString() << " | "  // [1] Name
                << arrp[i]->getdob().toStdString() << " | "   // [2] Date of Birth
                << arrp[i]->getgender().toStdString() << " | " // [3] Gender
                << arrp[i]->getaddress().toStdString() << " | " // [4] Address
                << arrp[i]->getnumber().toStdString() << " | " // [5] Phone Number
                << arrp[i]->getdisease().toStdString() << " | " // [6] Disease/Condition
                << arrp[i]->getstatuse().toStdString() << " | " // [7] Status
                << arrp[i]->getassigneddoctor().toStdString() << " | " // [8] Assigned Doctor (Name)
                << arrp[i]->getdocid() << " | "              // [9] Doctor ID
                << arrp[i]->getdepartid() << " | "           // [10] Department ID
                << arrp[i]->getwardid() << " | "             // [11] Ward ID
                << arrp[i]->getroomid() << " | "             // [12] Room ID
                << arrp[i]->getbed() << "\n";                // [13] Bed ID (no trailing |)

        }
        patient_ka_data_likhdo.close();
    }
    else {
        qDebug() << "patient file not opened" << "\n";
    }
}

void objecttofile_doctor(Doctor**arrd,int dcount){

    ofstream doctor_ka_data_likhdo("doctorrecord.txt",ios::app);
    qDebug()<<"doctor count: "<<dcount<<"\n";
    if (doctor_ka_data_likhdo.is_open()) {
        qDebug() << "Doctor file opened" << "\n";
        for (int i = 0; i < dcount; i++) {
            doctor_ka_data_likhdo
                // Output sequence matching the constructor's parameter order:
                << arrd[i]->getname().toStdString() << " | "          // 1. Name (Personal info)
                << arrd[i]->getdob().toStdString() << " | "           // 2. Date of Birth (Personal info)
                << arrd[i]->getgender().toStdString() << " | "        // 3. Gender (Personal info)
                << arrd[i]->getaddress().toStdString() << " | "       // 4. Address (Contact info)
                << arrd[i]->getnumber().toStdString() << " | "        // 5. Phone (Contact info)
                << arrd[i]->getDoctorId() << " | "                    // 6. Doctor ID (Professional ID)
                << arrd[i]->getDepartmentId() << " | "                // 7. Department ID (Professional ID)
                << arrd[i]->getSpecialization().toStdString() << " | " // 8. Specialization (Professional details)
                << arrd[i]->getExperience() << " | "                  // 9. Experience (Professional details)
                << arrd[i]->getAvailability().join(",").toStdString() // 10. Availability (Schedule info)
                << "\n";

        }
        qDebug()<<"file mn data chla gya"<<"\n";
        doctor_ka_data_likhdo.close();
    }
    else {
        qDebug() << "doctor file not opened" << "\n";
    }
}

void objecttofile_appointment(appointment**arra,int acount){

    ofstream appointment_ka_data_likhdo("appointmentrecord.txt",ios::app);
    qDebug()<<"Appointment count: "<<acount<<"\n";
    if (appointment_ka_data_likhdo.is_open()) {
        qDebug() << "Appointment file opened" << "\n";
        for (int i = 0; i < acount; i++) {
            appointment_ka_data_likhdo
                << arra[i]->getapid() << " | "

                << arra[i]->getpatid() << " | "
                << arra[i]->getpname().toStdString()<< " | "
                << arra[i]->getdocid() << " | "
                << arra[i]->getdname().toStdString() << " | "
                << arra[i]->getappdate().toStdString() << " | "
                << arra[i]->getapurpose().toStdString() << " | "
                << arra[i]->getappstat().toStdString() << " | "
                <<"\n";

        }
        qDebug()<<"file mn data chla gya"<<"\n";
        appointment_ka_data_likhdo.close();
    }
    else {
        qDebug() << "Appointment file not opened" << "\n";
    }
}

void objecttofile_medicine(medicine**arrd,int mcount){

    ofstream medicine_ka_data_likhdo("pharmacyrecord.txt",ios::app);
    qDebug()<<"medicine count: "<<mcount<<"\n";
    if (medicine_ka_data_likhdo.is_open()) {
        qDebug() << "medicine file opened" << "\n";
        for (int i = 0; i < mcount; i++) {
            medicine_ka_data_likhdo

                << arrd[i]->getmedid().toStdString() << " | "          // 1. Name (Personal info)
                << arrd[i]->getmedname().toStdString() << " | "           // 2. Date of Birth (Personal info)
                << arrd[i]->getmedcompany().toStdString() << " | "        // 3. Gender (Personal info)
                << arrd[i]->getmedprice().toStdString() << " | "       // 4. Address (Contact info)
                << arrd[i]->getmedquantity().toStdString() << " | "        // 5. Phone (Contact info)
                << "\n";


        }
        qDebug()<<"file mn data chla gya"<<"\n";
        medicine_ka_data_likhdo.close();
    }
    else {
        qDebug() << "medicine file not opened" << "\n";
    }
}

void objecttofile_appointmentforedit(appointment**arra,int acount){

    ofstream appointment_ka_data_likhdo("appointmentrecord.txt");
    qDebug()<<"Appointment count: "<<acount<<"\n";
    if (appointment_ka_data_likhdo.is_open()) {
        qDebug() << "Appointment file opened" << "\n";
        for (int i = 0; i < acount; i++) {
            appointment_ka_data_likhdo
                << arra[i]->getapid() << " | "

                << arra[i]->getpatid() << " | "
                << arra[i]->getpname().toStdString()<< " | "
                << arra[i]->getdocid() << " | "
                << arra[i]->getdname().toStdString() << " | "
                << arra[i]->getappdate().toStdString() << " | "
                << arra[i]->getapurpose().toStdString() << " | "
                << arra[i]->getappstat().toStdString() << " | "
                <<"\n";

        }
        qDebug()<<"file mn data chla gya"<<"\n";
        appointment_ka_data_likhdo.close();
    }
    else {
        qDebug() << "doctor file not opened" << "\n";
    }
}

void objecttofile_doctorforedit(Doctor**arrd,int dcount){

    ofstream doctor_ka_data_likhdo("doctorrecord.txt");
    qDebug()<<"doctor count: "<<dcount<<"\n";
    if (doctor_ka_data_likhdo.is_open()) {
        qDebug() << "Doctor file opened" << "\n";
        for (int i = 0; i < dcount; i++) {
            doctor_ka_data_likhdo

                << arrd[i]->getname().toStdString() << " | "          // 1. Name (Personal info)
                << arrd[i]->getdob().toStdString() << " | "           // 2. Date of Birth (Personal info)
                << arrd[i]->getgender().toStdString() << " | "        // 3. Gender (Personal info)
                << arrd[i]->getaddress().toStdString() << " | "       // 4. Address (Contact info)
                << arrd[i]->getnumber().toStdString() << " | "        // 5. Phone (Contact info)
                << arrd[i]->getDoctorId() << " | "                    // 6. Doctor ID (Professional ID)
                << arrd[i]->getDepartmentId() << " | "                // 7. Department ID (Professional ID)
                << arrd[i]->getSpecialization().toStdString() << " | " // 8. Specialization (Professional details)
                << arrd[i]->getExperience() << " | "                  // 9. Experience (Professional details)
                << arrd[i]->getAvailability().join(",").toStdString() // 10. Availability (Schedule info)
                << "\n";


        }
        qDebug()<<"file mn data chla gya"<<"\n";
        doctor_ka_data_likhdo.close();
    }
    else {
        qDebug() << "doctor file not opened" << "\n";
    }
}

void objecttofile_medicineforedit(medicine**arrd,int mcount){

    ofstream medicine_ka_data_likhdo("pharmacyrecord.txt");
    qDebug()<<"medicine count: "<<mcount<<"\n";
    if (medicine_ka_data_likhdo.is_open()) {
        qDebug() << "medicine file opened" << "\n";
        for (int i = 0; i < mcount; i++) {
            medicine_ka_data_likhdo

                << arrd[i]->getmedid().toStdString() << " | "          // 1. Name (Personal info)
                << arrd[i]->getmedname().toStdString() << " | "           // 2. Date of Birth (Personal info)
                << arrd[i]->getmedcompany().toStdString() << " | "        // 3. Gender (Personal info)
                << arrd[i]->getmedprice().toStdString() << " | "       // 4. Address (Contact info)
                << arrd[i]->getmedquantity().toStdString() << " | "        // 5. Phone (Contact info)
                << "\n";


        }
        qDebug()<<"file mn data chla gya"<<"\n";
        medicine_ka_data_likhdo.close();
    }
    else {
        qDebug() << "medicine file not opened" << "\n";
    }
}

patient** fetchdata_patient() {

    ifstream patient_ka_data_daalowapis("patientrecord.txt");
    qDebug()<<"Patient file is opened"<<"\n";

    if (patient_ka_data_daalowapis.is_open()) {
        qDebug()  << "patient data fectched" << "\n";

        string line;
        QStringList list;
        while(getline(patient_ka_data_daalowapis,line)){
            QString tline=s_to_q(line);
            list.append(tline);
        }

        patient_ka_data_daalowapis.clear();
        patient_ka_data_daalowapis.seekg(0);

        patient** arrp = new patient * [list.size()];

        patientcount = 0;

        string ttline;

        for (const QString& fline : list) {
            QStringList field = fline.split("|", Qt::SkipEmptyParts); // Split line by | delimiter

            // Extract all fields including the new ones
            int pid = field[0].trimmed().toInt();         // Patient ID (1001)
            QString name = field[1].trimmed();            // Name (John Doe)
            QString dob = field[2].trimmed();             // Date of Birth (1985-03-15)
            QString gender = field[3].trimmed();          // Gender (Male)
            QString address = field[4].trimmed();         // Address (123 Main St, City)
            QString phone = field[5].trimmed();           // Phone (555-0101)
            QString disease = field[6].trimmed();         // Disease (Hypertension)
            QString status = field[7].trimmed();          // Status (Stable)
            QString assignedDoc = field[8].trimmed();     // Doctor Name (Dr. Smith)
            int docid = field[9].trimmed().toInt();       // Doctor ID (501)
            int departid = field[10].trimmed().toInt();   // Department ID (1)
            int wardid = field[11].trimmed().toInt();     // Ward ID (2)
            int roomid = field[12].trimmed().toInt();     // Room ID (101)
            int bed = field[13].trimmed().toInt();

            // Create new patient with all fields
            arrp[patientcount] = new patient(name,dob,gender,address,phone,pid,disease,status,assignedDoc,docid,departid,wardid,roomid,bed);

            qDebug() << "Data of patient" << patientcount << "fetched successfully";
            patientcount++;
        }

        qDebug()<<"now returning control  back with total patients: "<<patientcount<<"\n";
        return arrp;
    }

    if (!patient_ka_data_daalowapis.is_open()) {
        qDebug() << "Could not open file.";
        return nullptr;
    }

}


Doctor** fetchdata_doctor() {

    ifstream doctor_ka_data_daalowapis("doctorrecord.txt");
    qDebug()<<"Doctor file is opened"<<"\n";

    if (doctor_ka_data_daalowapis.is_open()) {
        qDebug()  << "Doctor data fectched" << "\n";

        string line;
        QStringList list;
        while(getline(doctor_ka_data_daalowapis,line)){
            QString tline=s_to_q(line);
            list.append(tline);
        }

        doctor_ka_data_daalowapis.clear();
        doctor_ka_data_daalowapis.seekg(0);

        Doctor** arrd = new Doctor * [list.size()];

        doctorcount = 0;


        string ttline;

        for (const QString& fline : list) {/////////takes list[0] that is QString refernce  in fline and then process fline.

            QStringList field= fline.split("|",Qt::SkipEmptyParts);//leave the | | if the space between two delimiters is empty


            QString name = field[0].trimmed();            // 1. name
            QString dob = field[1].trimmed();             // 2. dob
            QString gender = field[2].trimmed();          // 3. gender
            QString address = field[3].trimmed();         // 4. address
            QString phone = field[4].trimmed();           // 5. phone
            int docid = field[5].trimmed().toInt();       // 6. docid
            int depid = field[6].trimmed().toInt();       // 7. depid
            QString specs = field[7].trimmed();           // 8. specs
            int experience = field[8].trimmed().toInt();  // 9. experience
            QStringList avail = field[9].trimmed().split(","); // 10. availability



            arrd[doctorcount] = new Doctor(
                name,        // 1. name
                dob,         // 2. dob
                gender,      // 3. gender
                address,     // 4. address
                phone,       // 5. phone
                docid,       // 6. docid
                depid,       // 7. depid
                specs,       // 8. specs
                experience,  // 9. experience
                avail        // 10. availability
                );

            qDebug()<<"data of patient "<<doctorcount<<" is fectehd "<<"\n";
            doctorcount++;
        }
        qDebug()<<"now returning control  back with total doctors: "<<doctorcount<<"\n";
        return arrd;
    }

    if (!doctor_ka_data_daalowapis.is_open()) {
        qDebug() << "Could not open file.";
        return nullptr;
    }

}

void takeinput_patient(QString name, QString birthdate, QString gender, QString address,
                       QString phonenumber, int patientid, QString disease, QString status,
                       QString assigneddoctor, int doctorid, int departid, int wardid,
                       int roomid, int bed)
{
    qDebug() << "Patient count is: " << patientcount;


    patientcount = 1;  // Creating one patient at a time

    patient** arrp = new patient*[patientcount];

    arrp[0] = new patient(
        name,
        birthdate,
        gender,
        address,
        phonenumber,
        patientid,
        disease,
        status,
        assigneddoctor,
        doctorid,
        departid,  // New parameter
        wardid,    // New parameter
        roomid,    // New parameter
        bed
        );

    qDebug() << "Patient added: " << name
             << " (Dept: " << departid
             << ", Ward: " << wardid
             << ", Room: " << roomid << ")";

    objecttofile_patient(arrp, patientcount);
    delete[] arrp;
}




void takeinput_doctor(QString name, QString dob, QString gender, QString address,
                      QString phone, int docid, int depid, QString specs,
                      int experience, QStringList avail)
{
    qDebug() << "Doctor count is: " << doctorcount;

    doctorcount=1;

    Doctor** arrd = new Doctor*[doctorcount];


    arrd[0] = new Doctor(
        name,       // 1. name
        dob,        // 2. dob
        gender,     // 3. gender
        address,    // 4. address
        phone,      // 5. phone
        docid,      // 6. docid
        depid,      // 7. depid
        specs,      // 8. specs
        experience, // 9. experience
        avail       // 10. availability
        );

    qDebug() << "Doctor added: " << name;

    // Save to file
    objecttofile_doctor(arrd,doctorcount );  // Passing 1 since we're adding one record


    delete[] arrd;    // Delete the array
}


void takeinput_appointment(QString ptnm,QString dtmn,int dcid, int pid, int apid, QString apdate, QString apstat,QString apurpose)
{



    qDebug() << "Appointment count is: " << appointmentcount;


    appointmentcount=1;

    appointment** arra = new appointment*[appointmentcount];


    arra[0] = new appointment( ptnm, dtmn,
                              dcid, pid,
                              apid, apdate,
                              apstat,apurpose
                              );

    qDebug() << "Appointment of  " << ptnm<< " added";


    objecttofile_appointment(arra, appointmentcount);
    delete[]arra;
}

void takeinput_medicine(QString medid,QString medname,QString medcompany, QString price,QString medquant)
{



    qDebug() << "medicine count is: " << medicinecount;


    medicinecount=1;

    medicine** arrm = new medicine*[medicinecount];


    arrm[0] = new medicine( medid,
                           medname,
                           medcompany,
                           price,
                           medquant
                           );

    qDebug() << "medicine of  " << medid<< " added";


    objecttofile_medicine(arrm, medicinecount);
    delete[]arrm;
}

medicine** fetchdata_medicine() {

    ifstream medicine_ka_data_daalowapis("pharmacyrecord.txt");
    qDebug()<<"pharmacy file is opened"<<"\n";

    if (medicine_ka_data_daalowapis.is_open()) {
        qDebug()  << "pharmacy data fectched" << "\n";

        string line;
        QStringList list;

        while(getline(medicine_ka_data_daalowapis,line)){
            QString tline=s_to_q(line);
            list.append(tline);
        }

        medicine** arra = new medicine * [list.size()];

        medicinecount = 0;





        for (const QString& fline : list) {/////////takes list[0] that is QString refernce  in fline and then process fline.

            QStringList field= fline.split("|",Qt::SkipEmptyParts);


            QString medid = field[0].trimmed();
            QString medname = field[1].trimmed();
            QString medcomp = field[2].trimmed();
            QString price = field[3].trimmed();
            QString stock = field[4].trimmed();




            arra[medicinecount] = new medicine(
                (medid),
                (medname),
                (medcomp),
                (price),
                stock
                );

            qDebug()<<"data of medicince  "<<medicinecount<<" is fectehd "<<"\n";
            medicinecount++;
        }

        qDebug()<<"now returning control  back with total medicine : "<<medicinecount<<"\n";
        return arra;
    }

    if (!medicine_ka_data_daalowapis.is_open()) {
        qDebug() << "Could not open file.";
        return nullptr;
    }

}

appointment** fetchdata_appointment() {

    ifstream appointment_ka_data_daalowapis("appointmentrecord.txt");
    qDebug()<<"appointment file is opened"<<"\n";

    if (appointment_ka_data_daalowapis.is_open()) {
        qDebug()  << "appointment data fectched" << "\n";

        string line;
        QStringList list;
        while(getline(appointment_ka_data_daalowapis,line)){
            QString tline=s_to_q(line);
            list.append(tline);
        }

        appointment_ka_data_daalowapis.clear();
        appointment_ka_data_daalowapis.seekg(0);

        appointment** arra = new appointment * [list.size()];

        appointmentcount = 0;





        for (const QString& fline : list) {/////////takes list[0] that is QString refernce  in fline and then process fline.

            QStringList field= fline.split("|",Qt::SkipEmptyParts);//leave the | | if the space between two delimiters is empty


            int apid = field[0].trimmed().toInt();
            int pid = field[1].trimmed().toInt();
            QString pname = field[2].trimmed();
            int did = field[3].trimmed().toInt();
            QString dname = field[4].trimmed();
            QString date = field[5].trimmed();
            QString purpose = field[6].trimmed();
            QString  status = field[7].trimmed();



            arra[appointmentcount] = new appointment(
                (pname),
                (dname),
                (did),
                (pid),
                apid,
                (date),
                (purpose),
                status
                );

            qDebug()<<"data of appointment "<<appointmentcount<<" is fectehd "<<"\n";
            appointmentcount++;
        }
        qDebug()<<"now returning control  back with total appointments: "<<appointmentcount<<"\n";
        return arra;
    }

    if (!appointment_ka_data_daalowapis.is_open()) {
        qDebug() << "Could not open file.";
        return nullptr;
    }

}
void objecttofile_testbook(testbook** arra, int acount) {
    ofstream test_booking_data("testsbookingrecord.txt", ios::app);

    if (test_booking_data.is_open()) {
        qDebug() << "Test booking file opened" << "\n";
        for (int i = 0; i < acount; i++) {
            test_booking_data
                << arra[i]->getBookId().toStdString() << " | "          // [0] Booking ID
                << arra[i]->getTestId().toStdString() << " | "          // [1] Test ID
                << arra[i]->getTestName().toStdString() << " | "        // [2] Test Name
                << arra[i]->getPatientId().toStdString() << " | "       // [3] Patient ID
                << arra[i]->getDoctorId().toStdString() << " | "        // [4] Doctor ID
                << arra[i]->getBookDate().toStdString() << " | "        // [5] Booking Date
                << arra[i]->getBookStatus().toStdString() << "\n";      // [6] Booking Status
        }
        test_booking_data.close();
    }
    else {
        qDebug() << "Unable to open test booking file for writing";
    }
}

void objecttofile_testbookforedit(testbook** arra, int acount) {
    ofstream test_booking_data("testsbookingrecord.txt");

    if (test_booking_data.is_open()) {
        qDebug() << "Test booking file opened for editing" << "\n";
        for (int i = 0; i < acount; i++) {
            test_booking_data
                << arra[i]->getBookId().toStdString() << " | "          // [0] Booking ID
                << arra[i]->getTestId().toStdString() << " | "          // [1] Test ID
                << arra[i]->getTestName().toStdString() << " | "        // [2] Test Name
                << arra[i]->getPatientId().toStdString() << " | "       // [3] Patient ID
                << arra[i]->getDoctorId().toStdString() << " | "        // [4] Doctor ID
                << arra[i]->getBookDate().toStdString() << " | "        // [5] Booking Date
                << arra[i]->getBookStatus().toStdString() << "\n";      // [6] Booking Status
        }
        test_booking_data.close();
    }
    else {
        qDebug() << "Unable to open test booking file for editing";
    }
}

testbook** fetchdata_test_booking() {

    ifstream test_booking_data("testsbookingrecord.txt");
    qDebug() << "Test booking file opened for reading" << "\n";

    if (test_booking_data.is_open()) {
        string line;
        QStringList list;

        while (getline(test_booking_data, line)) {
            list.append(s_to_q(line));  // Assume `s_to_q` converts std::string to QString
        }

        testbook** arra = new testbook*[list.size()];
        testbookingcount = 0;

        for (const QString& fline : list) {
            QStringList field = fline.split("|", Qt::SkipEmptyParts);

            arra[testbookingcount] = new testbook(
                field[1].trimmed(),  // testid (from file's [1])
                field[2].trimmed(),  // testname (from file's [2])
                "Nill",                  // testprice (not stored in file)
                "Nill",                  // testStatus (not stored in file)
                field[0].trimmed(),  // bookid (from file's [0])
                field[3].trimmed(),  // patientID (from file's [3])
                field[4].trimmed(),  // doctorid (from file's [4])
                field[6].trimmed(),  // bookstatus (from file's [6])
                field[5].trimmed()   // bookdate (from file's [5])
                );
            testbookingcount++;
        }
        return arra;
    }
    else {
        qDebug() << "Could not open test booking file.";
        return nullptr;
    }
}

void takeinput_test_booking(
    QString tid, QString tname, QString tprice, QString tstat,
    QString bookid, QString patientID, QString doctorid,
    QString bookstatus, QString bookdate
    ) {
    testbookingcount = 1;
    testbook** arrb = new testbook*[testbookingcount];

    arrb[0] = new testbook(
        tid, tname, tprice, tstat,
        bookid, patientID, doctorid, bookstatus, bookdate
        );

    objecttofile_testbook(arrb, testbookingcount);
    delete[] arrb;
}


void objecttofile_test_data(laboratory** arra, int acount) {
    ofstream test_data_file("testsrecord.txt", ios::app);

    if (test_data_file.is_open()) {
        qDebug() << "Test data file opened" << "\n";
        for (int i = 0; i < acount; i++) {
            test_data_file
                << arra[i]->getTestId().toStdString() << " | "      // [0] Test ID
                << arra[i]->getTestName().toStdString() << " | "    // [1] Test Name
                << arra[i]->getTestPrice().toStdString() << " | "   // [2] Test Price
                << arra[i]->getTestStatus().toStdString() << "\n"; // [3] Test Status
        }
        test_data_file.close();
    }
    else {
        qDebug() << "Unable to open test data file for writing";
    }
}


void objecttofile_test_dataforedit(laboratory** arra, int acount) {
    ofstream test_data_file("testsrecord.txt");

    if (test_data_file.is_open()) {
        qDebug() << "Test data file opened for editing" << "\n";
        for (int i = 0; i < acount; i++) {
            test_data_file
                << arra[i]->getTestId().toStdString() << " | "      // [0] Test ID
                << arra[i]->getTestName().toStdString() << " | "    // [1] Test Name
                << arra[i]->getTestPrice().toStdString() << " | "   // [2] Test Price
                << arra[i]->getTestStatus().toStdString() << "\n"; // [3] Test Status
        }
        test_data_file.close();
    }
    else {
        qDebug() << "Unable to open test data file for editing";
    }
}


laboratory** fetchdata_test_data() {
    ifstream test_data_file("testsrecord.txt");
    qDebug() << "Test data file opened for reading" << "\n";

    if (test_data_file.is_open()) {
        string line;
        QStringList list;

        while (getline(test_data_file, line)) {
            list.append(s_to_q(line));  // Convert std::string to QString
        }

        laboratory** arra = new laboratory*[list.size()];
        testscount = 0;

        for (const QString& fline : list) {
            QStringList field = fline.split("|", Qt::SkipEmptyParts);

            arra[testscount] = new laboratory(
                field[0].trimmed(),  // testid
                field[1].trimmed(),  // testname
                field[2].trimmed(),  // testprice
                field[3].trimmed()   // teststatus
                );
            testscount++;
        }
        return arra;
    }
    else {
        qDebug() << "Could not open test data file.";
        return nullptr;
    }
}

void takeinput_test_data(
    QString testid, QString testname,
    QString testprice, QString testStatus
    ) {
    testscount = 1;
    laboratory** arrl = new laboratory*[testscount];

    arrl[0] = new laboratory(testid, testname, testprice, testStatus);
    qDebug() << "Test data for " << testid << " added";

    objecttofile_test_data(arrl, testscount);
    delete[] arrl;
}

beds** fetchdata_bed(int* count) {
    ifstream bedsFile("bedrecord.txt");
    if (!bedsFile.is_open()) {
        qDebug() << "Could not open bedrecord.txt";
        return nullptr;
    }

    QStringList lines;
    string line;
    while (getline(bedsFile, line)) {
        lines.append(QString::fromStdString(line));
    }

    beds** arr = new beds*[lines.size()];
    *count = 0;

    for (const QString& line : lines) {
        QStringList fields = line.split("|", Qt::SkipEmptyParts);
        if (fields.size() >= 4) {
            int bedid = fields[0].trimmed().toInt();
            int roomid = fields[1].trimmed().toInt();
            QString patientName = fields[2].trimmed();
            int patientId = fields[3].trimmed().toInt();

            arr[*count] = new beds(bedid, patientId, patientName, roomid);
            (*count)++;
        }
    }

    return arr;
}


void takeinput_bed(int bedid, int roomid,QString asspatientname, int asspatientid )
{
    qDebug() << "beds count is: " << bedscount;
    bedscount = 1;
    beds** arrd = new beds*[bedscount];
    arrd[0] = new beds(
        bedid,
        roomid,
        asspatientname,
        asspatientid
        );
    qDebug() << "bed added: " << bedid;
    objecttofile_bed(arrd,bedscount );
    delete[] arrd;
}

void objecttofile_bed(beds** arr, int count) {
    ofstream bedsFile("bedrecord.txt", ios::app);
    if (!bedsFile.is_open()) {
        qDebug() << "Could not open bedrecord.txt for appending";
        return;
    }

    for (int i = 0; i < count; i++) {
        bedsFile
            << arr[i]->getbedid() << "|"
            << arr[i]->getroomid() << "|"
            << arr[i]->getasspatientname().toStdString() << "|"
            << arr[i]->getasspatientid() << "\n";
    }

    qDebug() << "Bed data appended successfully";
}

void objecttofile_bedforedit(beds** arr, int count) {
    ofstream bedsFile("bedrecord.txt");
    if (!bedsFile.is_open()) {
        qDebug() << "Could not open bedrecord.txt for overwriting";
        return;
    }

    for (int i = 0; i < count; i++) {
        bedsFile
            << arr[i]->getbedid() << "|"
            << arr[i]->getroomid() << "|"
            << arr[i]->getasspatientname().toStdString() << "|"
            << arr[i]->getasspatientid() << "\n";
    }

    qDebug() << "Bed data overwritten successfully";
}

rooms** fetchdata_room()
{
    ifstream room_ka_data_daalowapis("roomrecord.txt");
    qDebug()<<"rooms file is opened"<<"\n";
    if (room_ka_data_daalowapis.is_open()) {
        qDebug()  << "rooms data fectched" << "\n";
        string line;
        QStringList list;
        while(getline(room_ka_data_daalowapis,line)){
            QString tline=s_to_q(line);
            list.append(tline);
        }
        room_ka_data_daalowapis.clear();
        room_ka_data_daalowapis.seekg(0);
        rooms** arrp = new rooms* [list.size()];
        roomcount = 0;
        string ttline;
        for (const QString& fline : list) {
            QStringList field = fline.split("|", Qt::SkipEmptyParts); // Split line by | delimiter
            // Extract all fields including the new ones

            int room_id = field[0].trimmed().toInt();
            int wardId = field[1].trimmed().toInt();
            int noofbeds = field[4].trimmed().toInt();
            QString assignednurse = field[2].trimmed();
            int assnurseid = field[3].trimmed().toInt();
            arrp[roomcount] = new rooms( wardId, room_id, noofbeds,assignednurse, assnurseid);
            qDebug() << "Data of room" << roomcount << "fetched successfully";
            roomcount++;
        }
        qDebug()<<"now returning control  back with total rooms: "<<roomcount<<"\n";
        return arrp;
    }
    if (!room_ka_data_daalowapis.is_open())
    {
        qDebug() << "Could not open file.";
        return nullptr;
    }
}
void takeinput_room(int wid, int rid,int nob, QString asn_nurse,int nid)
{
    qDebug() << "roomscount is: " << roomcount;
    roomcount=1;
    rooms** arrd = new rooms*[roomcount];
    arrd[0] = new rooms(
        wid,
        rid,
        nob,
        asn_nurse,
        nid
        );
    qDebug() << "room added: " << rid ;
    objecttofile_room(arrd,roomcount );
    delete[] arrd;
}
void objecttofile_room(rooms**arra,int rcount)
{
    ofstream room_ka_data_likhdo("roomrecord.txt",ios::app);
    qDebug()<<"roomscount: "<<roomcount<<"\n";
    if (room_ka_data_likhdo.is_open()) {
        qDebug() << "roomsfile opened" << "\n";
        for (int i = 0; i < rcount; i++) {
            room_ka_data_likhdo
                << arra[i]->getroomId() << " | "
                << arra[i]->geAssignedNurse().toStdString()<< " | "
                << arra[i]->getbeds()<< " | "
                << arra[i]->getwardid()  << " | "
                << arra[i]->getassnurseid() << " | "
                <<"\n";
        }
        qDebug()<<"file mn data chla gya ha"<<"\n";
        room_ka_data_likhdo.close();
    }
    else {
        qDebug() << "roomsfile not opened" << "\n";
    }
}
void objecttofile_roomforedit(rooms**arra,int rcount)
{

    ofstream room_ka_data_likhdo("roomrecord.txt");
    qDebug()<<"roomscount: "<<roomcount<<"\n";
    if (room_ka_data_likhdo.is_open()) {
        qDebug() << "roomsfile opened" << "\n";
        for (int i = 0; i < rcount; i++) {
            room_ka_data_likhdo
                << arra[i]->getroomId() << " | "
                << arra[i]->getassnurseid()<< " | "
                << arra[i]->getbeds()<< " | "
                << arra[i]->getwardid()  << " | "
                << arra[i]->getassnurseid() << " | "
                <<"\n";
        }
        qDebug()<<"file mn data chla gya ha"<<"\n";
        room_ka_data_likhdo.close();
    }
    else
    {
        qDebug() << "roomsfile not opened" << "\n";
    }
}

Ward** fetchdata_Ward()
{
    ifstream Ward_ka_data_daalowapis("wardrecord.txt");

    qDebug()<<"Ward file is opened"<<"\n";
    if (Ward_ka_data_daalowapis.is_open()) {
        qDebug()  << "Ward data fectched" << "\n";
        string line;
        QStringList list;
        while(getline(Ward_ka_data_daalowapis,line)){
            QString tline=s_to_q(line);
            list.append(tline);
        }
        Ward_ka_data_daalowapis.clear();
        Ward_ka_data_daalowapis.seekg(0);
        Ward** arrp = new Ward * [list.size()];
        Wardcount = 0;
        string ttline;




        for (const QString& fline : list) {
            QStringList field = fline.split("|", Qt::SkipEmptyParts); // Split line by | delimiter

            // Extract all fields including the new ones
            int WardId = field[0].trimmed().toInt();
            int dep_id = field[1].trimmed().toInt();;
            QString ward_name = field[2].trimmed();
            QString head_nurse = field[3].trimmed();
            int num_rooms = field[4].trimmed().toInt();;
            int num_nurses=field[5].trimmed().toInt();;
            int num_beds = field[6].trimmed().toInt();;
            // Create new Ward with all fields
            arrp[Wardcount] = new Ward( WardId, dep_id, ward_name,head_nurse,num_nurses, num_rooms, num_beds);
            qDebug() << "Data of Ward" << Wardcount << "fetched successfully";
            Wardcount++;
        }
        qDebug()<<"now returning control  back with total Wards: "<<Wardcount<<"\n";
        return arrp;
    }
    if (!Ward_ka_data_daalowapis.is_open())
    {
        qDebug() << "Could not open file.";
        return nullptr;
    }
}

void takeinput_ward(int WardId, int departmentId, QString wardName, QString headNurse,int no_nurses, int numRooms, int numBeds){
    qDebug() << "Ward count is: " << Wardcount;

    Wardcount=1;
    Ward** arrd = new Ward*[Wardcount];
    arrd[0] = new Ward(
        WardId,             // 1. name
        departmentId,           // 2. dob
        wardName,    // 3. gender
        headNurse,      // 4. address
        no_nurses,       // 5. phone
        numRooms,      // 6. docid
        numBeds     // 7. depid
        );
    qDebug() << "Ward added: " << wardName;
    objecttofile_Ward(arrd,Wardcount );
    delete[] arrd;
}
void objecttofile_Ward(Ward**arra,int wcount){

    ofstream Ward_ka_data_likhdo("wardrecord.txt",ios::app);
    qDebug()<<"Ward count: "<<Wardcount<<"\n";
    if (Ward_ka_data_likhdo.is_open()) {
        qDebug() << "Ward file opened" << "\n";
        for (int i = 0; i < wcount; i++) {
            Ward_ka_data_likhdo
                << arra[i]->getWardId() << " | "
                << arra[i]->getDepartmentId()<< " | "
                << arra[i]->getWardName().toStdString()<< " | "
                << arra[i]->getHeadNurse().toStdString()  << " | "
                << arra[i]->getNumRooms() << " | "
                << arra[i]->getNumBeds() << " | "
                <<"\n";

        }
        qDebug()<<"file mn data chla gya"<<"\n";
        Ward_ka_data_likhdo.close();
    }
    else {
        qDebug() << "Ward file not opened" << "\n";
    }
}
void objecttofile_Wardforedit(Ward**arra,int wcount)
{

    ofstream Ward_ka_data_likhdo("wardrecord.txt");
    qDebug()<<"Ward count: "<<Wardcount<<"\n";
    if (Ward_ka_data_likhdo.is_open()) {
        qDebug() << "Ward file opened" << "\n";
        for (int i = 0; i < wcount; i++) {
            Ward_ka_data_likhdo
                << arra[i]->getWardId() << " | "
                << arra[i]->getDepartmentId()<< " | "
                << arra[i]->getWardName().toStdString()<< " | "
                << arra[i]->getHeadNurse().toStdString()  << " | "
                << arra[i]->getNumRooms() << " | "
                << arra[i]->getNumBeds() << " | "
                <<"\n";
        }
        qDebug()<<"file mn data chla gya"<<"\n";
        Ward_ka_data_likhdo.close();
    }
    else
    {
        qDebug() << "Ward file not opened" << "\n";
    }
}

Department** fetchdata_Department()
{

    ifstream Department_ka_data_daalowapis("departmentrecord.txt");
    qDebug()<<"Department file is opened"<<"\n";

    if (Department_ka_data_daalowapis.is_open()) {
        qDebug()  << "Department data fectched" << "\n";

        string line;
        QStringList list;
        while(getline(Department_ka_data_daalowapis,line)){
            QString tline=s_to_q(line);
            list.append(tline);
        }

        Department_ka_data_daalowapis.clear();
        Department_ka_data_daalowapis.seekg(0);

        Department** arrp = new Department * [list.size()];

        Departmentcount = 0;

        string ttline;

        for (const QString& fline : list) {
            QStringList field = fline.split("|", Qt::SkipEmptyParts); // Split line by | delimiter

            // Extract all fields including the new ones
            int dep_id = field[0].trimmed().toInt();         // Department ID (1001)
            QString dep_name = field[1].trimmed();            // Name (John Doe)
            QString dep_headDoctor = field[2].trimmed();             // Date of Birth (1985-03-15)
            int dep_numWards = field[3].trimmed().toInt();          // Gender (Male)
            int dep_numDoctors = field[4].trimmed().toInt();         // Address (123 Main St, City)
            int dep_numRooms = field[5].trimmed().toInt();          // Phone (555-0101)
            int dep_numBeds = field[6].trimmed().toInt();        // Disease (Hypertension)
            QString dep_services = field[7].trimmed();          // Status (Stable)


            arrp[Departmentcount] = new Department( dep_id, dep_name, dep_headDoctor,dep_numWards, dep_numDoctors, dep_numRooms,  dep_numBeds,dep_services);

            qDebug() << "Data of Department" << Departmentcount << "fetched successfully";
            Departmentcount++;
        }

        qDebug()<<"now returning control  back with total Departments: "<<Departmentcount<<"\n";
        return arrp;
    }

    if (!Department_ka_data_daalowapis.is_open()) {
        qDebug() << "Could not open file.";
        return nullptr;
    }

}
void takeinput_department(int did, QString naam, QString head_doctor, int num_wards,int num_docs, int num_rooms, int num_beds, QString services)
{
    qDebug() << "Department count is: " << Departmentcount;

    Departmentcount=1;
    Department** arrd = new Department*[Departmentcount];
    arrd[0] = new Department(
        did,             // 1. name
        naam,           // 2. dob
        head_doctor,    // 3. gender
        num_wards,      // 4. address
        num_docs,       // 5. phone
        num_rooms,      // 6. docid
        num_beds,       // 7. depid
        services      // 8. specs
        );
    qDebug() << "Department added: " << naam;
    // Save to file
    objecttofile_Department(arrd,Departmentcount );  // Passing 1 since we're adding one record
    delete[] arrd;    // Delete the array
}
void objecttofile_Department(Department**arra,int dcount){

    ofstream Department_ka_data_likhdo("departmentrecord.txt",ios::app);
    qDebug()<<"Department count: "<<dcount<<"\n";
    if (Department_ka_data_likhdo.is_open()) {
        qDebug() << "Department file opened" << "\n";
        for (int i = 0; i < dcount; i++) {
            Department_ka_data_likhdo
                << arra[i]->getId() << " | "
                << arra[i]->getName().toStdString() << " | "
                << arra[i]->getHeadDoctor().toStdString()<< " | "
                << arra[i]->getNumWards() << " | "
                << arra[i]->getNumDoctors() << " | "
                << arra[i]->getNumRooms() << " | "
                << arra[i]->getNumBeds() << " | "
                << arra[i]->getServices().toStdString() << " | "
                <<"\n";

        }
        qDebug()<<"file mn data chla gya"<<"\n";
        Department_ka_data_likhdo.close();
    }
    else {
        qDebug() << "Department file not opened" << "\n";
    }
}
void objecttofile_Departmentforedit(Department**arra,int dcount){

    ofstream Department_ka_data_likhdo("departmentrecord.txt");
    qDebug()<<"Department count: "<<dcount<<"\n";
    if (Department_ka_data_likhdo.is_open()) {
        qDebug() << "Department file opened" << "\n";
        for (int i = 0; i < dcount; i++) {
            Department_ka_data_likhdo
                << arra[i]->getId() << " | "
                << arra[i]->getName().toStdString() << " | "
                << arra[i]->getHeadDoctor().toStdString()<< " | "
                << arra[i]->getNumWards() << " | "
                << arra[i]->getNumDoctors() << " | "
                << arra[i]->getNumRooms() << " | "
                << arra[i]->getNumBeds() << " | "
                << arra[i]->getServices().toStdString() << " | "
                <<"\n";

        }
        qDebug()<<"file mn data chla gya"<<"\n";
        Department_ka_data_likhdo.close();
    }
    else
    {
        qDebug() << "Department file not opened" << "\n";
    }
}
/////// Nurses //////////
void takeInputNurses(QString name, QString dob, QString gender, QString address, QString contact,
                     QString specialization, QString experience, int id, QString availability) {
    Nurses* newNurse = new Nurses(id, name, dob, gender, address, contact, specialization, experience, availability);
    Nurses* temp[1] = { newNurse };
    objectToFileNurses(temp, 1);
    delete newNurse;
}

void objectToFileNurses(Nurses** arr, int count) {
    QFile file("nursesrecord.txt");
    if (file.open(QIODevice::Append | QIODevice::Text)) {
        QTextStream out(&file);
        for (int i = 0; i < count; ++i) {
            out << arr[i]->getId() << "|"
                << arr[i]->getName() << "|"
                << arr[i]->getDob() << "|"
                << arr[i]->getGender() << "|"
                << arr[i]->getAddress() << "|"
                << arr[i]->getContact() << "|"
                << arr[i]->getSpecialization() << "|"
                << arr[i]->getExperience() << "|"
                << arr[i]->getAvailability() << "\n";
        }
        file.close();
    }
}

void objectToFileNursesForEdit(Nurses** arr, int count) {
    QFile file("nursesrecord.txt");
    if (file.open(QIODevice::WriteOnly | QIODevice::Text)) {
        QTextStream out(&file);
        for (int i = 0; i < count; ++i) {
            out << arr[i]->getId() << "|"
                << arr[i]->getName() << "|"
                << arr[i]->getDob() << "|"
                << arr[i]->getGender() << "|"
                << arr[i]->getAddress() << "|"
                << arr[i]->getContact() << "|"
                << arr[i]->getSpecialization() << "|"
                << arr[i]->getExperience() << "|"
                << arr[i]->getAvailability() << "\n";
        }
        file.close();
    }
}

Nurses** fetchDataNurses(int* nurseCount) {
    QFile file("nursesrecord.txt");
    QList<Nurses*> list;

    if (!file.open(QIODevice::ReadOnly | QIODevice::Text)) {
        *nurseCount = 0;
        return nullptr;
    }

    QTextStream in(&file);
    while (!in.atEnd()) {
        QString line = in.readLine();
        QStringList parts = line.split("|");
        if (parts.size() == 9) {
            list.append(new Nurses(
                parts[0].toInt(), parts[1], parts[2], parts[3],
                parts[4], parts[5], parts[6], parts[7], parts[8]
                ));
        }
    }
    file.close();

    *nurseCount = list.size();
    Nurses** arr = new Nurses*[*nurseCount];
    for (int i = 0; i < *nurseCount; ++i)
        arr[i] = list[i];

    return arr;
}

