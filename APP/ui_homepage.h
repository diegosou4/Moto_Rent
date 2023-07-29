/********************************************************************************
** Form generated from reading UI file 'homepage.ui'
**
** Created by: Qt User Interface Compiler version 5.15.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_HOMEPAGE_H
#define UI_HOMEPAGE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_homepage
{
public:
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayout;
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QPushButton *pushButton_3;
    QPushButton *btn_user;
    QPushButton *pushButton_4;

    void setupUi(QDialog *homepage)
    {
        if (homepage->objectName().isEmpty())
            homepage->setObjectName(QString::fromUtf8("homepage"));
        homepage->resize(489, 284);
        layoutWidget = new QWidget(homepage);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutWidget->setGeometry(QRect(150, 50, 176, 151));
        verticalLayout = new QVBoxLayout(layoutWidget);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        pushButton = new QPushButton(layoutWidget);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));

        verticalLayout->addWidget(pushButton);

        pushButton_2 = new QPushButton(layoutWidget);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));

        verticalLayout->addWidget(pushButton_2);

        pushButton_3 = new QPushButton(layoutWidget);
        pushButton_3->setObjectName(QString::fromUtf8("pushButton_3"));

        verticalLayout->addWidget(pushButton_3);

        btn_user = new QPushButton(layoutWidget);
        btn_user->setObjectName(QString::fromUtf8("btn_user"));

        verticalLayout->addWidget(btn_user);

        pushButton_4 = new QPushButton(layoutWidget);
        pushButton_4->setObjectName(QString::fromUtf8("pushButton_4"));

        verticalLayout->addWidget(pushButton_4);


        retranslateUi(homepage);

        QMetaObject::connectSlotsByName(homepage);
    } // setupUi

    void retranslateUi(QDialog *homepage)
    {
        homepage->setWindowTitle(QCoreApplication::translate("homepage", "Dialog", nullptr));
        pushButton->setText(QCoreApplication::translate("homepage", "1-Consultar Clientes", nullptr));
        pushButton_2->setText(QCoreApplication::translate("homepage", "2-Consultar Motos", nullptr));
        pushButton_3->setText(QCoreApplication::translate("homepage", "3-Verificar Manuntecoes", nullptr));
        btn_user->setText(QCoreApplication::translate("homepage", "4-Criar Usuario", nullptr));
        pushButton_4->setText(QCoreApplication::translate("homepage", "5-Sair", nullptr));
    } // retranslateUi

};

namespace Ui {
    class homepage: public Ui_homepage {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_HOMEPAGE_H
