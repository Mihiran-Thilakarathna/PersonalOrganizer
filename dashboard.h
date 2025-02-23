#ifndef DASHBOARD_H
#define DASHBOARD_H

#include "income_expence_dash.h"
#include "budget.h"
#include "financial.h"
#include "academic.h"

class income_Expence_dash; // Forward declare income_Expence_dash
class budget;
class academic;
class Financial;

#include <QMainWindow>

namespace Ui {
class dashboard;
}

class dashboard : public QMainWindow
{
    Q_OBJECT

public:
    explicit dashboard(const QString &userEmail, QWidget *parent = nullptr);
    ~dashboard();

private slots:
    void on_inexTrackerButton_clicked();
    void on_budgetingButton_clicked();
    void on_financialButton_clicked();
    void on_academicButton_clicked();
    void on_logoutButton_clicked();

private:
    Ui::dashboard *ui;
    QString userEmail; // Stores the user's email
    income_Expence_dash *income_expenceWindow;
    budget *budgetWindow;
    Financial *financialWindow;
    academic *academicWindow;

    // Helper function to get the full name from the email
    QString getFullNameFromEmail(const QString &email);
};

#endif // DASHBOARD_H
