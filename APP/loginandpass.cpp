#include "loginandpass.h"
#include "ui_loginandpass.h"
#include "homepage.h"
#include "teste.h"

#define Path "/home/diemorei/Desktop/Projeto/motorent.db"

LoginAndPass::LoginAndPass(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::LoginAndPass)
{
    db = QSqlDatabase::addDatabase("QSQLITE");
    db.setDatabaseName(Path);
    QFileInfo checkFile(Path);
    if(db.open()){
        qDebug() << "Arquivo aberto";
    } else{
         qDebug() << "Arquivo nao aberto";
    }

    ui->setupUi(this);
}

LoginAndPass::~LoginAndPass()
{
    delete ui;
}


void LoginAndPass::on_pushButton_clicked()
{
    QString Username, Password;
    Username = ui->line_login->text();
    Password = ui->line_pass->text();
    Password =  QString("%1").arg( QString( QCryptographicHash::hash( Password.toUtf8(), QCryptographicHash::Md5).toHex()));
    QSqlQuery query;
    QString sql = "SELECT login,password FROM user_info WHERE login='" + Username + "'" + " AND password='" + Password + "'";
    query.prepare(sql);

    if(query.exec()){
        if(query.next()){

           auto homepage = new class homepage();
           this->close();
           homepage->show();
        }else{
        QMessageBox::critical(this,"Erro", "Erro");
    }


}
}
