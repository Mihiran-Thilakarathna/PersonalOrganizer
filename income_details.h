#ifndef INCOME_DETAILS_H
#define INCOME_DETAILS_H

#include "incomes.h"
#include <QMainWindow>
#include <QMap>
#include <QDate>
#include <QSqlQuery>
#include <QSqlError>

class incomes; // Forward declaration

namespace Ui {
class total_incomes;
}

class total_incomes : public QMainWindow
{
    Q_OBJECT

public:
    explicit total_incomes(const QString &userEmail, QWidget *parent = nullptr);
    ~total_incomes();

private slots:
    void on_totalincomeBack_clicked();
    void onShowDetailsClicked(); // Slot for the "Show Details" button

private:
    Ui::total_incomes *ui;
    incomes *incomesWindow;
    QString userEmail;

    void loadincomeData(const QString &month, int year); // Updated method to load data for a specific month and year
};

#endif // INCOME_DETAILS_H
