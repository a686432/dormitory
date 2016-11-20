#ifndef LOGIN_H
#define LOGIN_H

#include <QDialog>
#include "ui_login.h"

namespace Ui {
	class login;
}

class login : public QDialog
{
	Q_OBJECT

public:
	login(QDialog *parent = 0);
	~login();

private:
	Ui::login *ui;

protected:
	void changeEvent(QEvent *e);

private slots:
	void on_pushButton_2_clicked();
	void on_pushButton_clicked();
};

};

#endif // LOGIN_H
