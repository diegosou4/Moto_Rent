#include "queryclientandmoto.h"
#include "ui_queryclientandmoto.h"

queryclientandmoto::queryclientandmoto(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::queryclientandmoto)
{
    ui->setupUi(this);

}

queryclientandmoto::~queryclientandmoto()
{
    delete ui;

}

void queryclientandmoto::on_pushButton_clicked()
{

}

