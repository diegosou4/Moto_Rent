#include "querymotos.h"
#include "ui_querymotos.h"


querymotos::querymotos(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::querymotos)
{

    ui->setupUi(this);

}


querymotos::~querymotos()
{
    delete ui;
}

void querymotos::on_pushButton_clicked()
{
    QSqlQuery query;
    QStringList namecolunm = {"id","Modelo","Placa","Marca","Cor","Km atual","Valor Pago", "Data da Compra", "Status"};
    QString sql;

    CheckQueryMotos checkQuery;

    checkQuery.getLine(ui->line_id->text(),ui->line_placa->text(),ui->line_marca->text(),click_check,ui->check_rent->isChecked());   // Recebendo os valores das linhas

    sql = checkQuery.addValuesline(sql); // Recebendo o valor de sql
    query.prepare(sql);
    query.bindValue(":id_moto", checkQuery.id_moto);
    query.bindValue(":placa", checkQuery.placa);
    query.bindValue(":marca", checkQuery.marca);

     int i = 0;
     int j = 0;
     if(query.exec()){
        ui->tableWidget->setColumnCount(9);
        while(query.next()){
            ui->tableWidget->insertRow(i);
            while(j < 9)
            {
            QTableWidgetItem *item = new QTableWidgetItem(query.value(j).toString());
            if(j == 8){
                if(query.value(j).toInt() == 1){
                    item->setText("Alugada");
                }else{
                    item->setText("Disponivel");
                }
            }
            ui->tableWidget->setItem(i,j,item);
            j++;
            ui->tableWidget->setRowHeight(i,30);
            }
            j = 0;
            i++;
           }
            ui->tableWidget->setHorizontalHeaderLabels(namecolunm);

            while(i < ui->tableWidget->rowCount() ){
                ui->tableWidget->removeRow(i);
            }
    }
     if(i == 0){
            ui->tableWidget->clearContents();
            ui->tableWidget->setRowCount(0);
            QMessageBox::information(this,"teste","teste");
     }


}


void querymotos::on_btn_createmoto_clicked()
{
    Create_moto* PageCreate_moto = new Create_moto();
    PageCreate_moto->show();
}






void querymotos::on_check_rent_clicked()
{
    click_check = 1;
}

