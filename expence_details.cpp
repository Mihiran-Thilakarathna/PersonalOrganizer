#include "expence_details.h"
#include "ui_expence_details.h"
#include "expences.h"

total_expences::total_expences(const QString &userEmail, QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::total_expences)
    , userEmail(userEmail)
{
    ui->setupUi(this);
    expencesWindow = qobject_cast<expences*>(parent);
    connect(ui->showDetailsButton, &QPushButton::clicked, this, &total_expences::on_showDetailsButton_clicked);
}

total_expences::~total_expences()
{
    delete ui;
}

void total_expences::on_totalexpenceBack_clicked()
{
    this->hide();
    expencesWindow->show();
}

void total_expences::on_showDetailsButton_clicked()
{
    // Clear existing table rows
    ui->tableWidget->setRowCount(0);

    // Get the selected month and year from the UI
    QString selectedMonth = ui->monthComboBox->currentText();
    int selectedYear = QDate::currentDate().year();  // You can add a year combo box if needed

    // Load expense data based on the selected month
    loadExpenceData(selectedMonth, selectedYear);
}

void total_expences::loadExpenceData(const QString &month, int year)
{
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
    query.prepare("SELECT category, amount, description, date FROM expense "
                  "WHERE userEmail = :userEmail AND date BETWEEN :startDate AND :endDate");
    query.bindValue(":userEmail", userEmail);
    query.bindValue(":startDate", startDate);
    query.bindValue(":endDate", endDateStr);

    double totalAmount = 0.0;
    double totalFood = 0.0;
    double totalEntertainment = 0.0;
    double totalTravelling = 0.0;
    double totalClothing = 0.0;
    double totalEducationEquipment = 0.0;
    double totalUniversityFees = 0.0;
    double totalOthers = 0.0;

    if (query.exec()) {
        int row = 0;
        while (query.next()) {
            ui->tableWidget->insertRow(row);

            QString category = query.value("category").toString();
            double amount = query.value("amount").toDouble();

            ui->tableWidget->setItem(row, 0, new QTableWidgetItem(category));
            ui->tableWidget->setItem(row, 1, new QTableWidgetItem(QString::number(amount, 'f', 2)));
            ui->tableWidget->setItem(row, 2, new QTableWidgetItem(query.value("description").toString()));
            ui->tableWidget->setItem(row, 3, new QTableWidgetItem(query.value("date").toString()));

            totalAmount += amount;

            if (category == "Food") {
                totalFood += amount;
            } else if (category == "Entertainment") {
                totalEntertainment += amount;
            } else if (category == "Traveling") {
                totalTravelling += amount;
            } else if (category == "Clothing") {
                totalClothing += amount;
            } else if (category == "Education equipment") {
                totalEducationEquipment += amount;
            } else if (category == "University Fees") {
                totalUniversityFees += amount;
            } else if (category == "Other") {
                totalOthers += amount;
            }

            row++;
        }

        ui->label_10->setText(QString::number(totalFood, 'f', 2));
        ui->label_11->setText(QString::number(totalEntertainment, 'f', 2));
        ui->label_12->setText(QString::number(totalTravelling, 'f', 2));
        ui->label_13->setText(QString::number(totalClothing, 'f', 2));
        ui->label_14->setText(QString::number(totalEducationEquipment, 'f', 2));
        ui->label_15->setText(QString::number(totalUniversityFees, 'f', 2));
        ui->label_16->setText(QString::number(totalOthers, 'f', 2));

        ui->label_17->setText(QString::number(totalAmount, 'f', 2));
    } else {
        qDebug() << "Error fetching data:" << query.lastError().text();
        ui->label_17->setText("0.00");
    }
}

void total_expences::on_ReportpushButton_clicked()
{
    double totalAmount = ui->label_17->text().toDouble();
    double foodPct = (totalAmount > 0) ? (ui->label_10->text().toDouble() / totalAmount) * 100 : 0.0;
    double entertainmentPct = (totalAmount > 0) ? (ui->label_11->text().toDouble() / totalAmount) * 100 : 0.0;
    double travelingPct = (totalAmount > 0) ? (ui->label_12->text().toDouble() / totalAmount) * 100 : 0.0;
    double clothingPct = (totalAmount > 0) ? (ui->label_13->text().toDouble() / totalAmount) * 100 : 0.0;
    double educationEquipmentPct = (totalAmount > 0) ? (ui->label_14->text().toDouble() / totalAmount) * 100 : 0.0;
    double universityFeesPct = (totalAmount > 0) ? (ui->label_15->text().toDouble() / totalAmount) * 100 : 0.0;
    double othersPct = (totalAmount > 0) ? (ui->label_16->text().toDouble() / totalAmount) * 100 : 0.0;

    hide();
    reportsWindow = new reports(foodPct, entertainmentPct, travelingPct, clothingPct,
                                educationEquipmentPct, universityFeesPct, othersPct, this);
    reportsWindow->show();
}
