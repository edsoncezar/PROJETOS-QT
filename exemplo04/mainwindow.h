#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QtGui/QMainWindow>
#include <QMessageBox>

namespace Ui
{
    class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = 0);
    ~MainWindow();

private:
    Ui::MainWindow *ui;
    bool db_status;

private slots:
    void on_actionEditarTabelaProdutos_triggered();
    void on_actionCriar_tabela_de_Produtos_triggered();
    void on_actionAcerca_triggered();
    void on_actionDesligarBD_triggered();
    void on_actionSair_triggered();
    void on_actionLigarBD_triggered();
};

#endif // MAINWINDOW_H
