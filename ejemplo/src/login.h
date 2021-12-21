#ifndef LOGUIN_H
#define LOGUIN_H
#include <QDialog>
#include <QWidget>
#include <QPushButton>
#include <QLineEdit>
#include <QDialogButtonBox>
#include <QVBoxLayout>

class login : public QDialog 
{
	Q_OBJECT
private:
	QLineEdit *ledUsuario, *ledClave;
	QDialogButtonBox *botones;
	QVBoxLayout *lytVentana;
public:
	login(QWidget *parent = 0);
private slots:
	void verificar();
};
#endif
