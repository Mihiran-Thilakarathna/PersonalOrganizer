#include "financial.h"
#include "ui_financial.h"
#include "dashboard.h"

Financial::Financial(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::Financial)
{
    ui->setupUi(this);
    dashboardWindow = qobject_cast<dashboard*>(parent);
}

Financial::~Financial()
{
    delete ui;

}

void Financial::on_financialBack_clicked()
{
    this->hide();
    dashboardWindow->show();
}

