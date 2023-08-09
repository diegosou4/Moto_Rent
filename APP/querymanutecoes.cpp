#include "querymanutecoes.h"
#include "ui_querymanutecoes.h"

querymanutecoes::querymanutecoes(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::querymanutecoes)
{
    ui->setupUi(this);
}

querymanutecoes::~querymanutecoes()
{
    delete ui;
}
