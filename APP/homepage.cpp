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
    queryclientes* PageQueryclientes = new queryclientes();
    homepage::showMinimized();
    PageQueryclientes->show();
    PageQueryclientes->activateWindow();
}


void homepage::on_pushButton_2_clicked()
{
    querymotos* PageQuerymotos = new querymotos();
    homepage::showMinimized();
    PageQuerymotos->show();
    PageQuerymotos->activateWindow();
}


void homepage::on_btn_sair_clicked()
{
    this->close();
}


void homepage::on_Btn_VerificarManutecoes_clicked()
{
    querymanutecoes* PageManutecoes = new querymanutecoes();
    homepage::showMinimized();
    PageManutecoes->show();
    PageManutecoes->activateWindow();
}

