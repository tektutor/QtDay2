#include "MyDlg.h"

MyDlg::MyDlg() {
	pProgressBar = new QProgressBar;
	pSpinBox = new QSpinBox;
	pSlider = new QSlider;

	pProgressBar->setFont ( QFont ("Arial", 30 ) );
	pSpinBox->setFont ( QFont ("Arial", 30 ) );

	pLayout = new QVBoxLayout;

	pLayout->addWidget ( pProgressBar );
	pLayout->addWidget ( pSlider );
	pLayout->addWidget ( pSpinBox );

	pSlider->setOrientation ( Qt::Horizontal );

	setLayout ( pLayout );

	connect (
		pSlider,
		SIGNAL ( valueChanged(int) ),		
		pProgressBar,
		SLOT ( setValue(int) )
	);

	connect (
		pSlider,
		SIGNAL ( valueChanged(int) ),		
		pSpinBox,
		SLOT ( setValue(int) )
	);

	connect (
		pSpinBox,
		SIGNAL ( valueChanged(int) ),		
		pSlider,
		SLOT ( setValue(int) )
	);
}
