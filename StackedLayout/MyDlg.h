#include <QDialog>
#include <QPushButton>
#include <QStackedLayout>
#include <QVBoxLayout>
#include <QHBoxLayout>
#include <QDebug>

#include "HBoxDlg.h"
#include "VBoxDlg.h"
#include "GridDlg.h"

class MyDlg : public QDialog {
Q_OBJECT
private:
	QStackedLayout *pStackedLayout;
	
	QVBoxLayout *pMainLayout;

	QHBoxLayout *pNavigationLayout;
	
	HBoxDlg *pHBoxDlg;
	VBoxDlg *pVBoxDlg;
	GridDlg *pGridDlg;

	QPushButton *pPrevButton, *pNextButton;

public:
	MyDlg();
private slots:
	void onPrevButtonClicked();
	void onNextButtonClicked();	
};
