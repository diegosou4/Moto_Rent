#include "create_client.h"
#include "ui_create_client.h"

create_client::create_client(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::create_client)
{
    ui->setupUi(this);
}

create_client::~create_client()
{
    delete ui;
}

void create_client::on_pushButton_2_clicked()
{
    if(ui->line_name->text().isEmpty() || ui->line_numero->text().isEmpty() || ui->line_nif->text().isEmpty() || ui->line_adress->text().isEmpty() || ui->line_id_moto->text().isEmpty())
    {
    QMessageBox::warning(this,"Dados incompletos", "Os dados informados estao inclompletos");
    }else{

         QString inicio_contrato = ui->date_start->text();
         QString id_moto = ui->line_id_moto->text();

         QSqlQuery query;
         QString sql1 = "select alugada from moto_info where id_moto='" + ui->line_id_moto->text() +"'";
         if(query.exec(sql1)){
             if(query.next()){
                 int resultado = query.value(0).toInt();
                 if(resultado == 1){
                     QMessageBox::warning(this,"moto ocupada", "A moto ja esta alugada");
                 } else{


                  QString sql = "INSERT INTO client_info (nome, numero, nif, endereco, data_contrato, id_moto) "
                                                 "VALUES (:nome, :numero, :nif, :endereco, :data_contrato, :id_moto)";

                 query.prepare(sql);
                 query.bindValue(":nome", ui->line_name->text());
                 query.bindValue(":numero", ui->line_numero->text());
                 query.bindValue(":nif", ui->line_nif->text());
                 query.bindValue(":endereco", ui->line_adress->text());
                 query.bindValue(":data_contrato", inicio_contrato);
                 query.bindValue(":id_moto", id_moto);
                 if(query.exec()){
                      QMessageBox::information(this,"Dados criados","Dados criados com sucesso");
                       QString sqlid = "UPDATE moto_info set alugada=true where id_moto='" + ui->line_id_moto->text() + "'";
                       if(query.exec(sqlid)){

                       };
                 } else{
                     QMessageBox::warning(this,"Deu ruim","algo ta errado");
                 }
                 }
             }
         }
    }
}

