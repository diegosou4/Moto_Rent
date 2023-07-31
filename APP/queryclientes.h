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
    QString checkline(QString nome,QString nif,QString id_moto,int clickcheck, bool checkbox,QString sql){
        sql = "SELECT client_info.*, moto_info.placa, moto_info.alugada from client_info join moto_info ON client_info.id_moto = moto_info.id_moto WHERE 1=1";
        if(!nome.isEmpty()){
            sql += " AND NOME='" + nome + "'";
        }

        if(!nif.isEmpty()){
            sql += " AND NIF='" + nif + "'";
        }

        if(!id_moto.isEmpty()){
            sql += " AND client_info.id_moto='" + id_moto +"'";
        }
        if(clickcheck == 1){
            if(checkbox){
             sql += " AND moto_info.alugada=true";
            } else {
             sql += " AND moto_info.alugada=false";
            }
        }
        return sql;
    }


private:

};


#endif // QUERYCLIENTES_H
