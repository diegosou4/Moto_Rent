#include "editmanuntecao.h"
#include "ui_editmanuntecao.h"

editmanuntecao::editmanuntecao(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::editmanuntecao)
{
    ui->setupUi(this);
}

editmanuntecao::~editmanuntecao()
{
    delete ui;
}
void editmanuntecao::setLineEditText(const QString& text) {    // Foi criado a funcao aqui que recebe o endereco do texto que vai ser passado pelo outro.cpp assim eu consigo mudar o valor do line edit, já que ele privado;
    ui->line_id->setText(text);
}
