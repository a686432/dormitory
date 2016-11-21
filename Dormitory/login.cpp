#include "login.h"
#include "QMessageBox.h"
#include "QTextCodec.h"
#include "sqlite.h"
#include "dormitory.h"

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
	Dormitory::admin = ui.user->text();
	QString password = ui.password->text();
	QString pws = sqlquery("select password from student where id=" + Dormitory::admin);
	if (pws == password)
	{
		Dormitory::admin = ui.user->text();
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