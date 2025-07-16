/********************************************************************************
** Form generated from reading UI file 'querywindow.ui'
**
** Created by: Qt User Interface Compiler version 6.9.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QUERYWINDOW_H
#define UI_QUERYWINDOW_H

#include <QtCore/QDate>
#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDateEdit>
#include <QtWidgets/QLabel>
#include <QtWidgets/QListView>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_QueryWindow
{
public:
    QWidget *centralwidget;
    QListView *listView;
    QLabel *label;
    QLabel *label_2;
    QTextEdit *textEdit;
    QLabel *label_3;
    QTextEdit *textEdit_2;
    QLabel *label_4;
    QDateEdit *dateEdit;
    QRadioButton *radioButton;
    QRadioButton *radioButton_2;
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *QueryWindow)
    {
        if (QueryWindow->objectName().isEmpty())
            QueryWindow->setObjectName("QueryWindow");
        QueryWindow->resize(800, 600);
        centralwidget = new QWidget(QueryWindow);
        centralwidget->setObjectName("centralwidget");
        listView = new QListView(centralwidget);
        listView->setObjectName("listView");
        listView->setGeometry(QRect(0, -90, 801, 661));
        listView->setStyleSheet(QString::fromUtf8("background-image:url(\"C:/Users/11245/Documents/Web/background_image/1.jpg\")"));
        label = new QLabel(centralwidget);
        label->setObjectName("label");
        label->setGeometry(QRect(320, 20, 181, 51));
        QFont font;
        font.setFamilies({QString::fromUtf8("Arial")});
        font.setPointSize(24);
        font.setBold(true);
        label->setFont(font);
        label_2 = new QLabel(centralwidget);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(230, 120, 81, 31));
        QFont font1;
        font1.setFamilies({QString::fromUtf8("Arial")});
        font1.setPointSize(12);
        label_2->setFont(font1);
        textEdit = new QTextEdit(centralwidget);
        textEdit->setObjectName("textEdit");
        textEdit->setGeometry(QRect(340, 120, 201, 31));
        textEdit->setStyleSheet(QString::fromUtf8("background-color:rgb(221,221,221)"));
        label_3 = new QLabel(centralwidget);
        label_3->setObjectName("label_3");
        label_3->setGeometry(QRect(230, 210, 81, 31));
        label_3->setFont(font1);
        textEdit_2 = new QTextEdit(centralwidget);
        textEdit_2->setObjectName("textEdit_2");
        textEdit_2->setGeometry(QRect(340, 210, 201, 31));
        textEdit_2->setStyleSheet(QString::fromUtf8("background-color:rgb(221,221,221)"));
        label_4 = new QLabel(centralwidget);
        label_4->setObjectName("label_4");
        label_4->setGeometry(QRect(230, 300, 81, 31));
        label_4->setFont(font1);
        dateEdit = new QDateEdit(centralwidget);
        dateEdit->setObjectName("dateEdit");
        dateEdit->setGeometry(QRect(340, 300, 201, 31));
        dateEdit->setStyleSheet(QString::fromUtf8("background-color:rgb(221,221,221)"));
        dateEdit->setDateTime(QDateTime(QDate(2020, 1, 6), QTime(0, 0, 0)));
        dateEdit->setTime(QTime(0, 0, 0));
        dateEdit->setMaximumDateTime(QDateTime(QDate(2020, 12, 31), QTime(23, 59, 59)));
        dateEdit->setMinimumDateTime(QDateTime(QDate(2020, 1, 6), QTime(0, 0, 0)));
        dateEdit->setMinimumDate(QDate(2020, 1, 6));
        dateEdit->setCalendarPopup(true);
        radioButton = new QRadioButton(centralwidget);
        radioButton->setObjectName("radioButton");
        radioButton->setGeometry(QRect(240, 400, 110, 19));
        QFont font2;
        font2.setFamilies({QString::fromUtf8("Arial")});
        font2.setPointSize(11);
        font2.setBold(true);
        radioButton->setFont(font2);
        radioButton->setStyleSheet(QString::fromUtf8("color:rgb(221,221,221)"));
        radioButton->setChecked(true);
        radioButton_2 = new QRadioButton(centralwidget);
        radioButton_2->setObjectName("radioButton_2");
        radioButton_2->setGeometry(QRect(440, 400, 110, 19));
        QFont font3;
        font3.setFamilies({QString::fromUtf8("Arial")});
        font3.setPointSize(10);
        font3.setBold(true);
        radioButton_2->setFont(font3);
        radioButton_2->setStyleSheet(QString::fromUtf8("color:rgb(221,221,221)"));
        pushButton = new QPushButton(centralwidget);
        pushButton->setObjectName("pushButton");
        pushButton->setGeometry(QRect(440, 470, 101, 31));
        QFont font4;
        font4.setFamilies({QString::fromUtf8("Arial")});
        font4.setPointSize(12);
        font4.setBold(true);
        pushButton->setFont(font4);
        pushButton->setStyleSheet(QString::fromUtf8("background-color:rgb(221,221,221)"));
        pushButton_2 = new QPushButton(centralwidget);
        pushButton_2->setObjectName("pushButton_2");
        pushButton_2->setGeometry(QRect(260, 470, 101, 31));
        pushButton_2->setFont(font4);
        pushButton_2->setStyleSheet(QString::fromUtf8("background-color:rgb(221,221,221)"));
        QueryWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(QueryWindow);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 800, 26));
        QueryWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(QueryWindow);
        statusbar->setObjectName("statusbar");
        QueryWindow->setStatusBar(statusbar);

        retranslateUi(QueryWindow);

        QMetaObject::connectSlotsByName(QueryWindow);
    } // setupUi

    void retranslateUi(QMainWindow *QueryWindow)
    {
        QueryWindow->setWindowTitle(QCoreApplication::translate("QueryWindow", "MainWindow", nullptr));
        label->setText(QCoreApplication::translate("QueryWindow", "\346\234\272\347\245\250\350\256\242\350\264\255", nullptr));
        label_2->setText(QCoreApplication::translate("QueryWindow", "\345\207\272\345\217\221\345\237\216\345\270\202", nullptr));
        textEdit->setPlaceholderText(QCoreApplication::translate("QueryWindow", "\351\225\277\346\262\231", nullptr));
        label_3->setText(QCoreApplication::translate("QueryWindow", "\345\210\260\350\276\276\345\237\216\345\270\202", nullptr));
        textEdit_2->setPlaceholderText(QCoreApplication::translate("QueryWindow", "\345\215\227\344\272\254", nullptr));
        label_4->setText(QCoreApplication::translate("QueryWindow", "\345\207\272\345\217\221\346\227\245\346\234\237", nullptr));
        radioButton->setText(QCoreApplication::translate("QueryWindow", "\346\227\266\351\227\264\346\234\200\347\237\255", nullptr));
        radioButton_2->setText(QCoreApplication::translate("QueryWindow", "\350\264\271\347\224\250\346\234\200\345\260\221", nullptr));
        pushButton->setText(QCoreApplication::translate("QueryWindow", "\350\210\252\347\217\255\346\237\245\350\257\242", nullptr));
        pushButton_2->setText(QCoreApplication::translate("QueryWindow", "\350\277\224\345\233\236\351\246\226\351\241\265", nullptr));
    } // retranslateUi

};

namespace Ui {
    class QueryWindow: public Ui_QueryWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QUERYWINDOW_H
