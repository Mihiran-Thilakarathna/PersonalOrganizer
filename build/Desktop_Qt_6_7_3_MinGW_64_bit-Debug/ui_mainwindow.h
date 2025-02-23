/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.7.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QGroupBox *groupBox;
    QLabel *label_2;
    QLabel *label_3;
    QLineEdit *lineEdit_2;
    QLineEdit *lineEdit_3;
    QPushButton *pushButton;
    QLabel *label_8;
    QPushButton *pushButton_3;
    QWidget *widget;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(868, 430);
        MainWindow->setStyleSheet(QString::fromUtf8("background-color:#5d5d5d;"));
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        groupBox = new QGroupBox(centralwidget);
        groupBox->setObjectName("groupBox");
        groupBox->setGeometry(QRect(10, 10, 441, 421));
        groupBox->setStyleSheet(QString::fromUtf8("QGroupBox {\n"
"    color: #ffffff;             \n"
"    font-size: 18px;             \n"
"    font-weight: bold;            \n"
"    border: 2px solid #5a5a5a; \n"
"    border-radius: 10px;   \n"
"    padding: 10px;             \n"
"}\n"
""));
        label_2 = new QLabel(groupBox);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(20, 40, 131, 20));
        label_2->setStyleSheet(QString::fromUtf8("QLabel {\n"
"    color: #ffffff;                 \n"
"    font: 9pt \"Courier New\";\n"
"    font-size: 20px;             \n"
"    font-weight: bold;           \n"
"}\n"
"\n"
"\n"
""));
        label_3 = new QLabel(groupBox);
        label_3->setObjectName("label_3");
        label_3->setGeometry(QRect(20, 140, 131, 20));
        label_3->setStyleSheet(QString::fromUtf8("QLabel {\n"
"    color: #ffffff;                 \n"
"    font: 9pt \"Courier New\";\n"
"    font-size: 20px;             \n"
"    font-weight: bold;           \n"
"}\n"
"\n"
"\n"
""));
        lineEdit_2 = new QLineEdit(groupBox);
        lineEdit_2->setObjectName("lineEdit_2");
        lineEdit_2->setGeometry(QRect(10, 170, 401, 51));
        lineEdit_2->setStyleSheet(QString::fromUtf8("QLineEdit{\n"
"    background-color: #9a9a9a;  /* Dark gray button background */\n"
"    color: white;               /* Text color */\n"
"    font-size: 18px;            /* Font size for the button text */\n"
"    font-weight: bold;          /* Bold text */\n"
"    border: 2px solid #5a5a5a;  /* Light gray border */\n"
"    border-radius: 12px;        /* Rounded corners */\n"
"    padding: 10px 20px;         /* Padding inside the button */\n"
"    min-width: 100px;           /* Minimum button width */\n"
"}\n"
"\n"
"QPushButton:hover {\n"
"    background-color: #404040;  /* Lighter gray when hovered */\n"
"    border: 2px solid #ffffff;  /* White border on hover */\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"    background-color: #555555;  /* Darker shade when pressed */\n"
"    border: 2px solid #888888;  /* Change border when pressed */\n"
"}\n"
"\n"
"QPushButton:disabled {\n"
"    background-color: #2e2e2e;  /* Dark gray for disabled buttons */\n"
"    color: #777777;             /* Gray text for disabled butt"
                        "ons */\n"
"    border: 2px solid #444444;  /* Gray border for disabled buttons */\n"
"}\n"
""));
        lineEdit_2->setEchoMode(QLineEdit::EchoMode::Password);
        lineEdit_3 = new QLineEdit(groupBox);
        lineEdit_3->setObjectName("lineEdit_3");
        lineEdit_3->setGeometry(QRect(10, 70, 401, 51));
        lineEdit_3->setStyleSheet(QString::fromUtf8("QLineEdit{\n"
"    background-color: #9a9a9a;  /* Dark gray button background */\n"
"    color: white;               /* Text color */\n"
"    font-size: 18px;            /* Font size for the button text */\n"
"    font-weight: bold;          /* Bold text */\n"
"    border: 2px solid #5a5a5a;  /* Light gray border */\n"
"    border-radius: 12px;        /* Rounded corners */\n"
"    padding: 10px 20px;         /* Padding inside the button */\n"
"    min-width: 100px;           /* Minimum button width */\n"
"}\n"
"\n"
"QPushButton:hover {\n"
"    background-color: #404040;  /* Lighter gray when hovered */\n"
"    border: 2px solid #ffffff;  /* White border on hover */\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"    background-color: #555555;  /* Darker shade when pressed */\n"
"    border: 2px solid #888888;  /* Change border when pressed */\n"
"}\n"
"\n"
"QPushButton:disabled {\n"
"    background-color: #2e2e2e;  /* Dark gray for disabled buttons */\n"
"    color: #777777;             /* Gray text for disabled butt"
                        "ons */\n"
"    border: 2px solid #444444;  /* Gray border for disabled buttons */\n"
"}\n"
""));
        lineEdit_3->setEchoMode(QLineEdit::EchoMode::Normal);
        pushButton = new QPushButton(groupBox);
        pushButton->setObjectName("pushButton");
        pushButton->setGeometry(QRect(130, 240, 181, 51));
        pushButton->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    background-color: #2d2d2d;  /* Dark gray button background */\n"
