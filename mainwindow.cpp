#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "patient.h"
#include "nurses.h"
#include "global.h"
#include "functions.h"
#include "doctor.h"
#include "QMessageBox"
#include<QFile>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    ui->doctorsTable->setEditTriggers(QAbstractItemView::NoEditTriggers);
    ui->patientsTable->setEditTriggers(QAbstractItemView::NoEditTriggers);
    ui->adminsTable->setEditTriggers(QAbstractItemView::NoEditTriggers);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::datafetchforpatient(){

    ui->patientsTable->clearContents();
    ui->patientsTable->setRowCount(0);


    qDebug()<<"control returned" <<"\n";
    patient **arr=fetchdata_patient();


    if (!arr) {
        qDebug() << "Error: Patient array is null!";
        return;
    }


    ui->patientsTable->setColumnCount(14);

    for(int i=0;i<14;i++) ui->patientsTable->setColumnWidth(i,200);

    ui->patientsTable->setRowCount(patientcount);

    for(int i=0;i<patientcount;i++){

        QString name = arr[i]->getname();
        QString disease = arr[i]->getdisease();
        QString assigneddoc = arr[i]->getassigneddoctor();
        QString gender = arr[i]->getgender();
        QString address = arr[i]->getaddress();
        QString Status = arr[i]->getstatuse();
        QString num = arr[i]->getnumber();
        int bednum = arr[i]->getbed();
        QString bed = QString::number(bednum);
        int patientid = arr[i]->getid();
        QString pid = QString::number(patientid);
        int doccid = arr[i]->getdocid();
        QString did = QString::number(doccid);
        QString dob = arr[i]->getdob();
        int departid = arr[i]->getdepartid();       // New field
        QString deptid = QString::number(departid); // New field
        int wardid = arr[i]->getwardid();           // New field
        QString wid = QString::number(wardid);      // New field
        int roomid = arr[i]->getroomid();           // New field
        QString rid = QString::number(roomid);      // New field

        // Set items in the recommended sequence
        ui->patientsTable->setItem(i, 0, new QTableWidgetItem(pid));        // Patient ID
        ui->patientsTable->setItem(i, 1, new QTableWidgetItem(name));       // Name
        ui->patientsTable->setItem(i, 2, new QTableWidgetItem(dob));        // Date of Birth
        ui->patientsTable->setItem(i, 3, new QTableWidgetItem(gender));     // Gender
        ui->patientsTable->setItem(i, 4, new QTableWidgetItem(address));    // Address
        ui->patientsTable->setItem(i, 5, new QTableWidgetItem(num));        // Phone Number
        ui->patientsTable->setItem(i, 6, new QTableWidgetItem(disease));    // Disease/Condition
        ui->patientsTable->setItem(i, 7, new QTableWidgetItem(Status));     // Status
        ui->patientsTable->setItem(i, 8, new QTableWidgetItem(assigneddoc));// Doctor Name
        ui->patientsTable->setItem(i, 9, new QTableWidgetItem(did));        // Doctor ID
        ui->patientsTable->setItem(i,10, new QTableWidgetItem(deptid));     // Department ID
        ui->patientsTable->setItem(i,11, new QTableWidgetItem(wid));        // Ward ID
        ui->patientsTable->setItem(i,12, new QTableWidgetItem(rid));        // Room ID
        ui->patientsTable->setItem(i,13, new QTableWidgetItem(bed));        // Bed ID
        qDebug()<<"Pateint "<<i<<" data displayed"<<"\n " ;



    }

    delete []arr;
}


void MainWindow::datafetchfordoctors(){

    ui->doctorsTable->clearContents();
    ui->doctorsTable->setRowCount(0);


    qDebug()<<"control returned" <<"\n";
    Doctor **arr=fetchdata_doctor();


    if (!arr) {
        qDebug() << "Error: Patient array is null!";
        return;
    }


    ui->doctorsTable->setColumnCount(11);

    ui->doctorsTable->setColumnWidth(9, 300);
    ui->doctorsTable->setRowCount(doctorcount);

    for(int i=0;i<doctorcount;i++){

        // Get data in the specified sequence using correct getters
        QString name = arr[i]->getname();                     // 1. name
        QString dob = arr[i]->getdob();                       // 2. dob
        QString gender = arr[i]->getgender();                 // 3. gender
        QString address = arr[i]->getaddress();               // 4. address
        QString phone = arr[i]->getnumber();                  // 5. phone
        int docid = arr[i]->getDoctorId();                    // 6. docid (using getDoctorId())
        int depid = arr[i]->getDepartmentId();                // 7. depid (using getDepartmentId())
        QString specialization = arr[i]->getSpecialization(); // 8. specialization
        int experience = arr[i]->getExperience();
int fees=arr[i]->getfee();            // 9. experience
        QString availability = arr[i]->getAvailability().join(","); // 10. availability

        // Convert numeric values to strings
        QString strDocId = QString::number(docid);
        QString strDepId = QString::number(depid);
        QString strExperience = QString::number(experience);
        QString fee=QString::number(fees);

        // Set items in table with correct column order
        ui->doctorsTable->setItem(i, 0, new QTableWidgetItem(name));               // 1. name
        ui->doctorsTable->setItem(i, 1, new QTableWidgetItem(dob));                // 2. dob
        ui->doctorsTable->setItem(i, 2, new QTableWidgetItem(gender));             // 3. gender
        ui->doctorsTable->setItem(i, 3, new QTableWidgetItem(address));            // 4. address
        ui->doctorsTable->setItem(i, 4, new QTableWidgetItem(phone));              // 5. phone
        ui->doctorsTable->setItem(i, 5, new QTableWidgetItem(strDocId));           // 6. docid
        ui->doctorsTable->setItem(i, 6, new QTableWidgetItem(strDepId));           // 7. depid
        ui->doctorsTable->setItem(i, 7, new QTableWidgetItem(specialization));     // 8. specialization
        ui->doctorsTable->setItem(i, 8, new QTableWidgetItem(strExperience));      // 9. experience
        ui->doctorsTable->setItem(i, 9, new QTableWidgetItem(availability));       // 10. availability
 ui->doctorsTable->setItem(i, 10, new QTableWidgetItem(fee));
        qDebug() << "Doctor" << i << "data displayed";
    }

    delete []arr;
}

void MainWindow::datafetchforpharmacy(){


    ui->pharmacytable->setRowCount(0);


    qDebug()<<"control returned" <<"\n";
    medicine **arr=fetchdata_medicine();


    if (!arr) {
        qDebug() << "Error: medicine array is null!";
        return;
    }


    ui->pharmacytable->setColumnCount(5);

    ui->pharmacytable->setColumnWidth(2, 300);
    ui->pharmacytable->setRowCount(medicinecount);

    for(int i=0;i<medicinecount;i++){

        // Get data in the specified sequence using correct getters
        QString med_id = arr[i]->getmedid();                     // 1. name
        QString med_name = arr[i]->getmedname();                       // 2. dob
        QString med_com = arr[i]->getmedcompany();                 // 3. gender
        QString med_price = arr[i]->getmedprice();               // 4. address
        QString med_stock = arr[i]->getmedquantity();                  // 5. phone


        // Set items in table with correct column order
        ui->pharmacytable->setItem(i, 0, new QTableWidgetItem(med_id));               // 1. name
        ui->pharmacytable->setItem(i, 1, new QTableWidgetItem(med_name));                // 2. dob
        ui->pharmacytable->setItem(i, 2, new QTableWidgetItem(med_com));             // 3. gender
        ui->pharmacytable->setItem(i, 3, new QTableWidgetItem(med_price));            // 4. address
        ui->pharmacytable->setItem(i, 4, new QTableWidgetItem(med_stock));              // 5. phone


        qDebug() << "Medicine" << i << "data displayed";
    }

    delete []arr;
}

