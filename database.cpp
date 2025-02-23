#include "database.h"
#include <QSqlDatabase>
#include <QSqlQuery>
#include <QSqlError>
#include <QDebug>

Database::Database()
{
    createConnection();
}

bool Database::createConnection()
{
    // Create and open the database connection
    QSqlDatabase db = QSqlDatabase::addDatabase("QSQLITE");
    db.setDatabaseName("PODB.db");  // Ensure this is the correct name for your database

    if (!db.open()) {
        qDebug() << "Error: connection with database failed";
        return false;
    } else {
        qDebug() << "Database: connection ok";
        // Create the users table if it doesn't exist
        QSqlQuery query;

        query.exec("CREATE TABLE IF NOT EXISTS users ("
                   "id INTEGER PRIMARY KEY AUTOINCREMENT, "
                   "full_name TEXT NOT NULL, "
                   "email TEXT UNIQUE NOT NULL, "
                   "phone TEXT NOT NULL, "
                   "password TEXT NOT NULL)");

        query.exec("CREATE TABLE IF NOT EXISTS income ("
                   "id INTEGER PRIMARY KEY AUTOINCREMENT, "
                   "source TEXT NOT NULL, "
                   "amount REAL NOT NULL, "
                   "description TEXT, "
                   "date TEXT NOT NULL, "
                   "userEmail TEXT NOT NULL)");

        query.exec("CREATE TABLE IF NOT EXISTS expense ("
                   "id INTEGER PRIMARY KEY AUTOINCREMENT, "
                   "category TEXT NOT NULL, "
                   "amount REAL NOT NULL, "
                   "description TEXT, "
                   "date TEXT NOT NULL, "
                    "userEmail TEXT NOT NULL)");

        query.exec("CREATE TABLE IF NOT EXISTS budget ("
                   "id INTEGER PRIMARY KEY AUTOINCREMENT, "
                   "category TEXT NOT NULL, "
                   "amount REAL NOT NULL, "
                   "date TEXT NOT NULL, "
                   "userEmail TEXT NOT NULL)");


        query.exec("CREATE TABLE IF NOT EXISTS academic ("
                   "id INTEGER PRIMARY KEY AUTOINCREMENT, "
                   "subject TEXT NOT NULL, "
                   "subjectCode TEXT NOT NULL, "
                   "date TEXT NOT NULL, "
                   "time TEXT NOT NULL, "
                   "venue TEXT NOT NULL, "
                   "userEmail TEXT NOT NULL)");


        query.exec("CREATE TABLE IF NOT EXISTS assignment ("
                   "id INTEGER PRIMARY KEY AUTOINCREMENT, "
                   "subject TEXT NOT NULL, "
                   "subjectCode TEXT NOT NULL,"
                   "startdate TEXT NOT NULL, "
                   "deadlinedate TEXT NOT NULL)");


        return true;
    }
}

bool Database::createUser(const QString &fullName, const QString &email, const QString &phone, const QString &password)
{
    QSqlQuery query;
    query.prepare("INSERT INTO users (full_name, email, phone, password) VALUES (:full_name, :email, :phone, :password)");
    query.bindValue(":full_name", fullName);
    query.bindValue(":email", email);
    query.bindValue(":phone", phone);
    query.bindValue(":password", password); // Note: Hash this password for security

    if (query.exec()) {
        return true;
    } else {
        qDebug() << "Error creating user: " << query.lastError().text();
        return false;
    }
}

bool Database::userExists(const QString &email, const QString &password)
{
    QSqlQuery query;
    query.prepare("SELECT * FROM users WHERE email = :email AND password = :password");
    query.bindValue(":email", email);
    query.bindValue(":password", password);

    if (query.exec() && query.next()) {
        return true;
    } else {
        qDebug() << "Error checking user: " << query.lastError().text();
        return false;
    }
}

bool Database::addIncome(const QString &source, double amount, const QString &description, const QString &date, const QString &email)
{
    QSqlQuery query;
    query.prepare("INSERT INTO income (source, amount, description, date, userEmail) VALUES (:source, :amount, :description, :date, :userEmail)");
    query.bindValue(":source", source);
    query.bindValue(":amount", amount);
    query.bindValue(":description", description);
    query.bindValue(":date", date);
    query.bindValue(":userEmail", email);

    if (query.exec()) {
        return true;
    } else {
        qDebug() << "Error adding income: " << query.lastError().text();
        return false;
    }
}



bool Database::addExpense(const QString &category, double amount, const QString &description, const QString &date, const QString &email)
{
    QSqlQuery query;
    query.prepare("INSERT INTO expense (category, amount, description, date, userEmail) VALUES (:category, :amount, :description, :date, :userEmail)");
    query.bindValue(":category", category);
    query.bindValue(":amount", amount);
    query.bindValue(":description", description);
    query.bindValue(":date", date);
    query.bindValue(":userEmail", email);

    if (query.exec()) {
        return true;
    } else {
        qDebug() << "Error adding expense: " << query.lastError().text();
        return false;
    }
}



bool Database::addBudget(const QString &category, double amount, const QString &date, const QString &email)
{
    QSqlQuery query;
    query.prepare("INSERT INTO budget (category, amount,date, userEmail) VALUES (:category, :amount,:date, :userEmail)");
    query.bindValue(":category", category);
    query.bindValue(":amount", amount);
    query.bindValue(":date", date);
    query.bindValue(":userEmail", email);

    if (query.exec()) {
        return true;
    } else {
        qDebug() << "Error adding budget: " << query.lastError().text();
        return false;
    }
}


bool Database::addacademic(const QString &subject, const QString &subjectCode, const QString &date, const QString &time, const QString &venue, const QString &email)
{
    QSqlQuery query;
    query.prepare("INSERT INTO academic (subject, subjectCode, date, time, venue, userEmail) "
                  "VALUES (:subject, :subjectCode, :date, :time, :venue, :userEmail)");
    query.bindValue(":subject", subject);
    query.bindValue(":subjectCode", subjectCode);
    query.bindValue(":date", date);
    query.bindValue(":time", time);
    query.bindValue(":venue", venue);
    query.bindValue(":userEmail", email);

    if (query.exec()) {
        return true;
    } else {
        qDebug() << "Error adding academic: " << query.lastError().text();
        return false;
    }
}


bool Database::addAssignment(const QString &subject,const QString &subjectCode,const QString &startdate,const QString &deadlinedate)
{
    QSqlQuery query;
    query.prepare("INSERT INTO assignment (subject,subjectCode,startdate,deadlinedate) VALUES (:subject, :subjectCode,:startdate,:deadlinedate)");
    query.bindValue(":subject", subject);
    query.bindValue(":subjectCode", subjectCode);
    query.bindValue(":startdate", startdate);
    query.bindValue(":deadlinedate", deadlinedate);



    if (query.exec()) {
        return true;
    } else {
        qDebug() << "Error adding income: " << query.lastError().text();
        return false;
    }
}


bool Database::getBudgetLimit(const QString &category, const QString &userEmail, double &budgetLimit)
{
    QSqlQuery query;
    query.prepare("SELECT amount FROM budget WHERE category = :category AND userEmail = :userEmail");
    query.bindValue(":category", category);
    query.bindValue(":userEmail", userEmail);
    if (query.exec() && query.next()) {
        budgetLimit = query.value("amount").toDouble();
        return true;
    }
    budgetLimit = 0.0;
    return false;
}
