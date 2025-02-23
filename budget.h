#ifndef BUDGET_H
#define BUDGET_H

#include "dashboard.h"
#include <QMainWindow>
#include "database.h"

class dashboard;  // Forward declaration

namespace Ui {
class budget;
}

class budget : public QMainWindow
{
    Q_OBJECT

public:
    explicit budget(const QString &userEmail, QWidget *parent = nullptr);
    ~budget();

private slots:
    void on_BudgetBack_clicked();
    void on_addBudgetData_clicked();
    void on_BudgetClear_clicked();
    void on_refreshButton_clicked();

private:
    Ui::budget *ui;
    dashboard *dashboardWindow;
    QString userEmail;
    void GetBudgetData();
    Database db;
};

#endif
