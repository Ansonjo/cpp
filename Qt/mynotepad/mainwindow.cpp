#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    //QObject::connect()
    this->setWindowTitle(("Untitled ----notepad"));
    QObject::connect(ui->newAction,SIGNAL(triggered()),this,SLOT(newFileSlot()));
    QObject::connect(ui->openAction,SIGNAL(triggered()),this,SLOT(openFileSlot()));
    QObject::connect(ui->saveAction,SIGNAL(triggered()),this,SLOT(saveFileSlot()));
    QObject::connect(ui->saveAsAction,SIGNAL(triggered()),this,SLOT(saveAsFileSlot()));
    QObject::connect(ui->printAction,SIGNAL(triggered()),this,SLOT(printFileSlot()));
    QObject::connect(ui->exitAction,SIGNAL(triggered()),this,SLOT(close()));
    //editMenu
    QObject::connect(ui->undoAction,SIGNAL(triggered()),ui->textEdit,SLOT(undo()));
    QObject::connect(ui->redoAction,SIGNAL(triggered()),ui->textEdit,SLOT(redo()));
    QObject::connect(ui->copyAction,SIGNAL(triggered()),ui->textEdit,SLOT(copy()));
    QObject::connect(ui->pasteAction,SIGNAL(triggered()),ui->textEdit,SLOT(paste()));
    QObject::connect(ui->selectAllAction,SIGNAL(triggered()),ui->textEdit,SLOT(selectAll()));
    QObject::connect(ui->cutAction,SIGNAL(triggered()),ui->textEdit,SLOT(cut()));

    QObject::connect(ui->colorAction,SIGNAL(triggered()),this,SLOT(setColorSlot()));
    QObject::connect(ui->fontAction,SIGNAL(triggered()),this,SLOT(setFontSlot()));
    QObject::connect(ui->datetimeAction,SIGNAL(triggered()),this,SLOT(currentDateTimeSlot()));
}

MainWindow::~MainWindow()
{
    delete ui;
}
void MainWindow::printFileSlot(){
    //QPrintDialog

}
void MainWindow::setFontSlot(){
    bool ok;
    QFont font = QFontDialog::getFont(&ok, this);
    if (ok) {
      // font is set to the font the user selected
        ui->textEdit->setFont(font);
    } else {
      // the user canceled the dialog; font is set to the default
      // application font, QApplication::font()
        QMessageBox::information(this,"Error Message","Error Set Font!!");
        return;
    }
}
void MainWindow::setColorSlot(){
    const QColor color = QColorDialog::getColor(Qt::red, this);
    if (color.isValid()) {
        ui->textEdit->setTextColor(color);
    }
    else
    {
        QMessageBox::information(this,"Error Message","Color is unvalid");
        return;
    }
}

void MainWindow::currentDateTimeSlot()
{
    QDateTime current = QDateTime::currentDateTime();
    QString time = current.toString("dd/M/yyyy hh:mm:ss");
    qDebug()<<time;
    ui->textEdit->append(time);

}

void MainWindow::saveFileSlot(){
    qDebug()<<"saveFileName" << saveFileName;
    if(saveFileName.isEmpty()){
       this->saveAsFileSlot();
    }
    else
    {
        QFile *file = new QFile;
        file->setFileName(saveFileName);
        bool ok = file->open(QIODevice::WriteOnly);
        if(ok)
        {
          QTextStream out(file);//关联
          //cout<<
          out << ui->textEdit->toPlainText();//这里是去除textEdit当中的纯文本,重定向到磁盘当中
          file->close();
          this->setWindowTitle("saveFile-------notepad");
          delete file;
        }
        else
        {
           QMessageBox::information(this,"Error Message","Save File Error");
           return;
        }
    }
}

void MainWindow::saveAsFileSlot(){
    saveFileName = QFileDialog::getSaveFileName(this,"Save File",QDir::currentPath());
    if(saveFileName.isEmpty()){
       QMessageBox::information(this,"Error Message","Please Select A File");
       return;
    }
    QFile *file = new QFile;
    file->setFileName(saveFileName);
    bool ok = file->open(QIODevice::WriteOnly);
    if(ok)
    {
      QTextStream out(file);//关联
      //cout<<
      out << ui->textEdit->toPlainText();//这里是去除textEdit当中的纯文本,重定向到磁盘当中
      file->close();
      this->setWindowTitle("saveAsFile-------notepad");
      delete file;
    }
    else
    {
       QMessageBox::information(this,"Error Message","Save File Error");
       return;
    }
}
void MainWindow::openFileSlot(){
    QString fileName = QFileDialog::getOpenFileName(this,"Open File",QDir::currentPath());
    qDebug()<<"fileName is"<<fileName;
    if(fileName.isEmpty()){ //isNull
       QMessageBox::information(NULL,"Error Message","Please Select A File");
       return;
    }
    QFile *file = new QFile;
    file->setFileName(fileName);
    bool ok = file->open(QIODevice::ReadOnly);
    if(ok)
    {
      //文件文本流相关联,在内存中操作,流都在内存当中
      QTextStream in(file);//关联
      //cout<<
      ui->textEdit->setText(in.readAll()/*Read all content from file*/);//这里是去除textEdit当中的纯文本,重定向到磁盘当中
      file->close();
      delete file;
    }
    else
    {
       QMessageBox::information(this,"Error Message","open File Error");
       return;
    }
}
void MainWindow::newFileSlot(){
    if(ui->textEdit->document()->isModified()){ //当前文件的内容已经改变
        qDebug()<<"current file modified";
    }
    else
    {
//        qDebug()<<"not modified";
        ui->textEdit->clear();
        this->setWindowTitle("Unitled.txt  -------huiwensiban");
    }
}
