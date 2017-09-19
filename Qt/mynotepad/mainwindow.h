#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <qmainwindow>
#include <QMessageBox>
#include <QDebug>//打印信息
#include <QFile>
#include <QFileDialog>
#include <QDir>
#include <QTextStream>
#include <QPrintDialog>
#include <QColor>
#include <QColorDialog>
#include <QFont>
#include <QFontDialog>
#include <QDateTime>

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

private:
    Ui::MainWindow *ui;
    QString saveFileName;
private slots:
    void newFileSlot();
    void openFileSlot();//打开一个已经存在的文本文件
    void saveFileSlot();//保存文件到磁盘
    void saveAsFileSlot();//保存文件到磁盘
    void printFileSlot();
    void setFontSlot();//设置字体的槽
    void setColorSlot();//设置字体的槽
    void currentDateTimeSlot();
};

#endif // MAINWINDOW_H
