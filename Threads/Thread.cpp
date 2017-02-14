#include "Thread.h"

Thread::Thread( QString name ) {
	this->name = name;
}

void Thread::run() {

	for (int count=0; count<5; ++count) {
		qDebug() << "Message from " << name << " => " << count << endl;
		sleep(count);
	}
}


