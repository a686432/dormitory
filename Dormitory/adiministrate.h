#ifndef ADIMINISTRATE_H
#define ADIMINISTRATE_H

#include <QWidget>
#include "ui_adiministrate.h"

class adiministrate : public QWidget
{
	Q_OBJECT

public:
	adiministrate(QWidget *parent = 0);
	~adiministrate();

private:
	Ui::adiministrate ui;
private slots:
    void slot1();
};

#endif // ADIMINISTRATE_H
