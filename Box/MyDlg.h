#include <QDialog>
#include <QPushButton>
#include <QBoxLayout>

#include "MyHBoxLayout.h"

class MyDlg : public QDialog {
private:
	QPushButton *pBttn1, *pBttn2, *pBttn3;
	QBoxLayout *pLayout;
public:
	MyDlg();
};
