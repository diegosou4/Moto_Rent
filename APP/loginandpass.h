#ifndef LOGINANDPASS_H
#define LOGINANDPASS_H

#include <QMainWindow>
#include <QMessageBox>
#include <QSqlQuery>
#include <QtSql>
#include <QDebug>
#include <QFileInfo>
#include <QCryptographicHash>
#include <QSqlDatabase>



QT_BEGIN_NAMESPACE
namespace Ui { class LoginAndPass; }
QT_END_NAMESPACE

class LoginAndPass : public QMainWindow
{
    Q_OBJECT

    int r;
public:
    LoginAndPass(QWidget *parent = nullptr);
    ~LoginAndPass();

private slots:
    void on_pushButton_clicked();

private:
    Ui::LoginAndPass *ui;
};

class Authentication{
public:
     Authentication(const QString& Path): db(QSqlDatabase::addDatabase("QSQLITE"))
    {  // Acessando banco de dados
    db.setDatabaseName(Path);
    }
    // Criando uma função para retornar um valor se for 0 deu certo, se der errado vai retornar 1, se der 2 o banco de dados nao foi conectado corretamente
    int authenticate(const QString& username, const QString & password){
      QString hashedPassword = QString("%1").arg(QString(QCryptographicHash::hash(password.toUtf8(), QCryptographicHash::Md5).toHex()));
      if (!db.open()) {
                 qDebug() << "Erro ao abrir o banco de dados";
                 return 2;
             }

      QSqlQuery query(db);
      QString sql = "SELECT login,password FROM user_info WHERE login='" + username + "'" + " AND password='" + hashedPassword + "'";
      query.prepare(sql);

      if(query.exec()){
          if(query.next()){
             return 0;
          }else{
              return 1;
          }

    }
}
private:
    QSqlDatabase db;
};

#endif // LOGINANDPASS_H
