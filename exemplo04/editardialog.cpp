#include "editardialog.h"
#include "ui_editardialog.h"

editarDialog::editarDialog(QWidget *parent) :
    QDialog(parent),
    m_ui(new Ui::editarDialog)
{
    m_ui->setupUi(this);

    //http://doc.trolltech.com/4.5/model-view-programming.html
    modelo = new QSqlTableModel;
    modelo->setTable("Produto");
    modelo->setSort(Produto_codigo, Qt::AscendingOrder);
    modelo->setHeaderData(Produto_codigo, Qt::Horizontal, trUtf8("Código"));
    modelo->setHeaderData(Produto_descricao, Qt::Horizontal, trUtf8("Descrição"));
    modelo->setHeaderData(Produto_categoria, Qt::Horizontal, trUtf8("Categoria"));
    modelo->setHeaderData(Produto_iva, Qt::Horizontal, trUtf8("Iva"));
    modelo->setHeaderData(Produto_preco_unitario, Qt::Horizontal, trUtf8("Preço Unitário"));
    modelo->select();
    vista = m_ui->tableView;
    vista->setModel(modelo);
    vista->resizeColumnsToContents();

    connect(m_ui->sairButton, SIGNAL(clicked()), this, SLOT(close()));
    connect(m_ui->addButton, SIGNAL(clicked()), this, SLOT(adicionarRegisto()));
    connect(m_ui->deleteButton, SIGNAL(clicked()), this, SLOT(eliminarRegisto()));
}

editarDialog::~editarDialog()
{
    delete m_ui;
}

void editarDialog::changeEvent(QEvent *e)
{
    switch (e->type()) {
    case QEvent::LanguageChange:
        m_ui->retranslateUi(this);
        break;
    default:
        break;
    }
}

void editarDialog::adicionarRegisto(){
    int row = modelo->rowCount();
    modelo->insertRow(row);
    QModelIndex index = modelo->index(row, Produto_codigo);
    vista->setCurrentIndex(index);
    vista->edit(index);
}

void editarDialog::eliminarRegisto(){
    vista->setFocus();
    QModelIndex index = vista->currentIndex();
    if(!index.isValid())
        return;
    QMessageBox msgBox;
    msgBox.setText("Eliminar registo.");
    msgBox.setInformativeText("Tem a certeza?");
    msgBox.setStandardButtons(QMessageBox::No | QMessageBox::Yes);
    msgBox.setDefaultButton(QMessageBox::No);
    switch (msgBox.exec()) {
        case QMessageBox::Yes: modelo->removeRow(vista->currentIndex().row()); break;
        case QMessageBox::No:  break;
    }


}


