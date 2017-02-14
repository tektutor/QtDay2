#include "MyDlg.h"

MyDlg::MyDlg() {
	pWarningButton = new QPushButton("Warning");
	pInfoButton = new QPushButton("Infor");
	pQuestionButton = new QPushButton("Question");

	pLayout = new QHBoxLayout;

	pLayout->addWidget ( pWarningButton );
	pLayout->addWidget ( pInfoButton );
	pLayout->addWidget ( pQuestionButton );

	setLayout ( pLayout );

	connect (
		pWarningButton,
		SIGNAL ( clicked() ),
		this,
		SLOT ( onWarningButtonClicked() )
	);
	
	connect (
		pInfoButton,
		SIGNAL ( clicked() ),
		this,
		SLOT ( onInfoButtonClicked() )
	);

	connect (
		pQuestionButton,
		SIGNAL ( clicked() ),
		this,
		SLOT ( onQuestionButtonClicked() )
	);
}

void MyDlg::onWarningButtonClicked() {
	QMessageBox::warning ( this, "Title", "Warning message" );
}

void MyDlg::onInfoButtonClicked() {
	QMessageBox::information( this, "Title", "Warning message" );
}

void MyDlg::onQuestionButtonClicked() {
	QMessageBox::question( this, "Title", "Do you like Sasikala ?" );
}
