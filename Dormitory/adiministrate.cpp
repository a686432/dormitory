#include "adiministrate.h"
#include "login.h"
#include "sqlite.h"
#include "QMessageBox.h"

adiministrate::adiministrate(QWidget *parent)
	: QWidget(parent)
{
	ui.setupUi(this);
}

adiministrate::~adiministrate()
{
	
}

void adiministrate::slot1()
{
	QString user = ui.user->text();
	QString password = ui.password->text();
	QString name = ui.name->text();
	QString building = ui.building->text();
	QString room = ui.room->text();
	QSqlQuery sql_query;
	sql_query.prepare("insert into student (id, password, name, building, room) values (?, ?, ?, ?, ?)");
	sql_query.bindValue(0, user);
	sql_query.bindValue(1, password);
	sql_query.bindValue(2, name);
	sql_query.bindValue(3, building.toInt());
	sql_query.bindValue(4, room.toInt());
	if (Sqlinsert("insert into student (id, password, name, building, room) values (?, ?, ?, ?, ?)", sql_query))
	{
		QMessageBox::information(this, tr("info"), tr("something have been done!"), QMessageBox::Yes);
		close();
	}
	else
	{
		QMessageBox::warning(this, tr("warning"), tr("something wrong, please rewrite again!"), QMessageBox::Yes);
		this->ui.user->clear();
		this->ui.password->clear();
		this->ui.building->clear();
		this->ui.card->clear();
		this->ui.name->clear();
		this->ui.user->setFocus();
	}
}