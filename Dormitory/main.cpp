#include "dormitory.h"
#include "login.h"
#include "adiministrate.h"
#include <QtWidgets/QApplication>
#include <QSqlDatabase>
#include <QDebug>
int main(int argc, char *argv[])
{
	QApplication a(argc, argv);

	Login login; //登陆界面
	if (login.exec() == QDialog::Accepted)
	{
		if (Login::admin == "admin")
		{
			adiministrate m;
			m.show();
			return a.exec();
		}
		else
		{
			Dormitory w; //主界面
			w.show();
			return a.exec();
		}
		
	}
	else return 0;

}
