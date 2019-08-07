/********************************************************************************
** Form generated from reading UI file 'qtsocket.ui'
**
** Created by: Qt User Interface Compiler version 5.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QTSOCKET_H
#define UI_QTSOCKET_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_QtSocket
{
public:
    QLabel *bg;
    QLabel *title;
    QWidget *layoutWidget;
    QHBoxLayout *horizontalLayout;
    QVBoxLayout *verticalLayout;
    QLabel *ip;
    QLabel *port;
    QVBoxLayout *verticalLayout_2;
    QLineEdit *ipContent;
    QLineEdit *portContent;
    QWidget *layoutWidget1;
    QHBoxLayout *horizontalLayout_2;
    QPushButton *createServer;
    QPushButton *connectServer;

    void setupUi(QDialog *QtSocket)
    {
        if (QtSocket->objectName().isEmpty())
            QtSocket->setObjectName(QStringLiteral("QtSocket"));
        QtSocket->resize(480, 800);
        QtSocket->setMinimumSize(QSize(480, 800));
        QtSocket->setMaximumSize(QSize(480, 800));
        bg = new QLabel(QtSocket);
        bg->setObjectName(QStringLiteral("bg"));
        bg->setGeometry(QRect(9, 9, 462, 782));
        bg->setPixmap(QPixmap(QString::fromUtf8(":/new/bg1/image/levelselect.png")));
        bg->setScaledContents(true);
        title = new QLabel(QtSocket);
        title->setObjectName(QStringLiteral("title"));
        title->setGeometry(QRect(160, 100, 211, 71));
        QFont font;
        font.setPointSize(40);
        title->setFont(font);
        layoutWidget = new QWidget(QtSocket);
        layoutWidget->setObjectName(QStringLiteral("layoutWidget"));
        layoutWidget->setGeometry(QRect(50, 240, 361, 181));
        horizontalLayout = new QHBoxLayout(layoutWidget);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        ip = new QLabel(layoutWidget);
        ip->setObjectName(QStringLiteral("ip"));
        QFont font1;
        font1.setPointSize(20);
        ip->setFont(font1);

        verticalLayout->addWidget(ip);

        port = new QLabel(layoutWidget);
        port->setObjectName(QStringLiteral("port"));
        port->setFont(font1);

        verticalLayout->addWidget(port);


        horizontalLayout->addLayout(verticalLayout);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setSpacing(40);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        ipContent = new QLineEdit(layoutWidget);
        ipContent->setObjectName(QStringLiteral("ipContent"));

        verticalLayout_2->addWidget(ipContent);

        portContent = new QLineEdit(layoutWidget);
        portContent->setObjectName(QStringLiteral("portContent"));

        verticalLayout_2->addWidget(portContent);


        horizontalLayout->addLayout(verticalLayout_2);

        layoutWidget1 = new QWidget(QtSocket);
        layoutWidget1->setObjectName(QStringLiteral("layoutWidget1"));
        layoutWidget1->setGeometry(QRect(220, 520, 195, 30));
        horizontalLayout_2 = new QHBoxLayout(layoutWidget1);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        createServer = new QPushButton(layoutWidget1);
        createServer->setObjectName(QStringLiteral("createServer"));

        horizontalLayout_2->addWidget(createServer);

        connectServer = new QPushButton(layoutWidget1);
        connectServer->setObjectName(QStringLiteral("connectServer"));

        horizontalLayout_2->addWidget(connectServer);


        retranslateUi(QtSocket);

        QMetaObject::connectSlotsByName(QtSocket);
    } // setupUi

    void retranslateUi(QDialog *QtSocket)
    {
        QtSocket->setWindowTitle(QApplication::translate("QtSocket", "Dialog", 0));
        bg->setText(QString());
        title->setText(QApplication::translate("QtSocket", "\346\234\215\345\212\241\345\231\250", 0));
        ip->setText(QApplication::translate("QtSocket", "IP\345\234\260\345\235\200\357\274\232", 0));
        port->setText(QApplication::translate("QtSocket", "\347\253\257\345\217\243\345\217\267\357\274\232", 0));
        createServer->setText(QApplication::translate("QtSocket", "\345\210\233\345\273\272", 0));
        connectServer->setText(QApplication::translate("QtSocket", "\350\277\236\346\216\245", 0));
    } // retranslateUi

};

namespace Ui {
    class QtSocket: public Ui_QtSocket {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QTSOCKET_H
