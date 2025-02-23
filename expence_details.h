#ifndef EXPENCE_DETAILS_H
#define EXPENCE_DETAILS_H

#include "reports.h"

#include <QMainWindow>
#include <QDate>

class expences; // Forward declaration
class reports;

namespace Ui {
class total_expences;
}

class total_expences : public QMainWindow
{
    Q_OBJECT

public:
    explicit total_expences(const QString &userEmail, QWidget *parent = nullptr);
    ~total_expences();

private slots:
    void on_totalexpenceBack_clicked();
    void on_ReportpushButton_clicked();
    void on_showDetailsButton_clicked();  // Added new slot for Show Details button

private:
    Ui::total_expences *ui;
    expences *expencesWindow;
    reports *reportsWindow;
    QString userEmail;

    void loadExpenceData(const QString &month, int year);  // Updated to filter by month
};

#endif // EXPENCE_DETAILS_H
