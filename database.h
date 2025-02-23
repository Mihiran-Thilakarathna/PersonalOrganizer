#ifndef DATABASEMANAGER_H
#define DATABASEMANAGER_H

#include <QSqlDatabase>
#include <QSqlQuery>
#include <QSqlError>
#include <QDebug>

class Database
{
public:
    Database();
    bool createConnection();
    bool createUser(const QString &full_name, const QString &email, const QString &phone, const QString &password);
    bool userExists(const QString &email, const QString &password);

    bool addIncome(const QString &source, double amount, const QString &description, const QString &date,const QString &email);
    bool addExpense(const QString &category, double amount, const QString &description, const QString &date,const QString &email);

    bool addBudget(const QString &category,double amount,const QString &date,const QString &email);


    bool addacademic(const QString &subject, const QString &subjectCode, const QString &date, const QString &time, const QString &venue, const QString &email);

    bool addAssignment(const QString &subject,const QString &subjectCode,const QString &startdate,const QString &deadlinedate);

    bool getBudgetLimit(const QString &category, const QString &userEmail, double &budgetLimit);


};

#endif // DATABASEMANAGER_H
