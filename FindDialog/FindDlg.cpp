#include "FindDlg.h"

FindDlg::FindDlg() {
	pLineEdit = new QLineEdit;
	pLabel = new QLabel("Find");

	pFirstRowLayout = new QHBoxLayout;
	pSecondRowLayout = new QHBoxLayout;

	pFirstRowLayout->addWidget ( pLabel );
	pFirstRowLayout->addWidget ( pLineEdit );

	pFindBttn = new QPushButton("Find");
	pCloseBttn = new QPushButton("Close");

	pSecondRowLayout->addStretch();
	pSecondRowLayout->addWidget(pFindBttn); 
	pSecondRowLayout->addWidget(pCloseBttn); 

	pMainLayout = new QVBoxLayout;

	pMainLayout->addLayout ( pFirstRowLayout );
	pMainLayout->addLayout ( pSecondRowLayout );

	setLayout ( pMainLayout );

}
