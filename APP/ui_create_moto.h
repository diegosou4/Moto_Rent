/********************************************************************************
** Form generated from reading UI file 'create_moto.ui'
**
** Created by: Qt User Interface Compiler version 5.15.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CREATE_MOTO_H
#define UI_CREATE_MOTO_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDateEdit>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSplitter>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Create_moto
{
public:
    QPushButton *btn_createmoto;
    QSplitter *splitter_2;
    QSplitter *splitter;
    QWidget *widget;
    QHBoxLayout *horizontalLayout_2;
    QVBoxLayout *verticalLayout;
    QLabel *label;
    QLineEdit *line_model;
    QVBoxLayout *verticalLayout_2;
    QLabel *label_3;
    QLineEdit *line_brand;
    QWidget *widget1;
    QVBoxLayout *verticalLayout_3;
    QLabel *label_2;
    QLineEdit *line_plate;
    QWidget *widget2;
    QHBoxLayout *horizontalLayout;
    QVBoxLayout *verticalLayout_4;
    QLabel *label_8;
    QLineEdit *line_color;
    QVBoxLayout *verticalLayout_5;
    QLabel *label_4;
    QLineEdit *line_atualkm;
    QVBoxLayout *verticalLayout_6;
    QLabel *label_7;
    QLineEdit *line_payedvalue;
    QWidget *widget3;
    QVBoxLayout *verticalLayout_7;
    QLabel *label_6;
    QDateEdit *date_buy;

    void setupUi(QWidget *Create_moto)
    {
        if (Create_moto->objectName().isEmpty())
            Create_moto->setObjectName(QString::fromUtf8("Create_moto"));
        Create_moto->resize(729, 471);
        btn_createmoto = new QPushButton(Create_moto);
        btn_createmoto->setObjectName(QString::fromUtf8("btn_createmoto"));
        btn_createmoto->setGeometry(QRect(490, 310, 121, 41));
        splitter_2 = new QSplitter(Create_moto);
        splitter_2->setObjectName(QString::fromUtf8("splitter_2"));
        splitter_2->setGeometry(QRect(70, 50, 541, 241));
        splitter_2->setOrientation(Qt::Vertical);
        splitter = new QSplitter(splitter_2);
        splitter->setObjectName(QString::fromUtf8("splitter"));
        splitter->setOrientation(Qt::Horizontal);
        widget = new QWidget(splitter);
        widget->setObjectName(QString::fromUtf8("widget"));
        horizontalLayout_2 = new QHBoxLayout(widget);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        label = new QLabel(widget);
        label->setObjectName(QString::fromUtf8("label"));

        verticalLayout->addWidget(label);

        line_model = new QLineEdit(widget);
        line_model->setObjectName(QString::fromUtf8("line_model"));

        verticalLayout->addWidget(line_model);


        horizontalLayout_2->addLayout(verticalLayout);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        label_3 = new QLabel(widget);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        verticalLayout_2->addWidget(label_3);

        line_brand = new QLineEdit(widget);
        line_brand->setObjectName(QString::fromUtf8("line_brand"));

        verticalLayout_2->addWidget(line_brand);


        horizontalLayout_2->addLayout(verticalLayout_2);

        splitter->addWidget(widget);
        splitter_2->addWidget(splitter);
        widget1 = new QWidget(splitter_2);
        widget1->setObjectName(QString::fromUtf8("widget1"));
        verticalLayout_3 = new QVBoxLayout(widget1);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        verticalLayout_3->setContentsMargins(0, 0, 0, 0);
        label_2 = new QLabel(widget1);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        verticalLayout_3->addWidget(label_2);

        line_plate = new QLineEdit(widget1);
        line_plate->setObjectName(QString::fromUtf8("line_plate"));

        verticalLayout_3->addWidget(line_plate);

        splitter_2->addWidget(widget1);
        widget2 = new QWidget(splitter_2);
        widget2->setObjectName(QString::fromUtf8("widget2"));
        horizontalLayout = new QHBoxLayout(widget2);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        verticalLayout_4 = new QVBoxLayout();
        verticalLayout_4->setObjectName(QString::fromUtf8("verticalLayout_4"));
        label_8 = new QLabel(widget2);
        label_8->setObjectName(QString::fromUtf8("label_8"));

        verticalLayout_4->addWidget(label_8);

        line_color = new QLineEdit(widget2);
        line_color->setObjectName(QString::fromUtf8("line_color"));

        verticalLayout_4->addWidget(line_color);


        horizontalLayout->addLayout(verticalLayout_4);

        verticalLayout_5 = new QVBoxLayout();
        verticalLayout_5->setObjectName(QString::fromUtf8("verticalLayout_5"));
        label_4 = new QLabel(widget2);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        verticalLayout_5->addWidget(label_4);

        line_atualkm = new QLineEdit(widget2);
        line_atualkm->setObjectName(QString::fromUtf8("line_atualkm"));

        verticalLayout_5->addWidget(line_atualkm);


        horizontalLayout->addLayout(verticalLayout_5);

        verticalLayout_6 = new QVBoxLayout();
        verticalLayout_6->setObjectName(QString::fromUtf8("verticalLayout_6"));
        label_7 = new QLabel(widget2);
        label_7->setObjectName(QString::fromUtf8("label_7"));

        verticalLayout_6->addWidget(label_7);

        line_payedvalue = new QLineEdit(widget2);
        line_payedvalue->setObjectName(QString::fromUtf8("line_payedvalue"));

        verticalLayout_6->addWidget(line_payedvalue);


        horizontalLayout->addLayout(verticalLayout_6);

        splitter_2->addWidget(widget2);
        widget3 = new QWidget(splitter_2);
        widget3->setObjectName(QString::fromUtf8("widget3"));
        verticalLayout_7 = new QVBoxLayout(widget3);
        verticalLayout_7->setObjectName(QString::fromUtf8("verticalLayout_7"));
        verticalLayout_7->setContentsMargins(0, 0, 0, 0);
        label_6 = new QLabel(widget3);
        label_6->setObjectName(QString::fromUtf8("label_6"));

        verticalLayout_7->addWidget(label_6);

        date_buy = new QDateEdit(widget3);
        date_buy->setObjectName(QString::fromUtf8("date_buy"));

        verticalLayout_7->addWidget(date_buy);

        splitter_2->addWidget(widget3);

        retranslateUi(Create_moto);

        QMetaObject::connectSlotsByName(Create_moto);
    } // setupUi

    void retranslateUi(QWidget *Create_moto)
    {
        Create_moto->setWindowTitle(QCoreApplication::translate("Create_moto", "Form", nullptr));
        btn_createmoto->setText(QCoreApplication::translate("Create_moto", "Criar Moto", nullptr));
        label->setText(QCoreApplication::translate("Create_moto", "Modelo:", nullptr));
        label_3->setText(QCoreApplication::translate("Create_moto", "Marca:", nullptr));
        label_2->setText(QCoreApplication::translate("Create_moto", "Placa:", nullptr));
        label_8->setText(QCoreApplication::translate("Create_moto", "Cor:", nullptr));
        label_4->setText(QCoreApplication::translate("Create_moto", "Km Atual:", nullptr));
        label_7->setText(QCoreApplication::translate("Create_moto", "Valor Pago:", nullptr));
        label_6->setText(QCoreApplication::translate("Create_moto", "Data Compra:", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Create_moto: public Ui_Create_moto {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CREATE_MOTO_H
