#include "queryclientes.h"
#include "ui_queryclientes.h"

queryclientes::queryclientes(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::queryclientes)
{

    ui->setupUi(this);

}

queryclientes::~queryclientes()
{
    delete ui;

}




void queryclientes::on_btn_consultar_clicked()
{
    QSqlQuery query;
    QStringList namecolunm = {"Id do cliente","Nome","Telefone","NIF","Endereco","Data do inicio","Id da moto", "Placa", "Status"};
    QString sql;


    CheckQueryClient checkQuery;

    sql = checkQuery.checkline(ui->line_name->text(),ui->line_nif->text(),ui->line_id_moto->text(),clickcheck,ui->check_rent->isChecked(),sql);
    query.prepare(sql);
    int row = 0;
    int col = 0;
    if(query.exec()){



       ui->tableWidget->setColumnCount(9);
       while(query.next()){

           ui->tableWidget->insertRow(row);

           while(col < 9)
           {
           ui->tableWidget->setItem(row,col, new QTableWidgetItem(query.value(col).toString()));
           col++;
           ui->tableWidget->setRowHeight(col,30);
           }
           col = 0;
           row++;
          }
           ui->tableWidget->setHorizontalHeaderLabels(namecolunm);

           while(row < ui->tableWidget->rowCount() ){
               ui->tableWidget->removeRow(row);
           }
}
}

void queryclientes::on_check_rent_clicked()
{
    clickcheck = 1;
}


void queryclientes::on_btn_newclient_clicked()
{
    create_client* pageCreate_client = new create_client();
    pageCreate_client->show();
}

