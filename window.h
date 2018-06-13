#ifndef WINDOW_H
#define WINDOW_H

#include <QMainWindow>

namespace Ui
{
	class window;
}

class window
	: public QMainWindow
{
	Q_OBJECT

public:
	~window();
	explicit window(QWidget *parent = 0);

private:
	Ui::window *ui;
};

#endif // WINDOW_H