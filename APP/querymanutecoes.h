#ifndef QUERYMANUTECOES_H
#define QUERYMANUTECOES_H

#include <QWidget>
#include <QSqlQuery>
#include <QtSql>
#include <QDebug>
#include <QSqlQueryModel>
#include <QMessageBox>
#include <QDateEdit>

namespace Ui {
class querymanutecoes;
}

class querymanutecoes : public QWidget
{
    Q_OBJECT

public:
    explicit querymanutecoes(QWidget *parent = nullptr);
    ~querymanutecoes();

private slots:
    void on_btn_search_clicked();

private:
    Ui::querymanutecoes *ui;
};

class CheckQueryM{
public:
    QString addValuesLine(QString sql){
        sql = "SELECT moto_info.nome_moto, moto_info.placa,moto_info.marca, "
              "moto_info_maintenance.id_moto, moto_info_maintenance.id_manutencao, "
              "moto_info_maintenance.data, moto_info_maintenance.observacao,"
              "moto_info_maintenance.valor "
              "FROM moto_info_maintenance "
              "JOIN moto_info ON moto_info.id_moto = moto_info_maintenance.id_moto";


        return sql;
    }
private:
};





#endif // QUERYMANUTECOES_H
