/********************************************************************************
** Form generated from reading UI file 'widget.ui'
**
** Created by: Qt User Interface Compiler version 5.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WIDGET_H
#define UI_WIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QFontComboBox>
#include <QtWidgets/QFrame>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QTextBrowser>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Widget
{
public:
    QVBoxLayout *verticalLayout_5;
    QWidget *widget_6;
    QVBoxLayout *verticalLayout_4;
    QWidget *widget_4;
    QHBoxLayout *horizontalLayout_3;
    QFrame *frame_3;
    QVBoxLayout *verticalLayout_2;
    QWidget *widget;
    QVBoxLayout *verticalLayout;
    QTextBrowser *msgBrowser;
    QFrame *frame_2;
    QHBoxLayout *horizontalLayout;
    QFontComboBox *fontCbx;
    QComboBox *sizeCbx;
    QToolButton *boldTBtn;
    QToolButton *italicTBtn;
    QToolButton *underlineTbtn;
    QToolButton *colorTbtn;
    QToolButton *saveTBtn;
    QToolButton *clearTBtn;
    QWidget *widget_2;
    QHBoxLayout *horizontalLayout_2;
    QTextEdit *msgTxtEdit;
    QWidget *widget_3;
    QVBoxLayout *verticalLayout_3;
    QTableWidget *usrTblWidget;
    QFrame *frame_5;
    QHBoxLayout *horizontalLayout_4;
    QSpacerItem *horizontalSpacer;
    QPushButton *sendBtn;
    QSpacerItem *horizontalSpacer_2;
    QLabel *usrNumLbl;
    QSpacerItem *horizontalSpacer_3;
    QPushButton *exitBtn;

    void setupUi(QWidget *Widget)
    {
        if (Widget->objectName().isEmpty())
            Widget->setObjectName(QStringLiteral("Widget"));
        Widget->resize(730, 450);
        verticalLayout_5 = new QVBoxLayout(Widget);
        verticalLayout_5->setSpacing(6);
        verticalLayout_5->setContentsMargins(11, 11, 11, 11);
        verticalLayout_5->setObjectName(QStringLiteral("verticalLayout_5"));
        widget_6 = new QWidget(Widget);
        widget_6->setObjectName(QStringLiteral("widget_6"));
        verticalLayout_4 = new QVBoxLayout(widget_6);
        verticalLayout_4->setSpacing(6);
        verticalLayout_4->setContentsMargins(11, 11, 11, 11);
        verticalLayout_4->setObjectName(QStringLiteral("verticalLayout_4"));
        verticalLayout_4->setContentsMargins(0, 0, 0, 0);
        widget_4 = new QWidget(widget_6);
        widget_4->setObjectName(QStringLiteral("widget_4"));
        horizontalLayout_3 = new QHBoxLayout(widget_4);
        horizontalLayout_3->setSpacing(6);
        horizontalLayout_3->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        horizontalLayout_3->setContentsMargins(0, 0, 0, 0);
        frame_3 = new QFrame(widget_4);
        frame_3->setObjectName(QStringLiteral("frame_3"));
        frame_3->setFrameShape(QFrame::Box);
        verticalLayout_2 = new QVBoxLayout(frame_3);
        verticalLayout_2->setSpacing(6);
        verticalLayout_2->setContentsMargins(11, 11, 11, 11);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        widget = new QWidget(frame_3);
        widget->setObjectName(QStringLiteral("widget"));
        verticalLayout = new QVBoxLayout(widget);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        msgBrowser = new QTextBrowser(widget);
        msgBrowser->setObjectName(QStringLiteral("msgBrowser"));

        verticalLayout->addWidget(msgBrowser);


        verticalLayout_2->addWidget(widget);

        frame_2 = new QFrame(frame_3);
        frame_2->setObjectName(QStringLiteral("frame_2"));
        frame_2->setFrameShape(QFrame::Box);
        horizontalLayout = new QHBoxLayout(frame_2);
        horizontalLayout->setSpacing(6);
        horizontalLayout->setContentsMargins(11, 11, 11, 11);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        fontCbx = new QFontComboBox(frame_2);
        fontCbx->setObjectName(QStringLiteral("fontCbx"));

        horizontalLayout->addWidget(fontCbx);

        sizeCbx = new QComboBox(frame_2);
        sizeCbx->setObjectName(QStringLiteral("sizeCbx"));

        horizontalLayout->addWidget(sizeCbx);

        boldTBtn = new QToolButton(frame_2);
        boldTBtn->setObjectName(QStringLiteral("boldTBtn"));
        boldTBtn->setMinimumSize(QSize(33, 33));
        QIcon icon;
        icon.addFile(QStringLiteral(":/images/bold.png"), QSize(), QIcon::Normal, QIcon::Off);
        boldTBtn->setIcon(icon);
        boldTBtn->setIconSize(QSize(26, 26));
        boldTBtn->setCheckable(true);

        horizontalLayout->addWidget(boldTBtn);

        italicTBtn = new QToolButton(frame_2);
        italicTBtn->setObjectName(QStringLiteral("italicTBtn"));
        italicTBtn->setMinimumSize(QSize(33, 33));
        QIcon icon1;
        icon1.addFile(QStringLiteral(":/images/italic.png"), QSize(), QIcon::Normal, QIcon::Off);
        italicTBtn->setIcon(icon1);
        italicTBtn->setIconSize(QSize(26, 26));
        italicTBtn->setCheckable(true);

        horizontalLayout->addWidget(italicTBtn);

        underlineTbtn = new QToolButton(frame_2);
        underlineTbtn->setObjectName(QStringLiteral("underlineTbtn"));
        underlineTbtn->setMinimumSize(QSize(33, 33));
        QIcon icon2;
        icon2.addFile(QStringLiteral(":/images/under.png"), QSize(), QIcon::Normal, QIcon::Off);
        underlineTbtn->setIcon(icon2);
        underlineTbtn->setIconSize(QSize(26, 26));
        underlineTbtn->setCheckable(true);

        horizontalLayout->addWidget(underlineTbtn);

        colorTbtn = new QToolButton(frame_2);
        colorTbtn->setObjectName(QStringLiteral("colorTbtn"));
        colorTbtn->setMinimumSize(QSize(33, 33));
        QIcon icon3;
        icon3.addFile(QStringLiteral(":/images/color.png"), QSize(), QIcon::Normal, QIcon::Off);
        colorTbtn->setIcon(icon3);
        colorTbtn->setIconSize(QSize(26, 26));

        horizontalLayout->addWidget(colorTbtn);

        saveTBtn = new QToolButton(frame_2);
        saveTBtn->setObjectName(QStringLiteral("saveTBtn"));
        saveTBtn->setMinimumSize(QSize(33, 33));
        QIcon icon4;
        icon4.addFile(QStringLiteral(":/images/save.png"), QSize(), QIcon::Normal, QIcon::Off);
        saveTBtn->setIcon(icon4);
        saveTBtn->setIconSize(QSize(26, 26));

        horizontalLayout->addWidget(saveTBtn);

        clearTBtn = new QToolButton(frame_2);
        clearTBtn->setObjectName(QStringLiteral("clearTBtn"));
        clearTBtn->setMinimumSize(QSize(33, 33));
        QIcon icon5;
        icon5.addFile(QStringLiteral(":/images/clear.png"), QSize(), QIcon::Normal, QIcon::Off);
        clearTBtn->setIcon(icon5);
        clearTBtn->setIconSize(QSize(26, 26));

        horizontalLayout->addWidget(clearTBtn);


        verticalLayout_2->addWidget(frame_2);

        widget_2 = new QWidget(frame_3);
        widget_2->setObjectName(QStringLiteral("widget_2"));
        widget_2->setMaximumSize(QSize(16777215, 100));
        horizontalLayout_2 = new QHBoxLayout(widget_2);
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        msgTxtEdit = new QTextEdit(widget_2);
        msgTxtEdit->setObjectName(QStringLiteral("msgTxtEdit"));

        horizontalLayout_2->addWidget(msgTxtEdit);


        verticalLayout_2->addWidget(widget_2);


        horizontalLayout_3->addWidget(frame_3);

        widget_3 = new QWidget(widget_4);
        widget_3->setObjectName(QStringLiteral("widget_3"));
        widget_3->setMaximumSize(QSize(180, 16777215));
        verticalLayout_3 = new QVBoxLayout(widget_3);
        verticalLayout_3->setSpacing(6);
        verticalLayout_3->setContentsMargins(11, 11, 11, 11);
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        verticalLayout_3->setContentsMargins(0, 0, 0, 0);
        usrTblWidget = new QTableWidget(widget_3);
        if (usrTblWidget->columnCount() < 1)
            usrTblWidget->setColumnCount(1);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        usrTblWidget->setHorizontalHeaderItem(0, __qtablewidgetitem);
        usrTblWidget->setObjectName(QStringLiteral("usrTblWidget"));
        usrTblWidget->setSelectionMode(QAbstractItemView::SingleSelection);
        usrTblWidget->setSelectionBehavior(QAbstractItemView::SelectRows);

        verticalLayout_3->addWidget(usrTblWidget);


        horizontalLayout_3->addWidget(widget_3);


        verticalLayout_4->addWidget(widget_4);

        frame_5 = new QFrame(widget_6);
        frame_5->setObjectName(QStringLiteral("frame_5"));
        frame_5->setFrameShape(QFrame::Box);
        horizontalLayout_4 = new QHBoxLayout(frame_5);
        horizontalLayout_4->setSpacing(6);
        horizontalLayout_4->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_4->setObjectName(QStringLiteral("horizontalLayout_4"));
        horizontalLayout_4->setContentsMargins(0, 0, 0, 0);
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer);

        sendBtn = new QPushButton(frame_5);
        sendBtn->setObjectName(QStringLiteral("sendBtn"));

        horizontalLayout_4->addWidget(sendBtn);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer_2);

        usrNumLbl = new QLabel(frame_5);
        usrNumLbl->setObjectName(QStringLiteral("usrNumLbl"));

        horizontalLayout_4->addWidget(usrNumLbl);

        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer_3);

        exitBtn = new QPushButton(frame_5);
        exitBtn->setObjectName(QStringLiteral("exitBtn"));

        horizontalLayout_4->addWidget(exitBtn);


        verticalLayout_4->addWidget(frame_5);


        verticalLayout_5->addWidget(widget_6);


        retranslateUi(Widget);

        sizeCbx->setCurrentIndex(4);


        QMetaObject::connectSlotsByName(Widget);
    } // setupUi

    void retranslateUi(QWidget *Widget)
    {
        Widget->setWindowTitle(QApplication::translate("Widget", "Widget", 0));
        sizeCbx->clear();
        sizeCbx->insertItems(0, QStringList()
         << QApplication::translate("Widget", "8", 0)
         << QApplication::translate("Widget", "9", 0)
         << QApplication::translate("Widget", "10", 0)
         << QApplication::translate("Widget", "11", 0)
         << QApplication::translate("Widget", "12", 0)
         << QApplication::translate("Widget", "13", 0)
         << QApplication::translate("Widget", "14", 0)
         << QApplication::translate("Widget", "15", 0)
         << QApplication::translate("Widget", "16", 0)
         << QApplication::translate("Widget", "17", 0)
         << QApplication::translate("Widget", "18", 0)
         << QApplication::translate("Widget", "19", 0)
         << QApplication::translate("Widget", "20", 0)
         << QApplication::translate("Widget", "21", 0)
         << QApplication::translate("Widget", "22", 0)
        );
#ifndef QT_NO_TOOLTIP
        boldTBtn->setToolTip(QApplication::translate("Widget", "\345\212\240\347\262\227", 0));
#endif // QT_NO_TOOLTIP
        boldTBtn->setText(QApplication::translate("Widget", "...", 0));
#ifndef QT_NO_TOOLTIP
        italicTBtn->setToolTip(QApplication::translate("Widget", "\345\200\276\346\226\234", 0));
#endif // QT_NO_TOOLTIP
        italicTBtn->setText(QApplication::translate("Widget", "...", 0));
#ifndef QT_NO_TOOLTIP
        underlineTbtn->setToolTip(QApplication::translate("Widget", "\344\270\213\345\210\222\347\272\277", 0));
#endif // QT_NO_TOOLTIP
        underlineTbtn->setText(QApplication::translate("Widget", "...", 0));
#ifndef QT_NO_TOOLTIP
        colorTbtn->setToolTip(QApplication::translate("Widget", "\346\224\271\351\242\234\350\211\262", 0));
#endif // QT_NO_TOOLTIP
        colorTbtn->setText(QApplication::translate("Widget", "...", 0));
#ifndef QT_NO_TOOLTIP
        saveTBtn->setToolTip(QApplication::translate("Widget", "\344\277\235\345\255\230\350\256\260\345\275\225", 0));
#endif // QT_NO_TOOLTIP
        saveTBtn->setText(QApplication::translate("Widget", "...", 0));
#ifndef QT_NO_TOOLTIP
        clearTBtn->setToolTip(QApplication::translate("Widget", "\346\270\205\347\251\272", 0));
#endif // QT_NO_TOOLTIP
        clearTBtn->setText(QApplication::translate("Widget", "...", 0));
        QTableWidgetItem *___qtablewidgetitem = usrTblWidget->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QApplication::translate("Widget", "\347\224\250\346\210\267\345\220\215", 0));
        sendBtn->setText(QApplication::translate("Widget", "\345\217\221\351\200\201", 0));
        sendBtn->setShortcut(QApplication::translate("Widget", "Ctrl+Return", 0));
        usrNumLbl->setText(QApplication::translate("Widget", "\345\234\250\347\272\277\347\224\250\346\210\267\357\274\2320\344\272\272", 0));
        exitBtn->setText(QApplication::translate("Widget", "\351\200\200\345\207\272", 0));
        exitBtn->setShortcut(QApplication::translate("Widget", "Ctrl+Q", 0));
    } // retranslateUi

};

namespace Ui {
    class Widget: public Ui_Widget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WIDGET_H
