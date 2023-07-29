/********************************************************************************
** Form generated from reading UI file 'querymotos.ui'
**
** Created by: Qt User Interface Compiler version 5.15.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QUERYMOTOS_H
#define UI_QUERYMOTOS_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_querymotos
{
public:
    QGridLayout *gridLayout;
    QHBoxLayout *horizontalLayout_2;
    QHBoxLayout *horizontalLayout;
    QVBoxLayout *verticalLayout_2;
    QLabel *label;
    QLineEdit *line_id;
    QVBoxLayout *verticalLayout_3;
    QLabel *label_2;
    QLineEdit *line_placa;
    QVBoxLayout *verticalLayout_4;
    QVBoxLayout *verticalLayout;
    QLabel *label_4;
    QLineEdit *line_marca;
    QVBoxLayout *verticalLayout_5;
    QSpacerItem *verticalSpacer;
    QCheckBox *check_rent;
    QPushButton *pushButton;
    QTableWidget *tableWidget;
    QHBoxLayout *horizontalLayout_3;
    QSpacerItem *horizontalSpacer;
    QPushButton *pushButton_2;
    QPushButton *btn_createmoto;

    void setupUi(QWidget *querymotos)
    {
        if (querymotos->objectName().isEmpty())
            querymotos->setObjectName(QString::fromUtf8("querymotos"));
        querymotos->resize(1027, 654);
        gridLayout = new QGridLayout(querymotos);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        label = new QLabel(querymotos);
        label->setObjectName(QString::fromUtf8("label"));

        verticalLayout_2->addWidget(label);

        line_id = new QLineEdit(querymotos);
        line_id->setObjectName(QString::fromUtf8("line_id"));

        verticalLayout_2->addWidget(line_id);


        horizontalLayout->addLayout(verticalLayout_2);

        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        label_2 = new QLabel(querymotos);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        verticalLayout_3->addWidget(label_2);

        line_placa = new QLineEdit(querymotos);
        line_placa->setObjectName(QString::fromUtf8("line_placa"));

        verticalLayout_3->addWidget(line_placa);


        horizontalLayout->addLayout(verticalLayout_3);

        verticalLayout_4 = new QVBoxLayout();
        verticalLayout_4->setObjectName(QString::fromUtf8("verticalLayout_4"));

        horizontalLayout->addLayout(verticalLayout_4);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        label_4 = new QLabel(querymotos);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        verticalLayout->addWidget(label_4);

        line_marca = new QLineEdit(querymotos);
        line_marca->setObjectName(QString::fromUtf8("line_marca"));

        verticalLayout->addWidget(line_marca);


        horizontalLayout->addLayout(verticalLayout);


        horizontalLayout_2->addLayout(horizontalLayout);

        verticalLayout_5 = new QVBoxLayout();
        verticalLayout_5->setObjectName(QString::fromUtf8("verticalLayout_5"));
        verticalSpacer = new QSpacerItem(20, 10, QSizePolicy::Minimum, QSizePolicy::Minimum);

        verticalLayout_5->addItem(verticalSpacer);

        check_rent = new QCheckBox(querymotos);
        check_rent->setObjectName(QString::fromUtf8("check_rent"));
        check_rent->setTabletTracking(false);
        check_rent->setChecked(true);

        verticalLayout_5->addWidget(check_rent);


        horizontalLayout_2->addLayout(verticalLayout_5);

        pushButton = new QPushButton(querymotos);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));

        horizontalLayout_2->addWidget(pushButton);


        gridLayout->addLayout(horizontalLayout_2, 0, 0, 1, 1);

        tableWidget = new QTableWidget(querymotos);
        tableWidget->setObjectName(QString::fromUtf8("tableWidget"));

        gridLayout->addWidget(tableWidget, 1, 0, 1, 1);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        horizontalSpacer = new QSpacerItem(898, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer);

        pushButton_2 = new QPushButton(querymotos);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));

        horizontalLayout_3->addWidget(pushButton_2);

        btn_createmoto = new QPushButton(querymotos);
        btn_createmoto->setObjectName(QString::fromUtf8("btn_createmoto"));

        horizontalLayout_3->addWidget(btn_createmoto);


        gridLayout->addLayout(horizontalLayout_3, 2, 0, 1, 1);


        retranslateUi(querymotos);

        QMetaObject::connectSlotsByName(querymotos);
    } // setupUi

    void retranslateUi(QWidget *querymotos)
    {
        querymotos->setWindowTitle(QCoreApplication::translate("querymotos", "Form", nullptr));
        label->setText(QCoreApplication::translate("querymotos", "ID da moto:", nullptr));
        label_2->setText(QCoreApplication::translate("querymotos", "Placa:", nullptr));
        label_4->setText(QCoreApplication::translate("querymotos", "Marca:", nullptr));
        check_rent->setText(QCoreApplication::translate("querymotos", "Alugada", nullptr));
        pushButton->setText(QCoreApplication::translate("querymotos", "Pesquisar", nullptr));
        pushButton_2->setText(QCoreApplication::translate("querymotos", "Gerar Relatorio", nullptr));
        btn_createmoto->setText(QCoreApplication::translate("querymotos", "Cadastrar Moto", nullptr));
    } // retranslateUi

};

namespace Ui {
    class querymotos: public Ui_querymotos {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QUERYMOTOS_H
