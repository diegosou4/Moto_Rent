#include "loginandpass.h"
#include "ui_loginandpass.h"
#include "homepage.h"
#include "teste.h"

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

    if(Authentication(Path).authenticate(username,password) == 0){
        QMessageBox::information(this,"Logado com sucesso","Seu login foi auntetificado com sucesso seja bem vindo " + username +"");
        homepage* MyHomepage = new homepage();
        this->close();
        MyHomepage->show();
    }else if(Authentication(Path).authenticate(username,password) == 1){
       QMessageBox::warning(this,"Autentificaçao falhou","O login ou a senha estao incorretos");
    }else if(Authentication(Path).authenticate(username,password) == 2){
        QMessageBox::critical(this,"Erro", "Erro no banco de dados consulte seu ti");
    }
}
