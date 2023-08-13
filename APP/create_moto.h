#ifndef CREATE_MOTO_H
#define CREATE_MOTO_H

#include <QWidget>
#include <QMessageBox>
#include <QSqlQuery>
#include <QtSql>

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

#endif // CREATE_MOTO_H
