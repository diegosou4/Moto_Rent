#ifndef EDITMANUNTECAO_H
#define EDITMANUNTECAO_H

#include <QWidget>
#include <QSqlQuery>
#include <QtSql>
#include <QDebug>
#include <QSqlQueryModel>
#include <QMessageBox>
#include <QDateEdit>

namespace Ui {
class editmanuntecao;
}

class editmanuntecao : public QWidget
{
    Q_OBJECT

public:
    explicit editmanuntecao(QWidget *parent = nullptr);
    ~editmanuntecao();

public slots:
    void setLineEditText(const QString& text);

private slots:
    void on_btn_salve_clicked();

private:
    Ui::editmanuntecao *ui;
};

class QueryEditManutecao{
  public:
     int id_manutecao, km_atual, valor;
     QString id_moto,tipo_manutecao,data,observacao;

     void getid_manutecao(int line_id_manutecao){
         id_manutecao = line_id_manutecao;
     }

     void GetValueMoto(QString sql,QSqlQuery query){
         sql = "select moto_info_maintenance.id_moto from moto_info_maintenance where moto_info_maintenance.id_manutencao=:id_manuntecao";
         query.prepare(sql);
         query.bindValue(":id_manuntecao", id_manutecao);
         if(query.exec()){
            if(query.next()){
            id_moto = query.value(0).toString();
            }
         }
     }
     bool lineIsEmpety(QString line_id,QString line_tipo_manutecao,QString line_data,QString line_valor,QString line_observacao,QString line_km){
         if(!line_id.isEmpty() || !line_tipo_manutecao.isEmpty() || !line_data.isEmpty() || !line_valor.isEmpty() || !line_observacao.isEmpty() || !line_km.isEmpty()){
             qDebug() << id_manutecao;
             return true;
         } else {
             return false;
         }
     }
     void getValuesLine(QString line_id,QString line_tipo_manutecao, QString line_data,QString line_valor,QString line_observacao,QString line_km){
       id_moto = line_id.toInt();
       tipo_manutecao = line_tipo_manutecao;
       data = line_data;
       valor = line_valor.toInt();
       observacao = line_observacao;
       km_atual = line_km.toInt();

     }
     bool updateValues(QString sql,QSqlQuery query){
         sql = "UPDATE moto_info_maintenance SET data=:data, observacao=:observacao, valor=:valor, tipo_manuntecao=:tipo_manuntecao, km_da_moto=:km_da_moto where moto_info_maintenance.id_manutencao=:id_manutencao";
         query.prepare(sql);
         query.bindValue(":data", data);
         query.bindValue(":oberservacao", observacao);
         query.bindValue(":valor", valor);
         query.bindValue(":tipo_manuntecao", tipo_manutecao);
         query.bindValue(":km_da_moto", km_atual);
         query.bindValue(":id_manutecao", id_manutecao);
        if(query.exec()){
            return true;
        } else {
            return false;
        }



     }
     void UpdateKmTable(QString sql, QSqlQuery query){
         sql = "UPDATE moto_info set kmatual=:km_atual where moto_info.id_moto=:id_moto";
         query.clear();
         query.prepare(sql);
         query.bindValue(":km_atual", km_atual);
         query.bindValue(":id_moto", id_moto);

         if(query.exec()){

         }
     }



private:
};

#endif // EDITMANUNTECAO_H
