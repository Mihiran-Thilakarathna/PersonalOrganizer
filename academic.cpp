#include "academic.h"
#include "ui_academic.h"
#include "dashboard.h"
#include "assignment.h"
#include "database.h"
#include <QMessageBox>
#include <QDateTime>
#include <QTimer>
#include <QDebug>
#include <QMap>
#include <QSqlQuery>
#include <QSqlError>

academic::academic(const QString &userEmail, QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::academic), userEmail(userEmail)
{
    ui->setupUi(this);
    dashboardWindow = qobject_cast<dashboard*>(parent);

    // Removed automatic data loading
    // GetAcademicData();  // No automatic loading of data on initialization

    // Connect view button to the slot
    connect(ui->viewScheduleButton, &QPushButton::clicked, this, &academic::on_viewScheduleButton_clicked);

    // Timer for upcoming lecture notifications
    notificationTimer = new QTimer(this);
    connect(notificationTimer, &QTimer::timeout, this, &academic::checkUpcomingLectures);
    notificationTimer->start(60000);  // Check every minute
}

academic::~academic()
{
    delete ui;
}

void academic::on_academicBack_clicked()
{
    this->hide();
    dashboardWindow->show();
}

void academic::on_assAddLink_clicked()
{
    hide();
    assignmentWindow = new assignment(this);
    assignmentWindow->show();
}

void academic::on_AcademicAdd_clicked()
{
    QString subject = ui->subjectlineEdit->text();
    QString subjectCode = ui->subjectCodelineEdit->text();
    QString date = ui->AcademicdateEdit->date().toString("yyyy-MM-dd");
    QString time = ui->timeEdit->time().toString("HH:mm");
    QString venue = ui->venueLineEdit->text();

    Database db;
    if (db.addacademic(subject, subjectCode, date, time, venue, userEmail))
    {
        QMessageBox::information(this, "Success", "Academic added successfully");
    }
    else
    {
        QMessageBox::warning(this, "Error", "Failed to add Academic");
    }
}

void academic::on_viewScheduleButton_clicked()
{
    QString selectedMonth = ui->monthComboBox->currentText();
    int year = QDate::currentDate().year();  // Use the current year

    if (selectedMonth.isEmpty()) {
        QMessageBox::warning(this, "Selection Error", "Please select a valid month.");
        return;
    }

    loadAcademicDataByMonth(selectedMonth, year);  // Load data only after month selection
}

void academic::loadAcademicDataByMonth(const QString &month, int year)
{
    QMap<QString, int> monthMap = {
        {"January", 1}, {"February", 2}, {"March", 3}, {"April", 4},
        {"May", 5}, {"June", 6}, {"July", 7}, {"August", 8},
        {"September", 9}, {"October", 10}, {"November", 11}, {"December", 12}
    };

    if (!monthMap.contains(month)) {
        qDebug() << "Invalid month selected.";
        QMessageBox::warning(this, "Error", "Invalid month selected.");
        return;
    }

    int monthNumber = monthMap.value(month);
    QString startDate = QString("%1-%2-01").arg(year).arg(monthNumber, 2, 10, QChar('0'));
    QDate endDate = QDate(year, monthNumber, 1).addMonths(1).addDays(-1);
    QString endDateStr = endDate.toString("yyyy-MM-dd");

    ui->tableWidget->setRowCount(0);

    Database db;
    QSqlQuery query;
    query.prepare("SELECT subject, subjectCode, date, time, venue FROM academic "
                  "WHERE userEmail = :userEmail AND date BETWEEN :startDate AND :endDate");
    query.bindValue(":userEmail", userEmail);
    query.bindValue(":startDate", startDate);
    query.bindValue(":endDate", endDateStr);

    if (query.exec()) {
        int row = 0;
        while (query.next()) {
            ui->tableWidget->insertRow(row);
            ui->tableWidget->setItem(row, 0, new QTableWidgetItem(query.value("subject").toString()));
            ui->tableWidget->setItem(row, 1, new QTableWidgetItem(query.value("subjectCode").toString()));
            ui->tableWidget->setItem(row, 2, new QTableWidgetItem(query.value("date").toString()));
            ui->tableWidget->setItem(row, 3, new QTableWidgetItem(query.value("time").toString()));
            ui->tableWidget->setItem(row, 4, new QTableWidgetItem(query.value("venue").toString()));
            row++;
        }
    } else {
        qDebug() << "Error fetching data: " << query.lastError().text();
        QMessageBox::warning(this, "Database Error", "Could not fetch data for the selected month and year.");
    }
}

void academic::checkUpcomingLectures()
{
    QDateTime currentTime = QDateTime::currentDateTime();
    QSqlQuery query;
    query.prepare("SELECT subject, date, time, venue FROM academic WHERE userEmail = :userEmail");
    query.bindValue(":userEmail", userEmail);

    if (query.exec()) {
        while (query.next()) {
            QString subject = query.value("subject").toString();
            QString date = query.value("date").toString();
            QString time = query.value("time").toString();
            QString venue = query.value("venue").toString();

            QDateTime lectureTime = QDateTime::fromString(date + " " + time, "yyyy-MM-dd HH:mm");
            int minutesToLecture = currentTime.secsTo(lectureTime) / 60;

            if (minutesToLecture == 10) {
                QMessageBox::information(this, "Upcoming Lecture",
                                         QString("Your lecture '%1' is in 10 minutes at '%2'").arg(subject, venue));
            }
        }
    } else {
        qDebug() << "Error fetching data: " << query.lastError().text();
    }
}
