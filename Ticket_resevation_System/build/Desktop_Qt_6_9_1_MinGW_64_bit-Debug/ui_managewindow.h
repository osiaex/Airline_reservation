/********************************************************************************
** Form generated from reading UI file 'managewindow.ui'
**
** Created by: Qt User Interface Compiler version 6.9.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MANAGEWINDOW_H
#define UI_MANAGEWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QListView>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTableView>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ManageWindow
{
public:
    QWidget *centralwidget;
    QListView *listView;
    QLabel *label;
    QPushButton *pushButton;
    QPushButton *pushButton_4;
    QTableView *tableView;
    QPushButton *pushButton_5;
    QLabel *label_3;
    QLineEdit *lineEdit_2;
    QLabel *label_4;
    QLineEdit *start;
    QLabel *label_5;
    QLineEdit *end;
    QPushButton *pushButton_6;
    QPushButton *pushButton_7;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *ManageWindow)
    {
        if (ManageWindow->objectName().isEmpty())
            ManageWindow->setObjectName("ManageWindow");
        ManageWindow->resize(800, 600);
        ManageWindow->setStyleSheet(QString::fromUtf8(""));
        centralwidget = new QWidget(ManageWindow);
        centralwidget->setObjectName("centralwidget");
        listView = new QListView(centralwidget);
        listView->setObjectName("listView");
        listView->setGeometry(QRect(0, -90, 821, 671));
        listView->setStyleSheet(QString::fromUtf8("background-image:url(\"C:/Users/11245/Documents/Web/background_image/1.jpg\");\n"
"color:rgb(0,0,0)"));
        label = new QLabel(centralwidget);
        label->setObjectName("label");
        label->setGeometry(QRect(320, 30, 181, 41));
        QFont font;
        font.setFamilies({QString::fromUtf8("Arial")});
        font.setPointSize(24);
        font.setBold(true);
        label->setFont(font);
        pushButton = new QPushButton(centralwidget);
        pushButton->setObjectName("pushButton");
        pushButton->setGeometry(QRect(50, 320, 81, 28));
        QFont font1;
        font1.setFamilies({QString::fromUtf8("Arial")});
        font1.setPointSize(10);
        font1.setBold(true);
        pushButton->setFont(font1);
        pushButton->setStyleSheet(QString::fromUtf8("background-color:rgb(221,221,221)"));
        pushButton_4 = new QPushButton(centralwidget);
        pushButton_4->setObjectName("pushButton_4");
        pushButton_4->setGeometry(QRect(660, 40, 93, 28));
        pushButton_4->setFont(font1);
        pushButton_4->setStyleSheet(QString::fromUtf8("background-color:rgb(221,221,221)"));
        tableView = new QTableView(centralwidget);
        tableView->setObjectName("tableView");
        tableView->setGeometry(QRect(210, 100, 561, 411));
        tableView->setStyleSheet(QString::fromUtf8("background-color:rgb(221,221,221)"));
        pushButton_5 = new QPushButton(centralwidget);
        pushButton_5->setObjectName("pushButton_5");
        pushButton_5->setGeometry(QRect(50, 390, 81, 28));
        pushButton_5->setFont(font1);
        pushButton_5->setStyleSheet(QString::fromUtf8("background-color:rgb(221,221,221)"));
        label_3 = new QLabel(centralwidget);
        label_3->setObjectName("label_3");
        label_3->setGeometry(QRect(20, 130, 72, 20));
        label_3->setFont(font1);
        label_3->setStyleSheet(QString::fromUtf8("color:rgb(221,221,221)"));
        lineEdit_2 = new QLineEdit(centralwidget);
        lineEdit_2->setObjectName("lineEdit_2");
        lineEdit_2->setGeometry(QRect(100, 130, 81, 21));
        lineEdit_2->setStyleSheet(QString::fromUtf8(""));
        label_4 = new QLabel(centralwidget);
        label_4->setObjectName("label_4");
        label_4->setGeometry(QRect(20, 190, 72, 20));
        label_4->setFont(font1);
        label_4->setStyleSheet(QString::fromUtf8("color:rgb(221,221,221)"));
        start = new QLineEdit(centralwidget);
        start->setObjectName("start");
        start->setGeometry(QRect(100, 190, 81, 21));
        start->setStyleSheet(QString::fromUtf8(""));
        label_5 = new QLabel(centralwidget);
        label_5->setObjectName("label_5");
        label_5->setGeometry(QRect(20, 250, 72, 20));
        label_5->setFont(font1);
        label_5->setStyleSheet(QString::fromUtf8("color:rgb(221,221,221)"));
        end = new QLineEdit(centralwidget);
        end->setObjectName("end");
        end->setGeometry(QRect(100, 250, 81, 21));
        end->setStyleSheet(QString::fromUtf8(""));
        pushButton_6 = new QPushButton(centralwidget);
        pushButton_6->setObjectName("pushButton_6");
        pushButton_6->setGeometry(QRect(50, 450, 81, 28));
        pushButton_6->setFont(font1);
        pushButton_6->setStyleSheet(QString::fromUtf8(""));
        pushButton_7 = new QPushButton(centralwidget);
        pushButton_7->setObjectName("pushButton_7");
        pushButton_7->setGeometry(QRect(50, 510, 81, 28));
        pushButton_7->setFont(font1);
        pushButton_7->setStyleSheet(QString::fromUtf8(""));
        ManageWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(ManageWindow);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 800, 26));
        ManageWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(ManageWindow);
        statusbar->setObjectName("statusbar");
        ManageWindow->setStatusBar(statusbar);

        retranslateUi(ManageWindow);

        QMetaObject::connectSlotsByName(ManageWindow);
    } // setupUi

    void retranslateUi(QMainWindow *ManageWindow)
    {
        ManageWindow->setWindowTitle(QCoreApplication::translate("ManageWindow", "MainWindow", nullptr));
        label->setText(QCoreApplication::translate("ManageWindow", "\350\210\252\347\217\255\347\256\241\347\220\206", nullptr));
        pushButton->setText(QCoreApplication::translate("ManageWindow", "\346\267\273\345\212\240\350\210\252\347\217\255", nullptr));
        pushButton_4->setText(QCoreApplication::translate("ManageWindow", "\350\277\224\345\233\236\351\246\226\351\241\265", nullptr));
        pushButton_5->setText(QCoreApplication::translate("ManageWindow", "\345\210\240\351\231\244\350\210\252\347\217\255", nullptr));
        label_3->setText(QCoreApplication::translate("ManageWindow", "\350\210\252\347\217\255\345\217\267\357\274\232", nullptr));
        label_4->setText(QCoreApplication::translate("ManageWindow", "\350\265\267\347\202\271\357\274\232", nullptr));
        label_5->setText(QCoreApplication::translate("ManageWindow", "\347\273\210\347\202\271\357\274\232", nullptr));
        pushButton_6->setText(QCoreApplication::translate("ManageWindow", "\350\210\252\347\217\255\346\233\264\346\226\260", nullptr));
        pushButton_7->setText(QCoreApplication::translate("ManageWindow", "\346\211\223\345\215\260\351\223\276\350\241\250", nullptr));
    } // retranslateUi

};

namespace Ui {
    class ManageWindow: public Ui_ManageWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MANAGEWINDOW_H
