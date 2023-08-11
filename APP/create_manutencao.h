#ifndef CREATE_MANUTENCAO_H
#define CREATE_MANUTENCAO_H

#include <QWidget>

namespace Ui {
class create_manutencao;
}

class create_manutencao : public QWidget
{
    Q_OBJECT

public:
    explicit create_manutencao(QWidget *parent = nullptr);
    ~create_manutencao();

private:
    Ui::create_manutencao *ui;
};

#endif // CREATE_MANUTENCAO_H