void MainWindow::datafetchforappointments(){


    ui->appointtable->setRowCount(0);


    qDebug()<<"control returned" <<"\n";
    appointment **arr=fetchdata_appointment();


    if (!arr) {
        qDebug() << "Error: appointment array is null!";
        return;
    }


    ui->appointtable->setColumnCount(8);

    ui->appointtable->setRowCount(appointmentcount);

    for(int i=0;i<8;i++){
        ui->appointtable->setColumnWidth(i,150);
    }

    for(int i=0;i<appointmentcount;i++){

        int apid = arr[i]->getapid();
        QString appointmentid= QString::number(apid);

        int pid =arr[i]->getpatid();
        QString patient_id= QString::number(pid);

        QString pname=arr[i]->getpname();

        int did =arr[i]->getdocid();
        QString doctor_id= QString::number(did);

        QString dname=arr[i]->getdname();
        QString date=arr[i]->getappdate();

        QString purpose=arr[i]->getapurpose();
        QString apstatus=arr[i]->getappstat();

        ui->appointtable->setItem(i,0,new QTableWidgetItem(appointmentid));
        ui->appointtable->setItem(i,1,new QTableWidgetItem(patient_id));
        ui->appointtable->setItem(i,2,new QTableWidgetItem(pname));
        ui->appointtable->setItem(i,3,new QTableWidgetItem(doctor_id));
        ui->appointtable->setItem(i,4,new QTableWidgetItem(dname));
        ui->appointtable->setItem(i,5,new QTableWidgetItem(date));
        ui->appointtable->setItem(i,6,new QTableWidgetItem(purpose));
        ui->appointtable->setItem(i,7,new QTableWidgetItem(apstatus));

        qDebug()<<"Appointment "<<i<<" data displayed"<<"\n " ;
    }

    delete []arr;
}

void MainWindow::on_mainTabWidget_tabBarClicked(int index)
{
    if(index==1){
        datafetchforpatient();
        ui->patient_stack->setCurrentIndex(0);
    }
    if(index==2){

        datafetchfordoctors();
        ui->stackedWidget->setCurrentIndex(0);
    }
    if(index==3){
        datafetchforappointments();
        ui->appointstack->setCurrentIndex(0);
        ui->appointtable->setEditTriggers(QAbstractItemView::NoEditTriggers);
    }
    if(index==4){
        dataFetchForNurses();
        ui->nurse_widget->setCurrentIndex(0);
       // ui->nurse_table->setEditTriggers(QAbstractItemView::NoEditTriggers);
    }
    if(index==5){
        datafetchforward();
        ui->wards_widget->setCurrentIndex(0);
       datafetchforbed();
       ui->bed_widget->setCurrentIndex(0);
         datafetchforroom();
       ui->room_widget->setCurrentIndex(0);

    }


    if(index==6){
        datafetchfordepartment();
        ui->department_widget->setCurrentIndex(0);
        ui->departmentsTable->setEditTriggers(QAbstractItemView::NoEditTriggers);
    }


    if(index==7){
        datafetchforpharmacy();
        ui->med_widget->setCurrentIndex(0);
        ui->pharmacytable->setEditTriggers(QAbstractItemView::NoEditTriggers);
    }

    if(index==8){
        datafetchforbills();
        ui->bill_widget->setCurrentIndex(0);
        ui->billsTable->setEditTriggers(QAbstractItemView::NoEditTriggers);
    }
    if(index==9){
        datafetchfortestsbooking();
        datafetchfortestsdata();
        ui->lab_widget->setCurrentIndex(0);
        ui->testsTable->setEditTriggers(QAbstractItemView::NoEditTriggers);
    }
}
void MainWindow::datafetchforbills(){


    ui->billsTable->setRowCount(0);


    qDebug()<<"control returned" <<"\n";

    bills **arr=fetchdata_bills();


    if (!arr) {
        qDebug() << "Error: Department array is null!";
        return;
    }


    ui->billsTable->setColumnCount(8);

    // for(int i=0;i<8;i++) ui->departmentsTable->setColumnWidth(i,150);
    ui->billsTable->setColumnWidth(7,200);

    ui->billsTable->setRowCount(billcount);

    for(int i=0;i<billcount;i++){



        // Extract all fields including the new ones
        QString patid = QString::number(arr[i]->getpatid());         // Department ID (1001)
        QString billid = QString::number(arr[i]->getbid());           // Name (John Doe)
        QString totalfee = QString::number(arr[i]->getttotalfee());         // Date of Birth (1985-03-15)
        QString doctorfee =  QString::number(arr[i]->getdocfee());          // Gender (Male)
        QString medicinefee =  QString::number(arr[i]->getmedicinefee());         // Address (123 Main St, City)
        QString trtcost =  QString::number(arr[i]->gettrtcost());         // Phone (555-0101)
        QString bstat =  arr[i]->getbstat();      // Disease (Hypertension)
        QString bdate = arr[i]->getbdate();



        ui->billsTable->setItem(i, 0, new QTableWidgetItem(billid));        // Patient ID
        ui->billsTable->setItem(i, 1, new QTableWidgetItem(patid));       // Name
        ui->billsTable->setItem(i, 2, new QTableWidgetItem(bdate));        // Date of Birth
        ui->billsTable->setItem(i, 3, new QTableWidgetItem(doctorfee));     // Gender
        ui->billsTable->setItem(i, 4, new QTableWidgetItem(medicinefee));    // Address
        ui->billsTable->setItem(i, 5, new QTableWidgetItem(trtcost));        // Phone Number
        ui->billsTable->setItem(i, 6, new QTableWidgetItem(totalfee));    // Disease/Condition
        ui->billsTable->setItem(i, 7, new QTableWidgetItem(bstat));     // Status


        qDebug()<<"bills "<<i<<" data displayed"<<"\n " ;



    }


    delete[] arr;


}

void MainWindow::datafetchfordepartment(){

    ui->departmentsTable->clearContents();
    ui->departmentsTable->setRowCount(0);


    qDebug()<<"control returned" <<"\n";
    Department **arr=fetchdata_Department();


    if (!arr) {
        qDebug() << "Error: Department array is null!";
        return;
    }


    ui->departmentsTable->setColumnCount(8);

   // for(int i=0;i<8;i++) ui->departmentsTable->setColumnWidth(i,150);
    ui->departmentsTable->setColumnWidth(7,200);

    ui->departmentsTable->setRowCount(Departmentcount);

    for(int i=0;i<Departmentcount;i++){




        // Extract all fields including the new ones
        QString dep_id = QString::number(arr[i]->getId());         // Department ID (1001)
        QString dep_name = arr[i]->getName();           // Name (John Doe)
        QString dep_headDoctor = arr[i]->getHeadDoctor();         // Date of Birth (1985-03-15)
        QString dep_numWards =  QString::number(arr[i]->getNumWards());          // Gender (Male)
        QString dep_numDoctors =  QString::number(arr[i]->getNumDoctors());         // Address (123 Main St, City)
        QString dep_numRooms =  QString::number(arr[i]->getNumRooms());         // Phone (555-0101)
        QString dep_numBeds =  QString::number(arr[i]->getNumBeds());       // Disease (Hypertension)
        QString dep_services = arr[i]->getServices();



        ui->departmentsTable->setItem(i, 0, new QTableWidgetItem(dep_id));        // Patient ID
        ui->departmentsTable->setItem(i, 1, new QTableWidgetItem(dep_name));       // Name
        ui->departmentsTable->setItem(i, 2, new QTableWidgetItem(dep_headDoctor));        // Date of Birth
        ui->departmentsTable->setItem(i, 3, new QTableWidgetItem(dep_numWards));     // Gender
        ui->departmentsTable->setItem(i, 4, new QTableWidgetItem(dep_numDoctors));    // Address
        ui->departmentsTable->setItem(i, 5, new QTableWidgetItem(dep_numRooms));        // Phone Number
        ui->departmentsTable->setItem(i, 6, new QTableWidgetItem(dep_numBeds));    // Disease/Condition
        ui->departmentsTable->setItem(i, 7, new QTableWidgetItem(dep_services));     // Status


        qDebug()<<"Department "<<i<<" data displayed"<<"\n " ;



    }


    delete[] arr;


}

