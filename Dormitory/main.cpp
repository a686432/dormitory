#include "dormitory.h"
#include "login.h"
#include <QtWidgets/QApplication>

int main(int argc, char *argv[])
{
	QApplication a(argc, argv);
	Dormitory w; //������

	login Login;//��½����
	if (Login.exec() == QDialog::Accepted)
	{
		w.show();
		return a.exec();
	}
	else return 0;
}
