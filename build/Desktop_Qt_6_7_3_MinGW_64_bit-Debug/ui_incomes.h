/********************************************************************************
** Form generated from reading UI file 'incomes.ui'
**
** Created by: Qt User Interface Compiler version 6.7.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_INCOMES_H
#define UI_INCOMES_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCalendarWidget>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_incomes
{
public:
    QWidget *centralwidget;
    QCalendarWidget *dateEdit;
    QLabel *label_7;
    QComboBox *incomeSourceComboBox;
    QLabel *label_5;
    QLabel *label_3;
    QPushButton *incomeAdd;
    QLabel *label_2;
    QLineEdit *amountLineEdit;
    QPushButton *incomesBack;
    QLineEdit *descriptionLineEdit;
    QPushButton *incomeClear;
    QLabel *label_4;
    QPushButton *totalIncomeButton;

    void setupUi(QMainWindow *incomes)
    {
        if (incomes->objectName().isEmpty())
            incomes->setObjectName("incomes");
        incomes->resize(701, 605);
        incomes->setStyleSheet(QString::fromUtf8("background-color: rgb(97, 97, 97);"));
        centralwidget = new QWidget(incomes);
        centralwidget->setObjectName("centralwidget");
        dateEdit = new QCalendarWidget(centralwidget);
        dateEdit->setObjectName("dateEdit");
        dateEdit->setGeometry(QRect(330, 280, 251, 151));
        dateEdit->setStyleSheet(QString::fromUtf8("QCalendarWidget QAbstractItemView {\n"
"    selection-background-color: #66bb6a;  /* Selected date color */\n"
"    background-color: #ffffff;\n"
"    color: #2e7d32;\n"
"    border-radius: 5px;\n"
"}\n"
"QCalendarWidget QToolButton {\n"
"    background-color: #66bb6a;\n"
"    color: #ffffff;\n"
"    font-size: 13px;\n"
"    font-weight: bold;\n"
"    border-radius: 5px;\n"
"    padding: 3px;\n"
"}\n"
"QCalendarWidget QHeaderView::section {\n"
"    background-color: #81c784;\n"
"    color: #ffffff;\n"
"}\n"
""));
        label_7 = new QLabel(centralwidget);
        label_7->setObjectName("label_7");
        label_7->setGeometry(QRect(140, 90, 151, 41));
        label_7->setStyleSheet(QString::fromUtf8("QLabel {\n"
"	font: 700 9pt \"Arial\";\n"
"    color: #000000;                 \n"
"	font-size: 18px;             \n"
"    font-weight: bold;   \n"
"	background-color:transparent;           \n"
"}"));
        incomeSourceComboBox = new QComboBox(centralwidget);
        incomeSourceComboBox->addItem(QString());
        incomeSourceComboBox->addItem(QString());
        incomeSourceComboBox->addItem(QString());
        incomeSourceComboBox->addItem(QString());
        incomeSourceComboBox->addItem(QString());
        incomeSourceComboBox->addItem(QString());
        incomeSourceComboBox->setObjectName("incomeSourceComboBox");
        incomeSourceComboBox->setGeometry(QRect(330, 90, 251, 41));
        incomeSourceComboBox->setStyleSheet(QString::fromUtf8("font: 700 italic 9pt \"Arial\";\n"
""));
        label_5 = new QLabel(centralwidget);
        label_5->setObjectName("label_5");
        label_5->setGeometry(QRect(280, 30, 201, 41));
        label_5->setStyleSheet(QString::fromUtf8("QLabel {\n"
"    color: #00ffff;             \n"
"	text-decoration: underline;\n"
"	font: 700 italic 9pt \"Arial\";\n"
"    font-size: 25px;                \n"
"    font-weight: bold;        \n"
"    letter-spacing: 2px;          \n"
"    text-align: center;              \n"
"    background-color: transparent;    \n"
"\n"
"}\n"
""));
        label_3 = new QLabel(centralwidget);
        label_3->setObjectName("label_3");
        label_3->setGeometry(QRect(140, 280, 101, 41));
        label_3->setStyleSheet(QString::fromUtf8("QLabel {\n"
"	font: 700 9pt \"Arial\";\n"
"    color: #000000;                 \n"
"	font-size: 18px;             \n"
"    font-weight: bold;\n"
"	background-color:transparent;              \n"
"}"));
        incomeAdd = new QPushButton(centralwidget);
        incomeAdd->setObjectName("incomeAdd");
        incomeAdd->setGeometry(QRect(330, 460, 93, 29));
        incomeAdd->setStyleSheet(QString::fromUtf8("QPushButton {\n"
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
        label_2 = new QLabel(centralwidget);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(140, 210, 111, 41));
        label_2->setStyleSheet(QString::fromUtf8("QLabel {\n"
"	font: 700 9pt \"Arial\";\n"
"    color: #000000;                 \n"
"	font-size: 18px;             \n"
"    font-weight: bold;       \n"
"	background-color:transparent;       \n"
"}"));
        amountLineEdit = new QLineEdit(centralwidget);
        amountLineEdit->setObjectName("amountLineEdit");
        amountLineEdit->setGeometry(QRect(330, 150, 251, 41));
        incomesBack = new QPushButton(centralwidget);
        incomesBack->setObjectName("incomesBack");
        incomesBack->setGeometry(QRect(10, 550, 93, 41));
        incomesBack->setStyleSheet(QString::fromUtf8("QPushButton {\n"
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
        descriptionLineEdit = new QLineEdit(centralwidget);
        descriptionLineEdit->setObjectName("descriptionLineEdit");
        descriptionLineEdit->setGeometry(QRect(330, 210, 251, 41));
        incomeClear = new QPushButton(centralwidget);
        incomeClear->setObjectName("incomeClear");
        incomeClear->setGeometry(QRect(490, 460, 93, 29));
        incomeClear->setStyleSheet(QString::fromUtf8("QPushButton {\n"
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
        label_4 = new QLabel(centralwidget);
        label_4->setObjectName("label_4");
        label_4->setGeometry(QRect(140, 150, 101, 41));
        label_4->setStyleSheet(QString::fromUtf8("QLabel {\n"
"	font: 700 9pt \"Arial\";\n"
"    color: #000000;                 \n"
"	font-size: 18px;             \n"
"    font-weight: bold;      \n"
"	background-color:transparent;        \n"
"}"));
        totalIncomeButton = new QPushButton(centralwidget);
        totalIncomeButton->setObjectName("totalIncomeButton");
        totalIncomeButton->setGeometry(QRect(320, 510, 271, 41));
        totalIncomeButton->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    background-color:#aaaaff; \n"
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
        incomes->setCentralWidget(centralwidget);

        retranslateUi(incomes);

        QMetaObject::connectSlotsByName(incomes);
    } // setupUi

    void retranslateUi(QMainWindow *incomes)
    {
        incomes->setWindowTitle(QCoreApplication::translate("incomes", "IncomesWindow", nullptr));
        label_7->setText(QCoreApplication::translate("incomes", "Income Source", nullptr));
        incomeSourceComboBox->setItemText(0, QCoreApplication::translate("incomes", "Select a Source", nullptr));
        incomeSourceComboBox->setItemText(1, QCoreApplication::translate("incomes", "Job", nullptr));
        incomeSourceComboBox->setItemText(2, QCoreApplication::translate("incomes", "Allownce from parents", nullptr));
        incomeSourceComboBox->setItemText(3, QCoreApplication::translate("incomes", "Schorlaships", nullptr));
        incomeSourceComboBox->setItemText(4, QCoreApplication::translate("incomes", "Student Aid", nullptr));
        incomeSourceComboBox->setItemText(5, QCoreApplication::translate("incomes", "Others", nullptr));

        label_5->setText(QCoreApplication::translate("incomes", "SET INCOMES", nullptr));
        label_3->setText(QCoreApplication::translate("incomes", "Date", nullptr));
        incomeAdd->setText(QCoreApplication::translate("incomes", "Add", nullptr));
        label_2->setText(QCoreApplication::translate("incomes", "Description", nullptr));
        incomesBack->setText(QCoreApplication::translate("incomes", "Back", nullptr));
        incomeClear->setText(QCoreApplication::translate("incomes", "Clear", nullptr));
        label_4->setText(QCoreApplication::translate("incomes", "Amount", nullptr));
        totalIncomeButton->setText(QCoreApplication::translate("incomes", "Show Income Details", nullptr));
    } // retranslateUi

};

namespace Ui {
    class incomes: public Ui_incomes {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_INCOMES_H
