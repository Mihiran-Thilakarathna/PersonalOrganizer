/********************************************************************************
** Form generated from reading UI file 'assignment.ui'
**
** Created by: Qt User Interface Compiler version 6.7.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ASSIGNMENT_H
#define UI_ASSIGNMENT_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDateEdit>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTimeEdit>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_assignment
{
public:
    QWidget *centralwidget;
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label_4;
    QLabel *label_5;
    QDateEdit *startdateEdit;
    QDateEdit *DeadlinedateEdit;
    QLineEdit *subjectLineEdit;
    QLineEdit *subCodeLineEdit;
    QPushButton *assignmentBack;
    QPushButton *AssignmentAdd;
    QLabel *label_6;
    QTimeEdit *timeEdit;

    void setupUi(QMainWindow *assignment)
    {
        if (assignment->objectName().isEmpty())
            assignment->setObjectName("assignment");
        assignment->resize(545, 470);
        assignment->setStyleSheet(QString::fromUtf8("background-color: rgb(97, 97, 97);"));
        centralwidget = new QWidget(assignment);
        centralwidget->setObjectName("centralwidget");
        label = new QLabel(centralwidget);
        label->setObjectName("label");
        label->setGeometry(QRect(190, 20, 191, 61));
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
        label_2 = new QLabel(centralwidget);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(60, 110, 111, 20));
        label_2->setStyleSheet(QString::fromUtf8("font: 700 10pt \"Arial\";"));
        label_3 = new QLabel(centralwidget);
        label_3->setObjectName("label_3");
        label_3->setGeometry(QRect(60, 150, 111, 20));
        label_3->setStyleSheet(QString::fromUtf8("font: 700 10pt \"Arial\";"));
        label_4 = new QLabel(centralwidget);
        label_4->setObjectName("label_4");
        label_4->setGeometry(QRect(60, 190, 111, 20));
        label_4->setStyleSheet(QString::fromUtf8("font: 700 10pt \"Arial\";"));
        label_5 = new QLabel(centralwidget);
        label_5->setObjectName("label_5");
        label_5->setGeometry(QRect(60, 230, 111, 20));
        label_5->setStyleSheet(QString::fromUtf8("font: 700 10pt \"Arial\";"));
        startdateEdit = new QDateEdit(centralwidget);
        startdateEdit->setObjectName("startdateEdit");
        startdateEdit->setGeometry(QRect(190, 190, 271, 26));
        startdateEdit->setStyleSheet(QString::fromUtf8("font: 700 10pt \"Arial\";"));
        DeadlinedateEdit = new QDateEdit(centralwidget);
        DeadlinedateEdit->setObjectName("DeadlinedateEdit");
        DeadlinedateEdit->setGeometry(QRect(190, 230, 271, 26));
        DeadlinedateEdit->setStyleSheet(QString::fromUtf8("font: 700 10pt \"Arial\";"));
        subjectLineEdit = new QLineEdit(centralwidget);
        subjectLineEdit->setObjectName("subjectLineEdit");
        subjectLineEdit->setGeometry(QRect(190, 110, 271, 26));
        subCodeLineEdit = new QLineEdit(centralwidget);
        subCodeLineEdit->setObjectName("subCodeLineEdit");
        subCodeLineEdit->setGeometry(QRect(190, 150, 271, 26));
        assignmentBack = new QPushButton(centralwidget);
        assignmentBack->setObjectName("assignmentBack");
        assignmentBack->setGeometry(QRect(190, 410, 93, 29));
        assignmentBack->setStyleSheet(QString::fromUtf8("QPushButton {\n"
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
        AssignmentAdd = new QPushButton(centralwidget);
        AssignmentAdd->setObjectName("AssignmentAdd");
        AssignmentAdd->setGeometry(QRect(370, 410, 93, 29));
        AssignmentAdd->setStyleSheet(QString::fromUtf8("QPushButton {\n"
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
        label_6 = new QLabel(centralwidget);
        label_6->setObjectName("label_6");
        label_6->setGeometry(QRect(60, 280, 111, 20));
        label_6->setStyleSheet(QString::fromUtf8("font: 700 10pt \"Arial\";"));
        timeEdit = new QTimeEdit(centralwidget);
        timeEdit->setObjectName("timeEdit");
        timeEdit->setGeometry(QRect(190, 280, 271, 26));
        assignment->setCentralWidget(centralwidget);

        retranslateUi(assignment);

        QMetaObject::connectSlotsByName(assignment);
    } // setupUi

    void retranslateUi(QMainWindow *assignment)
    {
        assignment->setWindowTitle(QCoreApplication::translate("assignment", "AssignmentWindow", nullptr));
        label->setText(QCoreApplication::translate("assignment", "Assignments", nullptr));
        label_2->setText(QCoreApplication::translate("assignment", "Subject", nullptr));
        label_3->setText(QCoreApplication::translate("assignment", "Subject Code", nullptr));
        label_4->setText(QCoreApplication::translate("assignment", "Starting Date", nullptr));
        label_5->setText(QCoreApplication::translate("assignment", "Deadline", nullptr));
        assignmentBack->setText(QCoreApplication::translate("assignment", "Back", nullptr));
        AssignmentAdd->setText(QCoreApplication::translate("assignment", "Add", nullptr));
        label_6->setText(QCoreApplication::translate("assignment", "Time", nullptr));
    } // retranslateUi

};

namespace Ui {
    class assignment: public Ui_assignment {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ASSIGNMENT_H
