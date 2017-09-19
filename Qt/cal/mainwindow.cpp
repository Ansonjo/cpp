#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    QObject::connect(ui->calButton,SIGNAL(clicked()),this,SLOT(calSlot()));
}

MainWindow::~MainWindow()
{
    delete ui;
}
void MainWindow::calSlot()
{
    int first = ui->firstLineEdit->text().toInt();
    int second = ui->secondLineEdit->text().toInt();
    int result;
    if(ui->resultLineEdit->text() != ""){
       ui->firstLineEdit->clear();
       ui->secondLineEdit->clear();
       ui->resultLineEdit->clear();
       QMessageBox::warning(this,"Error Message","Please input next number");
       return;
    }
    if(ui->firstLineEdit->text() == "" || ui->secondLineEdit->text() == ""){
        QMessageBox::warning(this,"Error Message","Please input number");
        return;
    }
    if(ui->comboBox->currentText() == "+")
    {
        result = first + second;
    }
    if(ui->comboBox->currentText() == "-")
    {
        result = first - second;
    }
    if(ui->comboBox->currentText() == "*")
    {
        result = first * second;
    }
    if(ui->comboBox->currentText() == "/")
    {
        if(!second)
        {
            QMessageBox::warning(this,"Error Message","Second can't be zero!!");
            ui->secondLineEdit->clear();
            return;
        }
        result = first / second;
    }
    //setText
    ui->resultLineEdit->setText(QString::number(result));
}
