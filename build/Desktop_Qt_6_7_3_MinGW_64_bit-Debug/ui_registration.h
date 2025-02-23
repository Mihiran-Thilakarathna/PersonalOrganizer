/********************************************************************************
** Form generated from reading UI file 'registration.ui'
**
** Created by: Qt User Interface Compiler version 6.7.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_REGISTRATION_H
#define UI_REGISTRATION_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_registration
{
public:
    QWidget *centralwidget;
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label_4;
    QLineEdit *lineEdit;
    QLineEdit *lineEdit_2;
    QLineEdit *lineEdit_3;
    QLabel *label_6;
    QLineEdit *lineEdit_4;
    QLabel *label_7;
    QLineEdit *lineEdit_5;
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *registration)
    {
        if (registration->objectName().isEmpty())
            registration->setObjectName("registration");
        registration->resize(736, 516);
        registration->setStyleSheet(QString::fromUtf8("background-color: rgb(75, 75, 75);"));
        centralwidget = new QWidget(registration);
        centralwidget->setObjectName("centralwidget");
        label = new QLabel(centralwidget);
        label->setObjectName("label");
        label->setGeometry(QRect(270, 10, 251, 61));
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
        label_2 = new QLabel(centralwidget);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(70, 90, 171, 31));
        label_2->setStyleSheet(QString::fromUtf8("QLabel {\n"
"    color: #f0f0f0;                \n"
"    font-size: 20px;                \n"
"    font-weight: bold;           \n"
"    letter-spacing: 1px;           \n"
"    padding: 5px;                   \n"
"    background-color: transparent;  \n"
"    text-shadow: 1px 1px 2px #000;  \n"
"}\n"
"\n"
"QLabel#titleLabel {\n"
"    font-size: 28px;                \n"
"    font-weight: bold;              \n"
"    letter-spacing: 2px;          \n"
"    padding: 10px;               \n"
"    color: #00bcd4;            \n"
"    background-color: transparent; \n"
"    border-bottom: 2px solid #00bcd4; \n"
"    text-align: center;             \n"
"    text-shadow: 2px 2px 5px #000;  \n"
"    border-radius: 5px;            \n"
"}\n"
""));
        label_3 = new QLabel(centralwidget);
        label_3->setObjectName("label_3");
        label_3->setGeometry(QRect(70, 140, 171, 31));
        label_3->setStyleSheet(QString::fromUtf8("QLabel {\n"
"    color: #f0f0f0;                \n"
"    font-size: 20px;                \n"
"    font-weight: bold;           \n"
"    letter-spacing: 1px;           \n"
"    padding: 5px;                   \n"
"    background-color: transparent;  \n"
"    text-shadow: 1px 1px 2px #000;  \n"
"}\n"
"\n"
"QLabel#titleLabel {\n"
"    font-size: 28px;                \n"
"    font-weight: bold;              \n"
"    letter-spacing: 2px;          \n"
"    padding: 10px;               \n"
"    color: #00bcd4;            \n"
"    background-color: transparent; \n"
"    border-bottom: 2px solid #00bcd4; \n"
"    text-align: center;             \n"
"    text-shadow: 2px 2px 5px #000;  \n"
"    border-radius: 5px;            \n"
"}\n"
""));
        label_4 = new QLabel(centralwidget);
        label_4->setObjectName("label_4");
        label_4->setGeometry(QRect(70, 190, 171, 31));
        label_4->setStyleSheet(QString::fromUtf8("QLabel {\n"
"    color: #f0f0f0;                \n"
"    font-size: 20px;                \n"
"    font-weight: bold;           \n"
"    letter-spacing: 1px;           \n"
"    padding: 5px;                   \n"
"    background-color: transparent;  \n"
"    text-shadow: 1px 1px 2px #000;  \n"
"}\n"
"\n"
"QLabel#titleLabel {\n"
"    font-size: 28px;                \n"
"    font-weight: bold;              \n"
"    letter-spacing: 2px;          \n"
"    padding: 10px;               \n"
"    color: #00bcd4;            \n"
"    background-color: transparent; \n"
"    border-bottom: 2px solid #00bcd4; \n"
"    text-align: center;             \n"
"    text-shadow: 2px 2px 5px #000;  \n"
"    border-radius: 5px;            \n"
"}\n"
""));
        lineEdit = new QLineEdit(centralwidget);
        lineEdit->setObjectName("lineEdit");
        lineEdit->setGeometry(QRect(300, 90, 401, 41));
        lineEdit->setStyleSheet(QString::fromUtf8("QLineEdit {\n"
"    background-color: #1e1e1e;      /* Dark gray background */\n"
"    color: white;                   /* White text */\n"
"    padding: 8px 12px;              /* Padding for more space inside */\n"
"    border: 2px solid #5a5a5a;      /* Subtle gray border */\n"
"    border-radius: 10px;            /* Rounded corners */\n"
"    font-size: 16px;                /* Adjust font size */\n"
"}\n"
"\n"
"QLineEdit:focus {\n"
"    border: 2px solid #00bcd4;      /* Light blue border when focused */\n"
"}\n"
""));
        lineEdit_2 = new QLineEdit(centralwidget);
        lineEdit_2->setObjectName("lineEdit_2");
        lineEdit_2->setGeometry(QRect(300, 140, 401, 41));
        lineEdit_2->setStyleSheet(QString::fromUtf8("QLineEdit {\n"
"    background-color: #1e1e1e;      \n"
"    color: white;                 \n"
"    padding: 8px 12px;              \n"
"    border: 2px solid #5a5a5a;    \n"
"    border-radius: 10px;         \n"
"    font-size: 16px;                \n"
"}\n"
"\n"
"QLineEdit:focus {\n"
"    border: 2px solid #00bcd4;     \n"
"}\n"
""));
        lineEdit_3 = new QLineEdit(centralwidget);
        lineEdit_3->setObjectName("lineEdit_3");
        lineEdit_3->setGeometry(QRect(300, 190, 401, 41));
        lineEdit_3->setStyleSheet(QString::fromUtf8("QLineEdit {\n"
"    background-color: #1e1e1e;      \n"
"    color: white;                 \n"
"    padding: 8px 12px;              \n"
"    border: 2px solid #5a5a5a;    \n"
"    border-radius: 10px;         \n"
"    font-size: 16px;                \n"
"}\n"
"\n"
"QLineEdit:focus {\n"
"    border: 2px solid #00bcd4;     \n"
"}\n"
""));
        label_6 = new QLabel(centralwidget);
        label_6->setObjectName("label_6");
        label_6->setGeometry(QRect(70, 240, 171, 31));
        label_6->setStyleSheet(QString::fromUtf8("QLabel {\n"
"    color: #f0f0f0;                \n"
"    font-size: 20px;                \n"
"    font-weight: bold;           \n"
"    letter-spacing: 1px;           \n"
"    padding: 5px;                   \n"
"    background-color: transparent;  \n"
"    text-shadow: 1px 1px 2px #000;  \n"
"}\n"
"\n"
"QLabel#titleLabel {\n"
"    font-size: 28px;                \n"
"    font-weight: bold;              \n"
"    letter-spacing: 2px;          \n"
"    padding: 10px;               \n"
"    color: #00bcd4;            \n"
"    background-color: transparent; \n"
"    border-bottom: 2px solid #00bcd4; \n"
"    text-align: center;             \n"
"    text-shadow: 2px 2px 5px #000;  \n"
"    border-radius: 5px;            \n"
"}\n"
""));
        lineEdit_4 = new QLineEdit(centralwidget);
        lineEdit_4->setObjectName("lineEdit_4");
        lineEdit_4->setGeometry(QRect(300, 240, 401, 41));
        lineEdit_4->setStyleSheet(QString::fromUtf8("QLineEdit {\n"
"    background-color: #1e1e1e;      \n"
"    color: white;                 \n"
"    padding: 8px 12px;              \n"
"    border: 2px solid #5a5a5a;    \n"
"    border-radius: 10px;         \n"
"    font-size: 16px;                \n"
"}\n"
"\n"
"QLineEdit:focus {\n"
"    border: 2px solid #00bcd4;     \n"
"}\n"
""));
        lineEdit_4->setEchoMode(QLineEdit::EchoMode::Password);
        label_7 = new QLabel(centralwidget);
        label_7->setObjectName("label_7");
        label_7->setGeometry(QRect(70, 290, 221, 31));
        label_7->setStyleSheet(QString::fromUtf8("QLabel {\n"
"    color: #f0f0f0;                \n"
"    font-size: 20px;                \n"
"    font-weight: bold;           \n"
"    letter-spacing: 1px;           \n"
"    padding: 5px;                   \n"
"    background-color: transparent;  \n"
"    text-shadow: 1px 1px 2px #000;  \n"
"}\n"
"\n"
"QLabel#titleLabel {\n"
"    font-size: 28px;                \n"
"    font-weight: bold;              \n"
"    letter-spacing: 2px;          \n"
"    padding: 10px;               \n"
"    color: #00bcd4;            \n"
"    background-color: transparent; \n"
"    border-bottom: 2px solid #00bcd4; \n"
"    text-align: center;             \n"
"    text-shadow: 2px 2px 5px #000;  \n"
"    border-radius: 5px;            \n"
"}\n"
""));
        lineEdit_5 = new QLineEdit(centralwidget);
        lineEdit_5->setObjectName("lineEdit_5");
        lineEdit_5->setGeometry(QRect(300, 290, 401, 41));
        lineEdit_5->setStyleSheet(QString::fromUtf8("QLineEdit {\n"
"    background-color: #1e1e1e;      \n"
"    color: white;                 \n"
"    padding: 8px 12px;              \n"
"    border: 2px solid #5a5a5a;    \n"
"    border-radius: 10px;         \n"
"    font-size: 16px;                \n"
"}\n"
"\n"
"QLineEdit:focus {\n"
"    border: 2px solid #00bcd4;     \n"
"}\n"
""));
        lineEdit_5->setEchoMode(QLineEdit::EchoMode::Password);
        pushButton = new QPushButton(centralwidget);
        pushButton->setObjectName("pushButton");
        pushButton->setGeometry(QRect(310, 370, 141, 51));
        pushButton->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    background-color: #00bcd4;     \n"
