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
#include <QtWidgets/QDateEdit>
#include <QtWidgets/QFrame>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_DormitoryClass
{
public:
    QWidget *centralWidget;
    QLabel *label;
    QPushButton *search;
    QLabel *label_2;
    QLabel *label_3;
    QLineEdit *lineEdit_2;
    QLineEdit *lineEdit_3;
    QFrame *line;
    QListWidget *listWidget;
    QLineEdit *lineEdit;
    QDateEdit *dateEdit;
    QDateEdit *dateEdit_2;
    QLabel *label_4;
    QLabel *label_5;
    QLineEdit *lineEdit_4;
    QFrame *line_2;
    QLabel *label_6;
    QLabel *label_7;
    QLineEdit *lineEdit_5;
    QLineEdit *lineEdit_6;
    QPushButton *pushButton;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *DormitoryClass)
    {
        if (DormitoryClass->objectName().isEmpty())
            DormitoryClass->setObjectName(QStringLiteral("DormitoryClass"));
        DormitoryClass->resize(644, 541);
        centralWidget = new QWidget(DormitoryClass);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        label = new QLabel(centralWidget);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(40, 150, 71, 21));
        search = new QPushButton(centralWidget);
        search->setObjectName(QStringLiteral("search"));
        search->setGeometry(QRect(450, 20, 75, 23));
        label_2 = new QLabel(centralWidget);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(40, 200, 54, 12));
        label_3 = new QLabel(centralWidget);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(40, 250, 54, 12));
        lineEdit_2 = new QLineEdit(centralWidget);
        lineEdit_2->setObjectName(QStringLiteral("lineEdit_2"));
        lineEdit_2->setGeometry(QRect(100, 200, 113, 20));
        lineEdit_2->setAutoFillBackground(false);
        lineEdit_2->setMaxLength(32767);
        lineEdit_2->setEchoMode(QLineEdit::Normal);
        lineEdit_2->setDragEnabled(false);
        lineEdit_3 = new QLineEdit(centralWidget);
        lineEdit_3->setObjectName(QStringLiteral("lineEdit_3"));
        lineEdit_3->setGeometry(QRect(100, 250, 113, 20));
        line = new QFrame(centralWidget);
        line->setObjectName(QStringLiteral("line"));
        line->setGeometry(QRect(0, 70, 601, 20));
        line->setFrameShape(QFrame::HLine);
        line->setFrameShadow(QFrame::Sunken);
        listWidget = new QListWidget(centralWidget);
        listWidget->setObjectName(QStringLiteral("listWidget"));
        listWidget->setGeometry(QRect(300, 130, 291, 221));
        lineEdit = new QLineEdit(centralWidget);
        lineEdit->setObjectName(QStringLiteral("lineEdit"));
        lineEdit->setGeometry(QRect(100, 150, 113, 20));
        dateEdit = new QDateEdit(centralWidget);
        dateEdit->setObjectName(QStringLiteral("dateEdit"));
        dateEdit->setGeometry(QRect(40, 20, 110, 22));
        dateEdit_2 = new QDateEdit(centralWidget);
        dateEdit_2->setObjectName(QStringLiteral("dateEdit_2"));
        dateEdit_2->setGeometry(QRect(290, 20, 110, 22));
        label_4 = new QLabel(centralWidget);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(210, 20, 54, 16));
        label_5 = new QLabel(centralWidget);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setGeometry(QRect(40, 300, 54, 12));
        lineEdit_4 = new QLineEdit(centralWidget);
        lineEdit_4->setObjectName(QStringLiteral("lineEdit_4"));
        lineEdit_4->setGeometry(QRect(100, 300, 113, 20));
        line_2 = new QFrame(centralWidget);
        line_2->setObjectName(QStringLiteral("line_2"));
        line_2->setGeometry(QRect(10, 380, 631, 16));
        line_2->setFrameShape(QFrame::HLine);
        line_2->setFrameShadow(QFrame::Sunken);
        label_6 = new QLabel(centralWidget);
        label_6->setObjectName(QStringLiteral("label_6"));
        label_6->setGeometry(QRect(40, 430, 54, 12));
        label_7 = new QLabel(centralWidget);
        label_7->setObjectName(QStringLiteral("label_7"));
        label_7->setGeometry(QRect(250, 430, 54, 12));
        lineEdit_5 = new QLineEdit(centralWidget);
        lineEdit_5->setObjectName(QStringLiteral("lineEdit_5"));
        lineEdit_5->setGeometry(QRect(110, 420, 113, 20));
        lineEdit_6 = new QLineEdit(centralWidget);
        lineEdit_6->setObjectName(QStringLiteral("lineEdit_6"));
        lineEdit_6->setGeometry(QRect(310, 420, 113, 20));
        pushButton = new QPushButton(centralWidget);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(510, 420, 75, 23));
        DormitoryClass->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(DormitoryClass);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 644, 23));
        DormitoryClass->setMenuBar(menuBar);
        mainToolBar = new QToolBar(DormitoryClass);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        DormitoryClass->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(DormitoryClass);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        DormitoryClass->setStatusBar(statusBar);

        retranslateUi(DormitoryClass);
        QObject::connect(search, SIGNAL(clicked()), DormitoryClass, SLOT(on_search_clicked()));

        QMetaObject::connectSlotsByName(DormitoryClass);
    } // setupUi

    void retranslateUi(QMainWindow *DormitoryClass)
    {
        DormitoryClass->setWindowTitle(QApplication::translate("DormitoryClass", "Dormitory", 0));
        label->setText(QApplication::translate("DormitoryClass", "\345\255\246\345\217\267", 0));
        search->setText(QApplication::translate("DormitoryClass", "\346\237\245\350\257\242", 0));
        label_2->setText(QApplication::translate("DormitoryClass", "\345\247\223\345\220\215", 0));
        label_3->setText(QApplication::translate("DormitoryClass", "\346\245\274\345\217\267", 0));
        label_4->setText(QApplication::translate("DormitoryClass", "\350\207\263", 0));
        label_5->setText(QApplication::translate("DormitoryClass", "\346\210\277\351\227\264\345\217\267", 0));
        label_6->setText(QApplication::translate("DormitoryClass", "\346\227\247\345\257\206\347\240\201", 0));
        label_7->setText(QApplication::translate("DormitoryClass", "\346\226\260\345\257\206\347\240\201", 0));
        pushButton->setText(QApplication::translate("DormitoryClass", "\344\277\256\346\224\271\345\257\206\347\240\201", 0));
    } // retranslateUi

};

namespace Ui {
    class DormitoryClass: public Ui_DormitoryClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DORMITORY_H
