#include "querymanutecoes.h"
#include "ui_querymanutecoes.h"

querymanutecoes::querymanutecoes(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::querymanutecoes)
{
    ui->setupUi(this);
}

querymanutecoes::~querymanutecoes()
{
    delete ui;
}

void querymanutecoes::on_btn_search_clicked()
{
    QSqlQuery query;
    QString sql;
    QStringList namecolunm = {"Nome da Moto","Placa","Marca","Id_moto","Id_Manuntecao","Data","Obersavacao", "Valor"};
    CheckQueryManutecoes checkQuery;
    checkQuery.getLine(ui->line_id_moto->text().toInt(), ui->line_placa->text());

    sql = checkQuery.addValuesLine(sql);
    sql = checkQuery.valuesNotEmpety(sql);
    qDebug() << sql;
    query.prepare(sql);
    query.bindValue(":id_moto", checkQuery.id_moto);
    query.bindValue(":placa", checkQuery.placa);

    int j = 0;
    if (query.exec()) {
        ui->tableWidget->setColumnCount(7);
        int i = 0;

        while (query.next()) {
            ui->tableWidget->insertRow(i);

            j = 0;
            while (j < 7) {
                QTableWidgetItem *item = new QTableWidgetItem(query.value(j).toString());
                ui->tableWidget->setItem(i, j, item);
                ui->tableWidget->setRowHeight(i, 30);
                j++;
            }

            i++;
        }

        ui->tableWidget->setHorizontalHeaderLabels(namecolunm);

        // Remove linhas não utilizadas
        while (i < ui->tableWidget->rowCount()) {
            ui->tableWidget->removeRow(i);
        }

        if (i == 0) {
            ui->tableWidget->clearContents();
            ui->tableWidget->setRowCount(0);
            QMessageBox::information(this, "Sem resultados", "Nenhum resultado encontrado.");
        }
    } else {
        QMessageBox::critical(this, "Erro", "Erro na execução da consulta.");
    }




}


void querymanutecoes::on_btn_add_clicked()
{
    create_manutencao* pageCreate_manutencao = new create_manutencao();
    pageCreate_manutencao->show();
}

