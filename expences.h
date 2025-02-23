#ifndef EXPENCES_H
#define EXPENCES_H

#include "expence_details.h"
#include "income_expence_dash.h"
#include <QMainWindow>
#include <QSqlQuery>

class income_Expence_dash;  // Forward declaration of the dashboard class
class total_expences;

namespace Ui {
class expences;
}

class expences : public QMainWindow
{
    Q_OBJECT

public:
    explicit expences(const QString &userEmail, QWidget *parent = nullptr);
    ~expences();

private slots:
    void on_expenceback_clicked();
    void on_expenceAdd_clicked();
    void on_expenceClear_clicked();
    void on_totalExpenceButton_clicked();

private:
    double getTotalMonthlyBudget(const QString &userEmail, const QString &year, const QString &monthPattern);  // Added method

private:
    Ui::expences *ui;
    income_Expence_dash *income_Expence_dash_Window;
    QString userEmail;
    total_expences *total_expencesWindow;
};

#endif // EXPENCES_H
