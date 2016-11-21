#include "dormitory.h"

#include "sqlite.h"
QString  Dormitory::admin = "";
Dormitory::Dormitory(QWidget *parent)
	: QMainWindow(parent)
{
	ui.setupUi(this);
	QString id = sqlquery("select id from student where id=" + admin);
	this->ui.lineEdit->setText(id);
	QString name = sqlquery("select name from student where id=" + admin);
	this->ui.lineEdit_2->setText(name);
	QString building = sqlquery("select building from student where id=" + admin);
	this->ui.lineEdit_3->setText(building);
	QString room = sqlquery("select room from student where id=" + admin);
	this->ui.lineEdit_4->setText(room);
}

Dormitory::~Dormitory()
{

}
void Dormitory::on_search_clicked()
{

}