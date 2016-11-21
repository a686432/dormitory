#ifndef DORMITORY_H
#define DORMITORY_H

#include <QtWidgets/QMainWindow>
#include "ui_dormitory.h"


class Dormitory : public QMainWindow
{
	Q_OBJECT

public:
	Dormitory(QWidget *parent = 0);
	~Dormitory();
	static QString  admin;

private:
	Ui::DormitoryClass ui;



private slots:
       void on_search_clicked();


};

#endif // DORMITORY_H
