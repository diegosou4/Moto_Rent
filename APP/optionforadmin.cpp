#include "optionforadmin.h"
#include "ui_optionforadmin.h"

optionforadmin::optionforadmin(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::optionforadmin)
{
    ui->setupUi(this);
}

optionforadmin::~optionforadmin()
{
    delete ui;
}

void optionforadmin::on_btn_create_user_clicked()
{

}

