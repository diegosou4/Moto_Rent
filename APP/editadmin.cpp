#include "editadmin.h"
#include "ui_editadmin.h"

Editadmin::Editadmin(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::Editadmin)
{
    ui->setupUi(this);
}

Editadmin::~Editadmin()
{
    delete ui;
}
