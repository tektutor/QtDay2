#include "MyDlg.h"

MyDlg::MyDlg() {
	pProgressBar = new QProgressBar;

	pLayout = new QVBoxLayout;

	pLayout->addWidget ( pProgressBar );

	setLayout ( pLayout );

	connect (
		&thread,
		SIGNAL ( updateProgress(int) ),		
		this,
		SLOT ( onUpdateProgress(int) )
	);
	thread.start();
}

void MyDlg::onUpdateProgress( int progress ) {
	pProgressBar->setValue ( progress );	
}
