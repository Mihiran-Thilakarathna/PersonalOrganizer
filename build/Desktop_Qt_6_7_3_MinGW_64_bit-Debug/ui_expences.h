/********************************************************************************
** Form generated from reading UI file 'expences.ui'
**
** Created by: Qt User Interface Compiler version 6.7.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_EXPENCES_H
#define UI_EXPENCES_H

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

class Ui_expences
{
public:
    QWidget *centralwidget;
    QLabel *label_5;
    QPushButton *expenceClear;
    QComboBox *expenceCategoryComboBox;
    QLabel *label_4;
    QPushButton *expenceAdd;
    QLabel *label_7;
    QLineEdit *descriptionLineEdit;
    QCalendarWidget *dateEdit;
    QLabel *label_2;
    QPushButton *expenceback;
    QLabel *label_3;
    QLineEdit *amountLineEdit;
    QPushButton *totalExpenceButton;

    void setupUi(QMainWindow *expences)
    {
        if (expences->objectName().isEmpty())
            expences->setObjectName("expences");
        expences->resize(775, 616);
        expences->setStyleSheet(QString::fromUtf8("background-color: rgb(97, 97, 97);"));
        centralwidget = new QWidget(expences);
        centralwidget->setObjectName("centralwidget");
        label_5 = new QLabel(centralwidget);
        label_5->setObjectName("label_5");
        label_5->setGeometry(QRect(270, 10, 251, 41));
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
        expenceClear = new QPushButton(centralwidget);
        expenceClear->setObjectName("expenceClear");
        expenceClear->setGeometry(QRect(470, 440, 93, 29));
        expenceClear->setStyleSheet(QString::fromUtf8("QPushButton {\n"
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
        expenceCategoryComboBox = new QComboBox(centralwidget);
        expenceCategoryComboBox->addItem(QString());
        expenceCategoryComboBox->addItem(QString());
        expenceCategoryComboBox->addItem(QString());
        expenceCategoryComboBox->addItem(QString());
        expenceCategoryComboBox->addItem(QString());
        expenceCategoryComboBox->addItem(QString());
        expenceCategoryComboBox->addItem(QString());
        expenceCategoryComboBox->addItem(QString());
        expenceCategoryComboBox->setObjectName("expenceCategoryComboBox");
        expenceCategoryComboBox->setGeometry(QRect(310, 70, 251, 41));
        expenceCategoryComboBox->setStyleSheet(QString::fromUtf8("font: 700 italic 9pt \"Arial\";\n"
""));
        label_4 = new QLabel(centralwidget);
        label_4->setObjectName("label_4");
        label_4->setGeometry(QRect(130, 130, 101, 41));
        label_4->setStyleSheet(QString::fromUtf8("QLabel {\n"
"	font: 700 9pt \"Arial\";\n"
"    color: #000000;                 \n"
"	font-size: 15px;             \n"
"    font-weight: bold;      \n"
"	background-color:transparent;        \n"
"}"));
        expenceAdd = new QPushButton(centralwidget);
        expenceAdd->setObjectName("expenceAdd");
        expenceAdd->setGeometry(QRect(310, 440, 93, 29));
        expenceAdd->setStyleSheet(QString::fromUtf8("QPushButton {\n"
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
        label_7 = new QLabel(centralwidget);
        label_7->setObjectName("label_7");
        label_7->setGeometry(QRect(130, 70, 141, 41));
        label_7->setStyleSheet(QString::fromUtf8("QLabel {\n"
"	font: 700 9pt \"Arial\";\n"
"    color: #000000;                 \n"
"	font-size: 15px;             \n"
"    font-weight: bold;   \n"
"	background-color:transparent;           \n"
"}"));
        descriptionLineEdit = new QLineEdit(centralwidget);
        descriptionLineEdit->setObjectName("descriptionLineEdit");
        descriptionLineEdit->setGeometry(QRect(310, 190, 251, 41));
        dateEdit = new QCalendarWidget(centralwidget);
        dateEdit->setObjectName("dateEdit");
        dateEdit->setGeometry(QRect(310, 260, 251, 151));
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
        label_2 = new QLabel(centralwidget);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(130, 190, 111, 41));
        label_2->setStyleSheet(QString::fromUtf8("QLabel {\n"
"	font: 700 9pt \"Arial\";\n"
"    color: #000000;                 \n"
"	font-size: 15px;             \n"
"    font-weight: bold;       \n"
"	background-color:transparent;       \n"
"}"));
        expenceback = new QPushButton(centralwidget);
        expenceback->setObjectName("expenceback");
        expenceback->setGeometry(QRect(20, 550, 101, 41));
        expenceback->setStyleSheet(QString::fromUtf8("QPushButton {\n"
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
        label_3->setGeometry(QRect(130, 260, 101, 41));
        label_3->setStyleSheet(QString::fromUtf8("QLabel {\n"
"	font: 700 9pt \"Arial\";\n"
"    color: #000000;                 \n"
"	font-size: 15px;             \n"
"    font-weight: bold;\n"
"	background-color:transparent;              \n"
"}"));
        amountLineEdit = new QLineEdit(centralwidget);
        amountLineEdit->setObjectName("amountLineEdit");
        amountLineEdit->setGeometry(QRect(310, 130, 251, 41));
        totalExpenceButton = new QPushButton(centralwidget);
        totalExpenceButton->setObjectName("totalExpenceButton");
        totalExpenceButton->setGeometry(QRect(330, 490, 211, 41));
        totalExpenceButton->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    background-color: #ffaaff; \n"
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
        expences->setCentralWidget(centralwidget);

        retranslateUi(expences);

        QMetaObject::connectSlotsByName(expences);
    } // setupUi

    void retranslateUi(QMainWindow *expences)
    {
        expences->setWindowTitle(QCoreApplication::translate("expences", "ExpencesWindow", nullptr));
        label_5->setText(QCoreApplication::translate("expences", "SET  EXPENCES", nullptr));
        expenceClear->setText(QCoreApplication::translate("expences", "Clear", nullptr));
        expenceCategoryComboBox->setItemText(0, QCoreApplication::translate("expences", "Select a Category", nullptr));
        expenceCategoryComboBox->setItemText(1, QCoreApplication::translate("expences", "Food", nullptr));
        expenceCategoryComboBox->setItemText(2, QCoreApplication::translate("expences", "Entertaintment", nullptr));
        expenceCategoryComboBox->setItemText(3, QCoreApplication::translate("expences", "Traveling", nullptr));
        expenceCategoryComboBox->setItemText(4, QCoreApplication::translate("expences", "Clothing", nullptr));
        expenceCategoryComboBox->setItemText(5, QCoreApplication::translate("expences", "Education equipment", nullptr));
        expenceCategoryComboBox->setItemText(6, QCoreApplication::translate("expences", "University Fees", nullptr));
        expenceCategoryComboBox->setItemText(7, QCoreApplication::translate("expences", "Other", nullptr));

        label_4->setText(QCoreApplication::translate("expences", "Amount", nullptr));
        expenceAdd->setText(QCoreApplication::translate("expences", "Add", nullptr));
        label_7->setText(QCoreApplication::translate("expences", "Expence Category", nullptr));
        label_2->setText(QCoreApplication::translate("expences", "Description", nullptr));
        expenceback->setText(QCoreApplication::translate("expences", "Back", nullptr));
        label_3->setText(QCoreApplication::translate("expences", "Date", nullptr));
        totalExpenceButton->setText(QCoreApplication::translate("expences", "View Expences Report", nullptr));
    } // retranslateUi

};

namespace Ui {
    class expences: public Ui_expences {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_EXPENCES_H
