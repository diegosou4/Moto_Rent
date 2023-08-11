#include "create_manutencao.h"
#include "ui_create_manutencao.h"

create_manutencao::create_manutencao(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::create_manutencao)
{
    ui->setupUi(this);
}

create_manutencao::~create_manutencao()
{
    delete ui;
}
