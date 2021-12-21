#ifndef CONNECTION_H
#define CONNECTION_H

#include <QMessageBox>
#include <QSqlDatabase>
#include <QSqlError>
#include <QSqlQuery>
static bool createConnection(const QString newHostName, const QString newDatabase, const QString newUserName, const QString newPassword){
    QSqlDatabase db = QSqlDatabase::addDatabase("QMYSQL");
    db.setHostName(newHostName);
    db.setDatabaseName(newDatabase);
    db.setUserName(newUserName);
    db.setPassword(newPassword);
    if (!db.open()) {
        QMessageBox::critical(0, qApp->trUtf8("ERRO!"),
            qApp->trUtf8("Não foi possível estabelecer uma ligação com a base de dados.\n"
                     ""
                     "Clique em Cancel para sair."), QMessageBox::Cancel);
        return false;
    }
    return true;
}

#endif

/**
QSqlDatabase db = QSqlDatabase::addDatabase("QSQLITE");
db.setDatabaseName("learn.db");
**/
