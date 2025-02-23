/********************************************************************************
** Form generated from reading UI file 'dashboard.ui'
**
** Created by: Qt User Interface Compiler version 6.7.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DASHBOARD_H
#define UI_DASHBOARD_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_dashboard
{
public:
    QWidget *centralwidget;
    QPushButton *inexTrackerButton;
    QPushButton *budgetingButton;
    QPushButton *academicButton;
    QLabel *label;
    QPushButton *logoutButton;
    QLabel *emaillabel;
    QWidget *widget;

    void setupUi(QMainWindow *dashboard)
    {
        if (dashboard->objectName().isEmpty())
            dashboard->setObjectName("dashboard");
        dashboard->resize(783, 560);
        dashboard->setStyleSheet(QString::fromUtf8("background-color: rgb(0, 0, 0);"));
        centralwidget = new QWidget(dashboard);
        centralwidget->setObjectName("centralwidget");
        inexTrackerButton = new QPushButton(centralwidget);
        inexTrackerButton->setObjectName("inexTrackerButton");
        inexTrackerButton->setGeometry(QRect(380, 180, 311, 71));
        QFont font;
        font.setFamilies({QString::fromUtf8("Arial")});
        font.setBold(true);
        inexTrackerButton->setFont(font);
        inexTrackerButton->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    background-color: #1e1e1e;  /* Slightly lighter than black for button */\n"
"    color: white;               /* Text color */\n"
"    border: 2px solid #5a5a5a;  /* Border color */\n"
"    border-radius: 10px;        /* Rounded corners */\n"
"    padding: 10px 20px;         /* Padding inside the button */\n"
"    font-size: 20px;            /* Font size for text */\n"
"}\n"
"\n"
"QPushButton:hover {\n"
"    background-color: #3d3d3d;  /* Change button color when hovered */\n"
"    border: 2px solid #00bcd4;  \n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"    background-color: #5a5a5a;  /* Darker color when button is pressed */\n"
"    border: 2px solid #ffffff;\n"
"}\n"
"\n"
"QPushButton:disabled {\n"
"    background-color: #2e2e2e;  /* Gray color for disabled state */\n"
"    color: #aaaaaa;             /* Light gray text for disabled button */\n"
"    border: 2px solid #5a5a5a;\n"
"}\n"
""));
        budgetingButton = new QPushButton(centralwidget);
        budgetingButton->setObjectName("budgetingButton");
        budgetingButton->setGeometry(QRect(380, 280, 311, 71));
        budgetingButton->setFont(font);
        budgetingButton->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    background-color: #1e1e1e;  /* Slightly lighter than black for button */\n"
"    color: white;               /* Text color */\n"
"    border: 2px solid #5a5a5a;  /* Border color */\n"
"    border-radius: 10px;        /* Rounded corners */\n"
"    padding: 10px 20px;         /* Padding inside the button */\n"
"    font-size: 20px;            /* Font size for text */\n"
"}\n"
"\n"
"QPushButton:hover {\n"
"    background-color: #3d3d3d;  /* Change button color when hovered */\n"
"    border: 2px solid #00bcd4;  \n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"    background-color: #5a5a5a;  /* Darker color when button is pressed */\n"
"    border: 2px solid #ffffff;\n"
"}\n"
"\n"
"QPushButton:disabled {\n"
"    background-color: #2e2e2e;  /* Gray color for disabled state */\n"
"    color: #aaaaaa;             /* Light gray text for disabled button */\n"
"    border: 2px solid #5a5a5a;\n"
"}\n"
""));
        academicButton = new QPushButton(centralwidget);
        academicButton->setObjectName("academicButton");
        academicButton->setGeometry(QRect(380, 380, 311, 71));
        academicButton->setFont(font);
        academicButton->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    background-color: #1e1e1e;  /* Slightly lighter than black for button */\n"
"    color: white;               /* Text color */\n"
"    border: 2px solid #5a5a5a;  /* Border color */\n"
"    border-radius: 10px;        /* Rounded corners */\n"
"    padding: 10px 20px;         /* Padding inside the button */\n"
"    font-size: 20px;            /* Font size for text */\n"
"}\n"
"\n"
"QPushButton:hover {\n"
"    background-color: #3d3d3d;  /* Change button color when hovered */\n"
"    border: 2px solid #00bcd4;  \n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"    background-color: #5a5a5a;  /* Darker color when button is pressed */\n"
"    border: 2px solid #ffffff;\n"
"}\n"
"\n"
"QPushButton:disabled {\n"
"    background-color: #2e2e2e;  /* Gray color for disabled state */\n"
"    color: #aaaaaa;             /* Light gray text for disabled button */\n"
"    border: 2px solid #5a5a5a;\n"
"}\n"
""));
        label = new QLabel(centralwidget);
        label->setObjectName("label");
        label->setGeometry(QRect(100, 40, 571, 91));
        label->setStyleSheet(QString::fromUtf8("QLabel {\n"
"    color: #00bcd4;                   /* Teal color to match your theme */\n"
"    font-size: 32px;                  /* Large font size for prominence */\n"
"    font-weight: bold;                /* Bold text */\n"
"    letter-spacing: 2px;              /* Add some spacing between letters */\n"
"    text-align: center;               /* Center the headline */\n"
"    padding: 10px;                    /* Padding around the text */\n"
"    background-color: transparent;    /* Transparent background */\n"
"    text-shadow: 2px 2px 5px #000;    /* Soft shadow for better readability */\n"
"    border-bottom: 3px solid #00bcd4; /* Adds a bottom border for emphasis */\n"
"    border-radius: 5px;               /* Rounded bottom border */\n"
"}\n"
""));
        logoutButton = new QPushButton(centralwidget);
        logoutButton->setObjectName("logoutButton");
        logoutButton->setGeometry(QRect(20, 490, 111, 41));
        logoutButton->setStyleSheet(QString::fromUtf8("QPushButton {\n"
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
        emaillabel = new QLabel(centralwidget);
        emaillabel->setObjectName("emaillabel");
        emaillabel->setGeometry(QRect(280, 20, 391, 31));
        emaillabel->setStyleSheet(QString::fromUtf8("font: 700 16pt \"Arial\";\n"
"color: #aaffff;"));
        widget = new QWidget(centralwidget);
        widget->setObjectName("widget");
        widget->setGeometry(QRect(20, 160, 321, 291));
        widget->setStyleSheet(QString::fromUtf8("QWidget{\n"
"border-image:url(:/image/dashboard.jpg/);\n"
"}"));
        dashboard->setCentralWidget(centralwidget);

        retranslateUi(dashboard);

        QMetaObject::connectSlotsByName(dashboard);
    } // setupUi

    void retranslateUi(QMainWindow *dashboard)
    {
        dashboard->setWindowTitle(QCoreApplication::translate("dashboard", "DashboardWindow", nullptr));
        inexTrackerButton->setText(QCoreApplication::translate("dashboard", "Income & Expense Tracker", nullptr));
        budgetingButton->setText(QCoreApplication::translate("dashboard", "Category-Based Budgeting", nullptr));
        academicButton->setText(QCoreApplication::translate("dashboard", "Academic Schedule", nullptr));
        label->setText(QCoreApplication::translate("dashboard", "Welcome To Personal Organizer", nullptr));
        logoutButton->setText(QCoreApplication::translate("dashboard", "Log Out", nullptr));
        emaillabel->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class dashboard: public Ui_dashboard {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DASHBOARD_H
