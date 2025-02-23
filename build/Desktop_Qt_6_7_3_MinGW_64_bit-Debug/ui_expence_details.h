/********************************************************************************
** Form generated from reading UI file 'expence_details.ui'
**
** Created by: Qt User Interface Compiler version 6.7.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_EXPENCE_DETAILS_H
#define UI_EXPENCE_DETAILS_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_total_expences
{
public:
    QWidget *centralwidget;
    QLabel *label_2;
    QLabel *label;
    QTableWidget *tableWidget;
    QPushButton *totalexpenceBack;
    QLabel *label_3;
    QLabel *label_4;
    QLabel *label_5;
    QLabel *label_6;
    QLabel *label_7;
    QLabel *label_8;
    QLabel *label_9;
    QPushButton *ReportpushButton;
    QLabel *label_10;
    QLabel *label_15;
    QLabel *label_14;
    QLabel *label_13;
    QLabel *label_11;
    QLabel *label_12;
    QLabel *label_16;
    QLabel *label_17;
    QLabel *label_18;
    QComboBox *monthComboBox;
    QPushButton *showDetailsButton;

    void setupUi(QMainWindow *total_expences)
    {
        if (total_expences->objectName().isEmpty())
            total_expences->setObjectName("total_expences");
        total_expences->resize(1105, 613);
        total_expences->setStyleSheet(QString::fromUtf8("background-color: #aaaaaa;"));
        centralwidget = new QWidget(total_expences);
        centralwidget->setObjectName("centralwidget");
        label_2 = new QLabel(centralwidget);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(630, 550, 301, 21));
        label_2->setStyleSheet(QString::fromUtf8("QLabel {\n"
"	font: 700 9pt \"Arial\";\n"
"    color: #000000;                 \n"
"	font-size: 18px;             \n"
"    font-weight: bold;       \n"
"	background-color:transparent;       \n"
"}"));
        label = new QLabel(centralwidget);
        label->setObjectName("label");
        label->setGeometry(QRect(400, 30, 351, 41));
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
        tableWidget->setGeometry(QRect(60, 180, 501, 281));
        totalexpenceBack = new QPushButton(centralwidget);
        totalexpenceBack->setObjectName("totalexpenceBack");
        totalexpenceBack->setGeometry(QRect(20, 570, 81, 31));
        totalexpenceBack->setStyleSheet(QString::fromUtf8("QPushButton {\n"
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
        label_3->setGeometry(QRect(630, 180, 91, 31));
        label_3->setStyleSheet(QString::fromUtf8("QLabel {\n"
"	font: 700 8pt \"Arial\";\n"
"    color: #000000;                 \n"
"	font-size: 16px;             \n"
"    font-weight: bold;       \n"
"	background-color:transparent;       \n"
"}"));
        label_4 = new QLabel(centralwidget);
        label_4->setObjectName("label_4");
        label_4->setGeometry(QRect(630, 230, 171, 31));
        label_4->setStyleSheet(QString::fromUtf8("QLabel {\n"
"	font: 700 9pt \"Arial\";\n"
"    color: #000000;                 \n"
"	font-size: 16px;             \n"
"    font-weight: bold;       \n"
"	background-color:transparent;       \n"
"}"));
        label_5 = new QLabel(centralwidget);
        label_5->setObjectName("label_5");
        label_5->setGeometry(QRect(630, 280, 121, 31));
        label_5->setStyleSheet(QString::fromUtf8("QLabel {\n"
"	font: 700 9pt \"Arial\";\n"
"    color: #000000;                 \n"
"	font-size: 16px;             \n"
"    font-weight: bold;       \n"
"	background-color:transparent;       \n"
"}"));
        label_6 = new QLabel(centralwidget);
        label_6->setObjectName("label_6");
        label_6->setGeometry(QRect(630, 330, 121, 31));
        label_6->setStyleSheet(QString::fromUtf8("QLabel {\n"
"	font: 700 9pt \"Arial\";\n"
"    color: #000000;                 \n"
"	font-size: 16px;             \n"
"    font-weight: bold;       \n"
"	background-color:transparent;       \n"
"}"));
        label_7 = new QLabel(centralwidget);
        label_7->setObjectName("label_7");
        label_7->setGeometry(QRect(630, 380, 221, 31));
        label_7->setStyleSheet(QString::fromUtf8("QLabel {\n"
"	font: 700 9pt \"Arial\";\n"
"    color: #000000;                 \n"
"	font-size: 16px;             \n"
"    font-weight: bold;       \n"
"	background-color:transparent;       \n"
"}"));
        label_8 = new QLabel(centralwidget);
        label_8->setObjectName("label_8");
        label_8->setGeometry(QRect(630, 430, 171, 31));
        label_8->setStyleSheet(QString::fromUtf8("QLabel {\n"
"	font: 700 9pt \"Arial\";\n"
"    color: #000000;                 \n"
"	font-size: 16px;             \n"
"    font-weight: bold;       \n"
"	background-color:transparent;       \n"
"}"));
        label_9 = new QLabel(centralwidget);
        label_9->setObjectName("label_9");
        label_9->setGeometry(QRect(630, 480, 101, 31));
        label_9->setStyleSheet(QString::fromUtf8("QLabel {\n"
"	font: 700 9pt \"Arial\";\n"
"    color: #000000;                 \n"
"	font-size: 16px;             \n"
"    font-weight: bold;       \n"
"	background-color:transparent;       \n"
"}"));
        ReportpushButton = new QPushButton(centralwidget);
        ReportpushButton->setObjectName("ReportpushButton");
        ReportpushButton->setGeometry(QRect(170, 500, 211, 41));
        ReportpushButton->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"	font: 700 italic 9pt \"Arial\";\n"
"    background-color: #ffaaff;\n"
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
        label_10 = new QLabel(centralwidget);
        label_10->setObjectName("label_10");
        label_10->setGeometry(QRect(800, 180, 291, 21));
        label_15 = new QLabel(centralwidget);
        label_15->setObjectName("label_15");
        label_15->setGeometry(QRect(810, 430, 291, 21));
        label_14 = new QLabel(centralwidget);
        label_14->setObjectName("label_14");
        label_14->setGeometry(QRect(860, 380, 171, 21));
        label_13 = new QLabel(centralwidget);
        label_13->setObjectName("label_13");
        label_13->setGeometry(QRect(800, 330, 291, 21));
        label_11 = new QLabel(centralwidget);
        label_11->setObjectName("label_11");
        label_11->setGeometry(QRect(800, 230, 291, 21));
        label_12 = new QLabel(centralwidget);
        label_12->setObjectName("label_12");
        label_12->setGeometry(QRect(800, 280, 291, 21));
        label_16 = new QLabel(centralwidget);
        label_16->setObjectName("label_16");
        label_16->setGeometry(QRect(810, 480, 291, 21));
        label_17 = new QLabel(centralwidget);
        label_17->setObjectName("label_17");
        label_17->setGeometry(QRect(950, 540, 141, 41));
        label_18 = new QLabel(centralwidget);
        label_18->setObjectName("label_18");
        label_18->setGeometry(QRect(280, 90, 321, 21));
        label_18->setStyleSheet(QString::fromUtf8("QLabel {\n"
"	font: 700 9pt \"Arial\";\n"
"    color: #000000;                 \n"
"	font-size: 18px;             \n"
"    font-weight: bold;       \n"
"	background-color:transparent;       \n"
"}"));
        monthComboBox = new QComboBox(centralwidget);
        monthComboBox->addItem(QString());
        monthComboBox->addItem(QString());
        monthComboBox->addItem(QString());
        monthComboBox->addItem(QString());
        monthComboBox->addItem(QString());
        monthComboBox->addItem(QString());
        monthComboBox->addItem(QString());
        monthComboBox->addItem(QString());
        monthComboBox->addItem(QString());
        monthComboBox->addItem(QString());
        monthComboBox->addItem(QString());
        monthComboBox->addItem(QString());
        monthComboBox->addItem(QString());
        monthComboBox->setObjectName("monthComboBox");
        monthComboBox->setGeometry(QRect(600, 90, 181, 26));
        showDetailsButton = new QPushButton(centralwidget);
        showDetailsButton->setObjectName("showDetailsButton");
        showDetailsButton->setGeometry(QRect(500, 130, 121, 29));
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
        total_expences->setCentralWidget(centralwidget);

        retranslateUi(total_expences);

        QMetaObject::connectSlotsByName(total_expences);
    } // setupUi

    void retranslateUi(QMainWindow *total_expences)
    {
        total_expences->setWindowTitle(QCoreApplication::translate("total_expences", "MainWindow", nullptr));
        label_2->setText(QCoreApplication::translate("total_expences", "Total Expence of  all Categories  :", nullptr));
        label->setText(QCoreApplication::translate("total_expences", "EXPENCES REPORT", nullptr));
        QTableWidgetItem *___qtablewidgetitem = tableWidget->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QCoreApplication::translate("total_expences", "category", nullptr));
        QTableWidgetItem *___qtablewidgetitem1 = tableWidget->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QCoreApplication::translate("total_expences", "amount", nullptr));
        QTableWidgetItem *___qtablewidgetitem2 = tableWidget->horizontalHeaderItem(2);
        ___qtablewidgetitem2->setText(QCoreApplication::translate("total_expences", "description", nullptr));
        QTableWidgetItem *___qtablewidgetitem3 = tableWidget->horizontalHeaderItem(3);
        ___qtablewidgetitem3->setText(QCoreApplication::translate("total_expences", "date", nullptr));
        totalexpenceBack->setText(QCoreApplication::translate("total_expences", "Back", nullptr));
        label_3->setText(QCoreApplication::translate("total_expences", "Total Food", nullptr));
        label_4->setText(QCoreApplication::translate("total_expences", "Total Entertainment", nullptr));
        label_5->setText(QCoreApplication::translate("total_expences", "Total Travelling", nullptr));
        label_6->setText(QCoreApplication::translate("total_expences", "Total Clothing", nullptr));
        label_7->setText(QCoreApplication::translate("total_expences", "Total  Education Equipment", nullptr));
        label_8->setText(QCoreApplication::translate("total_expences", "Total University fees", nullptr));
        label_9->setText(QCoreApplication::translate("total_expences", "Total others", nullptr));
        ReportpushButton->setText(QCoreApplication::translate("total_expences", "Generate a Chart Report", nullptr));
        label_10->setText(QCoreApplication::translate("total_expences", "TextLabel", nullptr));
        label_15->setText(QCoreApplication::translate("total_expences", "TextLabel", nullptr));
        label_14->setText(QCoreApplication::translate("total_expences", "TextLabel", nullptr));
        label_13->setText(QCoreApplication::translate("total_expences", "TextLabel", nullptr));
        label_11->setText(QCoreApplication::translate("total_expences", "TextLabel", nullptr));
        label_12->setText(QCoreApplication::translate("total_expences", "TextLabel", nullptr));
        label_16->setText(QCoreApplication::translate("total_expences", "TextLabel", nullptr));
        label_17->setText(QCoreApplication::translate("total_expences", "TextLabel", nullptr));
        label_18->setText(QCoreApplication::translate("total_expences", "Select the month you want to view:", nullptr));
        monthComboBox->setItemText(0, QCoreApplication::translate("total_expences", "Select a month", nullptr));
        monthComboBox->setItemText(1, QCoreApplication::translate("total_expences", "January", nullptr));
        monthComboBox->setItemText(2, QCoreApplication::translate("total_expences", "February", nullptr));
        monthComboBox->setItemText(3, QCoreApplication::translate("total_expences", "March", nullptr));
        monthComboBox->setItemText(4, QCoreApplication::translate("total_expences", "April", nullptr));
        monthComboBox->setItemText(5, QCoreApplication::translate("total_expences", "May", nullptr));
        monthComboBox->setItemText(6, QCoreApplication::translate("total_expences", "June", nullptr));
        monthComboBox->setItemText(7, QCoreApplication::translate("total_expences", "July", nullptr));
        monthComboBox->setItemText(8, QCoreApplication::translate("total_expences", "August", nullptr));
        monthComboBox->setItemText(9, QCoreApplication::translate("total_expences", "September", nullptr));
        monthComboBox->setItemText(10, QCoreApplication::translate("total_expences", "October", nullptr));
        monthComboBox->setItemText(11, QCoreApplication::translate("total_expences", "November", nullptr));
        monthComboBox->setItemText(12, QCoreApplication::translate("total_expences", "December", nullptr));

        showDetailsButton->setText(QCoreApplication::translate("total_expences", "Show Details", nullptr));
    } // retranslateUi

};

namespace Ui {
    class total_expences: public Ui_total_expences {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_EXPENCE_DETAILS_H
