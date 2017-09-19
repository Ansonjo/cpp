#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    ui->passwordEdit->setEchoMode(QLineEdit::Password);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_loginButton_clicked()
{
    //user:dls  password: labixiaoxin
    if(ui->userEdit->text() == "dls" && ui->passwordEdit->text() == "labixiaoxin")
    {
        QMessageBox::information(this,"Congratulatulation","Login Success");
        //do something
    }
    else
    {
        QMessageBox::information(this,"Permission Deny!!","Check Your User Or Password");
        return;
    }
}
