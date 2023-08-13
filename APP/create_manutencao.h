#ifndef CREATE_MANUTENCAO_H
#define CREATE_MANUTENCAO_H

#include <QWidget>
#include <QSqlQuery>
#include <QtSql>
#include <QDebug>
#include <QSqlQueryModel>
#include <QMessageBox>
#include <QDateEdit>

namespace Ui {
class create_manutencao;
}

class create_manutencao : public QWidget
{
    Q_OBJECT

public:
    explicit create_manutencao(QWidget *parent = nullptr);
    ~create_manutencao();

private slots:
    void on_btn_salvar_clicked();

private:
    Ui::create_manutencao *ui;
};

class ValidQueryManutencao{
public:
    QString placa,manuntecao,data,observacao;
    int id,km_atual,valor;

    void getValuesLine(QString line_id,QString line_data,QString line_placa,QString line_manuntecao,QString line_valor,QString line_km_atual,QString line_obersevacao){
        id = line_id.toInt();
        data = line_data;
        placa = line_placa;
        manuntecao = line_manuntecao;
        valor = line_valor.toInt();
        km_atual = line_km_atual.toInt();
        observacao = line_obersevacao;

    }
    bool valuesIsEmpety(QString line_id,QString line_data,QString line_placa,QString line_manuntecao,QString line_valor,QString line_km_atual,QString line_obersevacao){
        if(line_id.isEmpty() || line_data.isEmpty() ||line_placa.isEmpty() || line_manuntecao.isEmpty() || line_valor.isEmpty() || line_km_atual.isEmpty() || line_obersevacao.isEmpty()){
            return true;
        } else {
            return false;
        }
    }
    bool queryValid(QString sql, QSqlQuery query){
    sql = "INSERT INTO moto_info_maintenance(id_moto,data,observacao,valor,tipo_manuntecao) values (:id_moto,:data,:observacao,:valor,:tipo_manuntecao)";
    query.clear();
    query.prepare(sql);
    query.bindValue(":id_moto", id);
    query.bindValue(":data", data);
    query.bindValue(":observacao", observacao);
    query.bindValue(":valor", valor);
    query.bindValue(":tipo_manuntecao", manuntecao);
    if(query.exec()){
        return true;
    } else{
        qDebug() << query.lastError().text();
        return false;
    }
    }

   private:

};
#endif // CREATE_MANUTENCAO_H
