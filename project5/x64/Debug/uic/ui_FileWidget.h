/********************************************************************************
** Form generated from reading UI file 'FileWidget.ui'
**
** Created by: Qt User Interface Compiler version 5.9.5
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_FILEWIDGET_H
#define UI_FILEWIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_FileWidgetClass
{
public:
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QWidget *centralWidget;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *FileWidgetClass)
    {
        if (FileWidgetClass->objectName().isEmpty())
            FileWidgetClass->setObjectName(QStringLiteral("FileWidgetClass"));
        FileWidgetClass->resize(600, 400);
        menuBar = new QMenuBar(FileWidgetClass);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        FileWidgetClass->setMenuBar(menuBar);
        mainToolBar = new QToolBar(FileWidgetClass);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        FileWidgetClass->addToolBar(mainToolBar);
        centralWidget = new QWidget(FileWidgetClass);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        FileWidgetClass->setCentralWidget(centralWidget);
        statusBar = new QStatusBar(FileWidgetClass);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        FileWidgetClass->setStatusBar(statusBar);

        retranslateUi(FileWidgetClass);

        QMetaObject::connectSlotsByName(FileWidgetClass);
    } // setupUi

    void retranslateUi(QMainWindow *FileWidgetClass)
    {
        FileWidgetClass->setWindowTitle(QApplication::translate("FileWidgetClass", "FileWidget", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class FileWidgetClass: public Ui_FileWidgetClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FILEWIDGET_H
