/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QLabel *title;
    QPushButton *singerGame;
    QPushButton *multiGame;
    QLabel *who;
    QLabel *bg;
    QLabel *rightlabel;
    QPushButton *botGame;
    QToolBar *mainToolBar;
    QMenuBar *menuBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(1280, 800);
        MainWindow->setMinimumSize(QSize(1280, 800));
        MainWindow->setMaximumSize(QSize(1280, 800));
        QIcon icon;
        icon.addFile(QStringLiteral(":/new/bg/image/black.bmp"), QSize(), QIcon::Normal, QIcon::Off);
        MainWindow->setWindowIcon(icon);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        title = new QLabel(centralWidget);
        title->setObjectName(QStringLiteral("title"));
        title->setGeometry(QRect(880, 100, 351, 111));
        QFont font;
        font.setFamily(QString::fromUtf8("\346\226\207\346\263\211\351\251\233\345\276\256\347\261\263\351\273\221"));
        font.setPointSize(60);
        title->setFont(font);
        title->setPixmap(QPixmap(QString::fromUtf8(":/new/bg1/image/logo.png")));
        title->setScaledContents(true);
        singerGame = new QPushButton(centralWidget);
        singerGame->setObjectName(QStringLiteral("singerGame"));
        singerGame->setGeometry(QRect(1000, 680, 101, 51));
        multiGame = new QPushButton(centralWidget);
        multiGame->setObjectName(QStringLiteral("multiGame"));
        multiGame->setGeometry(QRect(1120, 680, 101, 51));
        who = new QLabel(centralWidget);
        who->setObjectName(QStringLiteral("who"));
        who->setGeometry(QRect(900, 320, 291, 81));
        QFont font1;
        font1.setPointSize(20);
        who->setFont(font1);
        bg = new QLabel(centralWidget);
        bg->setObjectName(QStringLiteral("bg"));
        bg->setGeometry(QRect(0, 0, 801, 761));
        bg->setPixmap(QPixmap(QString::fromUtf8(":/new/bg1/image/chessboard.png")));
        bg->setScaledContents(true);
        rightlabel = new QLabel(centralWidget);
        rightlabel->setObjectName(QStringLiteral("rightlabel"));
        rightlabel->setGeometry(QRect(800, 0, 481, 761));
        rightlabel->setPixmap(QPixmap(QString::fromUtf8(":/new/bg1/image/levelselect.png")));
        rightlabel->setScaledContents(true);
        botGame = new QPushButton(centralWidget);
        botGame->setObjectName(QStringLiteral("botGame"));
        botGame->setGeometry(QRect(880, 680, 101, 51));
        MainWindow->setCentralWidget(centralWidget);
        rightlabel->raise();
        title->raise();
        singerGame->raise();
        multiGame->raise();
        who->raise();
        bg->raise();
        botGame->raise();
        mainToolBar = new QToolBar(MainWindow);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        MainWindow->addToolBar(Qt::TopToolBarArea, mainToolBar);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 1280, 26));
        MainWindow->setMenuBar(menuBar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", 0));
        title->setText(QString());
        singerGame->setText(QApplication::translate("MainWindow", "\346\234\254\345\234\260\345\257\271\346\210\230", 0));
        multiGame->setText(QApplication::translate("MainWindow", "\350\201\224\346\234\272\345\257\271\346\210\230", 0));
        who->setText(QApplication::translate("MainWindow", "\347\255\211\345\276\205\345\274\200\345\247\213", 0));
        bg->setText(QString());
        rightlabel->setText(QString());
        botGame->setText(QApplication::translate("MainWindow", "\344\272\272\346\234\272\345\257\271\346\210\230", 0));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
