/********************************************************************************
** Form generated from reading UI file 'report.ui'
**
** Created by: Qt User Interface Compiler version 6.7.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_REPORT_H
#define UI_REPORT_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_chart
{
public:
    QWidget *centralwidget;
    QLabel *label;

    void setupUi(QMainWindow *chart)
    {
        if (chart->objectName().isEmpty())
            chart->setObjectName("chart");
        chart->resize(800, 600);
        chart->setStyleSheet(QString::fromUtf8("background-color: rgb(97, 97, 97);"));
        centralwidget = new QWidget(chart);
        centralwidget->setObjectName("centralwidget");
        label = new QLabel(centralwidget);
        label->setObjectName("label");
        label->setGeometry(QRect(320, 10, 121, 61));
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
        chart->setCentralWidget(centralwidget);

        retranslateUi(chart);

        QMetaObject::connectSlotsByName(chart);
    } // setupUi

    void retranslateUi(QMainWindow *chart)
    {
        chart->setWindowTitle(QCoreApplication::translate("chart", "MainWindow", nullptr));
        label->setText(QCoreApplication::translate("chart", "Report", nullptr));
    } // retranslateUi

};

namespace Ui {
    class chart: public Ui_chart {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_REPORT_H
