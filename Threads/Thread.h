#include <QThread>
#include <QDebug>
#include <QString>

class Thread : public QThread {
private:
	QString name;
public:
	Thread( QString );
	void run();
};
