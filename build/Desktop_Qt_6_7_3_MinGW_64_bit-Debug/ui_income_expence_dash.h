/********************************************************************************
** Form generated from reading UI file 'income_expence_dash.ui'
**
** Created by: Qt User Interface Compiler version 6.7.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_INCOME_EXPENCE_DASH_H
#define UI_INCOME_EXPENCE_DASH_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_income_Expence_dash
{
public:
    QWidget *centralwidget;
    QGroupBox *groupBox;
    QWidget *widget;
    QLabel *label_2;
    QPushButton *ExpenceButton;
    QPushButton *incomeButton;
    QPushButton *indashbackButton;

    void setupUi(QMainWindow *income_Expence_dash)
    {
        if (income_Expence_dash->objectName().isEmpty())
            income_Expence_dash->setObjectName("income_Expence_dash");
        income_Expence_dash->resize(798, 460);
        income_Expence_dash->setStyleSheet(QString::fromUtf8("background-color: #333333; "));
        centralwidget = new QWidget(income_Expence_dash);
        centralwidget->setObjectName("centralwidget");
        groupBox = new QGroupBox(centralwidget);
        groupBox->setObjectName("groupBox");
        groupBox->setGeometry(QRect(80, 40, 631, 381));
        groupBox->setStyleSheet(QString::fromUtf8("QGroupBox {\n"
"    background-color: #333333;   /* Dark background color */\n"
"  	color:#ffffff;\n"
"    font-size: 25px;             /* Font size for title */\n"
"    font-weight: bold;           /* Bold title */\n"
"}\n"
""));
        widget = new QWidget(groupBox);
        widget->setObjectName("widget");
        widget->setGeometry(QRect(280, 40, 321, 311));
        widget->setStyleSheet(QString::fromUtf8("QWidget{\n"
"border-image:url(:/image/inexdash1.jpeg/);\n"
"}"));
        label_2 = new QLabel(groupBox);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(120, 170, 61, 31));
        label_2->setStyleSheet(QString::fromUtf8("QLabel {\n"
"	font: 700 9pt \"Rockwell\";\n"
"    color: #ffffff;              /* White text color */\n"
"    font-size: 20px;             /* Font size */\n"
"    font-weight: bold;           /* Bold text */\n"
"    padding: 5px;                /* Padding around text */\n"
"	background-color:transparent;\n"
"}\n"
""));
        ExpenceButton = new QPushButton(groupBox);
        ExpenceButton->setObjectName("ExpenceButton");
        ExpenceButton->setGeometry(QRect(50, 230, 171, 41));
        ExpenceButton->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"	font: 700 9pt \"Rockwell\";\n"
"    background-color: #4CAF50;   /* Green background color */\n"
"    color: #ffffff;              /* White text color */\n"
"    border: none;                /* No border */\n"
"    padding: 10px 20px;          /* Padding for button */\n"
"    font-size: 14px;             /* Font size */\n"
"    font-weight: bold;           /* Bold text */\n"
"    border-radius: 5px;          /* Rounded corners */\n"
"}\n"
"\n"
"QPushButton:hover {\n"
"    background-color: #45a049;   /* Darker green when hovered */\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"    background-color: #388E3C;   /* Even darker green when pressed */\n"
"}\n"
""));
        incomeButton = new QPushButton(groupBox);
        incomeButton->setObjectName("incomeButton");
        incomeButton->setGeometry(QRect(50, 100, 171, 41));
        incomeButton->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"	font: 700 9pt \"Rockwell\";\n"
"    background-color: #4CAF50;   /* Green background color */\n"
"    color: #ffffff;              /* White text color */\n"
"    border: none;                /* No border */\n"
"    padding: 10px 20px;          /* Padding for button */\n"
"    font-size: 14px;             /* Font size */\n"
"    font-weight: bold;           /* Bold text */\n"
"    border-radius: 5px;          /* Rounded corners */\n"
"}\n"
"\n"
"QPushButton:hover {\n"
"    background-color: #45a049;   /* Darker green when hovered */\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"    background-color: #388E3C;   /* Even darker green when pressed */\n"
"}\n"
""));
        indashbackButton = new QPushButton(groupBox);
        indashbackButton->setObjectName("indashbackButton");
        indashbackButton->setGeometry(QRect(20, 318, 93, 41));
        indashbackButton->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    background-color: #8c8a94; \n"
"    color: #000000;      \n"
"	font-weight: bold;           \n"
"    border: 2px solid #5a5a5a;  \n"
"    border-radius: 10px;      \n"
"    padding: 10px 20px;       \n"
"    font-size: 15px;            \n"
"}\n"
"\n"
"\n"
"\n"
"\n"
""));
        income_Expence_dash->setCentralWidget(centralwidget);

        retranslateUi(income_Expence_dash);

        QMetaObject::connectSlotsByName(income_Expence_dash);
    } // setupUi

    void retranslateUi(QMainWindow *income_Expence_dash)
    {
        income_Expence_dash->setWindowTitle(QCoreApplication::translate("income_Expence_dash", "income_expence_dash", nullptr));
        groupBox->setTitle(QCoreApplication::translate("income_Expence_dash", "Select an Option", nullptr));
        label_2->setText(QCoreApplication::translate("income_Expence_dash", "or", nullptr));
        ExpenceButton->setText(QCoreApplication::translate("income_Expence_dash", "Add an Expence", nullptr));
        incomeButton->setText(QCoreApplication::translate("income_Expence_dash", "Add an Income", nullptr));
        indashbackButton->setText(QCoreApplication::translate("income_Expence_dash", "Back", nullptr));
    } // retranslateUi

};

namespace Ui {
    class income_Expence_dash: public Ui_income_Expence_dash {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_INCOME_EXPENCE_DASH_H
