#pragma once

#include <QtWidgets/QMainWindow>
#include "ui_QtThread.h"

class QtThread : public QMainWindow
{
	Q_OBJECT

public:
	QtThread(QWidget *parent = Q_NULLPTR);

private:
	Ui::QtThreadClass ui;
};
