/********************************************************************************
** Form generated from reading UI file 'example.ui'
**
** Created by: Qt User Interface Compiler version 6.7.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_EXAMPLE_H
#define UI_EXAMPLE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Example
{
public:
    QWidget *centralwidget;
    QWidget *widget;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *Example)
    {
        if (Example->objectName().isEmpty())
            Example->setObjectName("Example");
        Example->resize(800, 600);
        centralwidget = new QWidget(Example);
        centralwidget->setObjectName("centralwidget");
        widget = new QWidget(centralwidget);
        widget->setObjectName("widget");
        widget->setGeometry(QRect(50, 40, 681, 451));
        Example->setCentralWidget(centralwidget);
        menubar = new QMenuBar(Example);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 800, 26));
        Example->setMenuBar(menubar);
        statusbar = new QStatusBar(Example);
        statusbar->setObjectName("statusbar");
        Example->setStatusBar(statusbar);

        retranslateUi(Example);

        QMetaObject::connectSlotsByName(Example);
    } // setupUi

    void retranslateUi(QMainWindow *Example)
    {
        Example->setWindowTitle(QCoreApplication::translate("Example", "MainWindow", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Example: public Ui_Example {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_EXAMPLE_H
