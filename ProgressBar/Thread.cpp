#include "Thread.h"

void Thread::run() {

	for (int count=0; count<100; ++count) {
		emit updateProgress ( count );
		sleep(1);
	}
}


