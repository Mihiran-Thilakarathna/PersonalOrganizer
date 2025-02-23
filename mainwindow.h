#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>



#include "database.h"   // Include the database class
#include "dashboard.h"
#include "registration.h"

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void on_pushButton_clicked();  // Login button
    void on_pushButton_3_clicked();  // Open registration form

private:
    Ui::MainWindow *ui;
    Database db;  // Database object for handling SQLite
    dashboard *Dash;
    registration *Registration;
    QString userEmail;



};

#endif // MAINWINDOW_H