void MainWindow::datafetchforward(){


    ui->wardsTable->setRowCount(0);


    qDebug()<<"control returned" <<"\n";
    Ward **arr=fetchdata_Ward();


    if (!arr) {
        qDebug() << "Error: Ward array is null!";
        return;
    }


    ui->wardsTable->setColumnCount(7);

    // for(int i=0;i<8;i++) ui->departmentsTable->setColumnWidth(i,150);
    //ui->wardsTable->setColumnWidth(7,200);

    ui->wardsTable->setRowCount(Wardcount);

    for(int i=0;i<Wardcount;i++){





        // Extract all fields including the new ones
        QString ward_id = QString::number(arr[i]->getWardId());
       QString depid=QString::number(arr[i]->getDepartmentId());
        QString ward_name = arr[i]->getWardName();           // Name (John Doe)
        QString ward_headnurse = arr[i]->getHeadNurse();         // Date of Birth (1985-03-15)
        QString ward_numRooms =  QString::number(arr[i]->getNumRooms());          // Gender (Male)
        QString ward_numBeds =  QString::number(arr[i]->getNumBeds());       // Disease (Hypertension)
        QString ward_nurses = QString::number(arr[i]->getnursesno());



        ui->wardsTable->setItem(i, 0, new QTableWidgetItem(ward_id));        // Patient ID
        ui->wardsTable->setItem(i, 1, new QTableWidgetItem(depid));       // Name
        ui->wardsTable->setItem(i, 2, new QTableWidgetItem(ward_name));        // Date of Birth
        ui->wardsTable->setItem(i, 3, new QTableWidgetItem(ward_headnurse));     // Gender
        ui->wardsTable->setItem(i, 4, new QTableWidgetItem(ward_numRooms));    // Address
        ui->wardsTable->setItem(i, 5, new QTableWidgetItem(ward_numBeds));        // Phone Number
        ui->wardsTable->setItem(i, 6, new QTableWidgetItem(ward_nurses));    // Disease/Condition



        qDebug()<<"Ward "<<i<<" data displayed"<<"\n " ;



    }


    delete[] arr;


}


void MainWindow::datafetchforroom(){


    ui->roomsTable->setRowCount(0);


    qDebug()<<"control returned" <<"\n";
    rooms **arr=fetchdata_room();


    if (!arr) {
        qDebug() << "Error: Ward array is null!";
        return;
    }


    ui->roomsTable->setColumnCount(5);

    // for(int i=0;i<8;i++) ui->departmentsTable->setColumnWidth(i,150);
    //ui->wardsTable->setColumnWidth(7,200);

    ui->roomsTable->setRowCount(roomcount);

    for(int i=0;i<roomcount;i++){




        // Extract all fields including the new ones
        QString ward_id = QString::number(arr[i]->getwardid());
        QString assnurseid=QString::number(arr[i]->getassnurseid());
        QString assnurse_name = arr[i]->geAssignedNurse();           // Name (John Doe)
               // Date of Birth (1985-03-15)
        QString roomid =  QString::number(arr[i]->getroomId());          // Gender (Male)
        QString room_numBeds =  QString::number(arr[i]->getbeds());       // Disease (Hypertension)




        ui->roomsTable->setItem(i, 0, new QTableWidgetItem(roomid));        // Patient ID
        ui->roomsTable->setItem(i, 1, new QTableWidgetItem(ward_id));       // Name
        ui->roomsTable->setItem(i, 2, new QTableWidgetItem(assnurse_name));        // Date of Birth
        ui->roomsTable->setItem(i, 3, new QTableWidgetItem(assnurseid));     // Gender
        ui->roomsTable->setItem(i, 4, new QTableWidgetItem(room_numBeds));    // Address
         // Disease/Condition



        qDebug()<<"room "<<i<<" data displayed"<<"\n " ;



    }


    delete[] arr;


}

void MainWindow::datafetchforbed() {
    qDebug() << "Fetching bed data...";

    int count = 0;
    beds** arr = fetchdata_bed(&count);

    if (!arr) {
        qDebug() << "Error: bed array is null!";
        return;
    }

    if (!ui->bedsTable) {
        qDebug() << "Error: bedsTable is not initialized!";
        delete[] arr;
        return;
    }

    ui->bedsTable->setRowCount(count);  // ✅ Use the correct count

    for (int i = 0; i < count; i++) {  // ✅ Loop with correct count
        ui->bedsTable->setItem(i, 0, new QTableWidgetItem(QString::number(arr[i]->getbedid())));
        ui->bedsTable->setItem(i, 1, new QTableWidgetItem(QString::number(arr[i]->getroomid())));
        ui->bedsTable->setItem(i, 2, new QTableWidgetItem(arr[i]->getasspatientname()));
        ui->bedsTable->setItem(i, 3, new QTableWidgetItem(QString::number(arr[i]->getasspatientid())));
    }

    // Free memory
    for (int i = 0; i < count; i++) {
        delete arr[i];
    }
    delete[] arr;

    qDebug() << "Bed data populated successfully.";
}


void MainWindow::on_addPatientBtn_clicked()
{

    ui->patient_stack->setCurrentIndex(2);


}


void MainWindow::on_addDoctorBtn_clicked()
{
    ui->stackedWidget->setCurrentIndex(1);
}


void MainWindow::on_pushButton_clicked()

{

        //  qDebug()<<"Botton Clicked"<<"\n";
        //  QString name= ui->pname->text();
        //  QString dateofbirth= ui->pdob->text();
        //  QString gender=ui->comboBox_gender->currentText();

    //  qDebug()<<"gender is: "<<gender<<"\n";
    //  QString Address=ui->lineedit_address->text();

    //  QString Phone=ui->phone_lineedit->text();
    //  QString Specialization=ui->comboBox_special->currentText();
    //  QString avail_slot=ui->dateTimeEdit_doc->text();


    //  int experience=ui->experience_lineedit->text().toInt();

    //  int  did=ui->lineEdit_iddoc->text().toInt();


    // // takeinput_doctor( name,  dateofbirth,  gender,  Address,Phone, did,  Specialization,  experience, List);
    //  QMessageBox::information(this,"Doctor","Doctor is Successfully Added in Record");
    //  List.clear();
    //  ui->stackedWidget->setCurrentIndex(0);
}

void MainWindow::on_slot_button_clicked()
{
    //static int count=0;
    QString slot=ui->dateTimeEdit_doc->text();
    List.append(slot);
    QMessageBox::information(this,"Time Slot","Slot added. Kindly Add a New Slot if Available.");
    ui->dateTimeEdit_doc->clear();
}

void MainWindow::fetch_relevant_doctors(QString specs, QString uiname){

    Doctor **arr=fetchdata_doctor();

    for(int i=0;i<doctorcount;i++){

        if(arr[i]->getSpecialization()==specs){

            QString item= arr[i]->getname() + " - Ex: " + QString::number(arr[i]->getExperience()) + " Y ";
            QComboBox*combobox=ui->centralwidget->findChild<QComboBox*>(uiname);
            combobox->addItem(item,arr[i]->getDoctorId());

        }
    }
}

void MainWindow::fetch_selected_doctors_dates(int doctorid,QString uiname){

    Doctor **arr=fetchdata_doctor();

    for(int i=0;i<doctorcount;i++){

        if(arr[i]->getDoctorId()==doctorid){


            QStringList item= arr[i]->getAvailability();
            QComboBox*combobox=ui->centralwidget->findChild<QComboBox*>(uiname);

            for(int i=0;i<item.size();i++){
                combobox->addItem(item[i],arr[i]->getDepartmentId());
            }

        }
    }
}

void MainWindow::on_pushButton_patient_clicked()
{
    // qDebug()<<"Botton Clicked"<<"\n";
    // int patient_id= ui->patient_id_edit->text().toInt();
    // QString pname= ui->patient_name_edit->text();
    // QString dob=ui->patient_date_of_birth_edit->text();
    // QString gender=ui->combo_patient_gender->currentText();
    // QString address=ui->address_patient_edit->text();
    // QString Phone=ui->phone_2->text();
    // QString Disease=ui->comboBox_disease->currentText();
    // QString Status;
    // if (ui->rdadmit_2->isChecked()) {
    //     Status = ui->rdadmit_2->text();
    // } else if (ui->rdnotadmit_2->isChecked()) {
    //     Status = ui->rdnotadmit_2->text();
    // }
    // QString Doctors_spec=ui->spec_combobox_patient->currentText();
    // fetch_relevant_doctors(Doctors_spec,"spec_combobox_patient");
    // QString Assigned_Doctor=ui->assigndoc_patient->text();
    // int  did=ui->assigndoc_patient->Currentdata().toInt();

    // fetch_selected_doctors_dates(did,"assigned_doctor_date_combo");
    // QString Appointment_date=ui->assigned_doctor_date_combo->currentText();

    // /////////////////////
    // int depid=ui->assigned_doctor_date_combo->Currentdata();
    // int  bedno=ui->lineedit_bed->text().toInt();

    //  takeinput_patient(name, dateofbirth, gender, Address,Phone, Patientid,  Disease,  Status,Assigned_Doctor,  bedno,  did);
    QMessageBox::information(this,"Patient","Patient is Successfully Added in Record");

    clearpatientform();
    ui->patient_stack->setCurrentIndex(0);

}

