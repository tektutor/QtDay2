#include <QBoxLayout>

class MyHBoxLayout : public QBoxLayout { 
public:
	MyHBoxLayout() : QBoxLayout( QBoxLayout::LeftToRight ) { }
};
