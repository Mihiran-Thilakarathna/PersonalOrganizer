/********************************************************************************
** Form generated from reading UI file 'reports.ui'
**
** Created by: Qt User Interface Compiler version 6.7.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_REPORTS_H
#define UI_REPORTS_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_reports
{
public:
    QWidget *centralwidget;
    QPushButton *reportBackButton;
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label_4;
    QLabel *label_5;
    QLabel *label_6;
    QLabel *label_7;
    QLabel *label_8;
    QWidget *verticalLayoutWidget;
    QVBoxLayout *verticalLayout;

    void setupUi(QMainWindow *reports)
    {
        if (reports->objectName().isEmpty())
            reports->setObjectName("reports");
        reports->resize(800, 600);
        reports->setStyleSheet(QString::fromUtf8("background-color: rgb(97, 97, 97);"));
        centralwidget = new QWidget(reports);
        centralwidget->setObjectName("centralwidget");
        reportBackButton = new QPushButton(centralwidget);
        reportBackButton->setObjectName("reportBackButton");
        reportBackButton->setGeometry(QRect(40, 530, 93, 29));
        reportBackButton->setStyleSheet(QString::fromUtf8("QPushButton {\n"
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
        label = new QLabel(centralwidget);
        label->setObjectName("label");
        label->setGeometry(QRect(320, 20, 161, 51));
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
        label_2->setGeometry(QRect(40, 180, 161, 20));
        label_3 = new QLabel(centralwidget);
        label_3->setObjectName("label_3");
        label_3->setGeometry(QRect(40, 220, 161, 20));
        label_4 = new QLabel(centralwidget);
        label_4->setObjectName("label_4");
        label_4->setGeometry(QRect(40, 260, 161, 20));
        label_5 = new QLabel(centralwidget);
        label_5->setObjectName("label_5");
        label_5->setGeometry(QRect(40, 300, 161, 20));
        label_6 = new QLabel(centralwidget);
        label_6->setObjectName("label_6");
        label_6->setGeometry(QRect(40, 340, 161, 20));
        label_7 = new QLabel(centralwidget);
        label_7->setObjectName("label_7");
        label_7->setGeometry(QRect(40, 380, 161, 20));
        label_8 = new QLabel(centralwidget);
        label_8->setObjectName("label_8");
        label_8->setGeometry(QRect(40, 420, 161, 20));
        verticalLayoutWidget = new QWidget(centralwidget);
        verticalLayoutWidget->setObjectName("verticalLayoutWidget");
        verticalLayoutWidget->setGeometry(QRect(230, 110, 541, 441));
        verticalLayout = new QVBoxLayout(verticalLayoutWidget);
        verticalLayout->setObjectName("verticalLayout");
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        reports->setCentralWidget(centralwidget);

        retranslateUi(reports);

        QMetaObject::connectSlotsByName(reports);
    } // setupUi

    void retranslateUi(QMainWindow *reports)
    {
        reports->setWindowTitle(QCoreApplication::translate("reports", "MainWindow", nullptr));
        reportBackButton->setText(QCoreApplication::translate("reports", "Back", nullptr));
        label->setText(QCoreApplication::translate("reports", "REPORT", nullptr));
        label_2->setText(QCoreApplication::translate("reports", "TextLabel", nullptr));
        label_3->setText(QCoreApplication::translate("reports", "TextLabel", nullptr));
        label_4->setText(QCoreApplication::translate("reports", "TextLabel", nullptr));
        label_5->setText(QCoreApplication::translate("reports", "TextLabel", nullptr));
        label_6->setText(QCoreApplication::translate("reports", "TextLabel", nullptr));
        label_7->setText(QCoreApplication::translate("reports", "TextLabel", nullptr));
        label_8->setText(QCoreApplication::translate("reports", "TextLabel", nullptr));
    } // retranslateUi

};

namespace Ui {
    class reports: public Ui_reports {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_REPORTS_H