"    color: white;               /* Text color */\n"
"    font-size: 18px;            /* Font size for the button text */\n"
"    font-weight: bold;          /* Bold text */\n"
"    border: 2px solid #5a5a5a;  /* Light gray border */\n"
"    border-radius: 12px;        /* Rounded corners */\n"
"    padding: 10px 20px;         /* Padding inside the button */\n"
"    min-width: 100px;           /* Minimum button width */\n"
"}\n"
"\n"
"QPushButton:hover {\n"
"    background-color: #404040;  /* Lighter gray when hovered */\n"
"    border: 2px solid #ffffff;  /* White border on hover */\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"    background-color: #555555;  /* Darker shade when pressed */\n"
"    border: 2px solid #888888;  /* Change border when pressed */\n"
"}\n"
"\n"
"QPushButton:disabled {\n"
"    background-color: #2e2e2e;  /* Dark gray for disabled buttons */\n"
"    color: #777777;             /* Gray text for disabled b"
                        "uttons */\n"
"    border: 2px solid #444444;  /* Gray border for disabled buttons */\n"
"}\n"
""));
        label_8 = new QLabel(groupBox);
        label_8->setObjectName("label_8");
        label_8->setGeometry(QRect(30, 310, 271, 20));
        label_8->setStyleSheet(QString::fromUtf8("QLabel {\n"
"    color: #ffffff;                 \n"
"    font: 9pt \"Courier New\";\n"
"    font-size: 20px;             \n"
"    font-weight: bold;           \n"
"}\n"
"\n"
"\n"
""));
        pushButton_3 = new QPushButton(groupBox);
        pushButton_3->setObjectName("pushButton_3");
        pushButton_3->setGeometry(QRect(130, 340, 181, 51));
        pushButton_3->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    background-color: #2d2d2d;  /* Dark gray button background */\n"
"    color: white;               /* Text color */\n"
"    font-size: 18px;            /* Font size for the button text */\n"
"    font-weight: bold;          /* Bold text */\n"
"    border: 2px solid #5a5a5a;  /* Light gray border */\n"
"    border-radius: 12px;        /* Rounded corners */\n"
"    padding: 10px 20px;         /* Padding inside the button */\n"
"    min-width: 100px;           /* Minimum button width */\n"
"}\n"
"\n"
"QPushButton:hover {\n"
"    background-color: #404040;  /* Lighter gray when hovered */\n"
"    border: 2px solid #ffffff;  /* White border on hover */\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"    background-color: #555555;  /* Darker shade when pressed */\n"
"    border: 2px solid #888888;  /* Change border when pressed */\n"
"}\n"
"\n"
"QPushButton:disabled {\n"
"    background-color: #2e2e2e;  /* Dark gray for disabled buttons */\n"
"    color: #777777;             /* Gray text for disabled b"
                        "uttons */\n"
"    border: 2px solid #444444;  /* Gray border for disabled buttons */\n"
"}\n"
""));
        widget = new QWidget(centralwidget);
        widget->setObjectName("widget");
        widget->setGeometry(QRect(460, -10, 401, 441));
        widget->setStyleSheet(QString::fromUtf8("QWidget{\n"
"border-image:url(:/image/login.png/);\n"
"}"));
        MainWindow->setCentralWidget(centralwidget);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "Login", nullptr));
        groupBox->setTitle(QCoreApplication::translate("MainWindow", "LOGIN", nullptr));
        label_2->setText(QCoreApplication::translate("MainWindow", "User Name :", nullptr));
        label_3->setText(QCoreApplication::translate("MainWindow", "Password :", nullptr));
        pushButton->setText(QCoreApplication::translate("MainWindow", "Login", nullptr));
        label_8->setText(QCoreApplication::translate("MainWindow", "Don't have an account?", nullptr));
        pushButton_3->setText(QCoreApplication::translate("MainWindow", "Create  Account", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