void MainWindow::clearpatientform(){
    ui->address_2->clear();
    ui->assigndoc_2->clear();
    ui->lineedit_pid->clear();
    ui->lineedit_pid->clear();
    ui->phone_2->clear();
    ui->pname_2->clear();
    ui->comboBox_disease->clear();
    ui->comboBox_gender->clear();
    ui->pdob_2->setDate(QDate(2000, 1, 1));

}


void MainWindow::on_editPatientBtn_clicked()

{
    ui->patient_stack->setCurrentIndex(0);
    ui->patientsTable->setEditTriggers(QAbstractItemView::DoubleClicked);

    QMessageBox::warning(this,"Table Unlocked","Table Unlocked. Make Changes Carefully");

}


void MainWindow::on_edit_button_clicked()
{
    qDebug()<<"Patient count"<<patientcount<<"\n";

    patient **arrt=new patient*[patientcount];





    for(int i = 0; i < patientcount; i++) {
        qDebug() << "Entered in loop\n";

        QString patientIdStr = ui->patientsTable->item(i,0) ? ui->patientsTable->item(i,0)->text() : "";
        QString name = ui->patientsTable->item(i,1) ? ui->patientsTable->item(i,1)->text() : "";
        QString dob = ui->patientsTable->item(i,2) ? ui->patientsTable->item(i,2)->text() : "";
        QString gender = ui->patientsTable->item(i,3) ? ui->patientsTable->item(i,3)->text() : "";
        QString address = ui->patientsTable->item(i,4) ? ui->patientsTable->item(i,4)->text() : "";
        QString phone = ui->patientsTable->item(i,5) ? ui->patientsTable->item(i,5)->text() : "";
        QString disease = ui->patientsTable->item(i,6) ? ui->patientsTable->item(i,6)->text() : "";
        QString status = ui->patientsTable->item(i,7) ? ui->patientsTable->item(i,7)->text() : "";
        QString assignedDoctor = ui->patientsTable->item(i,8) ? ui->patientsTable->item(i,8)->text() : "";

        // Convert numeric fields
        int patientId = patientIdStr.toInt();
        int doctorId = ui->patientsTable->item(i,9) ? ui->patientsTable->item(i,9)->text().toInt() : 0;
        int departId = ui->patientsTable->item(i,10) ? ui->patientsTable->item(i,10)->text().toInt() : 0;
        int wardId = ui->patientsTable->item(i,11) ? ui->patientsTable->item(i,11)->text().toInt() : 0;
        int roomId = ui->patientsTable->item(i,12) ? ui->patientsTable->item(i,12)->text().toInt() : 0;
        int bedId = ui->patientsTable->item(i,13) ? ui->patientsTable->item(i,13)->text().toInt() : 0;

        // Create patient with all fields
        arrt[i] = new patient(
            name,          // nam
            dob,           // dob
            gender,        // ge
            address,       // add
            phone,         // phon
            patientId,     // pid
            disease,       // dis
            status,        // stat
            assignedDoctor, // assdoc
            doctorId,      // assdcid
            departId,      // depart
            wardId,        // ward
            roomId,        // room
            bedId          // // New fields added
            );

        qDebug() << "Loaded patient:" << name
                 << "Dept:" << departId
                 << "Ward:" << wardId
                 << "Room:" << roomId;
    }


    objecttofile_patientforedit(arrt,patientcount);
    delete []arrt;
    QMessageBox::information(this,"Patient Edit","Record is Successfully Updated");
    ui->patientsTable->setEditTriggers(QAbstractItemView::NoEditTriggers);



}


void MainWindow::on_editDoctorBtn_clicked()
{
    ui->stackedWidget->setCurrentIndex(0);
    ui->doctorsTable->setEditTriggers(QAbstractItemView::DoubleClicked);
    QMessageBox::warning(this,"Table Unlocked","Table Unlocked. Make Changes Carefully");


}


void MainWindow::on_doctor_editpushbutton_clicked()
{
    qDebug()<<"Patient count"<<doctorcount<<"\n";

    Doctor **arrt=new Doctor*[doctorcount];





    for(int i = 0; i < doctorcount; i++) {
        qDebug() << "Entered in loop";

        // Get values from table in the correct order
        QString name = ui->doctorsTable->item(i,0) ? ui->doctorsTable->item(i,0)->text() : "";
        QString dob = ui->doctorsTable->item(i,1) ? ui->doctorsTable->item(i,1)->text() : "";
        QString gender = ui->doctorsTable->item(i,2) ? ui->doctorsTable->item(i,2)->text() : "";
        QString address = ui->doctorsTable->item(i,3) ? ui->doctorsTable->item(i,3)->text() : "";
        QString phone = ui->doctorsTable->item(i,4) ? ui->doctorsTable->item(i,4)->text() : "";
        int docid = ui->doctorsTable->item(i,5) ? ui->doctorsTable->item(i,5)->text().toInt() : 0;
        int depid = ui->doctorsTable->item(i,6) ? ui->doctorsTable->item(i,6)->text().toInt() : 0;
        QString specialization = ui->doctorsTable->item(i,7) ? ui->doctorsTable->item(i,7)->text() : "";
        int experience = ui->doctorsTable->item(i,8) ? ui->doctorsTable->item(i,8)->text().toInt() : 0;
        QString availability = ui->doctorsTable->item(i,9) ? ui->doctorsTable->item(i,9)->text() : "";
        QStringList avail = availability.split(",");
        int fee=ui->doctorsTable->item(i,10)?ui->doctorsTable->item(i,10)->text().toInt():0;



        // Create Doctor object with parameters in correct sequence
        arrt[i] = new Doctor(
            name,           // 1. name
            dob,            // 2. dob
            gender,         // 3. gender
            address,        // 4. address
            phone,          // 5. phone
            docid,          // 6. docid
            depid,          // 7. depid
            specialization, // 8. specialization
            experience,     // 9. experience
            avail,
fee            // 10. availability
            );

        qDebug() << "Successfully created Doctor object for:" << arrt[i]->getname();
    }
    objecttofile_doctorforedit(arrt,doctorcount);
    QMessageBox::information(this,"Doctor Edit","Record is Successfully Updated");
    ui->doctorsTable->setEditTriggers(QAbstractItemView::NoEditTriggers);

}


void MainWindow::on_deletepush_clicked()
{
    int docrow=ui->docid_delete->text().toInt()-1;

    ui->doctorsTable->removeRow(docrow);

    doctorcount--;
    Doctor **arrt=new Doctor*[doctorcount];





    for(int i = 0; i < doctorcount; i++) {
        qDebug() << "Entered in loop";

        // Get values from table in the correct order
        QString name = ui->doctorsTable->item(i,0) ? ui->doctorsTable->item(i,0)->text() : "";
        QString dob = ui->doctorsTable->item(i,1) ? ui->doctorsTable->item(i,1)->text() : "";
        QString gender = ui->doctorsTable->item(i,2) ? ui->doctorsTable->item(i,2)->text() : "";
        QString address = ui->doctorsTable->item(i,3) ? ui->doctorsTable->item(i,3)->text() : "";
        QString phone = ui->doctorsTable->item(i,4) ? ui->doctorsTable->item(i,4)->text() : "";
        int docid = ui->doctorsTable->item(i,5) ? ui->doctorsTable->item(i,5)->text().toInt() : 0;
        int depid = ui->doctorsTable->item(i,6) ? ui->doctorsTable->item(i,6)->text().toInt() : 0;
        QString specialization = ui->doctorsTable->item(i,7) ? ui->doctorsTable->item(i,7)->text() : "";
        int experience = ui->doctorsTable->item(i,8) ? ui->doctorsTable->item(i,8)->text().toInt() : 0;
        QString availability = ui->doctorsTable->item(i,9) ? ui->doctorsTable->item(i,9)->text() : "";
        QStringList avail = availability.split(",");
  int fee=ui->doctorsTable->item(i,10)?ui->doctorsTable->item(i,10)->text().toInt():0;


        // Create Doctor object with parameters in correct sequence
        arrt[i] = new Doctor(
            name,           // 1. name
            dob,            // 2. dob
            gender,         // 3. gender
            address,        // 4. address
            phone,          // 5. phone
            docid,          // 6. docid
            depid,          // 7. depid
            specialization, // 8. specialization
            experience,     // 9. experience
            avail,
fee      // 10. availability
            );

        qDebug() << "Successfully created Doctor object for:" << arrt[i]->getname();
    }
    objecttofile_doctorforedit(arrt,doctorcount);
    QMessageBox::information(this,"Doctor Delete","Record is Successfully Updated");
    ui->stackedWidget->setCurrentIndex(0);
    ui->doctorsTable->setEditTriggers(QAbstractItemView::NoEditTriggers);


}


