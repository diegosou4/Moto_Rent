#include "querymoto.h"
#include "ui_querymoto.h"

querymoto::querymoto(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::querymoto)
{
    ui->setupUi(this);
}

querymoto::~querymoto()
{
    delete ui;
}

void querymoto::on_actionConsultar_moto_triggered()
{

}

