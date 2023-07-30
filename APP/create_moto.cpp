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
    if(ui->line_model->text().isEmpty() || ui->line_brand->text().isEmpty()   // Verifica se esta vazio os campos do castro
      || ui->line_color->text().isEmpty() || ui->line_plate->text().isEmpty()
      || ui->line_payedvalue->text().isEmpty())
    {
        QMessageBox::warning(this,"Dados incompletos", "Os dados informados estao inclompletos");

    } else {
        QString plate = ui->line_plate->text();
        QString data_compra = ui->date_buy->text();

        // Realiza a validacao da placa apenas pelo tamanho
        if(plate.size() < 8){
            QMessageBox::warning(this,"Placa incorreta", "A placa deve ser criada da seguinte forma 'AA-BB-22'");
        } else {
        // Insere os dados no banco de dados
            QSqlQuery query;
            QString sql = "INSERT INTO moto_info (nome_moto, placa, marca, cor, kmatual, valor_pago, data_compra, alugada) "
                               "VALUES (:nome_moto, :placa, :marca, :cor, 0, :valor_pago, :data_compra, false)";

            query.prepare(sql);
            query.bindValue(":nome_moto", ui->line_model->text());
            query.bindValue(":placa", plate);
            query.bindValue(":marca", ui->line_brand->text());
            query.bindValue(":cor", ui->line_color->text());
            query.bindValue(":valor_pago", ui->line_payedvalue->text().toInt());
            query.bindValue(":data_compra", data_compra);
        if(query.exec(sql)){
            QMessageBox::information(this,"Dados criados","Dados criados com sucesso");
        } else {
            QMessageBox::critical(this, "Erro", "Ocorreu um erro ao criar os dados");
        }


    }

}
}
