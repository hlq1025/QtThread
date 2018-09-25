#include "QtThread.h"
#include <QtWidgets/QApplication>
#include<qdebug.h>
#include<qtimer.h>
#include<Worker.h>
/*int main(int argc, char *argv[])
{
	QApplication a(argc, argv);
	QtThread w;
	w.show();
	return a.exec();
}*/
int main(int argc, char *argv[])
{
	QApplication a(argc, argv);
	qDebug() << "From main thread: " << QThread::currentThreadId();
	QtThread w;
	w.show();
	QThread t;
	QTimer timer;
	Worker worker;

	QObject::connect(&timer, SIGNAL(timeout()), &worker, SLOT(onTimeout()));
	timer.start(100000);

	worker.moveToThread(&t);

	t.start();

	return a.exec();
}