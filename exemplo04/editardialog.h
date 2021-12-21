#ifndef EDITARDIALOG_H
#define EDITARDIALOG_H

#include <QtGui/QDialog>
#include <QSqlQueryModel>
#include <QSqlTableModel>
#include <QTableView>
#include <QMessageBox>

namespace Ui {
    class editarDialog;
}

class editarDialog : public QDialog {
    Q_OBJECT
    Q_DISABLE_COPY(editarDialog)
public:
    explicit editarDialog(QWidget *parent = 0);
    virtual ~editarDialog();
private slots:
    void adicionarRegisto();
    void eliminarRegisto();

protected:
    virtual void changeEvent(QEvent *e);

private:
    Ui::editarDialog *m_ui;
    QSqlTableModel *modelo;
    QTableView *vista;
    enum {
        Produto_codigo = 0,
        Produto_descricao = 1,
        Produto_categoria = 2,
        Produto_iva = 3,
        Produto_preco_unitario = 4,
    };
};

#endif // EDITARDIALOG_H
