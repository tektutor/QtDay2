#include <QDialog>
#include <QProgressBar>
#include <QVBoxLayout>

#include "Thread.h"

class MyDlg : public QDialog {
Q_OBJECT
private:
	QProgressBar *pProgressBar;
	QVBoxLayout *pLayout;
	Thread thread;
public:
	MyDlg();
private slots:
	void onUpdateProgress(int);
};
