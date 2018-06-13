#include "window.h"
#include "ui_window.h"

window::~window()
{
	delete ui;
}

window::window(QWidget *parent)
	: QMainWindow(parent)
	, ui(new Ui::window)
{
	ui->setupUi(this);
}