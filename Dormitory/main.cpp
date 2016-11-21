#include "dormitory.h"
#include "login.h"
#include <QtWidgets/QApplication>

int main(int argc, char *argv[])
{
	QApplication a(argc, argv);
	
	Login login; //登陆界面
	if (login.exec() == QDialog::Accepted)
	{
		Dormitory w; //主界面
		w.show();
		return a.exec();
	}
	else return 0;

}
