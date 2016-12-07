#include "login.h"
#include "QMessageBox.h"
#include "QTextCodec.h"
#include "sqlite.h"

QString  Login::admin = "";
Login::Login(QDialog *parent)
	: QDialog(parent)
{
	ui.setupUi(this);
	Init_sqlite();
}

Login::~Login()
{

}

void Login::changeEvent(QEvent *e)
{
	QDialog::changeEvent(e);
	switch (e->type()) {
	case QEvent::LanguageChange:
		ui.retranslateUi(this);
		break;
	default:
		break;
	}
}


void Login::on_ok_clicked()
{
	Login::admin = ui.user->text();
	QString password = ui.password->text();
	QString pws = sqlquery("select password from student where id=" + Login::admin);
	if (pws == password && pws != NULL || admin == "admin" && password == "admin")
	{
		Login::admin = ui.user->text();
		accept();
	}
	else
	{ 
		QTextCodec::setCodecForLocale(QTextCodec::codecForName("GBK"));
		QMessageBox::warning(this, tr("warning"), tr("Incorrect username or password!"), QMessageBox::Yes);
		this->ui.user->clear();
		this->ui.password->clear();
		this->ui.user->setFocus();
	}
}

void Login::on_cancel_clicked()
{
	this->close();
}