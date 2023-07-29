#ifndef LOGINANDPASS_H
#define LOGINANDPASS_H

#include <QMainWindow>
#include <QMessageBox>
#include <QSqlQuery>
#include <QtSql>
#include <QDebug>
#include <QFileInfo>
#include <QCryptographicHash>


QT_BEGIN_NAMESPACE
namespace Ui { class LoginAndPass; }
QT_END_NAMESPACE

class LoginAndPass : public QMainWindow
{
    Q_OBJECT
    QSqlDatabase db;
    int r;
public:
    LoginAndPass(QWidget *parent = nullptr);
    ~LoginAndPass();

private slots:
    void on_pushButton_clicked();

private:
    Ui::LoginAndPass *ui;
};
#endif // LOGINANDPASS_H
