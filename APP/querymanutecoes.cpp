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
    CheckQueryM checkQuery;
    sql = checkQuery.addValuesLine(sql);
    query.prepare(sql);
    qDebug() << sql;
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

