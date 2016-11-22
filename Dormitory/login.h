#ifndef LOGIN_H
#define LOGIN_H

#include <QDialog>
#include "ui_login.h"


namespace Ui {
	class Login;
}

class Login : public QDialog
{
	Q_OBJECT

public:
	Login(QDialog *parent = 0);
	~Login();
	static QString  admin;
private:
	Ui::Login ui;

protected:
	void changeEvent(QEvent *e);

private slots:
	void on_ok_clicked();
	void on_cancel_clicked();
};



#endif // LOGIN_H
