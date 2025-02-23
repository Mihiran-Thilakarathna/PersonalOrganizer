#include "income_expence_dash.h"
#include "ui_income_expence_dash.h"
#include "dashboard.h"

 income_Expence_dash::income_Expence_dash(const QString &userEmail,QWidget *parent)
     : QMainWindow(parent)
     , ui(new Ui::income_Expence_dash), userEmail(userEmail)
 {
    ui->setupUi(this);
    dashboardWindow = qobject_cast<dashboard*>(parent);
 }



income_Expence_dash::~income_Expence_dash()
{
    delete ui;
}

void income_Expence_dash::on_incomeButton_clicked()
{
    hide();
    incomesWindow = new incomes(userEmail,this);
    incomesWindow->show();
}


void income_Expence_dash::on_ExpenceButton_clicked()
{
    hide();
    expencesWindow = new expences(userEmail,this);
    expencesWindow->show();
}

void income_Expence_dash::on_indashbackButton_clicked()
{
    this->hide();
    dashboardWindow->show();
}

