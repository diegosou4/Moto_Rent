/********************************************************************************
** Form generated from reading UI file 'teste.ui'
**
** Created by: Qt User Interface Compiler version 5.15.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TESTE_H
#define UI_TESTE_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_teste
{
public:
    QAction *actionTestando;
    QWidget *centralwidget;
    QLabel *label;
    QMenuBar *menubar;
    QMenu *menuTeste;
    QStatusBar *statusbar;
    QToolBar *toolBar;

    void setupUi(QMainWindow *teste)
    {
        if (teste->objectName().isEmpty())
            teste->setObjectName(QString::fromUtf8("teste"));
        teste->resize(800, 600);
        actionTestando = new QAction(teste);
        actionTestando->setObjectName(QString::fromUtf8("actionTestando"));
        centralwidget = new QWidget(teste);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        label = new QLabel(centralwidget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(370, 180, 67, 17));
        teste->setCentralWidget(centralwidget);
        menubar = new QMenuBar(teste);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 800, 22));
        menuTeste = new QMenu(menubar);
        menuTeste->setObjectName(QString::fromUtf8("menuTeste"));
        teste->setMenuBar(menubar);
        statusbar = new QStatusBar(teste);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        teste->setStatusBar(statusbar);
        toolBar = new QToolBar(teste);
        toolBar->setObjectName(QString::fromUtf8("toolBar"));
        teste->addToolBar(Qt::TopToolBarArea, toolBar);

        menubar->addAction(menuTeste->menuAction());
        menuTeste->addSeparator();
        menuTeste->addAction(actionTestando);

        retranslateUi(teste);

        QMetaObject::connectSlotsByName(teste);
    } // setupUi

    void retranslateUi(QMainWindow *teste)
    {
        teste->setWindowTitle(QCoreApplication::translate("teste", "MainWindow", nullptr));
        actionTestando->setText(QCoreApplication::translate("teste", "Testando", nullptr));
        label->setText(QCoreApplication::translate("teste", "Teste", nullptr));
        menuTeste->setTitle(QCoreApplication::translate("teste", "Teste", nullptr));
        toolBar->setWindowTitle(QCoreApplication::translate("teste", "toolBar", nullptr));
    } // retranslateUi

};

namespace Ui {
    class teste: public Ui_teste {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TESTE_H
