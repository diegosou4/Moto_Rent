#ifndef QUERYMOTO_H
#define QUERYMOTO_H

#include <QMainWindow>
#include <QSqlQuery>
#include <QtSql>

namespace Ui {
class querymoto;
}

class querymoto : public QMainWindow
{
    Q_OBJECT

public:
    explicit querymoto(QWidget *parent = nullptr);
    ~querymoto();

private slots:
    void on_actionConsultar_moto_triggered();

private:
    Ui::querymoto *ui;
};

#endif // QUERYMOTO_H
