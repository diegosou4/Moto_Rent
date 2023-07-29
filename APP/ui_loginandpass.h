/********************************************************************************
** Form generated from reading UI file 'loginandpass.ui'
**
** Created by: Qt User Interface Compiler version 5.15.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LOGINANDPASS_H
#define UI_LOGINANDPASS_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_LoginAndPass
{
public:
    QWidget *centralwidget;
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QLineEdit *line_login;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_2;
    QLineEdit *line_pass;
    QHBoxLayout *horizontalLayout_3;
    QSpacerItem *horizontalSpacer;
    QPushButton *pushButton;
    QMenuBar *menubar;

    void setupUi(QMainWindow *LoginAndPass)
    {
        if (LoginAndPass->objectName().isEmpty())
            LoginAndPass->setObjectName(QString::fromUtf8("LoginAndPass"));
        LoginAndPass->setEnabled(true);
        LoginAndPass->resize(984, 644);
        centralwidget = new QWidget(LoginAndPass);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        layoutWidget = new QWidget(centralwidget);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutWidget->setGeometry(QRect(300, 200, 311, 111));
        verticalLayout = new QVBoxLayout(layoutWidget);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        label = new QLabel(layoutWidget);
        label->setObjectName(QString::fromUtf8("label"));

        horizontalLayout->addWidget(label);

        line_login = new QLineEdit(layoutWidget);
        line_login->setObjectName(QString::fromUtf8("line_login"));

        horizontalLayout->addWidget(line_login);


        verticalLayout->addLayout(horizontalLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        label_2 = new QLabel(layoutWidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        horizontalLayout_2->addWidget(label_2);

        line_pass = new QLineEdit(layoutWidget);
        line_pass->setObjectName(QString::fromUtf8("line_pass"));
        line_pass->setEchoMode(QLineEdit::Password);

        horizontalLayout_2->addWidget(line_pass);


        verticalLayout->addLayout(horizontalLayout_2);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer);

        pushButton = new QPushButton(layoutWidget);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));

        horizontalLayout_3->addWidget(pushButton);


        verticalLayout->addLayout(horizontalLayout_3);

        LoginAndPass->setCentralWidget(centralwidget);
        menubar = new QMenuBar(LoginAndPass);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 984, 22));
        LoginAndPass->setMenuBar(menubar);

        retranslateUi(LoginAndPass);

        QMetaObject::connectSlotsByName(LoginAndPass);
    } // setupUi

    void retranslateUi(QMainWindow *LoginAndPass)
    {
        LoginAndPass->setWindowTitle(QCoreApplication::translate("LoginAndPass", "LoginAndPass", nullptr));
        label->setText(QCoreApplication::translate("LoginAndPass", "Login:    ", nullptr));
        label_2->setText(QCoreApplication::translate("LoginAndPass", "Senha:   ", nullptr));
        pushButton->setText(QCoreApplication::translate("LoginAndPass", "Logar", nullptr));
    } // retranslateUi

};

namespace Ui {
    class LoginAndPass: public Ui_LoginAndPass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LOGINANDPASS_H
