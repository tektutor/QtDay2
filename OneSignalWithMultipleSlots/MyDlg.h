#include <QDialog>
#include <QProgressBar>
#include <QSlider>
#include <QSpinBox>
#include <QVBoxLayout>
#include <QFont>

class MyDlg : public QDialog {
Q_OBJECT
private:
	QSpinBox *pSpinBox;
	QSlider *pSlider;
	QProgressBar *pProgressBar;
	QVBoxLayout *pLayout;
public:
	MyDlg();
};
