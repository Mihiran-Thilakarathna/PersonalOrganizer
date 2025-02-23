#ifndef REPORTS_H
#define REPORTS_H

#include "expence_details.h"
#include <QMainWindow>

#include <QtCore>
#include <QtGui>
#include <QtWidgets>
#include <QtCharts/QChartView>
#include <QtCharts/QBarSeries>
#include <QtCharts/QBarSet>
#include <QtCharts/QValueAxis>
#include <QtCharts/QBarCategoryAxis>

class total_expences; // Forward declaration

namespace Ui {
class reports;
}

class reports : public QMainWindow
{
    Q_OBJECT

public:
    // Updated constructor to accept percentage values
    explicit reports(double foodPct, double entertainmentPct, double travelingPct,
                     double clothingPct, double educationEquipmentPct,
                     double universityFeesPct, double othersPct, QWidget *parent = nullptr);
    ~reports();

private slots:
    void on_reportBackButton_clicked();

private:
    Ui::reports *ui;
    total_expences *total_expencesWindow;

    // Member variables to store the percentage values for each category
    double foodPct;
    double entertainmentPct;
    double travelingPct;
    double clothingPct;
    double educationEquipmentPct;
    double universityFeesPct;
    double othersPct;

    // Method to display data (e.g., in labels or a chart)
    void displayData();
    void displayBarChart();  // New method for bar chart
};

#endif // REPORTS_H
