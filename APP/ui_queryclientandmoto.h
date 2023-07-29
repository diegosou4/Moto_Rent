/********************************************************************************
** Form generated from reading UI file 'queryclientandmoto.ui'
**
** Created by: Qt User Interface Compiler version 5.15.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QUERYCLIENTANDMOTO_H
#define UI_QUERYCLIENTANDMOTO_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QDateEdit>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_queryclientandmoto
{
public:
    QAction *actionCliente;
    QAction *actionMoto;
    QWidget *centralwidget;
    QGridLayout *gridLayout;
    QVBoxLayout *verticalLayout_7;
    QHBoxLayout *horizontalLayout;
    QVBoxLayout *verticalLayout;
    QLabel *label;
    QLineEdit *lineEdit;
    QVBoxLayout *verticalLayout_2;
    QLabel *label_2;
    QLineEdit *lineEdit_3;
    QVBoxLayout *verticalLayout_3;
    QLabel *label_3;
    QLineEdit *lineEdit_4;
    QHBoxLayout *horizontalLayout_2;
    QVBoxLayout *verticalLayout_6;
    QLabel *label_6;
    QLineEdit *lineEdit_2;
    QVBoxLayout *verticalLayout_4;
    QLabel *label_4;
    QDateEdit *dateEdit;
    QVBoxLayout *verticalLayout_5;
    QLabel *label_5;
    QDateEdit *dateEdit_2;
    QCheckBox *checkBox;
    QPushButton *pushButton;
    QTableWidget *tableWidget;
    QStatusBar *statusbar;
    QMenuBar *menubar;
    QMenu *menuPesquisar;
    QMenu *menuNovo;

    void setupUi(QMainWindow *queryclientandmoto)
    {
        if (queryclientandmoto->objectName().isEmpty())
            queryclientandmoto->setObjectName(QString::fromUtf8("queryclientandmoto"));
        queryclientandmoto->resize(1075, 673);
        actionCliente = new QAction(queryclientandmoto);
        actionCliente->setObjectName(QString::fromUtf8("actionCliente"));
        actionMoto = new QAction(queryclientandmoto);
        actionMoto->setObjectName(QString::fromUtf8("actionMoto"));
        centralwidget = new QWidget(queryclientandmoto);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        gridLayout = new QGridLayout(centralwidget);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        verticalLayout_7 = new QVBoxLayout();
        verticalLayout_7->setObjectName(QString::fromUtf8("verticalLayout_7"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        label = new QLabel(centralwidget);
        label->setObjectName(QString::fromUtf8("label"));

        verticalLayout->addWidget(label);

        lineEdit = new QLineEdit(centralwidget);
        lineEdit->setObjectName(QString::fromUtf8("lineEdit"));

        verticalLayout->addWidget(lineEdit);


        horizontalLayout->addLayout(verticalLayout);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        label_2 = new QLabel(centralwidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        verticalLayout_2->addWidget(label_2);

        lineEdit_3 = new QLineEdit(centralwidget);
        lineEdit_3->setObjectName(QString::fromUtf8("lineEdit_3"));

        verticalLayout_2->addWidget(lineEdit_3);


        horizontalLayout->addLayout(verticalLayout_2);

        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        label_3 = new QLabel(centralwidget);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        verticalLayout_3->addWidget(label_3);

        lineEdit_4 = new QLineEdit(centralwidget);
        lineEdit_4->setObjectName(QString::fromUtf8("lineEdit_4"));

        verticalLayout_3->addWidget(lineEdit_4);


        horizontalLayout->addLayout(verticalLayout_3);


        verticalLayout_7->addLayout(horizontalLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        verticalLayout_6 = new QVBoxLayout();
        verticalLayout_6->setObjectName(QString::fromUtf8("verticalLayout_6"));
        label_6 = new QLabel(centralwidget);
        label_6->setObjectName(QString::fromUtf8("label_6"));

        verticalLayout_6->addWidget(label_6);

        lineEdit_2 = new QLineEdit(centralwidget);
        lineEdit_2->setObjectName(QString::fromUtf8("lineEdit_2"));

        verticalLayout_6->addWidget(lineEdit_2);


        horizontalLayout_2->addLayout(verticalLayout_6);

        verticalLayout_4 = new QVBoxLayout();
        verticalLayout_4->setObjectName(QString::fromUtf8("verticalLayout_4"));
        label_4 = new QLabel(centralwidget);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        verticalLayout_4->addWidget(label_4);

        dateEdit = new QDateEdit(centralwidget);
        dateEdit->setObjectName(QString::fromUtf8("dateEdit"));

        verticalLayout_4->addWidget(dateEdit);


        horizontalLayout_2->addLayout(verticalLayout_4);

        verticalLayout_5 = new QVBoxLayout();
        verticalLayout_5->setObjectName(QString::fromUtf8("verticalLayout_5"));
        label_5 = new QLabel(centralwidget);
        label_5->setObjectName(QString::fromUtf8("label_5"));

        verticalLayout_5->addWidget(label_5);

        dateEdit_2 = new QDateEdit(centralwidget);
        dateEdit_2->setObjectName(QString::fromUtf8("dateEdit_2"));

        verticalLayout_5->addWidget(dateEdit_2);


        horizontalLayout_2->addLayout(verticalLayout_5);

        checkBox = new QCheckBox(centralwidget);
        checkBox->setObjectName(QString::fromUtf8("checkBox"));

        horizontalLayout_2->addWidget(checkBox);

        pushButton = new QPushButton(centralwidget);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));

        horizontalLayout_2->addWidget(pushButton);


        verticalLayout_7->addLayout(horizontalLayout_2);


        gridLayout->addLayout(verticalLayout_7, 0, 0, 1, 1);

        tableWidget = new QTableWidget(centralwidget);
        tableWidget->setObjectName(QString::fromUtf8("tableWidget"));

        gridLayout->addWidget(tableWidget, 1, 0, 1, 1);

        queryclientandmoto->setCentralWidget(centralwidget);
        statusbar = new QStatusBar(queryclientandmoto);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        queryclientandmoto->setStatusBar(statusbar);
        menubar = new QMenuBar(queryclientandmoto);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 1075, 22));
        menuPesquisar = new QMenu(menubar);
        menuPesquisar->setObjectName(QString::fromUtf8("menuPesquisar"));
        menuNovo = new QMenu(menubar);
        menuNovo->setObjectName(QString::fromUtf8("menuNovo"));
        queryclientandmoto->setMenuBar(menubar);

        menubar->addAction(menuPesquisar->menuAction());
        menubar->addAction(menuNovo->menuAction());

        retranslateUi(queryclientandmoto);

        QMetaObject::connectSlotsByName(queryclientandmoto);
    } // setupUi

    void retranslateUi(QMainWindow *queryclientandmoto)
    {
        queryclientandmoto->setWindowTitle(QCoreApplication::translate("queryclientandmoto", "MainWindow", nullptr));
        actionCliente->setText(QCoreApplication::translate("queryclientandmoto", "Cliente", nullptr));
        actionMoto->setText(QCoreApplication::translate("queryclientandmoto", "Moto", nullptr));
        label->setText(QCoreApplication::translate("queryclientandmoto", "Nome:", nullptr));
        label_2->setText(QCoreApplication::translate("queryclientandmoto", "NIF:", nullptr));
        label_3->setText(QCoreApplication::translate("queryclientandmoto", "Placa da moto:", nullptr));
        label_6->setText(QCoreApplication::translate("queryclientandmoto", "Id do cliente:", nullptr));
        label_4->setText(QCoreApplication::translate("queryclientandmoto", "Data inicio:", nullptr));
        label_5->setText(QCoreApplication::translate("queryclientandmoto", "Data Fim:", nullptr));
        checkBox->setText(QCoreApplication::translate("queryclientandmoto", "Cliente Ativo", nullptr));
        pushButton->setText(QCoreApplication::translate("queryclientandmoto", "Pesquisar", nullptr));
        menuPesquisar->setTitle(QCoreApplication::translate("queryclientandmoto", "Pesquisar", nullptr));
        menuNovo->setTitle(QCoreApplication::translate("queryclientandmoto", "Novo", nullptr));
    } // retranslateUi

};

namespace Ui {
    class queryclientandmoto: public Ui_queryclientandmoto {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QUERYCLIENTANDMOTO_H
