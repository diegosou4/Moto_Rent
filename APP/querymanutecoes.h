#ifndef QUERYMANUTECOES_H
#define QUERYMANUTECOES_H

#include <QWidget>

namespace Ui {
class querymanutecoes;
}

class querymanutecoes : public QWidget
{
    Q_OBJECT

public:
    explicit querymanutecoes(QWidget *parent = nullptr);
    ~querymanutecoes();

private:
    Ui::querymanutecoes *ui;
};

#endif // QUERYMANUTECOES_H
