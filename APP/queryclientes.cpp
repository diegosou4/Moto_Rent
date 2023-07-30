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
    QStringList namecolunm = {"Id do cliente","Nome","NIF","Telefone","Endereco","Data do inicio","Id da moto", "Placa", "Status"};
    QString sql = "SELECT client_info.*, moto_info.placa, moto_info.alugada from client_info join moto_info ON client_info.id_moto = moto_info.id_moto";

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