void MainWindow::on_deleteDoctorBtn_clicked()
{
    ui->stackedWidget->setCurrentIndex(2);
}


void MainWindow::on_deletePatientBtn_clicked()
{
    ui->patient_stack->setCurrentIndex(1);
}


void MainWindow::on_pushdelpatient_clicked()
{
    int prow=ui->delpatientedit->text().toInt()-1;

    ui->patientsTable->removeRow(prow);

    patientcount--;
    patient **arrt=new patient*[patientcount];





    for(int i = 0; i < patientcount; i++) {

        QString patientIdStr = ui->patientsTable->item(i,0) ? ui->patientsTable->item(i,0)->text() : "";
        QString name = ui->patientsTable->item(i,1) ? ui->patientsTable->item(i,1)->text() : "";
        QString dob = ui->patientsTable->item(i,2) ? ui->patientsTable->item(i,2)->text() : "";
        QString gender = ui->patientsTable->item(i,3) ? ui->patientsTable->item(i,3)->text() : "";
        QString address = ui->patientsTable->item(i,4) ? ui->patientsTable->item(i,4)->text() : "";
        QString phone = ui->patientsTable->item(i,5) ? ui->patientsTable->item(i,5)->text() : "";
        QString disease = ui->patientsTable->item(i,6) ? ui->patientsTable->item(i,6)->text() : "";
        QString status = ui->patientsTable->item(i,7) ? ui->patientsTable->item(i,7)->text() : "";
        QString assignedDoctor = ui->patientsTable->item(i,8) ? ui->patientsTable->item(i,8)->text() : "";

        // Convert numeric fields
        int patientId = patientIdStr.toInt();
        int doctorId = ui->patientsTable->item(i,9) ? ui->patientsTable->item(i,9)->text().toInt() : 0;
        int departId = ui->patientsTable->item(i,10) ? ui->patientsTable->item(i,10)->text().toInt() : 0;
        int wardId = ui->patientsTable->item(i,11) ? ui->patientsTable->item(i,11)->text().toInt() : 0;
        int roomId = ui->patientsTable->item(i,12) ? ui->patientsTable->item(i,12)->text().toInt() : 0;
        int bedId = ui->patientsTable->item(i,13) ? ui->patientsTable->item(i,13)->text().toInt() : 0;

        // Create patient with all fields
        arrt[i] = new patient(
            name,          // nam
            dob,           // dob
            gender,        // ge
            address,       // add
            phone,         // phon
            patientId,     // pid
            disease,       // dis
            status,        // stat
            assignedDoctor, // assdoc
            doctorId,      // assdcid
            departId,      // depart
            wardId,        // ward
            roomId,        // room
            bedId          // // New fields added
            );

        qDebug() << "Loaded patient:" << name
                 << "Dept:" << departId
                 << "Ward:" << wardId
                 << "Room:" << roomId;

    }
    objecttofile_patientforedit(arrt,patientcount);
    delete []arrt;
    QMessageBox::information(this,"Patient Delete","Record is Successfully Updated");
    ui->patientsTable->setEditTriggers(QAbstractItemView::NoEditTriggers);
    ui->patient_stack->setCurrentIndex(0);

}


void MainWindow::on_addAppointmentBtn_clicked()
{
    ui->appointstack->setCurrentIndex(2);

}



void MainWindow::on_cb_spec_activated(int index)
{
    ui->cb_avdoc->clear();
    QString selected_specialization=ui->cb_spec->currentText();
    fetch_relevant_doctors(selected_specialization,"cb_avdoc");


}


void MainWindow::on_cb_avdoc_activated(int index)
{
    ui->cb_avtime->clear();
    int selected_doctor_id=ui->cb_avdoc->currentData().toInt();
    qDebug()<<" doctor id: "<<selected_doctor_id<<"\n";
    fetch_selected_doctors_dates(selected_doctor_id,"cb_avtime");

}

// void MainWindow::clearappointmentform(){
//     ui->le_pat_name->clear();
//     ui->le_pid->clear();
//     ui->cb_spec->clear();
//     ui->cb_avdoc->clear();
//     ui->cb_avtime->clear();

// }

void MainWindow::on_button_bookappoint_clicked()
{
    QString paitient_name=ui->le_pat_name->text();
    int patient_id=ui->le_pid->text().toInt();
    QString Specs=ui->cb_spec->currentText();
    QString List=ui->cb_avdoc->currentText();
    QStringList list=List.split("-");
    QString Doctor_name=list[0];
    QString Doctor_exp=list[1];
    int doc_id=ui->cb_avdoc->currentData().toInt();
    QString avail=ui->cb_avtime->currentText();
    int apid= doctorcount+patientcount+(1000/doctorcount);

    QString apstatus="Booked";

    takeinput_appointment(paitient_name,Doctor_name, doc_id,  patient_id, apid,  avail, apstatus, Specs);
    QMessageBox::information(this,"Appointment","Appointment is Successfully Added in Record");

    // clearappointmentform();
    ui->appointstack->setCurrentIndex(0);
    ui->appointtable->setEditTriggers(QAbstractItemView::NoEditTriggers);

}



void MainWindow::on_editAppointmentBtn_clicked()
{
    ui->appointstack->setCurrentIndex(0);
    ui->appointtable->setEditTriggers(QAbstractItemView::DoubleClicked);
    QMessageBox::warning(this,"Table Unlocked","Table Unlocked. Make Changes Carefully");


}


void MainWindow::on_appointeditbutton_clicked()
{


    appointment **arra=new appointment*[appointmentcount];





    for(int i = 0; i < appointmentcount; i++) {
        qDebug() << "Entered in loop\n";

        int Appointment_id = ui->appointtable->item(i,0) ? ui->appointtable->item(i,0)->text().toInt() : 0;
        int Patient_id = ui->appointtable->item(i,1) ? ui->appointtable->item(i,1)->text().toInt() : 0;
        QString Patient_Name = ui->appointtable->item(i,2) ? ui->appointtable->item(i,2)->text() : "";
        int Doctor_id = ui->appointtable->item(i,3) ? ui->appointtable->item(i,3)->text().toInt() : 0;
        QString Doctor_Name = ui->appointtable->item(i,4) ? ui->appointtable->item(i,4)->text() : "";

        QString Date_Time = ui->appointtable->item(i,5) ? ui->appointtable->item(i,5)->text() : "";
        QString Status = ui->appointtable->item(i,6) ? ui->appointtable->item(i,6)->text() : "";

        QString Purpose = ui->appointtable->item(i,7) ? ui->appointtable->item(i,7)->text() : "";

        arra[i] = new appointment(Patient_Name, Doctor_Name, Doctor_id, Patient_id, Appointment_id, Date_Time, Status, Purpose);
        qDebug() << "Object with name: " <<  arra[i]->getpname() << "\n";
    }
    objecttofile_appointmentforedit(arra,appointmentcount);
    QMessageBox::information(this,"Appointment Edit","Record is Successfully Updated");
    ui->appointtable->setEditTriggers(QAbstractItemView::NoEditTriggers);


}


void MainWindow::on_appointmentdeletepushbutton_clicked()
{
    int arow=ui->lineEdit_appointdel->text().toInt()-1;

    ui->appointtable->removeRow(arow);

    appointmentcount--;
    appointment **arra=new appointment*[appointmentcount];



    for(int i = 0; i < appointmentcount; i++) {
        qDebug() << "Entered in loop\n";

        int Appointment_id = ui->appointtable->item(i,0) ? ui->appointtable->item(i,0)->text().toInt() : 0;
        int Patient_id = ui->appointtable->item(i,1) ? ui->appointtable->item(i,1)->text().toInt() : 0;
        QString Patient_Name = ui->appointtable->item(i,2) ? ui->appointtable->item(i,2)->text() : "";
        int Doctor_id = ui->appointtable->item(i,3) ? ui->appointtable->item(i,3)->text().toInt() : 0;
        QString Doctor_Name = ui->appointtable->item(i,4) ? ui->appointtable->item(i,4)->text() : "";

        QString Date_Time = ui->appointtable->item(i,5) ? ui->appointtable->item(i,5)->text() : "";
        QString Status = ui->appointtable->item(i,6) ? ui->appointtable->item(i,6)->text() : "";

        QString Purpose = ui->appointtable->item(i,7) ? ui->appointtable->item(i,7)->text() : "";

        arra[i] = new appointment(Patient_Name, Doctor_Name, Doctor_id, Patient_id, Appointment_id, Date_Time, Status, Purpose);
        qDebug() << "Object with name: " <<  arra[i]->getpname() << "\n";
    }
    objecttofile_appointmentforedit(arra,appointmentcount);
    QMessageBox::information(this,"Appointment Delete","Record is Successfully Updated");
    ui->appointstack->setCurrentIndex(1);
    ui->appointtable->setEditTriggers(QAbstractItemView::NoEditTriggers);
}


