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
    QStringList namecolunm = {"id","Modelo","Marca","Placa","Cor","Km atual","Valor Pago", "Data da Compra", "Status"};
    QString sql = "SELECT * FROM moto_info WHERE 1=1";


    if(!ui->line_id->text().isEmpty()){
        sql += " AND id=" + ui->line_id->text();

    }
    if(!ui->line_placa->text().isEmpty()){
        sql += " AND placa=" + ui->line_placa->text();

    }
    if(!ui->line_marca->text().isEmpty()){
        sql += " AND marca=" + ui->line_marca->text();
    }
    if(check_checked == 1){
        if(ui->check_rent->isChecked()){
            sql += " AND alugada=true";
        } else{
             sql += " AND alugada=false";
        }
    }


     query.prepare(sql);
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
    auto create_moto = new class Create_moto();
    create_moto->show();
}






void querymotos::on_check_rent_clicked()
{
    check_checked = 1;
}
