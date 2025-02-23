/********************************************************************************
** Form generated from reading UI file 'budget.ui'
**
** Created by: Qt User Interface Compiler version 6.7.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_BUDGET_H
#define UI_BUDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDateEdit>
#include <QtWidgets/QFrame>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_budget
{
public:
    QWidget *centralwidget;
    QLineEdit *amountLineEdit;
    QLabel *label;
    QPushButton *BudgetClear;
    QTableWidget *tableWidget;
    QComboBox *categoryComboBox;
    QLabel *label_3;
    QLabel *label_2;
    QPushButton *addBudgetData;
    QPushButton *BudgetBack;
    QPushButton *refreshButton;
    QLabel *label_4;
    QLineEdit *totalBudgetLineEdit;
    QLabel *label_5;
    QDateEdit *dateEdit;
    QFrame *line;
    QLabel *label_6;
    QLabel *label_7;
    QComboBox *monthComboBox;

    void setupUi(QMainWindow *budget)
    {
        if (budget->objectName().isEmpty())
            budget->setObjectName("budget");
        budget->resize(882, 579);
        budget->setStyleSheet(QString::fromUtf8("background-color: #979d9a;"));
        centralwidget = new QWidget(budget);
        centralwidget->setObjectName("centralwidget");
        amountLineEdit = new QLineEdit(centralwidget);
        amountLineEdit->setObjectName("amountLineEdit");
        amountLineEdit->setGeometry(QRect(140, 190, 241, 31));
        label = new QLabel(centralwidget);
        label->setObjectName("label");
        label->setGeometry(QRect(90, 30, 291, 71));
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
        BudgetClear = new QPushButton(centralwidget);
        BudgetClear->setObjectName("BudgetClear");
        BudgetClear->setGeometry(QRect(280, 330, 93, 29));
        BudgetClear->setStyleSheet(QString::fromUtf8("QPushButton {\n"
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
        tableWidget = new QTableWidget(centralwidget);
        if (tableWidget->columnCount() < 3)
            tableWidget->setColumnCount(3);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(0, __qtablewidgetitem);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(1, __qtablewidgetitem1);
        QTableWidgetItem *__qtablewidgetitem2 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(2, __qtablewidgetitem2);
        tableWidget->setObjectName("tableWidget");
        tableWidget->setGeometry(QRect(480, 250, 381, 231));
        categoryComboBox = new QComboBox(centralwidget);
        categoryComboBox->addItem(QString());
        categoryComboBox->addItem(QString());
        categoryComboBox->addItem(QString());
        categoryComboBox->addItem(QString());
        categoryComboBox->addItem(QString());
        categoryComboBox->addItem(QString());
        categoryComboBox->addItem(QString());
        categoryComboBox->addItem(QString());
        categoryComboBox->setObjectName("categoryComboBox");
        categoryComboBox->setGeometry(QRect(140, 130, 241, 31));
        label_3 = new QLabel(centralwidget);
        label_3->setObjectName("label_3");
        label_3->setGeometry(QRect(20, 190, 121, 31));
        label_3->setStyleSheet(QString::fromUtf8("font: 700 12pt \"Arial\";"));
        label_2 = new QLabel(centralwidget);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(20, 130, 121, 31));
        label_2->setStyleSheet(QString::fromUtf8("font: 700 12pt \"Arial\";"));
        addBudgetData = new QPushButton(centralwidget);
        addBudgetData->setObjectName("addBudgetData");
        addBudgetData->setGeometry(QRect(130, 330, 93, 29));
        addBudgetData->setStyleSheet(QString::fromUtf8("QPushButton {\n"
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
        BudgetBack = new QPushButton(centralwidget);
        BudgetBack->setObjectName("BudgetBack");
        BudgetBack->setGeometry(QRect(20, 490, 91, 41));
        BudgetBack->setStyleSheet(QString::fromUtf8("QPushButton {\n"
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
        refreshButton = new QPushButton(centralwidget);
        refreshButton->setObjectName("refreshButton");
        refreshButton->setGeometry(QRect(570, 180, 181, 41));
        refreshButton->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"	font: 700 italic 9pt \"Arial\";\n"
"    background-color: #aaaaff;\n"
"    border: 1px solid #003300;\n"
"    border-radius: 5px;\n"
"    padding: 5px;\n"
"    font-size: 14px;\n"
"    color: #003300;\n"
"}\n"
"QPushButton:hover {\n"
"    background-color:#e2ceff;\n"
"}\n"
""));
        label_4 = new QLabel(centralwidget);
        label_4->setObjectName("label_4");
        label_4->setGeometry(QRect(480, 510, 141, 31));
        label_4->setStyleSheet(QString::fromUtf8("font: 700 12pt \"Arial\";"));
        totalBudgetLineEdit = new QLineEdit(centralwidget);
        totalBudgetLineEdit->setObjectName("totalBudgetLineEdit");
        totalBudgetLineEdit->setGeometry(QRect(620, 510, 241, 31));
        label_5 = new QLabel(centralwidget);
        label_5->setObjectName("label_5");
        label_5->setGeometry(QRect(20, 250, 91, 31));
        label_5->setStyleSheet(QString::fromUtf8("font: 700 12pt \"Arial\";"));
        dateEdit = new QDateEdit(centralwidget);
        dateEdit->setObjectName("dateEdit");
        dateEdit->setGeometry(QRect(140, 250, 241, 26));
        line = new QFrame(centralwidget);
        line->setObjectName("line");
        line->setGeometry(QRect(420, 0, 20, 581));
        line->setFrameShape(QFrame::Shape::VLine);
        line->setFrameShadow(QFrame::Shadow::Sunken);
        label_6 = new QLabel(centralwidget);
        label_6->setObjectName("label_6");
        label_6->setGeometry(QRect(500, 30, 321, 71));
        label_6->setStyleSheet(QString::fromUtf8("QLabel {\n"
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
        label_7 = new QLabel(centralwidget);
        label_7->setObjectName("label_7");
        label_7->setGeometry(QRect(450, 130, 151, 31));
        label_7->setStyleSheet(QString::fromUtf8("font: 700 12pt \"Arial\";"));
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
        monthComboBox->setObjectName("monthComboBox");
        monthComboBox->setGeometry(QRect(610, 130, 231, 31));
        budget->setCentralWidget(centralwidget);

        retranslateUi(budget);

        QMetaObject::connectSlotsByName(budget);
    } // setupUi

    void retranslateUi(QMainWindow *budget)
    {
        budget->setWindowTitle(QCoreApplication::translate("budget", "BudgetWindow", nullptr));
        label->setText(QCoreApplication::translate("budget", "Set Your Budgets", nullptr));
        BudgetClear->setText(QCoreApplication::translate("budget", "clear", nullptr));
        QTableWidgetItem *___qtablewidgetitem = tableWidget->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QCoreApplication::translate("budget", "category", nullptr));
        QTableWidgetItem *___qtablewidgetitem1 = tableWidget->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QCoreApplication::translate("budget", "Amount", nullptr));
        QTableWidgetItem *___qtablewidgetitem2 = tableWidget->horizontalHeaderItem(2);
        ___qtablewidgetitem2->setText(QCoreApplication::translate("budget", "date", nullptr));
        categoryComboBox->setItemText(0, QCoreApplication::translate("budget", "Select a Category", nullptr));
        categoryComboBox->setItemText(1, QCoreApplication::translate("budget", "Food", nullptr));
        categoryComboBox->setItemText(2, QCoreApplication::translate("budget", "Entertainment", nullptr));
        categoryComboBox->setItemText(3, QCoreApplication::translate("budget", "Traveling", nullptr));
        categoryComboBox->setItemText(4, QCoreApplication::translate("budget", "Clothing", nullptr));
        categoryComboBox->setItemText(5, QCoreApplication::translate("budget", "Education equipment", nullptr));
        categoryComboBox->setItemText(6, QCoreApplication::translate("budget", "University fess", nullptr));
        categoryComboBox->setItemText(7, QCoreApplication::translate("budget", "Others", nullptr));

        label_3->setText(QCoreApplication::translate("budget", "Amount", nullptr));
        label_2->setText(QCoreApplication::translate("budget", "Category", nullptr));
        addBudgetData->setText(QCoreApplication::translate("budget", "Add", nullptr));
        BudgetBack->setText(QCoreApplication::translate("budget", "Back", nullptr));
        refreshButton->setText(QCoreApplication::translate("budget", " Show Budget Details", nullptr));
        label_4->setText(QCoreApplication::translate("budget", "Total Budget : ", nullptr));
        label_5->setText(QCoreApplication::translate("budget", "Date", nullptr));
        label_6->setText(QCoreApplication::translate("budget", "Show Budget Plans", nullptr));
        label_7->setText(QCoreApplication::translate("budget", "Select a Month :", nullptr));
        monthComboBox->setItemText(0, QCoreApplication::translate("budget", "Select a month", nullptr));
        monthComboBox->setItemText(1, QCoreApplication::translate("budget", "January", nullptr));
        monthComboBox->setItemText(2, QCoreApplication::translate("budget", "February", nullptr));
        monthComboBox->setItemText(3, QCoreApplication::translate("budget", "March", nullptr));
        monthComboBox->setItemText(4, QCoreApplication::translate("budget", "April", nullptr));
        monthComboBox->setItemText(5, QCoreApplication::translate("budget", "June", nullptr));
        monthComboBox->setItemText(6, QCoreApplication::translate("budget", "July", nullptr));
        monthComboBox->setItemText(7, QCoreApplication::translate("budget", "August", nullptr));
        monthComboBox->setItemText(8, QCoreApplication::translate("budget", "September", nullptr));
        monthComboBox->setItemText(9, QCoreApplication::translate("budget", "October", nullptr));
        monthComboBox->setItemText(10, QCoreApplication::translate("budget", "November", nullptr));
        monthComboBox->setItemText(11, QCoreApplication::translate("budget", "December", nullptr));

    } // retranslateUi

};

namespace Ui {
    class budget: public Ui_budget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_BUDGET_H
