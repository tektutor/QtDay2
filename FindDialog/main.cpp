#include <QApplication>
#include "FindDlg.h"

int main ( int argc, char **argv ) {
	QApplication theApp (argc, argv );

	FindDlg dlg;
	dlg.show();
	
	return theApp.exec();
}
