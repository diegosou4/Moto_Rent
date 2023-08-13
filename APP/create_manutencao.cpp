#include "create_manutencao.h"
#include "ui_create_manutencao.h"

create_manutencao::create_manutencao(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::create_manutencao)
{
    ui->setupUi(this);
}

create_manutencao::~create_manutencao()
{
    delete ui;
}


void create_manutencao::on_btn_salvar_clicked()
{
    ValidQueryManutencao queryManutecao;

   if(queryManutecao.valuesIsEmpety(ui->line_id_moto->text(),ui->line_placa->text(),ui->combo_tipo_manuntecao->currentText(),ui->line_valor->text(),ui->line_km_atual->text(),ui->line_observacao->text())){
       queryManutecao.getValuesLine(ui->line_id_moto->text(),ui->line_placa->text(),
                                    ui->combo_tipo_manuntecao->currentText(),ui->line_valor->text()
                                    ,ui->line_km_atual->text(),ui->line_observacao->text());

   }else{
        QMessageBox::warning(this,"Erro ao Criar", "Verifique se todas as informacoes estao completas");
   }


}

