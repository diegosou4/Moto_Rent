#ifndef HOMEPAGE_H
#define HOMEPAGE_H

#include <QDialog>
#include "querymotos.h"
#include "queryclientes.h"
#include "querymanutecoes.h"

namespace Ui {
class homepage;
}

class homepage : public QDialog
{
    Q_OBJECT

public:
    explicit homepage(QWidget *parent = nullptr);
    ~homepage();

private slots:
    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

    void on_btn_sair_clicked();

    void on_Btn_VerificarManutecoes_clicked();

private:
    Ui::homepage *ui;
};

#endif // HOMEPAGE_H
