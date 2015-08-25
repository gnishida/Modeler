#include "MainWindow.h"

MainWindow::MainWindow(QWidget *parent, Qt::WFlags flags) : QMainWindow(parent, flags) {
	ui.setupUi(this);

	glWidget3D = new GLWidget3D();
	this->setCentralWidget(glWidget3D);
}

MainWindow::~MainWindow()
{

}
