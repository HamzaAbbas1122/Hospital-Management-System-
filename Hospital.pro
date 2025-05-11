QT += core gui network widgets

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++17

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    administrators.cpp \
    adminlogin.cpp \
    aichatwindow.cpp \
    deepseekhandler.cpp \
    appointment.cpp \
    beds.cpp \
    bills.cpp \
    build/Desktop_Qt_6_9_0_MinGW_64_bit-Debug/form.cpp \
    depatment.cpp \
    doctor.cpp \
    doctorui.cpp \
    functions.cpp \
    global.cpp \
    laboratory.cpp \
    main.cpp \
    mainwindow.cpp \
    medicine.cpp \
    nurses.cpp \
    patient.cpp \
    patientui.cpp \
    person.cpp \
    receptionists.cpp \
    rooms.cpp \
    staff.cpp \
    testbook.cpp \
    ward.cpp

HEADERS += \
    administrators.h \
    adminlogin.h \
    aichatwindow.h \
    deepseekhandler.h \
    appointment.h \
    beds.h \
    bills.h \
    build/Desktop_Qt_6_9_0_MinGW_64_bit-Debug/form.h \
    depatment.h \
    doctor.h \
    doctorui.h \
    functions.h \
    global.h \
    laboratory.h \
    mainwindow.h \
    medicine.h \
    nurses.h \
    patient.h \
    patientui.h \
    person.h \
    receptionists.h \
    rooms.h \
    staff.h \
    testbook.h \
    ward.h

FORMS += \
    build/Desktop_Qt_6_9_0_MinGW_64_bit-Debug/aichatwindow.ui \
    build/Desktop_Qt_6_9_0_MinGW_64_bit-Debug/adminlogin.ui \
    build/Desktop_Qt_6_9_0_MinGW_64_bit-Debug/doctorui.ui \
    build/Desktop_Qt_6_9_0_MinGW_64_bit-Debug/form.ui \
    build/Desktop_Qt_6_9_0_MinGW_64_bit-Debug/mainwindow.ui \
    build/Desktop_Qt_6_9_0_MinGW_64_bit-Debug/patientui.ui

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target

DISTFILES += \
    build/Desktop_Qt_6_9_0_MinGW_64_bit-Debug/activityrecord.txt \
    build/Desktop_Qt_6_9_0_MinGW_64_bit-Debug/adminrecord.txt \
    build/Desktop_Qt_6_9_0_MinGW_64_bit-Debug/appointmentrecord.txt \
    build/Desktop_Qt_6_9_0_MinGW_64_bit-Debug/bedrecord.txt \
    build/Desktop_Qt_6_9_0_MinGW_64_bit-Debug/billrecord.txt \
    build/Desktop_Qt_6_9_0_MinGW_64_bit-Debug/departmentrecord.txt \
    build/Desktop_Qt_6_9_0_MinGW_64_bit-Debug/doctorrecord.txt \
    build/Desktop_Qt_6_9_0_MinGW_64_bit-Debug/nursesrecord.txt \
    build/Desktop_Qt_6_9_0_MinGW_64_bit-Debug/patientrecord.txt \
    build/Desktop_Qt_6_9_0_MinGW_64_bit-Debug/pharmacyrecord.txt \
    build/Desktop_Qt_6_9_0_MinGW_64_bit-Debug/receptionistsrecord.txt \
    build/Desktop_Qt_6_9_0_MinGW_64_bit-Debug/roomrecord.txt \
    build/Desktop_Qt_6_9_0_MinGW_64_bit-Debug/testsbookingrecord.txt \
    build/Desktop_Qt_6_9_0_MinGW_64_bit-Debug/testsrecord.txt \
    build/Desktop_Qt_6_9_0_MinGW_64_bit-Debug/wardrecord.txt
