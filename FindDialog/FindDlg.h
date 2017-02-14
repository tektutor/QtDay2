#include <QDialog>
#include <QHBoxLayout>
#include <QVBoxLayout>
#include <QLineEdit>
#include <QLabel>
#include <QPushButton>

class FindDlg : public QDialog {
private:
	QLineEdit *pLineEdit;
	QLabel *pLabel;
	QHBoxLayout *pFirstRowLayout;
	QHBoxLayout *pSecondRowLayout;
	QVBoxLayout *pMainLayout;

	QPushButton *pFindBttn, *pCloseBttn;
public:
	FindDlg();

};
