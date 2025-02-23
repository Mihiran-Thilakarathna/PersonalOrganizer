/********************************************************************************
** Form generated from reading UI file 'academic.ui'
**
** Created by: Qt User Interface Compiler version 6.7.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ACADEMIC_H
#define UI_ACADEMIC_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QCommandLinkButton>
#include <QtWidgets/QDateEdit>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QTimeEdit>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_academic
{
public:
    QWidget *centralwidget;
    QPushButton *academicBack;
    QLabel *label_3;
    QLineEdit *subjectlineEdit;
    QLabel *label_4;
    QLabel *label_2;
    QLineEdit *subjectCodelineEdit;
    QLabel *label;
    QDateEdit *AcademicdateEdit;
    QPushButton *AcademicAdd;
    QTableWidget *tableWidget;
    QPushButton *viewScheduleButton;
    QLabel *label_6;
    QTimeEdit *timeEdit;
    QLabel *label_7;
    QLineEdit *venueLineEdit;
    QFrame *line;
    QLabel *label_8;
    QComboBox *monthComboBox;
    QLabel *label_9;
    QLabel *label_10;
    QGroupBox *groupBox;
    QLabel *label_5;
    QCommandLinkButton *assAddLink;

    void setupUi(QMainWindow *academic)
    {
        if (academic->objectName().isEmpty())
            academic->setObjectName("academic");
        academic->resize(1128, 613);
        academic->setStyleSheet(QString::fromUtf8("background-color: #aaa9a9;"));
        centralwidget = new QWidget(academic);
        centralwidget->setObjectName("centralwidget");
        academicBack = new QPushButton(centralwidget);
        academicBack->setObjectName("academicBack");
        academicBack->setGeometry(QRect(10, 560, 81, 31));
        academicBack->setStyleSheet(QString::fromUtf8("QPushButton {\n"
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
        label_3->setGeometry(QRect(40, 160, 131, 21));
        label_3->setStyleSheet(QString::fromUtf8("font: 700 12pt \"Arial\";"));
        subjectlineEdit = new QLineEdit(centralwidget);
        subjectlineEdit->setObjectName("subjectlineEdit");
        subjectlineEdit->setGeometry(QRect(190, 120, 271, 26));
        label_4 = new QLabel(centralwidget);
        label_4->setObjectName("label_4");
        label_4->setGeometry(QRect(40, 200, 111, 20));
        label_4->setStyleSheet(QString::fromUtf8("font: 700 12pt \"Arial\";"));
        label_2 = new QLabel(centralwidget);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(40, 120, 111, 20));
        label_2->setStyleSheet(QString::fromUtf8("font: 700 12pt \"Arial\";"));
        subjectCodelineEdit = new QLineEdit(centralwidget);
        subjectCodelineEdit->setObjectName("subjectCodelineEdit");
        subjectCodelineEdit->setGeometry(QRect(190, 160, 271, 26));
        label = new QLabel(centralwidget);
        label->setObjectName("label");
        label->setGeometry(QRect(410, 0, 281, 51));
        label->setStyleSheet(QString::fromUtf8("QLabel {\n"
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
        AcademicdateEdit = new QDateEdit(centralwidget);
        AcademicdateEdit->setObjectName("AcademicdateEdit");
        AcademicdateEdit->setGeometry(QRect(190, 200, 271, 26));
        AcademicAdd = new QPushButton(centralwidget);
        AcademicAdd->setObjectName("AcademicAdd");
        AcademicAdd->setGeometry(QRect(180, 360, 111, 41));
        AcademicAdd->setStyleSheet(QString::fromUtf8("QPushButton {\n"
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
        if (tableWidget->columnCount() < 5)
            tableWidget->setColumnCount(5);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(0, __qtablewidgetitem);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(1, __qtablewidgetitem1);
        QTableWidgetItem *__qtablewidgetitem2 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(2, __qtablewidgetitem2);
        QTableWidgetItem *__qtablewidgetitem3 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(3, __qtablewidgetitem3);
        QTableWidgetItem *__qtablewidgetitem4 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(4, __qtablewidgetitem4);
        tableWidget->setObjectName("tableWidget");
        tableWidget->setGeometry(QRect(500, 220, 611, 261));
        viewScheduleButton = new QPushButton(centralwidget);
        viewScheduleButton->setObjectName("viewScheduleButton");
        viewScheduleButton->setGeometry(QRect(730, 170, 151, 31));
        viewScheduleButton->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"	font: 700 italic 9pt \"Arial\";\n"
"    background-color: #ffaaff;\n"
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
        label_6 = new QLabel(centralwidget);
        label_6->setObjectName("label_6");
        label_6->setGeometry(QRect(40, 250, 111, 20));
        label_6->setStyleSheet(QString::fromUtf8("font: 700 12pt \"Arial\";"));
        timeEdit = new QTimeEdit(centralwidget);
        timeEdit->setObjectName("timeEdit");
        timeEdit->setGeometry(QRect(190, 250, 151, 26));
        label_7 = new QLabel(centralwidget);
        label_7->setObjectName("label_7");
        label_7->setGeometry(QRect(40, 300, 111, 20));
        label_7->setStyleSheet(QString::fromUtf8("font: 700 12pt \"Arial\";"));
        venueLineEdit = new QLineEdit(centralwidget);
        venueLineEdit->setObjectName("venueLineEdit");
        venueLineEdit->setGeometry(QRect(190, 300, 271, 26));
        line = new QFrame(centralwidget);
        line->setObjectName("line");
        line->setGeometry(QRect(470, 60, 31, 431));
        line->setFrameShape(QFrame::Shape::VLine);
        line->setFrameShadow(QFrame::Shadow::Sunken);
        label_8 = new QLabel(centralwidget);
        label_8->setObjectName("label_8");
        label_8->setGeometry(QRect(490, 120, 361, 20));
        label_8->setStyleSheet(QString::fromUtf8("font: 700 12pt \"Arial\";"));
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
        monthComboBox->addItem(QString());
        monthComboBox->setObjectName("monthComboBox");
        monthComboBox->setGeometry(QRect(840, 120, 261, 26));
        label_9 = new QLabel(centralwidget);
        label_9->setObjectName("label_9");
        label_9->setGeometry(QRect(120, 60, 221, 51));
        label_9->setStyleSheet(QString::fromUtf8("QLabel {\n"
"    color: #ffb285;             \n"
"	text-decoration: underline;\n"
"	font: 700 italic 9pt \"Arial\";\n"
"    font-size: 20px;                \n"
"    font-weight: bold;        \n"
"    letter-spacing: 2px;          \n"
"    text-align: center;              \n"
"    background-color: transparent;    \n"
"\n"
"}\n"
""));
        label_10 = new QLabel(centralwidget);
        label_10->setObjectName("label_10");
        label_10->setGeometry(QRect(690, 60, 221, 51));
        label_10->setStyleSheet(QString::fromUtf8("QLabel {\n"
"    color: #ffb285;             \n"
"	text-decoration: underline;\n"
"	font: 700 italic 9pt \"Arial\";\n"
"    font-size: 20px;                \n"
"    font-weight: bold;        \n"
"    letter-spacing: 2px;          \n"
"    text-align: center;              \n"
"    background-color: transparent;    \n"
"\n"
"}\n"
""));
        groupBox = new QGroupBox(centralwidget);
        groupBox->setObjectName("groupBox");
        groupBox->setGeometry(QRect(340, 520, 491, 71));
        groupBox->setStyleSheet(QString::fromUtf8("QGroupBox {\n"
"        background-color: qlineargradient(x1:0, y1:0, x2:0, y2:1, stop:0 #E0F7FA, stop:1 #B2EBF2);\n"
"        border: 2px solid #0097A7;\n"
"        border-radius: 12px;\n"
"        padding: 10px;\n"
"        font: 14px \"Verdana\";\n"
"        color: #004D40;\n"
"        box-shadow: 5px 5px 5px #999999;\n"
"    }\n"
"    QGroupBox::title {\n"
"        font-size: 15px;\n"
"        color: #FFFFFF;\n"
"        background-color: #0097A7;\n"
"        padding: 5px;\n"
"        border-radius: 7px;\n"
"        text-align: center;\n"
"    }"));
        label_5 = new QLabel(groupBox);
        label_5->setObjectName("label_5");
        label_5->setGeometry(QRect(10, 20, 291, 31));
        label_5->setStyleSheet(QString::fromUtf8("font: 700 12pt \"Helvetica Neue\", sans-serif;\n"
"background-color: transparent;\n"
""));
        assAddLink = new QCommandLinkButton(groupBox);
        assAddLink->setObjectName("assAddLink");
        assAddLink->setGeometry(QRect(300, 16, 171, 41));
        assAddLink->setStyleSheet(QString::fromUtf8("QCommandLinkButton {\n"
"    font: 700 12pt \"Helvetica Neue\", sans-serif; /* Custom font with bold weight */\n"
"    color: #aaffff; /* Text color */\n"
"    background-color: transparent; /* Transparent background */\n"
"    border: none; /* Removes any default border */\n"
"    padding: 5px; /* Adds padding for better visual spacing */\n"
"}\n"
"\n"
"QCommandLinkButton:hover {\n"
"    color: #0000ff; /* Change text color on hover */\n"
"    background-color: rgba(255, 255, 255, 0.1); /* Subtle hover effect */\n"
"}\n"
"\n"
"QCommandLinkButton:pressed {\n"
"    color: #ff00ff; /* Slightly dimmed color when pressed */\n"
"    background-color: #a6d4ff; /* Adjusted background when pressed */\n"
"}\n"
""));
        academic->setCentralWidget(centralwidget);
        groupBox->raise();
        academicBack->raise();
        label_3->raise();
        subjectlineEdit->raise();
        label_4->raise();
        label_2->raise();
        subjectCodelineEdit->raise();
        label->raise();
        AcademicdateEdit->raise();
        AcademicAdd->raise();
        tableWidget->raise();
        viewScheduleButton->raise();
        label_6->raise();
        timeEdit->raise();
        label_7->raise();
        venueLineEdit->raise();
        line->raise();
        label_8->raise();
        monthComboBox->raise();
        label_9->raise();
        label_10->raise();

        retranslateUi(academic);

        QMetaObject::connectSlotsByName(academic);
    } // setupUi

    void retranslateUi(QMainWindow *academic)
    {
        academic->setWindowTitle(QCoreApplication::translate("academic", "AcademicWindow", nullptr));
        academicBack->setText(QCoreApplication::translate("academic", "Back", nullptr));
        label_3->setText(QCoreApplication::translate("academic", "Subject Code", nullptr));
        label_4->setText(QCoreApplication::translate("academic", "Date", nullptr));
        label_2->setText(QCoreApplication::translate("academic", "Subject", nullptr));
        label->setText(QCoreApplication::translate("academic", "Academic Schedule", nullptr));
        AcademicAdd->setText(QCoreApplication::translate("academic", "Add", nullptr));
        QTableWidgetItem *___qtablewidgetitem = tableWidget->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QCoreApplication::translate("academic", "subject", nullptr));
        QTableWidgetItem *___qtablewidgetitem1 = tableWidget->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QCoreApplication::translate("academic", "subjectCode", nullptr));
        QTableWidgetItem *___qtablewidgetitem2 = tableWidget->horizontalHeaderItem(2);
        ___qtablewidgetitem2->setText(QCoreApplication::translate("academic", "date", nullptr));
        QTableWidgetItem *___qtablewidgetitem3 = tableWidget->horizontalHeaderItem(3);
        ___qtablewidgetitem3->setText(QCoreApplication::translate("academic", "time", nullptr));
        QTableWidgetItem *___qtablewidgetitem4 = tableWidget->horizontalHeaderItem(4);
        ___qtablewidgetitem4->setText(QCoreApplication::translate("academic", "venue", nullptr));
        viewScheduleButton->setText(QCoreApplication::translate("academic", "View the Schedule", nullptr));
        label_6->setText(QCoreApplication::translate("academic", "Time", nullptr));
        label_7->setText(QCoreApplication::translate("academic", "Venue", nullptr));
        label_8->setText(QCoreApplication::translate("academic", "Select the Month You want to View :", nullptr));
        monthComboBox->setItemText(0, QCoreApplication::translate("academic", "Select a Month", nullptr));
        monthComboBox->setItemText(1, QCoreApplication::translate("academic", "January", nullptr));
        monthComboBox->setItemText(2, QCoreApplication::translate("academic", "February", nullptr));
        monthComboBox->setItemText(3, QCoreApplication::translate("academic", "March", nullptr));
        monthComboBox->setItemText(4, QCoreApplication::translate("academic", "April", nullptr));
        monthComboBox->setItemText(5, QCoreApplication::translate("academic", "May", nullptr));
        monthComboBox->setItemText(6, QCoreApplication::translate("academic", "June", nullptr));
        monthComboBox->setItemText(7, QCoreApplication::translate("academic", "July", nullptr));
        monthComboBox->setItemText(8, QCoreApplication::translate("academic", "August", nullptr));
        monthComboBox->setItemText(9, QCoreApplication::translate("academic", "September", nullptr));
        monthComboBox->setItemText(10, QCoreApplication::translate("academic", "October", nullptr));
        monthComboBox->setItemText(11, QCoreApplication::translate("academic", "November", nullptr));
        monthComboBox->setItemText(12, QCoreApplication::translate("academic", "December", nullptr));

        label_9->setText(QCoreApplication::translate("academic", "Set The Schedules", nullptr));
        label_10->setText(QCoreApplication::translate("academic", "Veiw the Schedules", nullptr));
        groupBox->setTitle(QString());
        label_5->setText(QCoreApplication::translate("academic", "Are there any Assignments ?", nullptr));
        assAddLink->setText(QCoreApplication::translate("academic", "Click for Add", nullptr));
    } // retranslateUi

};

namespace Ui {
    class academic: public Ui_academic {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ACADEMIC_H
