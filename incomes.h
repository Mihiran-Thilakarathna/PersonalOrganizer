#ifndef INCOMES_H
#define INCOMES_H
#include "income_details.h"

#include "income_expence_dash.h"

#include <QMainWindow>

class income_Expence_dash;// Forward declaration of the dashboard class
class total_incomes;

namespace Ui {
class incomes;
}

class incomes : public QMainWindow
{
    Q_OBJECT

public:
    explicit incomes(const QString &userEmail,QWidget *parent = nullptr);
    ~incomes();

private slots:
    void on_incomesBack_clicked();

    void on_incomeAdd_clicked();

    void on_incomeClear_clicked();

    void on_totalIncomeButton_clicked();

private:
    Ui::incomes *ui;
    income_Expence_dash *income_Expence_dash_Window;
    QString userEmail;
    total_incomes *total_incomesWindow;

};

#endif // INCOMES_H
