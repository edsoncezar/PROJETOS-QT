/********************************************************************************
** Form generated from reading UI file 'addressbook.ui'
**
** Created: Fri Oct 14 10:57:00 2011
**      by: Qt User Interface Compiler version 4.7.4
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADDRESSBOOK_H
#define UI_ADDRESSBOOK_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QHeaderView>
#include <QtGui/QMainWindow>
#include <QtGui/QMenuBar>
#include <QtGui/QStatusBar>
#include <QtGui/QToolBar>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_AddressBook
{
public:
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QWidget *centralWidget;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *AddressBook)
    {
        if (AddressBook->objectName().isEmpty())
            AddressBook->setObjectName(QString::fromUtf8("AddressBook"));
        AddressBook->resize(400, 300);
        menuBar = new QMenuBar(AddressBook);
        menuBar->setObjectName(QString::fromUtf8("menuBar"));
        AddressBook->setMenuBar(menuBar);
        mainToolBar = new QToolBar(AddressBook);
        mainToolBar->setObjectName(QString::fromUtf8("mainToolBar"));
        AddressBook->addToolBar(mainToolBar);
        centralWidget = new QWidget(AddressBook);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        AddressBook->setCentralWidget(centralWidget);
        statusBar = new QStatusBar(AddressBook);
        statusBar->setObjectName(QString::fromUtf8("statusBar"));
        AddressBook->setStatusBar(statusBar);

        retranslateUi(AddressBook);

        QMetaObject::connectSlotsByName(AddressBook);
    } // setupUi

    void retranslateUi(QMainWindow *AddressBook)
    {
        AddressBook->setWindowTitle(QApplication::translate("AddressBook", "AddressBook", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class AddressBook: public Ui_AddressBook {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADDRESSBOOK_H
