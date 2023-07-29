#ifndef QUERYCLIENTES_H
#define QUERYCLIENTES_H

#include <QWidget>
#include <QSqlQuery>
#include <QtSql>
#include <QDebug>
#include <QSqlQueryModel>
#include <QMessageBox>
#include <QDateEdit>

namespace Ui {
class queryclientes;
}

class queryclientes : public QWidget
{
    Q_OBJECT

public:
    explicit queryclientes(QWidget *parent = nullptr);
    ~queryclientes();
private slots:

    void on_btn_consultar_clicked();

private:
    Ui::queryclientes *ui;
};

#endif // QUERYCLIENTES_H
