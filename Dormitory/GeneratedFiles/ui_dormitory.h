/********************************************************************************
** Form generated from reading UI file 'dormitory.ui'
**
** Created by: Qt User Interface Compiler version 5.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DORMITORY_H
#define UI_DORMITORY_H

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

class Ui_DormitoryClass
{
public:
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QWidget *centralWidget;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *DormitoryClass)
    {
        if (DormitoryClass->objectName().isEmpty())
            DormitoryClass->setObjectName(QStringLiteral("DormitoryClass"));
        DormitoryClass->resize(600, 400);
        menuBar = new QMenuBar(DormitoryClass);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        DormitoryClass->setMenuBar(menuBar);
        mainToolBar = new QToolBar(DormitoryClass);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        DormitoryClass->addToolBar(mainToolBar);
        centralWidget = new QWidget(DormitoryClass);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        DormitoryClass->setCentralWidget(centralWidget);
        statusBar = new QStatusBar(DormitoryClass);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        DormitoryClass->setStatusBar(statusBar);

        retranslateUi(DormitoryClass);

        QMetaObject::connectSlotsByName(DormitoryClass);
    } // setupUi

    void retranslateUi(QMainWindow *DormitoryClass)
    {
        DormitoryClass->setWindowTitle(QApplication::translate("DormitoryClass", "Dormitory", 0));
    } // retranslateUi

};

namespace Ui {
    class DormitoryClass: public Ui_DormitoryClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DORMITORY_H
