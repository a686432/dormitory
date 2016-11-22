#include "adiministrate.h"
#include "login.h"
#include "sqlite.h"

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
	Sqlinsert("insert into student (id, password, name, building, room) values (?, ?, ?, ?, ?)",sql_query);
}