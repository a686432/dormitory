#include "login.h"
#include "QMessageBox.h"
#include "QTextCodec.h"
Login::Login(QDialog *parent)
	: QDialog(parent)
{
	ui.setupUi(this);
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
	if (ui.user->text().trimmed() == tr("admin") &&
		ui.password->text().trimmed() == tr("admin"))
	{
		accept();
	}
	else
	{
		QTextCodec::setCodecForLocale(QTextCodec::codecForName("GBK"));
		QMessageBox::warning(this, tr("警告"), tr("用户名或密码错误!"), QMessageBox::Yes);
		this->ui.user->clear();
		this->ui.password->clear();
		this->ui.user->setFocus();
	}
}

void Login::on_cancel_clicked()
{
	this->close();
}