// Worker ¿‡∂®“Â cpp
#include <QtCore>  
class Worker : public QObject
{
	Q_OBJECT
	private slots:
	void onTimeout()
	{
		qDebug() << "Worker::onTimeout get called from?: " << QThread::currentThreadId();
	}
};