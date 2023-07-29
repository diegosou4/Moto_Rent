#ifndef QUERYCLIENTANDMOTO_H
#define QUERYCLIENTANDMOTO_H

#include <QMainWindow>

namespace Ui {
class queryclientandmoto;
}

class queryclientandmoto : public QMainWindow
{
    Q_OBJECT

public:
    explicit queryclientandmoto(QWidget *parent = nullptr);
    ~queryclientandmoto();

private slots:
    void on_pushButton_clicked();

private:
    Ui::queryclientandmoto *ui;
};

#endif // QUERYCLIENTANDMOTO_H
