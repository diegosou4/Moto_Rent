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
    bool authenticate(){
      if (db.open()) {
                 return true;
             } else{
          return false;
      }
};
private:
    QSqlDatabase db;
};

class LoginAndPassSucess{                                                          // Classe depois que o banco de dados e conectado
public:
    void getValues(QString line_username, QString line_password){                 // Recebe os valores

        username  = line_username;
        password  = line_password;
    }
    void convertPass(){                                                          // Converte os valores
           QString hashedPassword = QString("%1").arg(QString(QCryptographicHash::hash(password.toUtf8(), QCryptographicHash::Md5).toHex()));
           password = hashedPassword;
    }
    bool queryForLogin(){                                                       // Faz o Login
        QSqlQuery query;
        QString sql = "SELECT login,password,name_user FROM user_info WHERE login=:login and password=:password";
        query.prepare(sql);
        query.bindValue(":login",username);
        query.bindValue(":password", password);

        if(query.exec()){
            if(query.next()){
                name = query.value(2).toString();                            // O nome recebe o valor encontrando no banco de dados
               return true;
            }else{
                return false;
            }
    }
        return false;

}
    QString setName(){
        return name;
    }
private:
      QString username, password,name;

};

#endif // LOGINANDPASS_H
