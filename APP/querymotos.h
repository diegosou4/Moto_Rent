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
    int check_checked;
    ~querymotos();

private slots:
    void on_pushButton_clicked();

    void on_btn_createmoto_clicked();





    void on_check_rent_clicked();

private:
    Ui::querymotos *ui;
};

#endif // QUERYMOTOS_H
