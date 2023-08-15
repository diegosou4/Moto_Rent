#ifndef CREATE_CLIENT_H
#define CREATE_CLIENT_H

#include <QWidget>
#include <QMessageBox>
#include <QSqlQuery>
#include <QtSql>
#include <QDebug>

namespace Ui {
class create_client;
}

class create_client : public QWidget
{
    Q_OBJECT

public:
    explicit create_client(QWidget *parent = nullptr);
    ~create_client();

private slots:
    void on_pushButton_2_clicked();

private:
    Ui::create_client *ui;
};
class ValidQueryCreator{
public:
        QString name,numero,nif,endereco,data_contrato,id_moto;


        // Verificando se os inputs estao vazios
        bool islineEmpty(QString line_name,QString line_numero, QString line_nif,QString line_endereco ,QString line_id_moto){
            if(line_name.isEmpty() || line_numero.isEmpty() || line_nif.isEmpty() || line_endereco.isEmpty() || line_id_moto.isEmpty()){
                return true;
            } else{
                return false;
            }
         }
        // Recebendo Valores
        void getvaluesline(QString line_name,QString line_numero,QString line_nif,QString line_endereco,QString line_data_contrato,QString line_id_moto){
            name = line_name;
            numero = line_numero;
            nif = line_nif;
            endereco = line_endereco;
            data_contrato = line_data_contrato;
            id_moto = line_id_moto;
        }
        // Checkando se a moto esta alugada
        int check_moto_rent(QSqlQuery query){
            QString sql = "select alugada from moto_info where id_moto='" + id_moto + "'";
            if(query.exec(sql) && query.next()){
                bool alugada = query.value(0).toBool();
                  if(alugada){
                return 1;
            }else{
                return 0;
            }
            }
            return 2;

        }
        // Atualizando o Statuso da moto
        void updateStatusmoto(QSqlQuery query){
               QString sql = "UPDATE moto_info set alugada=true where id_moto='" + id_moto + "'";
               query.prepare(sql);
               query.exec();
        }
        // Adicionando valores no banco de dados
        bool queryValid(QSqlQuery query, QString sql){
            sql = "INSERT INTO client_info (nome, numero, nif, endereco, data_contrato, id_moto) "
                                                             "VALUES (:nome, :numero, :nif, :endereco, :data_contrato, :id_moto)";
            query.clear();
            query.prepare(sql);
            query.bindValue(":nome", name);
            query.bindValue(":numero", numero);
            query.bindValue(":nif", nif);
            query.bindValue(":endereco", endereco);
            query.bindValue(":data_contrato", data_contrato);
            query.bindValue(":id_moto", id_moto);
            qDebug() << name;
            qDebug() << numero;
               if(query.exec()){
                   return true;
               } else{
                   qDebug() << query.lastError().text();
                   return false;
               }
   }
private:

};
#endif // CREATE_CLIENT_H
