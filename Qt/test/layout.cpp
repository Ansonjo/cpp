#include <QApplication>
#include <QLabel>
#include <QPushButton>
#include <QLineEdit>
#include <QHBoxLayout>
#include <QVBoxLayout>
#include <QWidget>
#include <iostream>
using namespace std;
int main(int argc,char ** argv)
{
	cout << "argc = " << argc <<"; argv = " << argv <<endl;
	QApplication app (argc,argv);
	QLabel *infoLabel = new QLabel("Please input   appName in lineEdit1");
	
	QLabel *cmdLabel = new QLabel("openL:  ");
	QLineEdit *cmdLineBox = new QLineEdit;
	
	QPushButton *okBtn = new QPushButton("ok");
	QPushButton *cancelBtn = new QPushButton("cancel");
	QPushButton *browseBtn = new QPushButton("browse");
	QHBoxLayout *cmdLayout = new QHBoxLayout;
	QHBoxLayout *btnLayout = new QHBoxLayout;
	QVBoxLayout *mainLayout = new QVBoxLayout;
	//水平布局
	cmdLineBox -> clear();
	cmdLayout -> addWidget(cmdLabel);
	cmdLayout -> addWidget(cmdLineBox);
	btnLayout -> addWidget(okBtn);
	btnLayout -> addWidget(cancelBtn);
	btnLayout -> addWidget(browseBtn);
	//垂直布局
	mainLayout -> addWidget(infoLabel);
	mainLayout -> addLayout(cmdLayout);
	mainLayout -> addLayout(btnLayout);
	
	QWidget *window = new  QWidget;
	window  -> setLayout(mainLayout);
	window -> setWindowTitle("running");
	window -> show();
	
	return app.exec();
}