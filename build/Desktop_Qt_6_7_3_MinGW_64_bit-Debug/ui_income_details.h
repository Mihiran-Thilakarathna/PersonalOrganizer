/********************************************************************************
** Form generated from reading UI file 'income_details.ui'
**
** Created by: Qt User Interface Compiler version 6.7.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_INCOME_DETAILS_H
#define UI_INCOME_DETAILS_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_total_incomes
{
public:
    QWidget *centralwidget;
    QTableWidget *tableWidget;
    QLabel *label;
    QLabel *label_2;
    QLineEdit *lineEditTotalAll;
    QPushButton *totalincomeBack;
    QLabel *label_3;
    QComboBox *comboBoxMonth;
    QPushButton *showDetailsButton;
    QLabel *label_4;
    QLabel *label_5;
    QLabel *label_6;
    QLabel *label_7;
    QLabel *label_8;
    QLineEdit *lineEditAllowance;
    QLineEdit *lineEditStudentAid;
    QLineEdit *lineEditOthers;
    QLineEdit *lineEditScholarship;
    QLineEdit *lineEditJob;

    void setupUi(QMainWindow *total_incomes)
    {
        if (total_incomes->objectName().isEmpty())
            total_incomes->setObjectName("total_incomes");
        total_incomes->resize(1068, 555);
        total_incomes->setStyleSheet(QString::fromUtf8("background-color: #aaaaaa;"));
        centralwidget = new QWidget(total_incomes);
        centralwidget->setObjectName("centralwidget");
        tableWidget = new QTableWidget(centralwidget);
        if (tableWidget->columnCount() < 4)
            tableWidget->setColumnCount(4);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(0, __qtablewidgetitem);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(1, __qtablewidgetitem1);
        QTableWidgetItem *__qtablewidgetitem2 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(2, __qtablewidgetitem2);
        QTableWidgetItem *__qtablewidgetitem3 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(3, __qtablewidgetitem3);
        tableWidget->setObjectName("tableWidget");
        tableWidget->setGeometry(QRect(20, 220, 511, 221));
        label = new QLabel(centralwidget);
        label->setObjectName("label");
        label->setGeometry(QRect(400, 30, 311, 41));
        label->setStyleSheet(QString::fromUtf8("QLabel {\n"
"    color: #00ffff;             \n"
"	text-decoration: underline;\n"
"	font: 700 italic 9pt \"Arial\";\n"
"    font-size: 30px;                \n"
"    font-weight: bold;        \n"
"    letter-spacing: 2px;          \n"
"    text-align: center;              \n"
"    background-color: transparent;    \n"
"\n"
"}\n"
""));
        label_2 = new QLabel(centralwidget);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(550, 430, 291, 21));
        label_2->setStyleSheet(QString::fromUtf8("QLabel {\n"
"	font: 700 9pt \"Arial\";\n"
"    color: #000000;                 \n"
"	font-size: 18px;             \n"
"    font-weight: bold;       \n"
"	background-color:transparent;       \n"
"}"));
        lineEditTotalAll = new QLineEdit(centralwidget);
        lineEditTotalAll->setObjectName("lineEditTotalAll");
        lineEditTotalAll->setGeometry(QRect(850, 420, 191, 41));
        totalincomeBack = new QPushButton(centralwidget);
        totalincomeBack->setObjectName("totalincomeBack");
        totalincomeBack->setGeometry(QRect(20, 500, 81, 31));
        totalincomeBack->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"	font: 700 italic 9pt \"Arial\";\n"
"    background-color: #55aaff;\n"
"    border: 1px solid #003300;\n"
"    border-radius: 5px;\n"
"    padding: 5px;\n"
"    font-size: 14px;\n"
"    color: #000000;\n"
"}\n"
"QPushButton:hover {\n"
"    background-color: #aaffff;\n"
"}\n"
""));
        label_3 = new QLabel(centralwidget);
        label_3->setObjectName("label_3");
        label_3->setGeometry(QRect(310, 110, 321, 21));
        label_3->setStyleSheet(QString::fromUtf8("QLabel {\n"
"	font: 700 9pt \"Arial\";\n"
"    color: #000000;                 \n"
"	font-size: 18px;             \n"
"    font-weight: bold;       \n"
"	background-color:transparent;       \n"
"}"));
        comboBoxMonth = new QComboBox(centralwidget);
        comboBoxMonth->addItem(QString());
        comboBoxMonth->addItem(QString());
        comboBoxMonth->addItem(QString());
        comboBoxMonth->addItem(QString());
        comboBoxMonth->addItem(QString());
        comboBoxMonth->addItem(QString());
        comboBoxMonth->addItem(QString());
        comboBoxMonth->addItem(QString());
        comboBoxMonth->addItem(QString());
        comboBoxMonth->addItem(QString());
        comboBoxMonth->addItem(QString());
        comboBoxMonth->addItem(QString());
        comboBoxMonth->addItem(QString());
        comboBoxMonth->setObjectName("comboBoxMonth");
        comboBoxMonth->setGeometry(QRect(630, 100, 221, 31));
        showDetailsButton = new QPushButton(centralwidget);
        showDetailsButton->setObjectName("showDetailsButton");
        showDetailsButton->setGeometry(QRect(510, 160, 121, 31));
        showDetailsButton->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"	font: 700 italic 9pt \"Arial\";\n"
"    background-color: #aaaaff;\n"
"    border: 1px solid #003300;\n"
"    border-radius: 5px;\n"
"    padding: 5px;\n"
"    font-size: 14px;\n"
"    color: #003300;\n"
"}\n"
"QPushButton:hover {\n"
"    background-color: #66cc66;\n"
"}\n"
""));
        label_4 = new QLabel(centralwidget);
        label_4->setObjectName("label_4");
        label_4->setGeometry(QRect(550, 220, 171, 21));
        label_4->setStyleSheet(QString::fromUtf8("QLabel {\n"
"	font: 700 9pt \"Arial\";\n"
"    color: #000000;                 \n"
"	font-size: 15px;             \n"
"    font-weight: bold;       \n"
"	background-color:transparent;       \n"
"}"));
        label_5 = new QLabel(centralwidget);
        label_5->setObjectName("label_5");
        label_5->setGeometry(QRect(550, 260, 301, 21));
        label_5->setStyleSheet(QString::fromUtf8("QLabel {\n"
"	font: 700 9pt \"Arial\";\n"
"    color: #000000;                 \n"
"	font-size: 15px;             \n"
"    font-weight: bold;       \n"
"	background-color:transparent;       \n"
"}"));
        label_6 = new QLabel(centralwidget);
        label_6->setObjectName("label_6");
        label_6->setGeometry(QRect(550, 300, 231, 21));
        label_6->setStyleSheet(QString::fromUtf8("QLabel {\n"
"	font: 700 9pt \"Arial\";\n"
"    color: #000000;                 \n"
"	font-size: 15px;             \n"
"    font-weight: bold;       \n"
"	background-color:transparent;       \n"
"}"));
        label_7 = new QLabel(centralwidget);
        label_7->setObjectName("label_7");
        label_7->setGeometry(QRect(550, 340, 231, 21));
        label_7->setStyleSheet(QString::fromUtf8("QLabel {\n"
"	font: 700 9pt \"Arial\";\n"
"    color: #000000;                 \n"
"	font-size: 15px;             \n"
"    font-weight: bold;       \n"
"	background-color:transparent;       \n"
"}"));
        label_8 = new QLabel(centralwidget);
        label_8->setObjectName("label_8");
        label_8->setGeometry(QRect(550, 380, 191, 21));
        label_8->setStyleSheet(QString::fromUtf8("QLabel {\n"
"	font: 700 9pt \"Arial\";\n"
"    color: #000000;                 \n"
"	font-size: 15px;             \n"
"    font-weight: bold;       \n"
"	background-color:transparent;       \n"
"}"));
        lineEditAllowance = new QLineEdit(centralwidget);
        lineEditAllowance->setObjectName("lineEditAllowance");
        lineEditAllowance->setGeometry(QRect(850, 250, 191, 31));
        lineEditStudentAid = new QLineEdit(centralwidget);
        lineEditStudentAid->setObjectName("lineEditStudentAid");
        lineEditStudentAid->setGeometry(QRect(850, 330, 191, 31));
        lineEditOthers = new QLineEdit(centralwidget);
        lineEditOthers->setObjectName("lineEditOthers");
        lineEditOthers->setGeometry(QRect(850, 370, 191, 31));
        lineEditScholarship = new QLineEdit(centralwidget);
        lineEditScholarship->setObjectName("lineEditScholarship");
        lineEditScholarship->setGeometry(QRect(850, 290, 191, 31));
        lineEditJob = new QLineEdit(centralwidget);
        lineEditJob->setObjectName("lineEditJob");
        lineEditJob->setGeometry(QRect(850, 210, 191, 31));
        total_incomes->setCentralWidget(centralwidget);

        retranslateUi(total_incomes);

        QMetaObject::connectSlotsByName(total_incomes);
    } // setupUi

    void retranslateUi(QMainWindow *total_incomes)
    {
        total_incomes->setWindowTitle(QCoreApplication::translate("total_incomes", "MainWindow", nullptr));
        QTableWidgetItem *___qtablewidgetitem = tableWidget->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QCoreApplication::translate("total_incomes", "source", nullptr));
        QTableWidgetItem *___qtablewidgetitem1 = tableWidget->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QCoreApplication::translate("total_incomes", "amount", nullptr));
        QTableWidgetItem *___qtablewidgetitem2 = tableWidget->horizontalHeaderItem(2);
        ___qtablewidgetitem2->setText(QCoreApplication::translate("total_incomes", "description", nullptr));
        QTableWidgetItem *___qtablewidgetitem3 = tableWidget->horizontalHeaderItem(3);
        ___qtablewidgetitem3->setText(QCoreApplication::translate("total_incomes", "date", nullptr));
        label->setText(QCoreApplication::translate("total_incomes", "INCOMES REPORT", nullptr));
        label_2->setText(QCoreApplication::translate("total_incomes", "Total income From all Sources :", nullptr));
        totalincomeBack->setText(QCoreApplication::translate("total_incomes", "Back", nullptr));
        label_3->setText(QCoreApplication::translate("total_incomes", "Select the month you want to view:", nullptr));
        comboBoxMonth->setItemText(0, QCoreApplication::translate("total_incomes", "Select a Month", nullptr));
        comboBoxMonth->setItemText(1, QCoreApplication::translate("total_incomes", "January", nullptr));
        comboBoxMonth->setItemText(2, QCoreApplication::translate("total_incomes", "February", nullptr));
        comboBoxMonth->setItemText(3, QCoreApplication::translate("total_incomes", "March", nullptr));
        comboBoxMonth->setItemText(4, QCoreApplication::translate("total_incomes", "April", nullptr));
        comboBoxMonth->setItemText(5, QCoreApplication::translate("total_incomes", "May", nullptr));
        comboBoxMonth->setItemText(6, QCoreApplication::translate("total_incomes", "June", nullptr));
        comboBoxMonth->setItemText(7, QCoreApplication::translate("total_incomes", "July", nullptr));
        comboBoxMonth->setItemText(8, QCoreApplication::translate("total_incomes", "August", nullptr));
        comboBoxMonth->setItemText(9, QCoreApplication::translate("total_incomes", "September", nullptr));
        comboBoxMonth->setItemText(10, QCoreApplication::translate("total_incomes", "October", nullptr));
        comboBoxMonth->setItemText(11, QCoreApplication::translate("total_incomes", "November", nullptr));
        comboBoxMonth->setItemText(12, QCoreApplication::translate("total_incomes", "December", nullptr));

        showDetailsButton->setText(QCoreApplication::translate("total_incomes", "Show Details", nullptr));
        label_4->setText(QCoreApplication::translate("total_incomes", "Total income from Job :", nullptr));
        label_5->setText(QCoreApplication::translate("total_incomes", "Total income from Allownce from  parents :", nullptr));
        label_6->setText(QCoreApplication::translate("total_incomes", "Total income from schorlaships :", nullptr));
        label_7->setText(QCoreApplication::translate("total_incomes", "Total income from student aids :", nullptr));
        label_8->setText(QCoreApplication::translate("total_incomes", "Total income from others:", nullptr));
    } // retranslateUi

};

namespace Ui {
    class total_incomes: public Ui_total_incomes {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_INCOME_DETAILS_H
