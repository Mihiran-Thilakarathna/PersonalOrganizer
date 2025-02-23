#include "reports.h"
#include "ui_reports.h"
#include "expence_details.h"

#include <QtCharts/QChartView>
#include <QtCharts/QBarSeries>
#include <QtCharts/QBarSet>
#include <QtCharts/QValueAxis>
#include <QtCharts/QBarCategoryAxis>
#include <QChartView>

reports::reports(double foodPct, double entertainmentPct, double travelingPct,
                 double clothingPct, double educationEquipmentPct,
                 double universityFeesPct, double othersPct, QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::reports)
    , foodPct(foodPct)
    , entertainmentPct(entertainmentPct)
    , travelingPct(travelingPct)
    , clothingPct(clothingPct)
    , educationEquipmentPct(educationEquipmentPct)
    , universityFeesPct(universityFeesPct)
    , othersPct(othersPct)
{
    ui->setupUi(this);
    total_expencesWindow = qobject_cast<total_expences*>(parent);
    displayData(); // Display the passed data on the UI
    displayBarChart(); // Display the bar chart
}

reports::~reports()
{
    delete ui;
}

void reports::on_reportBackButton_clicked()
{
    this->hide();
    total_expencesWindow->show();
}

void reports::displayData()
{
    // Displaying the percentage values on labels
    ui->label_2->setText(QString("Food: %1%").arg(foodPct, 0, 'f', 2));
    ui->label_3->setText(QString("Entertainment: %1%").arg(entertainmentPct, 0, 'f', 2));
    ui->label_4->setText(QString("Traveling: %1%").arg(travelingPct, 0, 'f', 2));
    ui->label_5->setText(QString("Clothing: %1%").arg(clothingPct, 0, 'f', 2));
    ui->label_6->setText(QString("Education Equipment: %1%").arg(educationEquipmentPct, 0, 'f', 2));
    ui->label_7->setText(QString("University Fees: %1%").arg(universityFeesPct, 0, 'f', 2));
    ui->label_8->setText(QString("Other: %1%").arg(othersPct, 0, 'f', 2));
}

void reports::displayBarChart()
{
    // Create QBarSet for each category
    QBarSet *foodSet = new QBarSet("Food");
    QBarSet *entertainmentSet = new QBarSet("Entertainment");
    QBarSet *travelSet = new QBarSet("Travel");
    QBarSet *clothingSet = new QBarSet("Clothing");
    QBarSet *educationSet = new QBarSet("Education Equipment");
    QBarSet *universityFeesSet = new QBarSet("University Fees");
    QBarSet *otherSet = new QBarSet("Other");

    // Assign data to the bar sets
    *foodSet << foodPct;
    *entertainmentSet << entertainmentPct;
    *travelSet << travelingPct;
    *clothingSet << clothingPct;
    *educationSet << educationEquipmentPct;
    *universityFeesSet << universityFeesPct;
    *otherSet << othersPct;

    // Create a QBarSeries and append the sets
    QBarSeries *barSeries = new QBarSeries();
    barSeries->append(foodSet);
    barSeries->append(entertainmentSet);
    barSeries->append(travelSet);
    barSeries->append(clothingSet);
    barSeries->append(educationSet);
    barSeries->append(universityFeesSet);
    barSeries->append(otherSet);

    // Create the QChart and set the title
    QChart *chart = new QChart();
    chart->addSeries(barSeries);
    chart->setTitle("Expense Category Percentages");
    chart->setAnimationOptions(QChart::SeriesAnimations);

    // Set up the category axis for the x-axis (category names)
    QStringList categories;
    categories << "Food" << "Entertainment" << "Travel" << "Clothing"
               << "Education Equipment" << "University Fees" << "Other";
    QBarCategoryAxis *axisX = new QBarCategoryAxis();
    axisX->append("Spend and Remains");

    // Set the value axis for the y-axis (percentages)
    QValueAxis *axisY = new QValueAxis();
    axisY->setRange(0, 100); // Percentages from 0 to 100
    axisY->setTitleText("Percentage");

    // Attach axes using addAxis and set alignment
    chart->addAxis(axisX, Qt::AlignBottom);
    chart->addAxis(axisY, Qt::AlignLeft);
    barSeries->attachAxis(axisX);
    barSeries->attachAxis(axisY);

    QChartView *chartview = new QChartView(chart);
    chartview->setRenderHint(QPainter::Antialiasing);

    // Add the chart to the layout
    ui->verticalLayout->addWidget(chartview);
}
