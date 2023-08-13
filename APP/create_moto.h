#ifndef CREATE_MOTO_H
#define CREATE_MOTO_H

#include <QWidget>
#include <QMessageBox>
#include <QSqlQuery>
#include <QtSql>
#include <QDebug>

namespace Ui {
class Create_moto;
}

class Create_moto : public QWidget
{
    Q_OBJECT

public:
    explicit Create_moto(QWidget *parent = nullptr);
    ~Create_moto();

private slots:


    void on_btn_createmoto_clicked();

private:
    Ui::Create_moto *ui;
};

class ValidQueryMoto{
public:
    // Adicionando os valores na classe
    QString model,brand,color,km,plate,valuepayed,data_compra;

    // Verificando se os inputs estao vazios
    bool islineEmpty(QString line_model,QString line_brand, QString line_color,QString line_km ,QString line_plate, QString line_valuepayed){
        if(line_model.isEmpty() || line_brand.isEmpty() || line_color.isEmpty() || line_km.isEmpty()|| line_plate.isEmpty() || line_valuepayed.isEmpty()){
            return true;
        } else{
            return false;
        }
    }
    // Recebendo valores para armazenar na classe
    void getvaluesline(QString line_model, QString line_brand, QString line_color, QString line_km,
                       QString line_plate,QString line_valuepayed, QString line_data_compra){
            model = line_model;
            brand = line_brand;
            color = line_color;
            km = line_km;
            plate = line_plate;
            valuepayed = line_valuepayed;
            data_compra = line_data_compra;
    }
    // Verificando se o input da placa foi passada de forma correta
    bool correct_lineplate(){
        if(plate.size() < 8){
            return true;
        } else{
            return false;
        }
    }
    // Inserindo a criacao da moto
    bool queryValid(QString sql,QSqlQuery query){
        sql = "INSERT INTO moto_info (nome_moto, placa, marca, cor, kmatual, valor_pago, data_compra, alugada) "
                                  "VALUES (:nome_moto, :placa, :marca, :cor, :kmatual, :valor_pago, :data_compra, false)";
        query.prepare(sql);
        query.bindValue(":nome_moto", model);
        query.bindValue(":placa", plate);
        query.bindValue(":marca", model);
        query.bindValue(":cor", color);
        query.bindValue(":kmatual",km.toInt());
        query.bindValue(":valor_pago", valuepayed.toInt());
        query.bindValue(":data_compra", data_compra);
        if(query.exec()){
            return true;
        }else{
            return false;
        }
    }

private:



};

#endif // CREATE_MOTO_H