void MainWindow::on_deleteAppointmentBtn_clicked()
{
    ui->appointstack->setCurrentIndex(1);

}


void MainWindow::on_completeAppointmentBtn_clicked()
{
    ui->appointstack->setCurrentIndex(3);
}


void MainWindow::on_pushButton_appointmentcompleted_clicked()
{
    int arow=ui->lineEdit_appointcomp->text().toInt();


    appointment **arra=new appointment*[appointmentcount];



    for(int i = 0; i < appointmentcount; i++) {
        qDebug() << "Entered in loop\n";

        int Appointment_id = ui->appointtable->item(i,0) ? ui->appointtable->item(i,0)->text().toInt() : 0;
        int Patient_id = ui->appointtable->item(i,1) ? ui->appointtable->item(i,1)->text().toInt() : 0;
        QString Patient_Name = ui->appointtable->item(i,2) ? ui->appointtable->item(i,2)->text() : "";
        int Doctor_id = ui->appointtable->item(i,3) ? ui->appointtable->item(i,3)->text().toInt() : 0;
        QString Doctor_Name = ui->appointtable->item(i,4) ? ui->appointtable->item(i,4)->text() : "";

        QString Date_Time = ui->appointtable->item(i,5) ? ui->appointtable->item(i,5)->text() : "";
        QString Status = ui->appointtable->item(i,6) ? ui->appointtable->item(i,6)->text() : "";

        QString Purpose = ui->appointtable->item(i,7) ? ui->appointtable->item(i,7)->text() : "";

        arra[i] = new appointment(Patient_Name, Doctor_Name, Doctor_id, Patient_id, Appointment_id, Date_Time, Status, Purpose);

        if(arra[i]->getapid()==arow){
            arra[i]->setappstat("Completed");
        }

        qDebug() << "Object with name: " <<  arra[i]->getpname() << "\n";
    }
    objecttofile_appointmentforedit(arra,appointmentcount);
    QMessageBox::information(this,"Appointment Completed","Record is Successfully Updated");
    ui->appointstack->setCurrentIndex(1);
    ui->appointtable->setEditTriggers(QAbstractItemView::NoEditTriggers);
}






void MainWindow::on_pharmacyTabs_tabBarClicked(int index)
{
    ui->med_widget->setCurrentIndex(0);
    ui->pharmacytable->setEditTriggers(QAbstractItemView::NoEditTriggers);

}


void MainWindow::on_addInventoryBtn_clicked()
{
    ui->med_widget->setCurrentIndex(1);

}


void MainWindow::on_push_stock_clicked()
{
    QString med_id=ui->med_id->text();
    QString med_n=ui->med_name->text();
    QString med_c=ui->med_com->text();
    QString med_p=ui->med_price->text();
    QString med_s=ui->med_stock->text();

    takeinput_medicine(med_id,med_n,med_c,med_p,med_s);

    QMessageBox::information(this,"Medicine","Medicine is Successfully Added in Record");

    ui->med_id->clear();
    ui->med_name->clear();
    ui->med_com->clear();
    ui->med_price->clear();
    ui->med_stock->clear();

    ui->med_widget->setCurrentIndex(0);
    ui->pharmacytable->setEditTriggers(QAbstractItemView::NoEditTriggers);

}


void MainWindow::on_deleteInventoryBtn_clicked()
{
    ui->med_widget->setCurrentIndex(2);
}


void MainWindow::on_med_del_push_clicked()
{
    QString med_del=ui->med_Del->text();
    ui->patientsTable->removeRow(med_del.toInt()-1);

    medicinecount--;
    medicine **arrt=new medicine*[medicinecount];





    for(int i = 0; i < medicinecount; i++) {

        QString med_id = ui->pharmacytable->item(i,0) ? ui->pharmacytable->item(i,0)->text() : "";
        QString med_name = ui->pharmacytable->item(i,1) ? ui->pharmacytable->item(i,1)->text() : "";
        QString med_comp = ui->pharmacytable->item(i,2) ? ui->pharmacytable->item(i,2)->text() : "";
        QString med_price = ui->pharmacytable->item(i,3) ? ui->pharmacytable->item(i,3)->text() : "";
        QString med_stock = ui->pharmacytable->item(i,4) ? ui->pharmacytable->item(i,4)->text() : "";


        // Create patient with all fields
        arrt[i] = new medicine(
            med_id,          // nam
            med_name,           // dob
            med_comp,        // ge
            med_price,       // add
            med_stock        // phon
            // // New fields added
            );

    }
    objecttofile_medicineforedit(arrt,medicinecount);
    delete []arrt;
    QMessageBox::information(this,"Medicine Delete","Record is Successfully Updated");
    ui->pharmacytable->setEditTriggers(QAbstractItemView::NoEditTriggers);
    ui->med_widget->setCurrentIndex(0);

}



void MainWindow::on_editInventoryBtn_clicked()
{
    ui->med_widget->setCurrentIndex(0);
    ui->pharmacytable->setEditTriggers(QAbstractItemView::DoubleClicked);
    QMessageBox::warning(this,"Table Unlocked","Table Unlocked. Make Changes Carefully");
}




void MainWindow::on_edit_med_push_clicked()
{
    medicine **arra=new medicine*[medicinecount];





    for(int i = 0; i < medicinecount; i++) {
        qDebug() << "Entered in loop\n";

        QString med_id = ui->pharmacytable->item(i,0) ? ui->pharmacytable->item(i,0)->text() : "";
        QString med_name = ui->pharmacytable->item(i,1) ? ui->pharmacytable->item(i,1)->text() : "";
        QString med_comp = ui->pharmacytable->item(i,2) ? ui->pharmacytable->item(i,2)->text() : "";
        QString med_price = ui->pharmacytable->item(i,3) ? ui->pharmacytable->item(i,3)->text() : "";
        QString med_stock = ui->pharmacytable->item(i,4) ? ui->pharmacytable->item(i,4)->text() : "";
        arra[i] = new medicine(
            med_id,          // nam
            med_name,           // dob
            med_comp,        // ge
            med_price,       // add
            med_stock        // phon
            // // New fields added
            );
    }
    objecttofile_medicineforedit(arra,medicinecount);
    QMessageBox::information(this,"Medicine Edit","Record is Successfully Updated");
    ui->pharmacytable->setEditTriggers(QAbstractItemView::NoEditTriggers);

}


void MainWindow::on_restockInventoryBtn_clicked()
{
    ui->med_widget->setCurrentIndex(3);

}


void MainWindow::on_med_restock_push_clicked()
{
    QString medid=ui->med_id_restock->text();
    QString medname=ui->med_name_restock->text();
    int stock=ui->med_quan_restock->text().toInt();


    medicine **arr=fetchdata_medicine();

    for(int i=0;i<medicinecount;i++){
        if(arr[i]->getmedid()==medid&&arr[i]->getmedname()==medname){
            int newstock=arr[i]->getmedquantity().toInt()+stock;
            arr[i]->getmedquantity()=QString::number(newstock);
            break;
        }
    }

    QMessageBox::information(this,"Medicine Stock","Record is Successfully Updated");
    ui->med_widget->setCurrentIndex(0);
    ui->pharmacytable->setEditTriggers(QAbstractItemView::NoEditTriggers);


}


void MainWindow::on_addNurseBtn_clicked()
{
    ui->nurse_widget->setCurrentIndex(1);
}


void MainWindow::on_deleteNurseBtn_clicked()
{
    ui->nurse_widget->setCurrentIndex(2);
}


void MainWindow::on_addReceptionistBtn_clicked()
{
    ui->recep_widget->setCurrentIndex(1);
}


