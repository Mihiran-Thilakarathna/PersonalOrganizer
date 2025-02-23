/********************************************************************************
** Form generated from reading UI file 'total_expences.ui'
**
** Created by: Qt User Interface Compiler version 6.7.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TOTAL_EXPENCES_H
#define UI_TOTAL_EXPENCES_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
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

    void setupUi(QMainWindow *total_expences)
    {
        if (total_expences->objectName().isEmpty())
            total_expences->setObjectName("total_expences");
        total_expences->resize(1128, 600);
        total_expences->setStyleSheet(QString::fromUtf8("background-color: rgb(97, 97, 97);\n"
""));
        centralwidget = new QWidget(total_expences);
        centralwidget->setObjectName("centralwidget");
        label_2 = new QLabel(centralwidget);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(140, 520, 301, 21));
        label_2->setStyleSheet(QString::fromUtf8("QLabel {\n"
"	font: 700 9pt \"Arial\";\n"
"    color: #000000;                 \n"
"	font-size: 18px;             \n"
"    font-weight: bold;       \n"
"	background-color:transparent;       \n"
"}"));
        label = new QLabel(centralwidget);
        label->setObjectName("label");
        label->setGeometry(QRect(260, 40, 301, 41));
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
        tableWidget->setGeometry(QRect(60, 100, 551, 381));
        totalexpenceBack = new QPushButton(centralwidget);
        totalexpenceBack->setObjectName("totalexpenceBack");
        totalexpenceBack->setGeometry(QRect(40, 520, 81, 31));
        totalexpenceBack->setStyleSheet(QString::fromUtf8("QPushButton {\n"
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
        label_3 = new QLabel(centralwidget);
        label_3->setObjectName("label_3");
        label_3->setGeometry(QRect(630, 100, 91, 31));
        label_3->setStyleSheet(QString::fromUtf8("QLabel {\n"
"	font: 700 8pt \"Arial\";\n"
"    color: #000000;                 \n"
"	font-size: 16px;             \n"
"    font-weight: bold;       \n"
"	background-color:transparent;       \n"
"}"));
        label_4 = new QLabel(centralwidget);
        label_4->setObjectName("label_4");
        label_4->setGeometry(QRect(630, 140, 171, 31));
        label_4->setStyleSheet(QString::fromUtf8("QLabel {\n"
"	font: 700 9pt \"Arial\";\n"
"    color: #000000;                 \n"
"	font-size: 16px;             \n"
"    font-weight: bold;       \n"
"	background-color:transparent;       \n"
"}"));
        label_5 = new QLabel(centralwidget);
        label_5->setObjectName("label_5");
        label_5->setGeometry(QRect(630, 180, 121, 31));
        label_5->setStyleSheet(QString::fromUtf8("QLabel {\n"
"	font: 700 9pt \"Arial\";\n"
"    color: #000000;                 \n"
"	font-size: 16px;             \n"
"    font-weight: bold;       \n"
"	background-color:transparent;       \n"
"}"));
        label_6 = new QLabel(centralwidget);
        label_6->setObjectName("label_6");
        label_6->setGeometry(QRect(630, 230, 121, 31));
        label_6->setStyleSheet(QString::fromUtf8("QLabel {\n"
"	font: 700 9pt \"Arial\";\n"
"    color: #000000;                 \n"
"	font-size: 16px;             \n"
"    font-weight: bold;       \n"
"	background-color:transparent;       \n"
"}"));
        label_7 = new QLabel(centralwidget);
        label_7->setObjectName("label_7");
        label_7->setGeometry(QRect(630, 270, 221, 31));
        label_7->setStyleSheet(QString::fromUtf8("QLabel {\n"
"	font: 700 9pt \"Arial\";\n"
"    color: #000000;                 \n"
"	font-size: 16px;             \n"
"    font-weight: bold;       \n"
"	background-color:transparent;       \n"
"}"));
        label_8 = new QLabel(centralwidget);
        label_8->setObjectName("label_8");
        label_8->setGeometry(QRect(630, 310, 171, 31));
        label_8->setStyleSheet(QString::fromUtf8("QLabel {\n"
"	font: 700 9pt \"Arial\";\n"
"    color: #000000;                 \n"
"	font-size: 16px;             \n"
"    font-weight: bold;       \n"
"	background-color:transparent;       \n"
"}"));
        label_9 = new QLabel(centralwidget);
        label_9->setObjectName("label_9");
        label_9->setGeometry(QRect(630, 350, 101, 31));
        label_9->setStyleSheet(QString::fromUtf8("QLabel {\n"
"	font: 700 9pt \"Arial\";\n"
"    color: #000000;                 \n"
"	font-size: 16px;             \n"
"    font-weight: bold;       \n"
"	background-color:transparent;       \n"
"}"));
        ReportpushButton = new QPushButton(centralwidget);
        ReportpushButton->setObjectName("ReportpushButton");
        ReportpushButton->setGeometry(QRect(850, 500, 191, 41));
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
        label_10->setGeometry(QRect(800, 100, 291, 21));
        label_15 = new QLabel(centralwidget);
        label_15->setObjectName("label_15");
        label_15->setGeometry(QRect(810, 310, 291, 21));
        label_14 = new QLabel(centralwidget);
        label_14->setObjectName("label_14");
        label_14->setGeometry(QRect(860, 270, 171, 21));
        label_13 = new QLabel(centralwidget);
        label_13->setObjectName("label_13");
        label_13->setGeometry(QRect(800, 230, 291, 21));
        label_11 = new QLabel(centralwidget);
        label_11->setObjectName("label_11");
        label_11->setGeometry(QRect(800, 140, 291, 21));
        label_12 = new QLabel(centralwidget);
        label_12->setObjectName("label_12");
        label_12->setGeometry(QRect(800, 180, 291, 21));
        label_16 = new QLabel(centralwidget);
        label_16->setObjectName("label_16");
        label_16->setGeometry(QRect(810, 350, 291, 21));
        label_17 = new QLabel(centralwidget);
        label_17->setObjectName("label_17");
        label_17->setGeometry(QRect(450, 510, 251, 41));
        total_expences->setCentralWidget(centralwidget);

        retranslateUi(total_expences);

        QMetaObject::connectSlotsByName(total_expences);
    } // setupUi

    void retranslateUi(QMainWindow *total_expences)
    {
        total_expences->setWindowTitle(QCoreApplication::translate("total_expences", "MainWindow", nullptr));
        label_2->setText(QCoreApplication::translate("total_expences", "Total Expence of  all Categories  :", nullptr));
        label->setText(QCoreApplication::translate("total_expences", "TOTAL EXPENCES ", nullptr));
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
        ReportpushButton->setText(QCoreApplication::translate("total_expences", "Click to View Report", nullptr));
        label_10->setText(QCoreApplication::translate("total_expences", "TextLabel", nullptr));
        label_15->setText(QCoreApplication::translate("total_expences", "TextLabel", nullptr));
        label_14->setText(QCoreApplication::translate("total_expences", "TextLabel", nullptr));
        label_13->setText(QCoreApplication::translate("total_expences", "TextLabel", nullptr));
        label_11->setText(QCoreApplication::translate("total_expences", "TextLabel", nullptr));
        label_12->setText(QCoreApplication::translate("total_expences", "TextLabel", nullptr));
        label_16->setText(QCoreApplication::translate("total_expences", "TextLabel", nullptr));
        label_17->setText(QCoreApplication::translate("total_expences", "TextLabel", nullptr));
    } // retranslateUi

};

namespace Ui {
    class total_expences: public Ui_total_expences {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TOTAL_EXPENCES_H
