#include <QDialog>
#include <QPushButton>
#include <QStackedLayout>

class MyDlg : public QDialog {
private:
	QStackedLayout *pLayout;
public:
	MyDlg();
};
