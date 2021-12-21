/********************************************************************************
** Form generated from reading UI file 'editardialog.ui'
**
** Created: Fri Oct 14 14:02:58 2011
**      by: Qt User Interface Compiler version 4.7.4
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_EDITARDIALOG_H
#define UI_EDITARDIALOG_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QDialog>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QPushButton>
#include <QtGui/QSpacerItem>
#include <QtGui/QTableView>
#include <QtGui/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_editarDialog
{
public:
    QVBoxLayout *verticalLayout;
    QTableView *tableView;
    QHBoxLayout *horizontalLayout;
    QPushButton *addButton;
    QPushButton *deleteButton;
    QSpacerItem *horizontalSpacer;
    QPushButton *sairButton;

    void setupUi(QDialog *editarDialog)
    {
        if (editarDialog->objectName().isEmpty())
            editarDialog->setObjectName(QString::fromUtf8("editarDialog"));
        editarDialog->setWindowModality(Qt::ApplicationModal);
        editarDialog->resize(594, 246);
        verticalLayout = new QVBoxLayout(editarDialog);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        tableView = new QTableView(editarDialog);
        tableView->setObjectName(QString::fromUtf8("tableView"));

        verticalLayout->addWidget(tableView);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        addButton = new QPushButton(editarDialog);
        addButton->setObjectName(QString::fromUtf8("addButton"));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/img/adicionar"), QSize(), QIcon::Normal, QIcon::Off);
        addButton->setIcon(icon);

        horizontalLayout->addWidget(addButton);

        deleteButton = new QPushButton(editarDialog);
        deleteButton->setObjectName(QString::fromUtf8("deleteButton"));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/img/eliminar"), QSize(), QIcon::Normal, QIcon::Off);
        deleteButton->setIcon(icon1);

        horizontalLayout->addWidget(deleteButton);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        sairButton = new QPushButton(editarDialog);
        sairButton->setObjectName(QString::fromUtf8("sairButton"));
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/img/exit"), QSize(), QIcon::Normal, QIcon::Off);
        sairButton->setIcon(icon2);

        horizontalLayout->addWidget(sairButton);


        verticalLayout->addLayout(horizontalLayout);


        retranslateUi(editarDialog);

        QMetaObject::connectSlotsByName(editarDialog);
    } // setupUi

    void retranslateUi(QDialog *editarDialog)
    {
        editarDialog->setWindowTitle(QApplication::translate("editarDialog", "Dialog", 0, QApplication::UnicodeUTF8));
        addButton->setText(QApplication::translate("editarDialog", "&Adicionar registo", 0, QApplication::UnicodeUTF8));
        deleteButton->setText(QApplication::translate("editarDialog", "&Eliminar registo", 0, QApplication::UnicodeUTF8));
        sairButton->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class editarDialog: public Ui_editarDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_EDITARDIALOG_H
