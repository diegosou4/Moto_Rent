#ifndef QUERY_H
#define QUERY_H

#include <QDialog>

namespace Ui {
class Query;
}

class Query : public QDialog
{
    Q_OBJECT

public:
    explicit Query(QWidget *parent = nullptr);
    ~Query();

private:
    Ui::Query *ui;
};

#endif // QUERY_H
