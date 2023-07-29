/********************************************************************************
** Form generated from reading UI file 'querymoto.ui'
**
** Created by: Qt User Interface Compiler version 5.15.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QUERYMOTO_H
#define UI_QUERYMOTO_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_querymoto
{
public:
    QAction *actionInserir_moto;
    QAction *actionConsultar_moto;
    QWidget *centralwidget;
    QMenuBar *menubar;
    QMenu *menuNovo;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *querymoto)
    {
        if (querymoto->objectName().isEmpty())
            querymoto->setObjectName(QString::fromUtf8("querymoto"));
        querymoto->resize(800, 600);
        actionInserir_moto = new QAction(querymoto);
        actionInserir_moto->setObjectName(QString::fromUtf8("actionInserir_moto"));
        actionConsultar_moto = new QAction(querymoto);
        actionConsultar_moto->setObjectName(QString::fromUtf8("actionConsultar_moto"));
        centralwidget = new QWidget(querymoto);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        querymoto->setCentralWidget(centralwidget);
        menubar = new QMenuBar(querymoto);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 800, 22));
        menuNovo = new QMenu(menubar);
        menuNovo->setObjectName(QString::fromUtf8("menuNovo"));
        querymoto->setMenuBar(menubar);
        statusbar = new QStatusBar(querymoto);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        querymoto->setStatusBar(statusbar);

        menubar->addAction(menuNovo->menuAction());
        menuNovo->addAction(actionInserir_moto);
        menuNovo->addAction(actionConsultar_moto);

        retranslateUi(querymoto);

        QMetaObject::connectSlotsByName(querymoto);
    } // setupUi

    void retranslateUi(QMainWindow *querymoto)
    {
        querymoto->setWindowTitle(QCoreApplication::translate("querymoto", "MainWindow", nullptr));
        actionInserir_moto->setText(QCoreApplication::translate("querymoto", "Inserir moto", nullptr));
        actionConsultar_moto->setText(QCoreApplication::translate("querymoto", "Consultar moto", nullptr));
        menuNovo->setTitle(QCoreApplication::translate("querymoto", "Novo", nullptr));
    } // retranslateUi

};

namespace Ui {
    class querymoto: public Ui_querymoto {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QUERYMOTO_H
