/********************************************************************************
** Form generated from reading UI file 'total_incomes.ui'
**
** Created by: Qt User Interface Compiler version 6.7.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TOTAL_INCOMES_H
#define UI_TOTAL_INCOMES_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
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
    QLineEdit *lineEdit;
    QPushButton *totalincomeBack;

    void setupUi(QMainWindow *total_incomes)
    {
        if (total_incomes->objectName().isEmpty())
            total_incomes->setObjectName("total_incomes");
        total_incomes->resize(800, 600);
        total_incomes->setStyleSheet(QString::fromUtf8("background-color: rgb(97, 97, 97);"));
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
        tableWidget->setGeometry(QRect(130, 100, 551, 381));
        label = new QLabel(centralwidget);
        label->setObjectName("label");
        label->setGeometry(QRect(250, 40, 301, 41));
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
        label_2->setGeometry(QRect(180, 520, 151, 21));
        label_2->setStyleSheet(QString::fromUtf8("QLabel {\n"
"	font: 700 9pt \"Arial\";\n"
"    color: #000000;                 \n"
"	font-size: 18px;             \n"
"    font-weight: bold;       \n"
"	background-color:transparent;       \n"
"}"));
        lineEdit = new QLineEdit(centralwidget);
        lineEdit->setObjectName("lineEdit");
        lineEdit->setGeometry(QRect(330, 510, 281, 41));
        totalincomeBack = new QPushButton(centralwidget);
        totalincomeBack->setObjectName("totalincomeBack");
        totalincomeBack->setGeometry(QRect(30, 520, 81, 31));
        totalincomeBack->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"	font: 700 italic 9pt \"Arial\";\n"
"    background-color: #99ff99;\n"
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
        label->setText(QCoreApplication::translate("total_incomes", "TOTAL INCOMES ", nullptr));
        label_2->setText(QCoreApplication::translate("total_incomes", "Total income  :", nullptr));
        totalincomeBack->setText(QCoreApplication::translate("total_incomes", "Back", nullptr));
    } // retranslateUi

};

namespace Ui {
    class total_incomes: public Ui_total_incomes {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TOTAL_INCOMES_H
