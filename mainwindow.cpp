#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "registration.h"
#include "database.h"

#include <QMessageBox>  // Include for displaying error messages


MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    // Set placeholders
    ui->lineEdit_3->setPlaceholderText("Enter Email as user name");
    ui->lineEdit_2->setPlaceholderText("Enter Password");


}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_pushButton_clicked()
{
    QString email = ui->lineEdit_3->text();  // Ensure this matches your UI design
    QString password = ui->lineEdit_2->text(); // Ensure this matches your UI design

    if (db.userExists(email, password)) {
        userEmail = email;  // Store the user's email
        QMessageBox::information(this, "Login", "Login successful");
        hide();
        Dash = new dashboard(userEmail,this);//pass email
        Dash->show();
    }
    else {
        QMessageBox::warning(this, "Login", "Invalid email or password");
    }
}



void MainWindow::on_pushButton_3_clicked()
{
    hide();
    Registration = new registration(this);
    Registration->show();
}
