#include "dashboard.h"
#include "ui_dashboard.h"
#include "income_expence_dash.h"  // Include the actual header here
#include "mainwindow.h"
#include <QSqlQuery>              // Include for database query
#include <QSqlError>              // Include for error handling
#include <QDebug>                 // Include for debugging

dashboard::dashboard(const QString &userEmail, QWidget *parent)
    : QMainWindow(parent), ui(new Ui::dashboard), userEmail(userEmail)
{
    ui->setupUi(this);

    // Retrieve the full name from the database
    QString fullName = getFullNameFromEmail(userEmail);

    // Update the label to display the full name
    if (!fullName.isEmpty()) {
        ui->emaillabel->setText("Hi " + fullName);
    } else {
        ui->emaillabel->setText("Hi User"); // Fallback if no name is found
    }
}

dashboard::~dashboard()
{
    delete ui;
}

// Helper function to retrieve the full name from the email
QString dashboard::getFullNameFromEmail(const QString &email)
{
    QString fullName;

    // Perform SQL query to retrieve the full name
    QSqlQuery query;
    query.prepare("SELECT full_name FROM users WHERE email = :email");
    query.bindValue(":email", email);

    if (query.exec()) {
        if (query.next()) {
            fullName = query.value(0).toString(); // Get the full_name column
        }
    } else {
        qDebug() << "Database query error:" << query.lastError().text();
    }

    return fullName;
}

// Income and Expense Tracker button
void dashboard::on_inexTrackerButton_clicked()
{
    hide();
    income_expenceWindow = new income_Expence_dash(userEmail, this);
    income_expenceWindow->show();
}

// Budgeting button
void dashboard::on_budgetingButton_clicked()
{
    hide();
    budgetWindow = new budget(userEmail, this);
    budgetWindow->show();
}

// Financial Reports button
void dashboard::on_financialButton_clicked()
{
    hide();
    financialWindow = new Financial(this);
    financialWindow->show();
}

// Academic Schedule button
void dashboard::on_academicButton_clicked()
{
    hide();
    academicWindow = new academic(userEmail, this);
    academicWindow->show();
}

// Logout button
void dashboard::on_logoutButton_clicked()
{
    close();
    MainWindow *main = new MainWindow(this);
    main->show();
}
