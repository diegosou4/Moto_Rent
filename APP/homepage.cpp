#include "homepage.h"
#include "ui_homepage.h"


homepage::homepage(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::homepage)
{
    ui->setupUi(this);
}

homepage::~homepage()
{
    delete ui;
}

void homepage::on_pushButton_clicked()
{
    auto queryclientes = new class queryclientes();
    homepage::showMinimized();
    queryclientes->show();
    queryclientes->activateWindow();
}


void homepage::on_pushButton_2_clicked()
{
    auto querymotos = new class querymotos();
    homepage::showMinimized();
    querymotos->show();
    querymotos->activateWindow();
}

