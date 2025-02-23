#ifndef ACADEMIC_H
#define ACADEMIC_H

#include "dashboard.h"
#include <QMainWindow>
#include "assignment.h"
#include <QTimer>
#include <QMap>

class dashboard;
class assignment;

namespace Ui {
class academic;
}

class academic : public QMainWindow
{
    Q_OBJECT

public:
    explicit academic(const QString &userEmail, QWidget *parent = nullptr);
    ~academic();

private slots:
    void on_academicBack_clicked();
    void on_assAddLink_clicked();
    void on_AcademicAdd_clicked();
    void on_viewScheduleButton_clicked();  // Updated slot function

private:
    Ui::academic *ui;
    dashboard *dashboardWindow;
    assignment *assignmentWindow;
    QString userEmail;
    QTimer *notificationTimer;

    void checkUpcomingLectures();
    void loadAcademicDataByMonth(const QString &month, int year);
};

#endif // ACADEMIC_H
