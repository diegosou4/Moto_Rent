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
    ValidQueryCreator checkQuery;
    QString sql;
    QSqlQuery query;
    bool lines = checkQuery.islineEmpty(ui->line_name->text(),ui->line_numero->text(),ui->line_nif->text(),ui->line_adress->text(),ui->date_start->text(),ui->line_id_moto->text());   // Vai checkar se tem alguma linha vazia
    int motoisEmpety = checkQuery.check_moto_rent(query);                           // Retorna um valor se a moto esta ocupada ou nao 1 e se estiver alugada 0 se estiver disponivel

    if(!lines){
        if(motoisEmpety == 1){
            QMessageBox::warning(this,"Moto Ocupada", "A moto já esta alugada");
        }else if(motoisEmpety == 0){
            checkQuery.updateStatusmoto(query);
            bool isValid = checkQuery.queryValid(query, sql);
            if(isValid){
                QMessageBox::information(this,"Deu certo", "Deu bom");
            } else{
                QMessageBox::warning(this,"Deu erro","Deu erro");
            }
    }else{
             QMessageBox::warning(this,"Erro","Algum campo esta vazio");
        }
    }

}



