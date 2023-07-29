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
    if(ui->line_model->text().isEmpty() || ui->line_brand->text().isEmpty()
      || ui->line_color->text().isEmpty() || ui->line_plate->text().isEmpty()
      || ui->line_payedvalue->text().isEmpty())
    {
        QMessageBox::warning(this,"Dados incompletos", "Os dados informados estao inclompletos");

    } else{

        QString data_compra = ui->date_buy->text();
        QSqlQuery query;
        QString sql = "INSERT INTO moto_info (nome_moto, placa, marca, cor, kmatual, valor_pago, data_compra, alugada) "
                      "VALUES ('" + ui->line_model->text() + "', '" + ui->line_plate->text() + "', '"
                      + ui->line_brand->text() + "', '" + ui->line_color->text() + "', 0, "
                      + ui->line_payedvalue->text() + ", '" + data_compra + "', false)";

        if(query.exec(sql)){
            QMessageBox::information(this,"Dados criados","Dados criados com sucesso");
        }

        if(ui->line_plate->text().size() < 8){
            QMessageBox::warning(this,"Placa incorreta", "A placa deve ser criada da seguinte forma 'AA-BB-22'");
        }

    }

}

