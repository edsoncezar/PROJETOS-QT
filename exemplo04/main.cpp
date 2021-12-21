#include <QtGui/QApplication>
#include <QCoreApplication>
#include <QSqlDatabase>
#include <QStringList>
#include <QtDebug>
#include "mainwindow.h"

int main(int argc, char *argv[])
{
    QCoreApplication app( argc, argv );
    qDebug() << QSqlDatabase::drivers();
    QApplication a(argc, argv);
    MainWindow w;
    w.show();
    return a.exec();
}
