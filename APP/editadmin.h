#ifndef EDITADMIN_H
#define EDITADMIN_H

#include <QMainWindow>

namespace Ui {
class Editadmin;
}

class Editadmin : public QMainWindow
{
    Q_OBJECT

public:
    explicit Editadmin(QWidget *parent = nullptr);
    ~Editadmin();

private:
    Ui::Editadmin *ui;
};

#endif // EDITADMIN_H
