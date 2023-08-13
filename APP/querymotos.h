#ifndef QUERYMOTOS_H
#define QUERYMOTOS_H

#include <QWidget>
#include <QSqlQuery>
#include <QtSql>
#include <QDebug>
#include <QSqlQueryModel>
#include <QMessageBox>
#include <QDateEdit>
#include "create_moto.h"
namespace Ui {
class querymotos;
}

class querymotos : public QWidget
{
    Q_OBJECT

public:
    explicit querymotos(QWidget *parent = nullptr);
    ~querymotos();
    int click_check = 0;
private slots:
    void on_pushButton_clicked();

    void on_btn_createmoto_clicked();

    void on_check_rent_clicked();

private:
    Ui::querymotos *ui;
};
class CheckQueryMotos{
public:
    QString id_moto,placa,marca;
    int clickcheck;
    bool checkbox;

    // Recebe os valores do input
    void getLine(QString line_id,QString line_placa,QString line_marca, int click_check, bool check_box){
        id_moto = line_id;
        placa = line_placa;
        marca = line_marca;
        clickcheck = click_check;
        checkbox = check_box;
    }
    // Retrona o sql de forma correta para evitar SQL INJECTION
    QString addValuesline(QString sql){
        sql = "SELECT * FROM moto_info WHERE 1=1";
        if(!id_moto.isEmpty()){
            sql += " AND id_moto=:id_moto";
        }

        if(!placa.isEmpty()){
            sql += " AND PLACA=:placa";
        }

        if(!marca.isEmpty()){
            sql += " AND marca=:marca";
        }

        if(clickcheck >= 1){
            if(checkbox){
             sql += " AND alugada=true";
            } else {
             sql += " AND NOT alugada=true";
            }
        }
        return sql;
    }

private:
};

#endif // QUERYMOTOS_H
