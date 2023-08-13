#include "loginandpass.h"
#include "ui_loginandpass.h"
#include "homepage.h"


#define Path "/home/diemorei/Desktop/Moto_Rent/SQL/motorent.db"

LoginAndPass::LoginAndPass(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::LoginAndPass)
{
    ui->setupUi(this);
}

LoginAndPass::~LoginAndPass()
{
    delete ui;
}


void LoginAndPass::on_pushButton_clicked()
{
    QString username = ui->line_login->text();
    QString password = ui->line_pass->text();
    LoginAndPassSucess loginObj;
    if(Authentication(Path).authenticate()){

        loginObj.getValues(ui->line_login->text(),ui->line_pass->text());
        loginObj.convertPass();
        if(loginObj.queryForLogin()){
            QString name_user;
            name_user = loginObj.setName();
            QMessageBox::information(this,"Seja Bem Vindo", "Ola seja bem vindo " + name_user +" Ao Moto Rent");
            homepage* MyHomepage = new homepage();
            this->close();
            MyHomepage->show();
        }else{
                   QMessageBox::warning(this,"Autentificaçao falhou","O login ou a senha estao incorretos");
        }
    }else if(Authentication(Path).authenticate()){
        QMessageBox::critical(this,"Erro", "Erro no banco de dados consulte seu ti");
    }
}
