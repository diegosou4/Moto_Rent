#ifndef CREATE_CLIENT_H
#define CREATE_CLIENT_H

#include <QWidget>
#include <QMessageBox>
#include <QSqlQuery>
#include <QtSql>

namespace Ui {
class create_client;
}

class create_client : public QWidget
{
    Q_OBJECT

public:
    explicit create_client(QWidget *parent = nullptr);
    ~create_client();

private slots:
    void on_pushButton_2_clicked();

private:
    Ui::create_client *ui;
};

#endif // CREATE_CLIENT_H
