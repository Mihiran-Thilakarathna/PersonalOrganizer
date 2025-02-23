#ifndef ASSIGNMENT_H
#define ASSIGNMENT_H
#include "academic.h"

#include <QMainWindow>

class academic;

namespace Ui {
class assignment;
}

class assignment : public QMainWindow
{
    Q_OBJECT

public:
    explicit assignment(QWidget *parent = nullptr);
    ~assignment();

private slots:
    void on_assignmentBack_clicked();

    void on_AssignmentAdd_clicked();

private:
    Ui::assignment *ui;
    academic *academicWindow;
};

#endif // ASSIGNMENT_H
