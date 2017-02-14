#include "MyDlg.h"

MyDlg::MyDlg() {

	pHBoxDlg = new HBoxDlg;
	pVBoxDlg = new VBoxDlg;
	pGridDlg = new GridDlg;

	pStackedLayout = new QStackedLayout;

	pStackedLayout->addWidget ( pHBoxDlg );
	pStackedLayout->addWidget ( pVBoxDlg );
	pStackedLayout->addWidget ( pGridDlg );

	pNavigationLayout = new QHBoxLayout;

	pPrevButton = new QPushButton ( "Previous Window");
	pNextButton = new QPushButton ( "Next Window");

	pNavigationLayout->addWidget ( pPrevButton );
	pNavigationLayout->addWidget ( pNextButton );

	pMainLayout = new QVBoxLayout;

	pMainLayout->addLayout ( pStackedLayout );
	pMainLayout->addLayout ( pNavigationLayout );

	setLayout ( pMainLayout );

	connect (
		pPrevButton,
		SIGNAL ( clicked() ),
		this,
		SLOT ( onPrevButtonClicked() )
	);

	connect (
		pNextButton,
		SIGNAL ( clicked() ),
		this,
		SLOT ( onNextButtonClicked() )
	);

}

void MyDlg::onPrevButtonClicked() {
	qDebug() << "Prev Button clicked." << endl;
	int currentWindowIndex = pStackedLayout->currentIndex();
	
	if ( currentWindowIndex > 0 )
		pStackedLayout->setCurrentIndex( --currentWindowIndex );
}

void MyDlg::onNextButtonClicked() {
	qDebug() << "Next Button clicked." << endl;
	int currentWindowIndex = pStackedLayout->currentIndex();
	
	if ( currentWindowIndex < 2 )
		pStackedLayout->setCurrentIndex( ++currentWindowIndex );
}
