#ifndef REGISTRATION_H
#define REGISTRATION_H

#include <QMainWindow>
#include "database.h"  // Include the database class

namespace Ui {
class registration;
}

class registration : public QMainWindow
{
    Q_OBJECT

public:
    explicit registration(QWidget *parent = nullptr);
    ~registration();

private slots:
    void on_pushButton_clicked();  // Register button
    void on_pushButton_2_clicked();  // Back to login

private:
    Ui::registration *ui;
    Database db;  // Use the Database object for handling SQLite
};

#endif // REGISTRATION_H