void MainWindow::on_staffTypeTabs_tabBarClicked(int index)
{
    if(index==1){
        ui->recep_widget->setCurrentIndex(0);
        ui->receptionistsTable->setEditTriggers(QAbstractItemView::NoEditTriggers);
    }
    if(index==0){
        ui->nurse_widget->setCurrentIndex(0);
        ui->nursesTable->setEditTriggers(QAbstractItemView::NoEditTriggers);
    }
    if(index==2){
        ui->admin_widget->setCurrentIndex(0);
        ui->adminsTable->setEditTriggers(QAbstractItemView::NoEditTriggers);
    }
}


void MainWindow::on_deleteReceptionistBtn_clicked()
{
    ui->recep_widget->setCurrentIndex(2);
}


void MainWindow::on_addAdminBtn_clicked()
{
    ui->admin_widget->setCurrentIndex(1);
}


void MainWindow::on_deleteAdminBtn_clicked()
{
    ui->admin_widget->setCurrentIndex(2);
}


void MainWindow::on_editAdminBtn_clicked()
{
    ui->admin_widget->setCurrentIndex(0);
    ui->adminsTable->setEditTriggers(QAbstractItemView::DoubleClicked);

    QMessageBox::warning(this,"Table Unlocked","Table Unlocked. Make Changes Carefully");

}


void MainWindow::on_editReceptionistBtn_clicked()
{
    ui->recep_widget->setCurrentIndex(0);
    ui->receptionistsTable->setEditTriggers(QAbstractItemView::DoubleClicked);

    QMessageBox::warning(this,"Table Unlocked","Table Unlocked. Make Changes Carefully");
}


void MainWindow::on_editNurseBtn_clicked()
{
    ui->nurse_widget->setCurrentIndex(0);
    ui->nursesTable->setEditTriggers(QAbstractItemView::DoubleClicked);

    QMessageBox::warning(this,"Table Unlocked","Table Unlocked. Make Changes Carefully");
}


void MainWindow::on_labTabs_tabBarClicked(int index)
{
    if(index==0){
        datafetchfortestsbooking();
        ui->lab_widget->setCurrentIndex(0);
        ui->testsTable->setEditTriggers(QAbstractItemView::NoEditTriggers);
    }
    if(index==1){
        datafetchfortestsdata();
        ui->test_data_widget->setCurrentIndex(0);
        ui->testsdataTable->setEditTriggers(QAbstractItemView::NoEditTriggers);
    }
}


void MainWindow::on_scheduleTestBtn_clicked()
{
    ui->lab_widget->setCurrentIndex(2);
}


void MainWindow::on_editTestBtn_clicked()
{
    ui->lab_widget->setCurrentIndex(0);
    ui->testsTable->setEditTriggers(QAbstractItemView::DoubleClicked);

    QMessageBox::warning(this,"Table Unlocked","Table Unlocked. Make Changes Carefully");
}


void MainWindow::on_cancelTestBtn_clicked()
{
    ui->lab_widget->setCurrentIndex(1);
}


void MainWindow::on_completeTestBtn_clicked()
{
    ui->lab_widget->setCurrentIndex(3);
}


void MainWindow::on_scheduleTestBtn_2_clicked()
{
    ui->test_data_widget->setCurrentIndex(1);
}


void MainWindow::on_editTestBtn_2_clicked()
{
    ui->test_data_widget->setCurrentIndex(0);
    ui->testsdataTable->setEditTriggers(QAbstractItemView::DoubleClicked);

    QMessageBox::warning(this,"Table Unlocked","Table Unlocked. Make Changes Carefully");

}


void MainWindow::on_cancelTestBtn_2_clicked()
{
    ui->test_data_widget->setCurrentIndex(2);
}


void MainWindow::datafetchfortestsbooking() {
    // Clear existing table data
    ui->testsTable->setRowCount(0);

    // Fetch test booking data
    qDebug() << "Fetching test booking data..." << "\n";
    testbook** arr = fetchdata_test_booking();

    if (!arr) {
        qDebug() << "Error: test booking array is null!";
        return;
    }

    // Configure table
    ui->testsTable->setColumnCount(7);  // 7 columns for all fields
    //ui->testsTable->setHorizontalHeaderLabels({"Booking ID", "Test ID", "Test Name", "Patient ID", "Doctor ID", "Date", "Status"});

    // Set column widths
    for(int i=0;i<testbookingcount;i++)
        ui->testsTable->setColumnWidth(i, 200);  // Wider for test names
    ui->testsTable->setRowCount(testbookingcount);

    // Populate table
    for(int i = 0; i < testbookingcount; i++) {
        // Get data using correct getters
        QString book_id = arr[i]->getBookId();
        QString test_id = arr[i]->getTestId();
        QString test_name = arr[i]->getTestName();
        QString patient_id = arr[i]->getPatientId();
        QString doctor_id = arr[i]->getDoctorId();
        QString book_date = arr[i]->getBookDate();
        QString book_status = arr[i]->getBookStatus();

        // Set items in table with correct column order
        ui->testsTable->setItem(i, 0, new QTableWidgetItem(book_id));
        ui->testsTable->setItem(i, 1, new QTableWidgetItem(test_id));
        ui->testsTable->setItem(i, 2, new QTableWidgetItem(test_name));
        ui->testsTable->setItem(i, 3, new QTableWidgetItem(patient_id));
        ui->testsTable->setItem(i, 4, new QTableWidgetItem(doctor_id));
        ui->testsTable->setItem(i, 5, new QTableWidgetItem(book_date));
        ui->testsTable->setItem(i, 6, new QTableWidgetItem(book_status));

        qDebug() << "Test booking" << i << "data displayed";
    }

    delete[] arr;

}

void MainWindow::on_laboraty_push_button_clicked() {
    datafetchfortestsbooking();

    ui->lab_widget->setCurrentIndex(0);
    QMessageBox::information(this,"Booking Edit","Record is Successfully Updated");
    ui->testsTable->setEditTriggers(QAbstractItemView::NoEditTriggers);

}

void MainWindow::on_lab_del_push_2_clicked() {
    int row = ui->testsTable->currentRow();
    if (row < 0) {
        QMessageBox::warning(this, "Error", "Please select a row to delete");
        return;
    }

    // Deletion logic
    testbookingcount--;
    testbook** arrt = new testbook*[testbookingcount];

    // Rebuild array excluding deleted row
    int newIndex = 0;
    for(int i = 0; i < testbookingcount; i++) {
        if(i != row) {
            QString book_id = ui->testsTable->item(i,0)->text();
            QString test_id = ui->testsTable->item(i,1)->text();
            QString test_name = ui->testsTable->item(i,2)->text();
            QString patient_id = ui->testsTable->item(i,3)->text();
            QString doctor_id = ui->testsTable->item(i,4)->text();
            QString book_date = ui->testsTable->item(i,5)->text();
            QString book_status = ui->testsTable->item(i,6)->text();

            arrt[newIndex] = new testbook(
                test_id, test_name, "", "",
                book_id, patient_id, doctor_id, book_status, book_date
                );
            newIndex++;
        }
    }

    ui->testsTable->removeRow(row);
    objecttofile_testbookforedit(arrt, testbookingcount);
    delete[] arrt;
    QMessageBox::information(this, "Test Booking Delete", "Record successfully deleted");
}

void MainWindow::datafetchfortestsdata() {
    // Clear existing table data
    ui->testsdataTable->setRowCount(0);

    // Fetch test data
    qDebug() << "Fetching test data..." << "\n";
    laboratory** arr = fetchdata_test_data();

    if (!arr) {
        qDebug() << "Error: test data array is null!";
        return;
    }

    // Configure table
    ui->testsdataTable->setColumnCount(4);  // 4 columns for all fields
    ui->testsdataTable->setHorizontalHeaderLabels({"Test ID", "Test Name", "Price", "Status"});

    // Set column widths
    ui->testsdataTable->setColumnWidth(1, 250);  // Wider for test names
    ui->testsdataTable->setRowCount(testscount);

    // Populate table
    for(int i = 0; i < testscount; i++) {
        // Get data using correct getters
        QString test_id = arr[i]->getTestId();
        QString test_name = arr[i]->getTestName();
        QString test_price = arr[i]->getTestPrice();
        QString test_status = arr[i]->getTestStatus();

        // Set items in table with correct column order
        ui->testsdataTable->setItem(i, 0, new QTableWidgetItem(test_id));
        ui->testsdataTable->setItem(i, 1, new QTableWidgetItem(test_name));
        ui->testsdataTable->setItem(i, 2, new QTableWidgetItem(test_price));
        ui->testsdataTable->setItem(i, 3, new QTableWidgetItem(test_status));

        qDebug() << "Test data" << i << "displayed: " << test_id << test_name;
    }

    delete[] arr;
}

