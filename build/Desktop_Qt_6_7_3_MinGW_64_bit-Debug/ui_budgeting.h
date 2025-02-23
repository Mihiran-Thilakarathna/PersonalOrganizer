/********************************************************************************
** Form generated from reading UI file 'budgeting.ui'
**
** Created by: Qt User Interface Compiler version 6.7.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_BUDGETING_H
#define UI_BUDGETING_H

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

class Ui_budgeting
{
public:
    QWidget *centralwidget;
    QLabel *label;
    QLabel *label_2;
    QComboBox *categoryComboBox;
    QLabel *label_3;
    QLineEdit *amountInput;
    QTableWidget *tableWidget;
    QPushButton *addButton;
    QPushButton *pushButton_2;

    void setupUi(QMainWindow *budgeting)
    {
        if (budgeting->objectName().isEmpty())
            budgeting->setObjectName("budgeting");
        budgeting->resize(997, 615);
        budgeting->setStyleSheet(QString::fromUtf8("background-color: rgb(170, 255, 255);"));
        centralwidget = new QWidget(budgeting);
        centralwidget->setObjectName("centralwidget");
        label = new QLabel(centralwidget);
        label->setObjectName("label");
        label->setGeometry(QRect(350, 20, 291, 71));
        label->setStyleSheet(QString::fromUtf8("font: 700 italic 20pt \"Arial\";\n"
"text-decoration: underline;"));
        label_2 = new QLabel(centralwidget);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(50, 150, 121, 31));
        label_2->setStyleSheet(QString::fromUtf8("font: 700 12pt \"Arial\";"));
        categoryComboBox = new QComboBox(centralwidget);
        categoryComboBox->setObjectName("categoryComboBox");
        categoryComboBox->setGeometry(QRect(170, 150, 241, 31));
        label_3 = new QLabel(centralwidget);
        label_3->setObjectName("label_3");
        label_3->setGeometry(QRect(50, 210, 121, 31));
        label_3->setStyleSheet(QString::fromUtf8("font: 700 12pt \"Arial\";"));
        amountInput = new QLineEdit(centralwidget);
        amountInput->setObjectName("amountInput");
        amountInput->setGeometry(QRect(170, 210, 241, 31));
        tableWidget = new QTableWidget(centralwidget);
        tableWidget->setObjectName("tableWidget");
        tableWidget->setGeometry(QRect(450, 150, 511, 421));
        addButton = new QPushButton(centralwidget);
        addButton->setObjectName("addButton");
        addButton->setGeometry(QRect(70, 390, 93, 29));
        pushButton_2 = new QPushButton(centralwidget);
        pushButton_2->setObjectName("pushButton_2");
        pushButton_2->setGeometry(QRect(220, 390, 93, 29));
        budgeting->setCentralWidget(centralwidget);

        retranslateUi(budgeting);

        QMetaObject::connectSlotsByName(budgeting);
    } // setupUi

    void retranslateUi(QMainWindow *budgeting)
    {
        budgeting->setWindowTitle(QCoreApplication::translate("budgeting", "MainWindow", nullptr));
        label->setText(QCoreApplication::translate("budgeting", "Set Your Budgets", nullptr));
        label_2->setText(QCoreApplication::translate("budgeting", "Category", nullptr));
        label_3->setText(QCoreApplication::translate("budgeting", "Amount", nullptr));
        addButton->setText(QCoreApplication::translate("budgeting", "Add", nullptr));
        pushButton_2->setText(QCoreApplication::translate("budgeting", "clear", nullptr));
    } // retranslateUi

};

namespace Ui {
    class budgeting: public Ui_budgeting {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_BUDGETING_H
