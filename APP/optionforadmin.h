#ifndef OPTIONFORADMIN_H
#define OPTIONFORADMIN_H

#include <QWidget>

namespace Ui {
class optionforadmin;
}

class optionforadmin : public QWidget
{
    Q_OBJECT

public:
    explicit optionforadmin(QWidget *parent = nullptr);
    ~optionforadmin();

private slots:
    void on_btn_create_user_clicked();

private:
    Ui::optionforadmin *ui;
};

#endif // OPTIONFORADMIN_H
