#include "incomes.h"
#include "ui_incomes.h"

#include "income_expence_dash.h"

#include "database.h"
#include <QMessageBox>

incomes::incomes(const QString &userEmail,QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::incomes), userEmail(userEmail)
{
    ui->setupUi(this);
    income_Expence_dash_Window = qobject_cast<income_Expence_dash*>(parent);
}

incomes::~incomes()
{
    delete ui;
}

void incomes::on_incomesBack_clicked()
{
    this->hide();
    income_Expence_dash_Window->show();
}


void incomes::on_incomeAdd_clicked()
{
    // Get data from form
    QString source = ui->incomeSourceComboBox->currentText();
    double amount = ui->amountLineEdit->text().toDouble();
    QString description = ui->descriptionLineEdit->text();
    QString date = ui->dateEdit->selectedDate().toString("yyyy-MM-dd");

    // Create a Database object and add income
    Database db;
    if (db.addIncome(source, amount, description, date, userEmail))
    {
        QMessageBox::information(this, "Success", "Income added successfully");
    }
    else
    {
        QMessageBox::warning(this, "Error", "Failed to add income");
    }

}


void incomes::on_incomeClear_clicked()
{
    ui->incomeSourceComboBox->setCurrentIndex(0);
    ui->amountLineEdit->clear();
    ui->descriptionLineEdit->clear();
    ui->dateEdit->setSelectedDate(QDate::currentDate());

}


void incomes::on_totalIncomeButton_clicked()
{
    hide();
    total_incomesWindow = new total_incomes(userEmail,this);
    total_incomesWindow->show();
}

