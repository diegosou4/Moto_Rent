#ifndef QUERYMANUTECOES_H
#define QUERYMANUTECOES_H

#include <QWidget>
#include <QSqlQuery>
#include <QtSql>
#include <QDebug>
#include <QSqlQueryModel>
#include <QMessageBox>
#include <QDateEdit>
#include "create_manutencao.h"
#include "editmanuntecao.h"

namespace Ui {
class querymanutecoes;
}

class querymanutecoes : public QWidget
{
    Q_OBJECT

public:
    explicit querymanutecoes(QWidget *parent = nullptr);
    ~querymanutecoes();
    QueryEditManutecao editarManutecao;

private slots:
    void on_btn_search_clicked();

    void on_btn_add_clicked();

    void on_btn_editar_clicked();


    void on_tableWidget_cellClicked(int row, int column);


private:
    Ui::querymanutecoes *ui;
};

class CheckQueryManutecoes{
public:
    QString placa;
    int id_moto;

    // Recebe os Valores dos Inputs
    void getLine(int line_id, QString line_placa){
        id_moto = line_id;
        placa = line_placa;
    }
    // retorna o sql com a forma certa de consulta
    QString addValuesLine(QString sql){


        sql = "SELECT moto_info_maintenance.id_manutencao,moto_info.nome_moto, moto_info.placa,moto_info.marca, "
              "moto_info_maintenance.data, moto_info_maintenance.km_da_moto, moto_info_maintenance.tipo_manuntecao,"
              "moto_info_maintenance.valor "
              "FROM moto_info_maintenance "
              "JOIN moto_info ON moto_info.id_moto = moto_info_maintenance.id_moto "
              "WHERE 1=1";


        return sql;
    }

    // Caso as linhas nao estejam vazias retorna a pesquisa Filtrada
    QString valuesNotEmpety(QString sql){
        if(id_moto > 0){
            sql += " AND moto_info_maintenance.id_moto=:id_moto";
        }
        if(!placa.isEmpty()){
            sql += " AND moto_info.placa=:placa";
        }
        return sql;
    }
private:
};





#endif // QUERYMANUTECOES_H
