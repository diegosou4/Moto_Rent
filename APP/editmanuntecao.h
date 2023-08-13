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

private:
    Ui::editmanuntecao *ui;
};

class QueryEditManutecao{
  public:
     int id_manutecao;
     QString id_moto;
     void getid_manutecao(int line_id_manutecao){
         id_manutecao = line_id_manutecao;
     }

     void GetValue(QString sql,QSqlQuery query){
         sql = "select moto_info_maintenance.id_moto from moto_info_maintenance where moto_info_maintenance.id_manutencao=:id_manuntecao";
         query.prepare(sql);
         query.bindValue(":id_manuntecao", id_manutecao);
         if(query.exec()){
            if(query.next()){
            id_moto = query.value(0).toString();
            }
         }
     }


private:
};

#endif // EDITMANUNTECAO_H
