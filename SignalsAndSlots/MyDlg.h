#include <QDialog>
#include <QPushButton>
#include <QHBoxLayout>
#include <QDebug>

class MyDlg : public QDialog {
Q_OBJECT
private:
	QHBoxLayout *pLayout;
	QPushButton *pButton;
public:
	MyDlg();
private slots:
	void onClicked();
};
