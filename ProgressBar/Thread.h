#include <QThread>

class Thread : public QThread {
Q_OBJECT
public:
	void run();
signals:
	void updateProgress( int );
};
