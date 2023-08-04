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

private:
    Ui::optionforadmin *ui;
};

#endif // OPTIONFORADMIN_H
