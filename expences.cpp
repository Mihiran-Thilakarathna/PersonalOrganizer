#include "expences.h"
#include "ui_expences.h"
#include "income_expence_dash.h"
#include "database.h"
#include <QMessageBox>

expences::expences(const QString &userEmail, QWidget *parent)
    : QMainWindow(parent), ui(new Ui::expences), userEmail(userEmail)
{
    ui->setupUi(this);
    income_Expence_dash_Window = qobject_cast<income_Expence_dash*>(parent);
}

expences::~expences()
{
    delete ui;
}

void expences::on_expenceback_clicked()
{
    this->hide();
    income_Expence_dash_Window->show();
}

double expences::getTotalMonthlyBudget(const QString &userEmail, const QString &year, const QString &monthPattern)
{
    QSqlQuery query;
    double totalBudget = 0.0;

    query.prepare("SELECT SUM(amount) FROM budget WHERE userEmail = :userEmail "
                  "AND strftime('%Y', date) = :year AND strftime('%m', date) = :month");
    query.bindValue(":userEmail", userEmail);
    query.bindValue(":year", year);
    query.bindValue(":month", monthPattern);

    if (query.exec() && query.next()) {
        totalBudget = query.value(0).toDouble();
    }

    return totalBudget;
}

void expences::on_expenceAdd_clicked()
{
    QString category = ui->expenceCategoryComboBox->currentText();
    double amount = ui->amountLineEdit->text().toDouble();
    QString description = ui->descriptionLineEdit->text();
    QString date = ui->dateEdit->selectedDate().toString("yyyy-MM-dd");

    QDate selectedDate = ui->dateEdit->selectedDate();
    QString month = selectedDate.toString("MMMM");
    QString year = QString::number(selectedDate.year());
    QString monthPattern = selectedDate.toString("MM");

    Database db;
    double categoryBudgetLimit = 0.0;

    if (!db.getBudgetLimit(category, userEmail, categoryBudgetLimit)) {
        QMessageBox::warning(this, "Budget Not Set",
                             QString("You cannot add an expense because no budget is set for the '%1' category in %2 %3.")
                                 .arg(category).arg(month).arg(year));
        return;
    }

    QSqlQuery query;
    query.prepare("SELECT SUM(amount) FROM expense WHERE category = :category AND userEmail = :userEmail "
                  "AND strftime('%Y', date) = :year AND strftime('%m', date) = :month");
    query.bindValue(":category", category);
    query.bindValue(":userEmail", userEmail);
    query.bindValue(":year", year);
    query.bindValue(":month", monthPattern);

    if (query.exec() && query.next()) {
        double totalSpentInCategory = query.value(0).toDouble() + amount;
        double categoryExceededAmount = totalSpentInCategory - categoryBudgetLimit;
        double categoryRemainingAmount = categoryBudgetLimit - query.value(0).toDouble();

        if (totalSpentInCategory > categoryBudgetLimit) {
            QMessageBox::warning(this, "Category Budget Exceeded",
                                 QString("Adding this expense exceeds the budget limit for '%1' in %2 %3.\n"
                                         "Total Budget: %4\nExceeded Amount: %5\nRemaining Amount Before Adding: %6")
                                     .arg(category)
                                     .arg(month)
                                     .arg(year)
                                     .arg(QString::number(categoryBudgetLimit, 'f', 2))
                                     .arg(QString::number(categoryExceededAmount, 'f', 2))
                                     .arg(QString::number(categoryRemainingAmount, 'f', 2)));
            return;
        }
    }

    double totalMonthlyBudget = getTotalMonthlyBudget(userEmail, year, monthPattern);
    query.prepare("SELECT SUM(amount) FROM expense WHERE userEmail = :userEmail "
                  "AND strftime('%Y', date) = :year AND strftime('%m', date) = :month");
    query.bindValue(":userEmail", userEmail);
    query.bindValue(":year", year);
    query.bindValue(":month", monthPattern);

    if (query.exec() && query.next()) {
        double totalMonthlyExpenses = query.value(0).toDouble() + amount;
        double monthlyExceededAmount = totalMonthlyExpenses - totalMonthlyBudget;
        double monthlyRemainingAmount = totalMonthlyBudget - query.value(0).toDouble();

        if (totalMonthlyExpenses > totalMonthlyBudget) {
            QMessageBox::warning(this, "Total Budget Exceeded",
                                 QString("Adding this expense exceeds your total budget for %1 %2.\n"
                                         "Total Budget: %3\nExceeded Amount: %4\nRemaining Amount Before Adding: %5")
                                     .arg(month)
                                     .arg(year)
                                     .arg(QString::number(totalMonthlyBudget, 'f', 2))
                                     .arg(QString::number(monthlyExceededAmount, 'f', 2))
                                     .arg(QString::number(monthlyRemainingAmount, 'f', 2)));
            return;
        }
    }

    if (db.addExpense(category, amount, description, date, userEmail)) {
        QMessageBox::information(this, "Success", "Expense added successfully.");
    } else {
        QMessageBox::warning(this, "Error", "Failed to add expense.");
    }
}

void expences::on_expenceClear_clicked()
{
    ui->expenceCategoryComboBox->setCurrentIndex(0);
    ui->amountLineEdit->clear();
    ui->descriptionLineEdit->clear();
    ui->dateEdit->setSelectedDate(QDate::currentDate());
}

void expences::on_totalExpenceButton_clicked()
{
    hide();
    total_expencesWindow = new total_expences(userEmail, this);
    total_expencesWindow->show();
}