"    color: white;                 \n"
"    font-size: 18px;              \n"
"    font-weight: bold;            \n"
"    border-radius: 15px;            \n"
"    padding: 12px 20px;            \n"
"}\n"
"\n"
"QPushButton:hover {\n"
"    background-color: #008c9e;      \n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"    background-color: #006e7d;    \n"
"}\n"
""));
        pushButton_2 = new QPushButton(centralwidget);
        pushButton_2->setObjectName("pushButton_2");
        pushButton_2->setGeometry(QRect(20, 420, 111, 51));
        pushButton_2->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    background-color: #1e1e1e; \n"
"    color: white;               \n"
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
        registration->setCentralWidget(centralwidget);
        statusbar = new QStatusBar(registration);
        statusbar->setObjectName("statusbar");
        registration->setStatusBar(statusbar);

        retranslateUi(registration);

        QMetaObject::connectSlotsByName(registration);
    } // setupUi

    void retranslateUi(QMainWindow *registration)
    {
        registration->setWindowTitle(QCoreApplication::translate("registration", "Registration", nullptr));
        label->setText(QCoreApplication::translate("registration", "Registration", nullptr));
        label_2->setText(QCoreApplication::translate("registration", "Full Name", nullptr));
        label_3->setText(QCoreApplication::translate("registration", "E-mail", nullptr));
        label_4->setText(QCoreApplication::translate("registration", "Phone number", nullptr));
        label_6->setText(QCoreApplication::translate("registration", "Password", nullptr));
        label_7->setText(QCoreApplication::translate("registration", "Conform Password", nullptr));
        pushButton->setText(QCoreApplication::translate("registration", "Register", nullptr));
        pushButton_2->setText(QCoreApplication::translate("registration", "Back", nullptr));
    } // retranslateUi

};

namespace Ui {
    class registration: public Ui_registration {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_REGISTRATION_H
