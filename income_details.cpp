#include "income_details.h"
#include "ui_income_details.h"
#include "incomes.h"

total_incomes::total_incomes(const QString &userEmail, QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::total_incomes)
    , userEmail(userEmail)
{
    ui->setupUi(this);
    incomesWindow = qobject_cast<incomes*>(parent);

    // Connect "Show Details" button to the appropriate slot
    connect(ui->showDetailsButton, &QPushButton::clicked, this, &total_incomes::onShowDetailsClicked);
}

total_incomes::~total_incomes()
{
    delete ui;
}

void total_incomes::on_totalincomeBack_clicked()
{
    this->hide();
    incomesWindow->show();
}

void total_incomes::loadincomeData(const QString &month, int year)
{
    // Map months to numeric values
    QMap<QString, int> monthMap = {
        {"January", 1}, {"February", 2}, {"March", 3}, {"April", 4},
        {"May", 5}, {"June", 6}, {"July", 7}, {"August", 8},
        {"September", 9}, {"October", 10}, {"November", 11}, {"December", 12}
    };

    if (!monthMap.contains(month)) {
        qDebug() << "Invalid month selected.";
        return;
    }

    int monthNumber = monthMap.value(month);
    QString startDate = QString("%1-%2-01").arg(year).arg(monthNumber, 2, 10, QChar('0'));
    QDate endDate = QDate(year, monthNumber, 1).addMonths(1).addDays(-1);
    QString endDateStr = endDate.toString("yyyy-MM-dd");

    // Connect to the database
    Database db;
    QSqlQuery query;
    query.prepare("SELECT source, amount, description, date FROM income "
                  "WHERE userEmail = :userEmail AND date BETWEEN :startDate AND :endDate");
    query.bindValue(":userEmail", userEmail);
    query.bindValue(":startDate", startDate);
    query.bindValue(":endDate", endDateStr);

    // Initialize total amounts
    double totalAmount = 0.0;
    double totalJob = 0.0, totalAllowance = 0.0, totalScholarship = 0.0;
    double totalStudentAid = 0.0, totalOthers = 0.0;

    if (query.exec()) {
        ui->tableWidget->setRowCount(0); // Clear previous rows
        int row = 0;

        while (query.next()) {
            // Insert row in the table
            ui->tableWidget->insertRow(row);

            QString source = query.value("source").toString();
            double amount = query.value("amount").toDouble();

            ui->tableWidget->setItem(row, 0, new QTableWidgetItem(source));
            ui->tableWidget->setItem(row, 1, new QTableWidgetItem(QString::number(amount, 'f', 2)));
            ui->tableWidget->setItem(row, 2, new QTableWidgetItem(query.value("description").toString()));
            ui->tableWidget->setItem(row, 3, new QTableWidgetItem(query.value("date").toString()));

            // Sum amounts based on source
            if (source == "Job") {
                totalJob += amount;
            } else if (source == "Allowance") {
                totalAllowance += amount;
            } else if (source == "Scholarship") {
                totalScholarship += amount;
            } else if (source == "Student Aid") {
                totalStudentAid += amount;
            } else {
                totalOthers += amount;
            }

            totalAmount += amount;
            row++;
        }

        // Update total amounts in the respective UI elements
        ui->lineEditJob->setText(QString::number(totalJob, 'f', 2));
        ui->lineEditAllowance->setText(QString::number(totalAllowance, 'f', 2));
        ui->lineEditScholarship->setText(QString::number(totalScholarship, 'f', 2));
        ui->lineEditStudentAid->setText(QString::number(totalStudentAid, 'f', 2));
        ui->lineEditOthers->setText(QString::number(totalOthers, 'f', 2));
        ui->lineEditTotalAll->setText(QString::number(totalAmount, 'f', 2));
    } else {
        qDebug() << "Error fetching data:" << query.lastError().text();
        ui->lineEditTotalAll->setText("0.00");
    }
}

void total_incomes::onShowDetailsClicked()
{
    QString selectedMonth = ui->comboBoxMonth->currentText();
    int selectedYear = QDate::currentDate().year(); // Assume current year for simplicity
    loadincomeData(selectedMonth, selectedYear);
}
