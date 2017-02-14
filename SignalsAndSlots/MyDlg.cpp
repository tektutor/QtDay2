#include "MyDlg.h"

MyDlg::MyDlg() {
	pButton = new QPushButton("Click");

	pLayout = new QHBoxLayout;	

	pLayout->addWidget ( pButton );

	setLayout ( pLayout );

	connect (
		pButton,
		SIGNAL ( clicked() ),
		this,
		SLOT ( onClicked() )
	);
}

void MyDlg::onClicked() {
	qDebug() << "Button clicked" << endl;
}
