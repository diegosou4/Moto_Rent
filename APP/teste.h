#ifndef TESTE_H
#define TESTE_H

#include <QMainWindow>

namespace Ui {
class teste;
}

class teste : public QMainWindow
{
    Q_OBJECT

public:
    explicit teste(QWidget *parent = nullptr);
    ~teste();

private:
    Ui::teste *ui;
};

#endif // TESTE_H
