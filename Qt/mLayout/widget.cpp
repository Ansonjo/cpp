#include "widget.h"
#include "ui_widget.h"

Widget::Widget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Widget)
{
    ui->setupUi(this);
    this->setMaximumSize(393,120);
    this->setMinimumSize(393,120);
    QObject::connect(ui->cmdLineEdit,SIGNAL(returnPressed()),this,SLOT(on_submitButton_clicked()));
}

Widget::~Widget()
{
    delete ui;
}

void Widget::on_submitButton_clicked()//通过ui设计自动添加的
{
//    QProcess *myProcess = new QProcess(parent);
//          myProcess->start(program, arguments);
    QString startProgram = ui -> cmdLineEdit -> text();//取出用户输入的文本
    QProcess *myProcess = new QProcess;
    myProcess->start(startProgram.trimmed());//清楚空格
    ui->cmdLineEdit->clear();
    this->close();
}
