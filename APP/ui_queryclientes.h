/********************************************************************************
** Form generated from reading UI file 'queryclientes.ui'
**
** Created by: Qt User Interface Compiler version 5.15.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QUERYCLIENTES_H
#define UI_QUERYCLIENTES_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_queryclientes
{
public:
    QGridLayout *gridLayout;
    QHBoxLayout *horizontalLayout;
    QVBoxLayout *verticalLayout_3;
    QLabel *label;
    QLineEdit *line_name;
    QVBoxLayout *verticalLayout_2;
    QLabel *label_2;
    QLineEdit *line_nif;
    QVBoxLayout *verticalLayout;
    QLabel *label_3;
    QLineEdit *lineEdit_3;
    QCheckBox *check_ative;
    QPushButton *btn_consultar;
    QTableWidget *tableWidget;

    void setupUi(QWidget *queryclientes)
    {
        if (queryclientes->objectName().isEmpty())
            queryclientes->setObjectName(QString::fromUtf8("queryclientes"));
        queryclientes->resize(1088, 609);
        gridLayout = new QGridLayout(queryclientes);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        label = new QLabel(queryclientes);
        label->setObjectName(QString::fromUtf8("label"));

        verticalLayout_3->addWidget(label);

        line_name = new QLineEdit(queryclientes);
        line_name->setObjectName(QString::fromUtf8("line_name"));

        verticalLayout_3->addWidget(line_name);


        horizontalLayout->addLayout(verticalLayout_3);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        label_2 = new QLabel(queryclientes);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        verticalLayout_2->addWidget(label_2);

        line_nif = new QLineEdit(queryclientes);
        line_nif->setObjectName(QString::fromUtf8("line_nif"));

        verticalLayout_2->addWidget(line_nif);


        horizontalLayout->addLayout(verticalLayout_2);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        label_3 = new QLabel(queryclientes);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        verticalLayout->addWidget(label_3);

        lineEdit_3 = new QLineEdit(queryclientes);
        lineEdit_3->setObjectName(QString::fromUtf8("lineEdit_3"));

        verticalLayout->addWidget(lineEdit_3);


        horizontalLayout->addLayout(verticalLayout);

        check_ative = new QCheckBox(queryclientes);
        check_ative->setObjectName(QString::fromUtf8("check_ative"));

        horizontalLayout->addWidget(check_ative);

        btn_consultar = new QPushButton(queryclientes);
        btn_consultar->setObjectName(QString::fromUtf8("btn_consultar"));

        horizontalLayout->addWidget(btn_consultar);


        gridLayout->addLayout(horizontalLayout, 0, 0, 1, 1);

        tableWidget = new QTableWidget(queryclientes);
        tableWidget->setObjectName(QString::fromUtf8("tableWidget"));

        gridLayout->addWidget(tableWidget, 1, 0, 1, 1);


        retranslateUi(queryclientes);

        QMetaObject::connectSlotsByName(queryclientes);
    } // setupUi

    void retranslateUi(QWidget *queryclientes)
    {
        queryclientes->setWindowTitle(QCoreApplication::translate("queryclientes", "Form", nullptr));
        label->setText(QCoreApplication::translate("queryclientes", "Nome:", nullptr));
        label_2->setText(QCoreApplication::translate("queryclientes", "NIF", nullptr));
        label_3->setText(QCoreApplication::translate("queryclientes", "ID_MOTO", nullptr));
        check_ative->setText(QCoreApplication::translate("queryclientes", "Ativo", nullptr));
        btn_consultar->setText(QCoreApplication::translate("queryclientes", "Consultar", nullptr));
    } // retranslateUi

};

namespace Ui {
    class queryclientes: public Ui_queryclientes {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QUERYCLIENTES_H
