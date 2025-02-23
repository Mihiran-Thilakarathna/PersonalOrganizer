#include "registration.h"
#include "ui_registration.h"
#include "database.h"
#include <QMessageBox>  // Include this for message dialogs

registration::registration(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::registration)
{
    ui->setupUi(this);

    // Set placeholders for each field
    ui->lineEdit->setPlaceholderText("Enter Your Full Name");
    ui->lineEdit_2->setPlaceholderText("Enter Your Email");
    ui->lineEdit_3->setPlaceholderText("Enter Your Phone Number");
    ui->lineEdit_4->setPlaceholderText("Enter Password");
    ui->lineEdit_5->setPlaceholderText("Confirm Password");
}

registration::~registration()
{
    delete ui;
}

void registration::on_pushButton_clicked()
{
    QString fullName = ui->lineEdit->text();
    QString email = ui->lineEdit_2->text();
    QString phone = ui->lineEdit_3->text();
    QString password = ui->lineEdit_4->text();
    QString confirmPassword = ui->lineEdit_5->text();

    // Check for empty fields
    if (fullName.isEmpty() || email.isEmpty() || phone.isEmpty() ||
        password.isEmpty() || confirmPassword.isEmpty())
    {
        QMessageBox::warning(this, "Input Error", "Please fill all fields.");
        return;
    }

    // Check if passwords match
    if (password != confirmPassword)
    {
        QMessageBox::warning(this, "Password Mismatch", "Passwords do not match.");
        return;
    }

    QSqlQuery query;
    query.prepare("INSERT INTO users (full_name, email, phone, password) "
                  "VALUES (:full_name, :email, :phone, :password)");
    query.bindValue(":full_name", fullName);
    query.bindValue(":email", email);
    query.bindValue(":phone", phone);
    query.bindValue(":password", password);

    if (query.exec())
    {
        QMessageBox::information(this, "Registration Successful", "Account created successfully. You can now log in.");
        hide();
        parentWidget()->show();
    }
    else
    {
        QMessageBox::critical(this, "Registration Failed", query.lastError().text());
    }
}

void registration::on_pushButton_2_clicked()
{
    hide();
    parentWidget()->show();
}
