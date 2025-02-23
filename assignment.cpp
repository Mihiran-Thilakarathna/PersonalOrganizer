#include "assignment.h"
#include "ui_assignment.h"
#include "academic.h"

#include "database.h"
#include <QMessageBox>

assignment::assignment(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::assignment)
{
    ui->setupUi(this);
    academicWindow = qobject_cast<academic*>(parent);
}

assignment::~assignment()
{
    delete ui;
}

void assignment::on_assignmentBack_clicked()
{
    this->hide();
    academicWindow->show();
}


void assignment::on_AssignmentAdd_clicked()
{
    // Get data from form
    QString subject = ui->subjectLineEdit->text();
    QString subjectCode = ui->subCodeLineEdit->text();
    QString startdate = ui->startdateEdit->date().toString("yyyy-MM-dd");
    QString deadlinedate = ui->DeadlinedateEdit->date().toString("yyyy-MM-dd");


    // Create a Database object and add assignment
    Database db;
    if (db.addAssignment(subject,subjectCode, startdate, deadlinedate))
    {
        QMessageBox::information(this, "Success", "Expense added successfully");
    }
    else
    {
        QMessageBox::warning(this, "Error", "Failed to add expense");
    }
}

