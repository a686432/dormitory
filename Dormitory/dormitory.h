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

private:
	Ui::DormitoryClass ui;
};

#endif // DORMITORY_H
