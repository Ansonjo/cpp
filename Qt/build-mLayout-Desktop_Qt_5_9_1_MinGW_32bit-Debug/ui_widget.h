/********************************************************************************
** Form generated from reading UI file 'widget.ui'
**
** Created by: Qt User Interface Compiler version 5.9.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WIDGET_H
#define UI_WIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Widget
{
public:
    QVBoxLayout *verticalLayout_2;
    QVBoxLayout *verticalLayout;
    QLabel *label;
    QHBoxLayout *horizontalLayout_2;
    QLabel *cmdLabel;
    QLineEdit *cmdLineEdit;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer;
    QPushButton *submitButton;
    QPushButton *cancelButton;
    QPushButton *browseButton;

    void setupUi(QWidget *Widget)
    {
        if (Widget->objectName().isEmpty())
            Widget->setObjectName(QStringLiteral("Widget"));
        Widget->resize(294, 122);
        verticalLayout_2 = new QVBoxLayout(Widget);
        verticalLayout_2->setSpacing(6);
        verticalLayout_2->setContentsMargins(11, 11, 11, 11);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setSpacing(6);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        label = new QLabel(Widget);
        label->setObjectName(QStringLiteral("label"));
        QFont font;
        font.setFamily(QString::fromUtf8("\346\226\271\346\255\243\345\205\260\344\272\255\350\266\205\347\273\206\351\273\221\347\256\200\344\275\223"));
        label->setFont(font);
        label->setStyleSheet(QStringLiteral(""));

        verticalLayout->addWidget(label);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        cmdLabel = new QLabel(Widget);
        cmdLabel->setObjectName(QStringLiteral("cmdLabel"));

        horizontalLayout_2->addWidget(cmdLabel);

        cmdLineEdit = new QLineEdit(Widget);
        cmdLineEdit->setObjectName(QStringLiteral("cmdLineEdit"));

        horizontalLayout_2->addWidget(cmdLineEdit);


        verticalLayout->addLayout(horizontalLayout_2);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        submitButton = new QPushButton(Widget);
        submitButton->setObjectName(QStringLiteral("submitButton"));
        submitButton->setEnabled(true);
        submitButton->setMaximumSize(QSize(16777169, 16777215));

        horizontalLayout->addWidget(submitButton);

        cancelButton = new QPushButton(Widget);
        cancelButton->setObjectName(QStringLiteral("cancelButton"));

        horizontalLayout->addWidget(cancelButton);

        browseButton = new QPushButton(Widget);
        browseButton->setObjectName(QStringLiteral("browseButton"));

        horizontalLayout->addWidget(browseButton);


        verticalLayout->addLayout(horizontalLayout);


        verticalLayout_2->addLayout(verticalLayout);


        retranslateUi(Widget);

        QMetaObject::connectSlotsByName(Widget);
    } // setupUi

    void retranslateUi(QWidget *Widget)
    {
        Widget->setWindowTitle(QApplication::translate("Widget", "\350\277\220\350\241\214", Q_NULLPTR));
        label->setText(QApplication::translate("Widget", "<html><head/><body><p><span style=\" font-size:10pt; font-weight:600; font-style:italic; color:#aa557f;\">\350\257\267\345\234\250\344\270\213\351\235\242\347\232\204\345\221\275\344\273\244\350\241\214\344\270\255\350\276\223\345\205\245\345\221\275\344\273\244</span></p></body></html>", Q_NULLPTR));
        cmdLabel->setText(QApplication::translate("Widget", "\346\211\223\345\274\200:", Q_NULLPTR));
        submitButton->setText(QApplication::translate("Widget", "\347\241\256\345\256\232", Q_NULLPTR));
        cancelButton->setText(QApplication::translate("Widget", "\345\217\226\346\266\210", Q_NULLPTR));
        browseButton->setText(QApplication::translate("Widget", "\346\265\217\350\247\210", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class Widget: public Ui_Widget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WIDGET_H
