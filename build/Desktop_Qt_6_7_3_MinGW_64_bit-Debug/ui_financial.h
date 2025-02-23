/********************************************************************************
** Form generated from reading UI file 'financial.ui'
**
** Created by: Qt User Interface Compiler version 6.7.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_FINANCIAL_H
#define UI_FINANCIAL_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Financial
{
public:
    QWidget *centralwidget;
    QPushButton *financialBack;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *Financial)
    {
        if (Financial->objectName().isEmpty())
            Financial->setObjectName("Financial");
        Financial->resize(800, 600);
        Financial->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));
        centralwidget = new QWidget(Financial);
        centralwidget->setObjectName("centralwidget");
        financialBack = new QPushButton(centralwidget);
        financialBack->setObjectName("financialBack");
        financialBack->setGeometry(QRect(60, 428, 121, 41));
        Financial->setCentralWidget(centralwidget);
        menubar = new QMenuBar(Financial);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 800, 26));
        Financial->setMenuBar(menubar);
        statusbar = new QStatusBar(Financial);
        statusbar->setObjectName("statusbar");
        Financial->setStatusBar(statusbar);

        retranslateUi(Financial);

        QMetaObject::connectSlotsByName(Financial);
    } // setupUi

    void retranslateUi(QMainWindow *Financial)
    {
        Financial->setWindowTitle(QCoreApplication::translate("Financial", "MainWindow", nullptr));
        financialBack->setText(QCoreApplication::translate("Financial", "Back", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Financial: public Ui_Financial {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FINANCIAL_H
