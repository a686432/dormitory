#include "dormitory.h"
#include "login.h"
#include <QtWidgets/QApplication>

int main(int argc, char *argv[])
{
	QApplication a(argc, argv);
	
	Login login; //��½����
	if (login.exec() == QDialog::Accepted)
	{
		Dormitory w; //������
		w.show();
		return a.exec();
	}
	else return 0;

}