void MainWindow::on_test_del_push_clicked()
{
    // Get currently selected row
    int currentRow = ui->testsdataTable->currentRow();

    // Validate selection
    if (currentRow < 0) {
        QMessageBox::warning(this, "Error", "Please select a test to delete");
        qDebug() << "No test selected for deletion";
        return;
    }

    // Confirm deletion
    QMessageBox::StandardButton reply;
    reply = QMessageBox::question(this, "Confirm Delete",
                                  "Are you sure you want to delete this test?",
                                  QMessageBox::Yes|QMessageBox::No);
    if (reply != QMessageBox::Yes) {
        qDebug() << "Test deletion canceled by user";
        return;
    }

    // Create new array with reduced count
    testscount--;
    laboratory** updatedTests = new laboratory*[testscount];
    int newIndex = 0;

    // Rebuild array without deleted item
    for (int i = 0; i <= testscount; i++) {
        if (i != currentRow) {
            updatedTests[newIndex] = new laboratory(
                ui->testsdataTable->item(i,0)->text(),  // Test ID
                ui->testsdataTable->item(i,1)->text(),  // Test Name
                ui->testsdataTable->item(i,2)->text().replace(" PKR", ""),  // Price (remove currency)
                ui->testsdataTable->item(i,3)->text()   // Status
                );
            newIndex++;
            qDebug() << "Keeping test:" << ui->testsdataTable->item(i,0)->text();
        }
        else {
            qDebug() << "Marked test for deletion:" << ui->testsdataTable->item(i,0)->text();
        }
    }

    // Update UI
    ui->testsdataTable->removeRow(currentRow);

    // Save changes to file
    objecttofile_test_dataforedit(updatedTests, testscount);

    // Cleanup memory
    for (int i = 0; i < testscount; i++) {
        delete updatedTests[i];
    }
    delete[] updatedTests;

    // User feedback
    QMessageBox::information(this, "Success", "Test record deleted successfully");
    qDebug() << "Test deleted. Remaining tests:" << testscount;
}



void MainWindow::on_testdata_pushbutton_clicked()
{
    datafetchfortestsdata();
    ui->test_data_widget->setCurrentIndex(1);

    // Configure table edit triggers
    ui->testsdataTable->setEditTriggers(QAbstractItemView::NoEditTriggers);
    qDebug() << "Test data view activated";
}


void MainWindow::on_lab_complet_push_clicked()
{   QString id=ui->lab_book_id->text();
    testbook **arr=fetchdata_test_booking();
    bool fal=true;
    for(int i=0;i<testbookingcount;i++){
        if(arr[i]->getBookId()==id&&arr[i]->getBookStatus()!="Completed"){
            fal=false;
            arr[i]->setbookstatus("Completed");
            QMessageBox::information(this,"Test Booking","Test is Successfully Delivered");
            break;
        }
    }
    if(fal){
        qDebug()<<"not found anyone "<<"\n";
    }
    objecttofile_testbookforedit(arr,testbookingcount);
    datafetchfortestsbooking();
    ui->lab_widget->setCurrentIndex(0);
    ui->testsTable->setEditTriggers(QAbstractItemView::NoEditTriggers);
}


void MainWindow::on_addWardBtn_clicked()
{
    ui->wards_widget->setCurrentIndex(1);
}


void MainWindow::on_pushButton_5_clicked()
{
    QString ward_id=ui->ward_id->text();
    int wid=ward_id.toInt();
    QString ward_name=ui->ward_name->text();
    QString department=ui->cb_w_dep->currentText();
    //QString depid=ui->cb_w_dep->currentData();
    //int did=depid.toInt();
    QString hdname=ui->cb_w_hd->currentText();
    //QString hd_id=ui->cb_w_hd->currentData();
    //int hid=hd_id.toInt();
    QString noofrooms=ui->rooms_w->text();
    int nr=noofrooms.toInt();
    QString noofn=ui->nurses_w->text();
    int non=noofn.toInt();
    QString noofb=ui->beds_w->text();
    int nob=noofb.toInt();

    takeinput_ward(wid,wid,ward_name,hdname,non,nr,nob);
    ui->wards_widget->setCurrentIndex(0);
}
void MainWindow::on_pushButton_2_clicked() {
    QString name = ui->nurse_name->text().trimmed();
    QString dob = ui->nurse_date->date().toString("dd/MM/yyyy");
    QString gender = ui->comboBox_gender_2->currentText();
    QString address = ui->nurse_address->text().trimmed();
    QString availability = ui->comboBox_gender_3->currentText();
    QString contact = ui->nurse_phone->text().trimmed();
    QString specialization = ui->comboBox_special_2->currentText();
    QString experience = ui->nurse_exp->text().trimmed();
    int id = ui->nurse_id->text().toInt();

    takeInputNurses(name, dob, gender, address, contact, specialization, experience, id, availability);
    dataFetchForNurses();

    QMessageBox::information(this, "Success", "Nurse added successfully.");
}
void MainWindow::dataFetchForNurses() {
    int count = 0;
    Nurses** nursesArr = fetchDataNurses(&count);

    ui->nursesTable->setRowCount(0);
    ui->nursesTable->setRowCount(count);

    for (int i = 0; i < count; ++i) {
        ui->nursesTable->setItem(i, 0, new QTableWidgetItem(nursesArr[i]->getName()));
        ui->nursesTable->setItem(i, 1, new QTableWidgetItem(nursesArr[i]->getDob()));
        ui->nursesTable->setItem(i, 2, new QTableWidgetItem(nursesArr[i]->getGender()));
        ui->nursesTable->setItem(i, 3, new QTableWidgetItem(nursesArr[i]->getAddress()));
        ui->nursesTable->setItem(i, 4, new QTableWidgetItem(nursesArr[i]->getContact()));
        ui->nursesTable->setItem(i, 5, new QTableWidgetItem(QString::number(nursesArr[i]->getId())));
        ui->nursesTable->setItem(i, 6, new QTableWidgetItem(nursesArr[i]->getSpecialization()));
        ui->nursesTable->setItem(i, 7, new QTableWidgetItem(nursesArr[i]->getAvailability()));
        ui->nursesTable->setItem(i, 8, new QTableWidgetItem(nursesArr[i]->getExperience()));
        delete nursesArr[i];
    }
    delete[] nursesArr;
}
//bajwa first addition

void MainWindow::on_pushButton_8_clicked()
{
    QString idText = ui->nurse_id_del->text().trimmed();
    if (idText.isEmpty()) {
        QMessageBox::warning(this, "Input Error", "Please enter a Nurse ID.");
        return;
    }

    int idToDelete = idText.toInt();
    int count = 0;
    Nurses** all = fetchDataNurses(&count);

    QList<Nurses*> filtered;
    bool found = false;

    for (int i = 0; i < count; ++i) {
        if (all[i]->getId() != idToDelete) {
            filtered.append(all[i]);
        } else {
            delete all[i];
            found = true;
        }
    }

    delete[] all;

    if (!found) {
        QMessageBox::warning(this, "Not Found", "No nurse found with that ID.");
        return;
    }

    // Rewrite updated data to file
    int newCount = filtered.size();
    Nurses** updated = new Nurses*[newCount];
    for (int i = 0; i < newCount; ++i)
        updated[i] = filtered[i];

    objectToFileNursesForEdit(updated, newCount);
    delete[] updated;

    // Refresh the table
    dataFetchForNurses();

    // Confirmation
    QMessageBox::information(this, "Deleted", "Nurse deleted successfully.");

}



void MainWindow::on_room_add_bttn_clicked()
{
    QString room_id=ui->room_id_edit->text();
    int rid=room_id.toInt();
    QString dep_name=ui->room_dep->currentText();
    int  ward_id=123;
    //QString depid=ui->cb_w_dep->currentData();
    //int did=depid.toInt();
    QString assnurse=ui->assnurseComboBox->currentText();

    int nid=213;

    QString noofbeds=ui->room_bed->text();
    int nfbeds=noofbeds.toInt();

    takeinput_room(ward_id,rid,nfbeds,assnurse,nid);

    ui->room_widget->setCurrentIndex(0);

}


void MainWindow::on_addRoomBtn_clicked()
{
    ui->room_widget->setCurrentIndex(1);

}


void MainWindow::on_wardRoomTabs_tabBarClicked(int index)
{
    if(index==1){
        ui->room_widget->setCurrentIndex(0);
    }
}

