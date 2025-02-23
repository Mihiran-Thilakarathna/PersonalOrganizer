#ifndef INCOME_EXPENCE_DASH_H
#define INCOME_EXPENCE_DASH_H

#include "incomes.h"
#include "expences.h"
#include "dashboard.h"


#include <QMainWindow>

class dashboard;
class expences;
class incomes;    // Forward declaration of the dashboard class

namespace Ui {
class income_Expence_dash;
}

class income_Expence_dash : public QMainWindow
{
    Q_OBJECT

public:
    explicit income_Expence_dash(const QString &userEmail,QWidget *parent = nullptr);
    ~income_Expence_dash();

private slots:
    void on_incomeButton_clicked();

    void on_ExpenceButton_clicked();

    void on_indashbackButton_clicked();

private:
    Ui::income_Expence_dash *ui;
    incomes *incomesWindow;
    expences *expencesWindow;
    dashboard *dashboardWindow;
    QString userEmail;
};

#endif // INCOME_EXPENCE_DASH_H
