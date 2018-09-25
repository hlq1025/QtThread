/********************************************************************************
** Form generated from reading UI file 'QtThread.ui'
**
** Created by: Qt User Interface Compiler version 5.6.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QTTHREAD_H
#define UI_QTTHREAD_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_QtThreadClass
{
public:
    QWidget *centralWidget;
    QPushButton *pushButton;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *QtThreadClass)
    {
        if (QtThreadClass->objectName().isEmpty())
            QtThreadClass->setObjectName(QStringLiteral("QtThreadClass"));
        QtThreadClass->resize(600, 400);
        centralWidget = new QWidget(QtThreadClass);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        pushButton = new QPushButton(centralWidget);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(240, 50, 93, 28));
        QtThreadClass->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(QtThreadClass);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 600, 26));
        QtThreadClass->setMenuBar(menuBar);
        mainToolBar = new QToolBar(QtThreadClass);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        QtThreadClass->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(QtThreadClass);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        QtThreadClass->setStatusBar(statusBar);

        retranslateUi(QtThreadClass);

        QMetaObject::connectSlotsByName(QtThreadClass);
    } // setupUi

    void retranslateUi(QMainWindow *QtThreadClass)
    {
        QtThreadClass->setWindowTitle(QApplication::translate("QtThreadClass", "QtThread", 0));
        pushButton->setText(QApplication::translate("QtThreadClass", "PushButton", 0));
    } // retranslateUi

};

namespace Ui {
    class QtThreadClass: public Ui_QtThreadClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QTTHREAD_H
