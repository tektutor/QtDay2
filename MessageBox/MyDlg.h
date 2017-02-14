#include <QDialog>
#include <QPushButton>
#include <QMessageBox>
#include <QHBoxLayout>

class MyDlg : public QDialog {
Q_OBJECT
private:
	QPushButton *pWarningButton, *pInfoButton, *pQuestionButton;
	QHBoxLayout *pLayout;
public:
	MyDlg();
private slots:
	void onWarningButtonClicked();
	void onInfoButtonClicked();
	void onQuestionButtonClicked();
};
