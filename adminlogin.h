
#ifndef ADMINLOGIN_H
#define ADMINLOGIN_H

#include <QMainWindow>

namespace Ui {
class AdminLogin;
}

class AdminLogin : public QMainWindow
{
    Q_OBJECT

public:
    explicit AdminLogin(QWidget *parent = nullptr);
    ~AdminLogin();

private slots:
    void on_loginButton_clicked();

    void on_patientButton_clicked();

    void on_doctorButton_clicked();

    void on_pushButton_clicked();

private:
    Ui::AdminLogin *ui;
};

#endif // ADMINLOGIN_H
