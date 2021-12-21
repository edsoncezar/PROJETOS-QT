#include <QApplication>
#include <QMessageBox>
#include <QSqlQuery>
#include <QSqlDatabase>
#include <QString>
#include <QDir>
#include "login.h"

//
login::login(QWidget *parent) 
	: QDialog(parent)
{
	ledUsuario = new QLineEdit("",this);
	ledClave = new QLineEdit("",this);
	botones = new QDialogButtonBox( Qt::Horizontal , this);
	botones->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);
	
	connect(botones, SIGNAL(rejected()), this, SLOT(reject()) );
	connect(botones, SIGNAL(accepted()), this, SLOT(verificar()) );
	
	lytVentana = new QVBoxLayout;
	lytVentana->addWidget(ledUsuario);
	lytVentana->addWidget(ledClave);
	lytVentana->addWidget(botones);
	
	setLayout(lytVentana);
	
	
	QSqlDatabase basedatos = QSqlDatabase::addDatabase("QSQLITE");
#ifdef Q_WS_WIN
	basedatos.setDatabaseName(QDir::toNativeSeparators(QApplication::applicationDirPath()+"\\bd.db"));
#else
    basedatos.setDatabaseName(QDir::toNativeSeparators(QApplication::applicationDirPath()+"/bd.db"));
#endif
	if (!basedatos.open())
	{
		QMessageBox::critical(this,"Base de Datos no abierta",
			"La Base de Datos no pude ser abierta",
			QMessageBox::Ok);
	}
}

void login::verificar()
{
	if (QSqlDatabase::database().isOpen())
	{
		QString strSql = "SELECT * FROM usuarios WHERE usuario=\""
			+ ledUsuario->text()
			+"\" AND clave=\""
			+ ledClave->text() + "\"";
		QSqlQuery sql(strSql);

                if (sql.next())
		{
			QMessageBox::information(this,"¡Bienvenido!",
				"Bienvenido " + ledUsuario->text(),
                                QMessageBox::Ok);
                }
		else
		{
			QMessageBox::warning(this,"Fallo",
				"Acceso Denegado",
				QMessageBox::Ok);
		}
	}
}
//
