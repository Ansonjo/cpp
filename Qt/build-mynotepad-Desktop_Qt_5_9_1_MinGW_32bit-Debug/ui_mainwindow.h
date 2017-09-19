/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.9.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *newAction;
    QAction *openAction;
    QAction *saveAction;
    QAction *saveAsAction;
    QAction *printAction;
    QAction *exitAction;
    QAction *undoAction;
    QAction *redoAction;
    QAction *copyAction;
    QAction *cutAction;
    QAction *pasteAction;
    QAction *selectAllAction;
    QAction *datetimeAction;
    QAction *fontAction;
    QAction *colorAction;
    QWidget *centralWidget;
    QHBoxLayout *horizontalLayout;
    QTextEdit *textEdit;
    QMenuBar *menuBar;
    QMenu *menu_F;
    QMenu *menu_E;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(400, 300);
        newAction = new QAction(MainWindow);
        newAction->setObjectName(QStringLiteral("newAction"));
        QIcon icon;
        icon.addFile(QStringLiteral(":/new/icon/image/new.png"), QSize(), QIcon::Normal, QIcon::Off);
        newAction->setIcon(icon);
        openAction = new QAction(MainWindow);
        openAction->setObjectName(QStringLiteral("openAction"));
        QIcon icon1;
        icon1.addFile(QStringLiteral(":/new/icon/image/open.png"), QSize(), QIcon::Normal, QIcon::Off);
        openAction->setIcon(icon1);
        saveAction = new QAction(MainWindow);
        saveAction->setObjectName(QStringLiteral("saveAction"));
        QIcon icon2;
        icon2.addFile(QStringLiteral(":/new/icon/image/save.png"), QSize(), QIcon::Normal, QIcon::Off);
        saveAction->setIcon(icon2);
        saveAsAction = new QAction(MainWindow);
        saveAsAction->setObjectName(QStringLiteral("saveAsAction"));
        QIcon icon3;
        icon3.addFile(QStringLiteral(":/new/icon/image/saveAs.png"), QSize(), QIcon::Normal, QIcon::Off);
        saveAsAction->setIcon(icon3);
        printAction = new QAction(MainWindow);
        printAction->setObjectName(QStringLiteral("printAction"));
        QIcon icon4;
        icon4.addFile(QStringLiteral(":/new/icon/image/print.png"), QSize(), QIcon::Normal, QIcon::Off);
        printAction->setIcon(icon4);
        exitAction = new QAction(MainWindow);
        exitAction->setObjectName(QStringLiteral("exitAction"));
        QIcon icon5;
        icon5.addFile(QStringLiteral(":/new/icon/image/exit.png"), QSize(), QIcon::Normal, QIcon::Off);
        exitAction->setIcon(icon5);
        undoAction = new QAction(MainWindow);
        undoAction->setObjectName(QStringLiteral("undoAction"));
        QIcon icon6;
        icon6.addFile(QStringLiteral(":/new/icon/image/undo.png"), QSize(), QIcon::Normal, QIcon::Off);
        undoAction->setIcon(icon6);
        redoAction = new QAction(MainWindow);
        redoAction->setObjectName(QStringLiteral("redoAction"));
        QIcon icon7;
        icon7.addFile(QStringLiteral(":/new/icon/image/redo.png"), QSize(), QIcon::Normal, QIcon::Off);
        redoAction->setIcon(icon7);
        copyAction = new QAction(MainWindow);
        copyAction->setObjectName(QStringLiteral("copyAction"));
        QIcon icon8;
        icon8.addFile(QStringLiteral(":/new/icon/image/copy.png"), QSize(), QIcon::Normal, QIcon::Off);
        copyAction->setIcon(icon8);
        cutAction = new QAction(MainWindow);
        cutAction->setObjectName(QStringLiteral("cutAction"));
        QIcon icon9;
        icon9.addFile(QStringLiteral(":/new/icon/image/cut.png"), QSize(), QIcon::Normal, QIcon::Off);
        cutAction->setIcon(icon9);
        pasteAction = new QAction(MainWindow);
        pasteAction->setObjectName(QStringLiteral("pasteAction"));
        QIcon icon10;
        icon10.addFile(QStringLiteral(":/new/icon/image/paste.png"), QSize(), QIcon::Normal, QIcon::Off);
        pasteAction->setIcon(icon10);
        selectAllAction = new QAction(MainWindow);
        selectAllAction->setObjectName(QStringLiteral("selectAllAction"));
        QIcon icon11;
        icon11.addFile(QStringLiteral(":/new/icon/image/selectAll.png"), QSize(), QIcon::Normal, QIcon::Off);
        selectAllAction->setIcon(icon11);
        datetimeAction = new QAction(MainWindow);
        datetimeAction->setObjectName(QStringLiteral("datetimeAction"));
        QIcon icon12;
        icon12.addFile(QStringLiteral(":/new/icon/image/dateTime.png"), QSize(), QIcon::Normal, QIcon::Off);
        datetimeAction->setIcon(icon12);
        fontAction = new QAction(MainWindow);
        fontAction->setObjectName(QStringLiteral("fontAction"));
        QIcon icon13;
        icon13.addFile(QStringLiteral(":/new/icon/image/font.png"), QSize(), QIcon::Normal, QIcon::Off);
        fontAction->setIcon(icon13);
        colorAction = new QAction(MainWindow);
        colorAction->setObjectName(QStringLiteral("colorAction"));
        QIcon icon14;
        icon14.addFile(QStringLiteral(":/new/icon/image/color.png"), QSize(), QIcon::Normal, QIcon::Off);
        colorAction->setIcon(icon14);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        horizontalLayout = new QHBoxLayout(centralWidget);
        horizontalLayout->setSpacing(6);
        horizontalLayout->setContentsMargins(11, 11, 11, 11);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        textEdit = new QTextEdit(centralWidget);
        textEdit->setObjectName(QStringLiteral("textEdit"));
        textEdit->setStyleSheet(QStringLiteral("border-image: url(:/new/icon/image/timg.jpg);"));

        horizontalLayout->addWidget(textEdit);

        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 400, 23));
        menu_F = new QMenu(menuBar);
        menu_F->setObjectName(QStringLiteral("menu_F"));
        menu_E = new QMenu(menuBar);
        menu_E->setObjectName(QStringLiteral("menu_E"));
        MainWindow->setMenuBar(menuBar);
        mainToolBar = new QToolBar(MainWindow);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        MainWindow->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        MainWindow->setStatusBar(statusBar);

        menuBar->addAction(menu_F->menuAction());
        menuBar->addAction(menu_E->menuAction());
        menu_F->addAction(newAction);
        menu_F->addAction(openAction);
        menu_F->addAction(saveAction);
        menu_F->addAction(saveAsAction);
        menu_F->addSeparator();
        menu_F->addAction(printAction);
        menu_F->addSeparator();
        menu_F->addAction(exitAction);
        menu_E->addAction(undoAction);
        menu_E->addAction(redoAction);
        menu_E->addSeparator();
        menu_E->addAction(copyAction);
        menu_E->addAction(cutAction);
        menu_E->addAction(pasteAction);
        menu_E->addAction(selectAllAction);
        menu_E->addSeparator();
        menu_E->addAction(datetimeAction);
        menu_E->addAction(fontAction);
        menu_E->addAction(colorAction);
        mainToolBar->addAction(newAction);
        mainToolBar->addAction(openAction);
        mainToolBar->addAction(saveAction);
        mainToolBar->addAction(saveAsAction);
        mainToolBar->addAction(printAction);
        mainToolBar->addSeparator();
        mainToolBar->addAction(undoAction);
        mainToolBar->addAction(redoAction);
        mainToolBar->addAction(copyAction);
        mainToolBar->addAction(pasteAction);
        mainToolBar->addAction(cutAction);
        mainToolBar->addSeparator();
        mainToolBar->addAction(fontAction);
        mainToolBar->addAction(colorAction);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", Q_NULLPTR));
        newAction->setText(QApplication::translate("MainWindow", "\346\226\260\345\273\272(&N)", Q_NULLPTR));
        openAction->setText(QApplication::translate("MainWindow", "\346\211\223\345\274\200(&O)", Q_NULLPTR));
        saveAction->setText(QApplication::translate("MainWindow", "\344\277\235\345\255\230(&S)", Q_NULLPTR));
        saveAsAction->setText(QApplication::translate("MainWindow", "\345\217\246\345\255\230\344\270\272(&A)", Q_NULLPTR));
        printAction->setText(QApplication::translate("MainWindow", "\346\211\223\345\215\260(&P)", Q_NULLPTR));
        exitAction->setText(QApplication::translate("MainWindow", "\351\200\200\345\207\272(&E)", Q_NULLPTR));
        undoAction->setText(QApplication::translate("MainWindow", "\346\222\244\351\224\200(&U)", Q_NULLPTR));
        redoAction->setText(QApplication::translate("MainWindow", "\351\207\215\345\201\232(&R)", Q_NULLPTR));
        copyAction->setText(QApplication::translate("MainWindow", "\345\244\215\345\210\266(&C)", Q_NULLPTR));
        cutAction->setText(QApplication::translate("MainWindow", "\345\211\252\345\210\207(&X)", Q_NULLPTR));
        pasteAction->setText(QApplication::translate("MainWindow", "\347\262\230\350\264\264(&P)", Q_NULLPTR));
        selectAllAction->setText(QApplication::translate("MainWindow", "\345\205\250\351\200\211(&A)", Q_NULLPTR));
        datetimeAction->setText(QApplication::translate("MainWindow", "\346\227\245\346\234\237(&D)", Q_NULLPTR));
        fontAction->setText(QApplication::translate("MainWindow", "\345\255\227\344\275\223(&F)", Q_NULLPTR));
        colorAction->setText(QApplication::translate("MainWindow", "\351\242\234\350\211\262(&L)", Q_NULLPTR));
        menu_F->setTitle(QApplication::translate("MainWindow", "\346\226\207\344\273\266(&F)", Q_NULLPTR));
        menu_E->setTitle(QApplication::translate("MainWindow", "\347\274\226\350\276\221(&E)", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
