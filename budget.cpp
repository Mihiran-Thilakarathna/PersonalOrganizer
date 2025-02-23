#include "budget.h"
#include "ui_budget.h"
#include "dashboard.h"
#include "database.h"
#include <QMessageBox>

budget::budget(const QString &userEmail, QWidget *parent)
    : QMainWindow(parent), ui(new Ui::budget), userEmail(userEmail)
{
    ui->setupUi(this);
    dashboardWindow = qobject_cast<dashboard*>(parent);
}

budget::~budget()
{
    delete ui;
}

void budget::on_BudgetBack_clicked()
{
    this->hide();
    dashboardWindow->show();
}

void budget::GetBudgetData()
{
    ui->tableWidget->setRowCount(0);  // Clear table data

    QString selectedMonth = ui->monthComboBox->currentText();
    int currentYear = QDate::currentDate().year();

    if (selectedMonth.isEmpty()) {
        QMessageBox::warning(this, "Warning", "Please select a month.");
        return;
    }

    QMap<QString, int> monthMap = {
        {"January", 1}, {"February", 2}, {"March", 3}, {"April", 4},
        {"May", 5}, {"June", 6}, {"July", 7}, {"August", 8},
        {"September", 9}, {"October", 10}, {"November", 11}, {"December", 12}
    };

    if (!monthMap.contains(selectedMonth)) {
        QMessageBox::warning(this, "Warning", "Invalid month selected.");
        return;
    }

    int monthNumber = monthMap.value(selectedMonth);
    QString startDate = QString("%1-%2-01").arg(currentYear).arg(monthNumber, 2, 10, QChar('0'));
    QDate endDate = QDate(currentYear, monthNumber, 1).addMonths(1).addDays(-1);
    QString endDateStr = endDate.toString("yyyy-MM-dd");

    Database db;
    QSqlQuery query;
    query.prepare("SELECT category, amount, date FROM budget "
                  "WHERE userEmail = :userEmail AND date BETWEEN :startDate AND :endDate");
    query.bindValue(":userEmail", userEmail);
    query.bindValue(":startDate", startDate);
    query.bindValue(":endDate", endDateStr);

    double totalAmount = 0.0;

    if (query.exec()) {
        int row = 0;
        while (query.next()) {
            ui->tableWidget->insertRow(row);
            ui->tableWidget->setItem(row, 0, new QTableWidgetItem(query.value("category").toString()));
            ui->tableWidget->setItem(row, 1, new QTableWidgetItem(query.value("amount").toString()));
            ui->tableWidget->setItem(row, 2, new QTableWidgetItem(query.value("date").toString()));
            totalAmount += query.value("amount").toDouble();
            row++;
        }
        ui->totalBudgetLineEdit->setText(QString::number(totalAmount, 'f', 2));
    } else {
        qDebug() << "Error fetching data: " << query.lastError().text();
        ui->totalBudgetLineEdit->setText("0.00");
    }
}

void budget::on_addBudgetData_clicked()
{
    QString category = ui->categoryComboBox->currentText();
    double amount = ui->amountLineEdit->text().toDouble();
    QString date = ui->dateEdit->date().toString("yyyy-MM-dd");

    QString month = QDate::fromString(date, "yyyy-MM-dd").toString("MMMM");
    int year = QDate::fromString(date, "yyyy-MM-dd").year();

    Database db;
    QSqlQuery query;
    query.prepare("SELECT amount FROM budget WHERE userEmail = :userEmail AND category = :category AND date LIKE :monthPattern");
    query.bindValue(":userEmail", userEmail);
    query.bindValue(":category", category);
    query.bindValue(":monthPattern", QString("%1-%2-%").arg(year).arg(QDate::fromString(month, "MMMM").month(), 2, 10, QChar('0')));

    if (query.exec() && query.next()) {
        QString selectedMonth = QDate::fromString(date, "yyyy-MM-dd").toString("MMMM");
        QMessageBox::information(this, "Budget Exists",
                                 QString("A budget for the '%1' category already exists for %2. You cannot add the budget again.")
                                     .arg(category).arg(selectedMonth));
        return;
    } else {
        if (db.addBudget(category, amount, date, userEmail)) {
            QMessageBox::information(this, "Success", "Budget added successfully.");
        } else {
            QMessageBox::warning(this, "Error", "Failed to add budget.");
        }
    }
}

void budget::on_BudgetClear_clicked()
{
    ui->categoryComboBox->setCurrentIndex(0);
    ui->amountLineEdit->clear();
    ui->dateEdit->setDate(QDate::currentDate());
}

void budget::on_refreshButton_clicked()
{
    GetBudgetData();
}
