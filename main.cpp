#include <QApplication>

#include "window.h"

int main(int argc, char *argv[])
{
	QApplication Application(argc, argv);
	window().show();

	return Application.exec();
}