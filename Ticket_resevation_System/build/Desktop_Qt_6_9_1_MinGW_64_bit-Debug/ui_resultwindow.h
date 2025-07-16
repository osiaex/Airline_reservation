/********************************************************************************
** Form generated from reading UI file 'resultwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.9.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_RESULTWINDOW_H
#define UI_RESULTWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QListView>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTableView>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ResultWindow
{
public:
    QWidget *centralwidget;
    QListView *listView;
    QLabel *label;
    QPushButton *pushButton;
    QTableView *tableView;
    QListView *listView_2;
    QLabel *label_2;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *ResultWindow)
    {
        if (ResultWindow->objectName().isEmpty())
            ResultWindow->setObjectName("ResultWindow");
        ResultWindow->resize(800, 600);
        ResultWindow->setStyleSheet(QString::fromUtf8(""));
        centralwidget = new QWidget(ResultWindow);
        centralwidget->setObjectName("centralwidget");
        listView = new QListView(centralwidget);
        listView->setObjectName("listView");
        listView->setGeometry(QRect(-10, -100, 831, 691));
        QFont font;
        font.setFamilies({QString::fromUtf8("Arial")});
        font.setPointSize(24);
        font.setBold(true);
        listView->setFont(font);
        listView->setStyleSheet(QString::fromUtf8("background-image:url(\"C:/Users/11245/Documents/Web/background_image/1.jpg\")"));
        label = new QLabel(centralwidget);
        label->setObjectName("label");
        label->setGeometry(QRect(310, 20, 171, 61));
        label->setFont(font);
        pushButton = new QPushButton(centralwidget);
        pushButton->setObjectName("pushButton");
        pushButton->setGeometry(QRect(350, 480, 93, 41));
        QFont font1;
        font1.setFamilies({QString::fromUtf8("Arial")});
        font1.setPointSize(11);
        font1.setBold(true);
        pushButton->setFont(font1);
        pushButton->setStyleSheet(QString::fromUtf8("background-color:rgb(221,221,221)"));
        tableView = new QTableView(centralwidget);
        tableView->setObjectName("tableView");
        tableView->setGeometry(QRect(50, 90, 701, 331));
        tableView->setStyleSheet(QString::fromUtf8("background-color:rgb(221,221,221)"));
        listView_2 = new QListView(centralwidget);
        listView_2->setObjectName("listView_2");
        listView_2->setGeometry(QRect(50, 90, 701, 331));
        listView_2->setStyleSheet(QString::fromUtf8("background-color:rgb(221,221,221)"));
        label_2 = new QLabel(centralwidget);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(310, 20, 171, 61));
        label_2->setFont(font);
        ResultWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(ResultWindow);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 800, 26));
        ResultWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(ResultWindow);
        statusbar->setObjectName("statusbar");
        ResultWindow->setStatusBar(statusbar);

        retranslateUi(ResultWindow);

        QMetaObject::connectSlotsByName(ResultWindow);
    } // setupUi

    void retranslateUi(QMainWindow *ResultWindow)
    {
        ResultWindow->setWindowTitle(QCoreApplication::translate("ResultWindow", "MainWindow", nullptr));
        label->setText(QCoreApplication::translate("ResultWindow", "\346\237\245\350\257\242\347\273\223\346\236\234", nullptr));
        pushButton->setText(QCoreApplication::translate("ResultWindow", "\351\207\215\346\226\260\346\237\245\350\257\242", nullptr));
        label_2->setText(QCoreApplication::translate("ResultWindow", "\346\216\250\350\215\220\346\226\271\346\241\210", nullptr));
    } // retranslateUi

};

namespace Ui {
    class ResultWindow: public Ui_ResultWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_RESULTWINDOW_H
