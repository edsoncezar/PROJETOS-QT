/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created: Fri Oct 14 12:48:09 2011
**      by: Qt User Interface Compiler version 4.7.4
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QMainWindow>
#include <QtGui/QMenu>
#include <QtGui/QMenuBar>
#include <QtGui/QStatusBar>
#include <QtGui/QToolBar>
#include <QtGui/QVBoxLayout>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *actionLigarBD;
    QAction *actionDesligarBD;
    QAction *actionSair;
    QAction *actionAcerca;
    QAction *actionCriar_tabela_de_Produtos;
    QAction *actionEditarTabelaProdutos;
    QWidget *centralWidget;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QVBoxLayout *verticalLayout;
    QLabel *semaforoBD;
    QLabel *label_3;
    QVBoxLayout *verticalLayout_2;
    QLabel *semaforoTabela;
    QLabel *label_4;
    QMenuBar *menuBar;
    QMenu *menuBase_de_Dados;
    QMenu *menuAjuda;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(791, 364);
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/img/appicon"), QSize(), QIcon::Normal, QIcon::Off);
        MainWindow->setWindowIcon(icon);
        actionLigarBD = new QAction(MainWindow);
        actionLigarBD->setObjectName(QString::fromUtf8("actionLigarBD"));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/img/on"), QSize(), QIcon::Normal, QIcon::Off);
        actionLigarBD->setIcon(icon1);
        actionDesligarBD = new QAction(MainWindow);
        actionDesligarBD->setObjectName(QString::fromUtf8("actionDesligarBD"));
        actionDesligarBD->setEnabled(false);
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/img/off"), QSize(), QIcon::Normal, QIcon::Off);
        actionDesligarBD->setIcon(icon2);
        actionSair = new QAction(MainWindow);
        actionSair->setObjectName(QString::fromUtf8("actionSair"));
        QIcon icon3;
        icon3.addFile(QString::fromUtf8(":/img/exit"), QSize(), QIcon::Normal, QIcon::Off);
        actionSair->setIcon(icon3);
        actionAcerca = new QAction(MainWindow);
        actionAcerca->setObjectName(QString::fromUtf8("actionAcerca"));
        actionCriar_tabela_de_Produtos = new QAction(MainWindow);
        actionCriar_tabela_de_Produtos->setObjectName(QString::fromUtf8("actionCriar_tabela_de_Produtos"));
        actionCriar_tabela_de_Produtos->setEnabled(false);
        QIcon icon4;
        icon4.addFile(QString::fromUtf8(":/img/produto"), QSize(), QIcon::Normal, QIcon::Off);
        actionCriar_tabela_de_Produtos->setIcon(icon4);
        actionEditarTabelaProdutos = new QAction(MainWindow);
        actionEditarTabelaProdutos->setObjectName(QString::fromUtf8("actionEditarTabelaProdutos"));
        actionEditarTabelaProdutos->setEnabled(false);
        QIcon icon5;
        icon5.addFile(QString::fromUtf8(":/img/editar"), QSize(), QIcon::Normal, QIcon::Off);
        actionEditarTabelaProdutos->setIcon(icon5);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        horizontalLayout = new QHBoxLayout(centralWidget);
        horizontalLayout->setSpacing(6);
        horizontalLayout->setContentsMargins(11, 11, 11, 11);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        label = new QLabel(centralWidget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setPixmap(QPixmap(QString::fromUtf8(":/img/esdas")));

        horizontalLayout->addWidget(label);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setSpacing(6);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        semaforoBD = new QLabel(centralWidget);
        semaforoBD->setObjectName(QString::fromUtf8("semaforoBD"));
        semaforoBD->setPixmap(QPixmap(QString::fromUtf8(":/img/desligado")));

        verticalLayout->addWidget(semaforoBD);

        label_3 = new QLabel(centralWidget);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setAlignment(Qt::AlignCenter);

        verticalLayout->addWidget(label_3);


        horizontalLayout->addLayout(verticalLayout);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setSpacing(6);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        semaforoTabela = new QLabel(centralWidget);
        semaforoTabela->setObjectName(QString::fromUtf8("semaforoTabela"));
        semaforoTabela->setPixmap(QPixmap(QString::fromUtf8(":/img/desligado")));

        verticalLayout_2->addWidget(semaforoTabela);

        label_4 = new QLabel(centralWidget);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setAlignment(Qt::AlignCenter);

        verticalLayout_2->addWidget(label_4);


        horizontalLayout->addLayout(verticalLayout_2);

        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QString::fromUtf8("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 791, 23));
        menuBase_de_Dados = new QMenu(menuBar);
        menuBase_de_Dados->setObjectName(QString::fromUtf8("menuBase_de_Dados"));
        menuAjuda = new QMenu(menuBar);
        menuAjuda->setObjectName(QString::fromUtf8("menuAjuda"));
        MainWindow->setMenuBar(menuBar);
        mainToolBar = new QToolBar(MainWindow);
        mainToolBar->setObjectName(QString::fromUtf8("mainToolBar"));
        mainToolBar->setEnabled(true);
        MainWindow->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QString::fromUtf8("statusBar"));
        MainWindow->setStatusBar(statusBar);

        menuBar->addAction(menuBase_de_Dados->menuAction());
        menuBar->addAction(menuAjuda->menuAction());
        menuBase_de_Dados->addAction(actionLigarBD);
        menuBase_de_Dados->addAction(actionDesligarBD);
        menuAjuda->addAction(actionAcerca);
        mainToolBar->addAction(actionLigarBD);
        mainToolBar->addAction(actionCriar_tabela_de_Produtos);
        mainToolBar->addAction(actionEditarTabelaProdutos);
        mainToolBar->addAction(actionDesligarBD);
        mainToolBar->addAction(actionSair);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", 0, QApplication::UnicodeUTF8));
        actionLigarBD->setText(QApplication::translate("MainWindow", "ligarBD", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        actionLigarBD->setToolTip(QApplication::translate("MainWindow", "Estabelecer liga\303\247\303\243o com a base de dados.", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        actionLigarBD->setShortcut(QApplication::translate("MainWindow", "Ctrl+C", 0, QApplication::UnicodeUTF8));
        actionDesligarBD->setText(QApplication::translate("MainWindow", "desligarBD", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        actionDesligarBD->setToolTip(QApplication::translate("MainWindow", "Terminar a liga\303\247\303\243o com a base de dados.", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        actionDesligarBD->setShortcut(QApplication::translate("MainWindow", "Ctrl+D", 0, QApplication::UnicodeUTF8));
        actionSair->setText(QApplication::translate("MainWindow", "sair", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        actionSair->setToolTip(QApplication::translate("MainWindow", "Sair", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        actionSair->setShortcut(QApplication::translate("MainWindow", "Ctrl+E", 0, QApplication::UnicodeUTF8));
        actionAcerca->setText(QApplication::translate("MainWindow", "Acerca ...", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        actionAcerca->setToolTip(QApplication::translate("MainWindow", "Acreca do projecto ...", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        actionCriar_tabela_de_Produtos->setText(QApplication::translate("MainWindow", "Criar tabela de Produtos", 0, QApplication::UnicodeUTF8));
        actionEditarTabelaProdutos->setText(QApplication::translate("MainWindow", "EditarTabelaProdutos", 0, QApplication::UnicodeUTF8));
        label->setText(QString());
        semaforoBD->setText(QString());
        label_3->setText(QApplication::translate("MainWindow", "Base de Dados", 0, QApplication::UnicodeUTF8));
        semaforoTabela->setText(QString());
        label_4->setText(QApplication::translate("MainWindow", "Tabela \"Produto\"", 0, QApplication::UnicodeUTF8));
        menuBase_de_Dados->setTitle(QApplication::translate("MainWindow", "Base de Dados", 0, QApplication::UnicodeUTF8));
        menuAjuda->setTitle(QApplication::translate("MainWindow", "Ajuda", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
