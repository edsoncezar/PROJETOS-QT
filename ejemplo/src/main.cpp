#include <QApplication>
#include "login.h"

int main (int argc, char *argv[])
{
	QApplication app(argc, argv);
	login ventana;
	ventana.show();
	app.connect( &app, SIGNAL( lastWindowClosed() ), &app, SLOT( quit() ) );
	return app.exec();
}
