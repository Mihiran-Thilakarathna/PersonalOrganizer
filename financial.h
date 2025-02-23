#ifndef FINANCIAL_H
#define FINANCIAL_H
#include "dashboard.h"

#include <QMainWindow>
class dashboard;//foward declaration

namespace Ui {
class Financial;
}

class Financial : public QMainWindow
{
    Q_OBJECT

public:
    explicit Financial(QWidget *parent = nullptr);
    ~Financial();

private slots:
    void on_financialBack_clicked();

private:
    Ui::Financial *ui;
    dashboard *dashboardWindow;
};

#endif // FINANCIAL_H
