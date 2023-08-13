#ifndef QUERYCLIENTES_H
#define QUERYCLIENTES_H

#include <QWidget>
#include <QSqlQuery>
#include <QtSql>
#include <QDebug>
#include <QSqlQueryModel>
#include <QMessageBox>
#include <QDateEdit>
#include "create_client.h"

namespace Ui {
class queryclientes;

}

class queryclientes : public QWidget
{
    Q_OBJECT


public:
    explicit queryclientes(QWidget *parent = nullptr);
    ~queryclientes();
     int clickcheck = 0;
private slots:
    void on_btn_consultar_clicked();

    void on_check_rent_clicked();

    void on_btn_newclient_clicked();

private:
    Ui::queryclientes *ui;
};

class CheckQueryClient{
public:
    QString name,nif,id_moto,sql;
    int check;
    bool checkbox;

    // Recebe os valores passado pelo os inputs
    void getValues(QString line_name,QString line_nif,QString line_id_moto, int line_clickcheck, bool line_checkbox){
        name = line_name;
        nif = line_nif;
        id_moto = line_id_moto;
        check = line_clickcheck;
        checkbox = line_checkbox;
    }
    // Rertona o sql de forma correta para nao ter SQL INJECTION
    QString addValuesLine(QString sql){
        sql = "SELECT client_info.*, moto_info.placa, moto_info.alugada from client_info join moto_info ON client_info.id_moto = moto_info.id_moto WHERE 1=1";
        if(!name.isEmpty()){
            sql += " AND client_info.nome=:nome";
        }
        if(!nif.isEmpty()){
            sql += " AND client_info.nif=:nif";
        }
        if(!id_moto.isEmpty()){
            sql += " AND client_info.id_moto=:id_moto";
        }
        if(check == 1){
            if(checkbox){
             sql += " AND moto_info.alugada=true";
            }else{
               sql += " AND NOT moto_info.alugada=true";
            }

        }
        return sql;
    }





private:

};


#endif // QUERYCLIENTES_H
