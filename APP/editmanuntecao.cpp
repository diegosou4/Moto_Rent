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

void editmanuntecao::on_btn_salve_clicked()
{
    QString sql;
    QSqlQuery query;
    QueryEditManutecao editarManuntecao;

    bool lines;
    lines = editarManuntecao.lineIsEmpety(ui->line_id->text(),ui->comboBox->currentText(),ui->line_data->text(),ui->line_valor->text(),ui->line_observacao->text(),ui->line_kmatual->text());

    if(lines){
        editarManuntecao.getValuesLine(ui->line_id->text(),ui->comboBox->currentText(),ui->line_data->text(),ui->line_valor->text(),ui->line_observacao->text(),ui->line_kmatual->text());
        editarManuntecao.UpdateKmTable(sql,query);
        if(editarManuntecao.updateValues(sql,query)){
            QMessageBox::information(this,"Dados Editados com sucesso", "Os dados foram atualizados");
        } else{
            QMessageBox::warning(this,"Algo esta errado", "Verifique se todos os campos estao corretos");
        }
    }

}

