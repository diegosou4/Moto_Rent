#include "create_moto.h"
#include "ui_create_moto.h"

Create_moto::Create_moto(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Create_moto)
{
    ui->setupUi(this);
}

Create_moto::~Create_moto()
{
    delete ui;
}

void Create_moto::on_btn_createmoto_clicked()
{

    ValidQueryMoto Checkquery;
    bool lines = Checkquery.islineEmpty(ui->line_model->text(),ui->line_brand->text(),ui->line_color->text(),ui->line_atualkm->text(),ui->line_plate->text(),ui->line_payedvalue->text());
            // Verifica as linhas
        if(lines){
                     QMessageBox::warning(this,"Dados incompletos", "Os dados informados estao inclompletos");

    } else {
            // Pegandos o valores da line e guardando na classe
            Checkquery.getvaluesline(ui->line_model->text(),ui->line_brand->text(),ui->line_color->text(),ui->line_atualkm->text(),ui->line_plate->text(),ui->line_payedvalue->text(),ui->date_buy->text());
            // Se a placa foi passado do jeito correto
            bool line_plate = Checkquery.correct_lineplate();
         if(line_plate){
         QMessageBox::warning(this,"Placa incorreta", "A placa deve ser criada da seguinte forma 'AA-BB-22'");
          } else {
            QSqlQuery query;
            QString sql;
                 if(Checkquery.queryValid(sql,query)){
                     QMessageBox::information(this,"Dados criados","Dados criados com sucesso");
                 } else {
                     QMessageBox::critical(this, "Erro", "Ocorreu um erro ao criar os dados");
                 }

    }
}
}
