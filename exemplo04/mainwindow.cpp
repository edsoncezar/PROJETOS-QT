#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "connection.h"
#include "aboutdialog.h"
#include "editardialog.h"
MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent), ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_actionLigarBD_triggered()
{
    if((db_status = createConnection("127.0.0.1", "test", "root", "root"))){
        ui->semaforoBD->setPixmap(QPixmap(":/img/ligado"));
        ui->actionLigarBD->setEnabled(false);
        ui->actionDesligarBD->setEnabled(true);
        QSqlQuery query;
        if(query.exec("describe Produto"))
        {
            ui->actionLigarBD->setEnabled(false);
            ui->actionDesligarBD->setEnabled(true);
            ui->semaforoBD->setPixmap(QPixmap(":/img/ligado"));
            ui->semaforoTabela->setPixmap(QPixmap(":/img/ligado"));
            ui->actionEditarTabelaProdutos->setEnabled(true);
        }
        else
        {
            ui->actionCriar_tabela_de_Produtos->setEnabled(true);
        }
    }
    else
    {
        ui->semaforoBD->setPixmap(QPixmap(":/img/desligado"));
        ui->semaforoTabela->setPixmap(QPixmap(":/img/desligado"));
        ui->actionLigarBD->setEnabled(true);
        ui->actionDesligarBD->setEnabled(false);
        ui->actionCriar_tabela_de_Produtos->setEnabled(false);
    }
}

void MainWindow::on_actionSair_triggered()
{
    this->close();
}

void MainWindow::on_actionDesligarBD_triggered()
{
        ui->semaforoBD->setPixmap(QPixmap(":/img/desligado"));
        ui->semaforoTabela->setPixmap(QPixmap(":/img/desligado"));
        ui->actionLigarBD->setEnabled(true);
        ui->actionDesligarBD->setEnabled(false);
        ui->actionCriar_tabela_de_Produtos->setEnabled(false);
        ui->actionEditarTabelaProdutos->setEnabled(false);
}

void MainWindow::on_actionAcerca_triggered()
{
    aboutDialog x;
    x.exec();
}

void MainWindow::on_actionCriar_tabela_de_Produtos_triggered()
{
    QSqlQuery query;
    query.exec("create table Produto("
        "codigo int primary key, "
        "descricao varchar(20), "
        "categoria varchar(20), "
        "iva float, "
        "preco_unitario float);"
    );
    query.exec("insert into Produto values(2589554, 'SACO CHOC LEITE', 'Mercearia', 0.20, 2.39)");
    query.exec("insert into Produto values(2076480, 'BANA.MADEIRA QF', 'Frutas e Legumes', 0.05, 1.99)");
    query.exec("insert into Produto values(2076505, 'LARANJA QF', 'Frutas e Legumes', 0.05, 0.69)");
    query.exec("insert into Produto values(2471513, 'MORANG 500GR QF', 'Frutas e Legumes', 0.05, 0.99)");
    ui->actionCriar_tabela_de_Produtos->setEnabled(false);
    ui->semaforoTabela->setPixmap(QPixmap(":/img/ligado"));
    ui->actionLigarBD->setEnabled(false);
    ui->actionDesligarBD->setEnabled(true);
    ui->actionEditarTabelaProdutos->setEnabled(true);
}

void MainWindow::on_actionEditarTabelaProdutos_triggered()
{
    editarDialog x;
    x.exec();
}
