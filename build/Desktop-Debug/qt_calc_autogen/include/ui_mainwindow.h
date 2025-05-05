/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.15.15
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QVBoxLayout *verticalLayout;
    QLineEdit *display;
    QGridLayout *gridLayout;
    QPushButton *btnClear;
    QPushButton *btnBackspace;
    QPushButton *btnDivide;
    QPushButton *btnMultiply;
    QPushButton *btn7;
    QPushButton *btn8;
    QPushButton *btn9;
    QPushButton *btnMinus;
    QPushButton *btn4;
    QPushButton *btn5;
    QPushButton *btn6;
    QPushButton *btnPlus;
    QPushButton *btn1;
    QPushButton *btn2;
    QPushButton *btn3;
    QPushButton *btnEquals;
    QPushButton *btn0;
    QPushButton *btnDot;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(320, 520);
        MainWindow->setMinimumSize(QSize(320, 520));
        MainWindow->setMaximumSize(QSize(320, 520));
        MainWindow->setStyleSheet(QString::fromUtf8("QMainWindow {\n"
"    background-color: #000000;\n"
"}\n"
"QWidget#centralwidget {\n"
"    background-color: #000000;\n"
"}\n"
"QLineEdit {\n"
"    background-color: #000000;\n"
"    color: white;\n"
"    border: none;\n"
"    padding: 20px;\n"
"    font-size: 48px;\n"
"    font-family: -apple-system, BlinkMacSystemFont, 'SF Pro Text', Arial;\n"
"    font-weight: 300;\n"
"}\n"
"QPushButton {\n"
"    background-color: #333333;\n"
"    color: white;\n"
"    border: none;\n"
"    border-radius: 50%;\n"
"    font-size: 24px;\n"
"    font-family: -apple-system, BlinkMacSystemFont, 'SF Pro Text', Arial;\n"
"    min-width: 65px;\n"
"    min-height: 65px;\n"
"    margin: 4px;\n"
"}\n"
"QPushButton:hover {\n"
"    background-color: #4d4d4d;\n"
"}\n"
"QPushButton:pressed {\n"
"    background-color: #666666;\n"
"}\n"
"QPushButton#btnClear, QPushButton#btnBackspace {\n"
"    background-color: #a5a5a5;\n"
"    color: #000000;\n"
"}\n"
"QPushButton#btnClear:hover, QPushButton#btnBackspace:hover {\n"
"    background-color: #"
                        "d4d4d4;\n"
"}\n"
"QPushButton#btnDivide, QPushButton#btnMultiply, QPushButton#btnMinus, QPushButton#btnPlus {\n"
"    background-color: #ff9f0a;\n"
"    color: white;\n"
"}\n"
"QPushButton#btnDivide:hover, QPushButton#btnMultiply:hover, QPushButton#btnMinus:hover, QPushButton#btnPlus:hover {\n"
"    background-color: #ffb340;\n"
"}\n"
"QPushButton#btnEquals {\n"
"    background-color: #ff9f0a;\n"
"    color: white;\n"
"}\n"
"QPushButton#btnEquals:hover {\n"
"    background-color: #ffb340;\n"
"}"));
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        verticalLayout = new QVBoxLayout(centralwidget);
        verticalLayout->setSpacing(15);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(15, 15, 15, 15);
        display = new QLineEdit(centralwidget);
        display->setObjectName(QString::fromUtf8("display"));
        display->setReadOnly(true);
        display->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        verticalLayout->addWidget(display);

        gridLayout = new QGridLayout();
        gridLayout->setSpacing(10);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        btnClear = new QPushButton(centralwidget);
        btnClear->setObjectName(QString::fromUtf8("btnClear"));

        gridLayout->addWidget(btnClear, 0, 0, 1, 1);

        btnBackspace = new QPushButton(centralwidget);
        btnBackspace->setObjectName(QString::fromUtf8("btnBackspace"));

        gridLayout->addWidget(btnBackspace, 0, 1, 1, 1);

        btnDivide = new QPushButton(centralwidget);
        btnDivide->setObjectName(QString::fromUtf8("btnDivide"));

        gridLayout->addWidget(btnDivide, 0, 2, 1, 1);

        btnMultiply = new QPushButton(centralwidget);
        btnMultiply->setObjectName(QString::fromUtf8("btnMultiply"));

        gridLayout->addWidget(btnMultiply, 0, 3, 1, 1);

        btn7 = new QPushButton(centralwidget);
        btn7->setObjectName(QString::fromUtf8("btn7"));

        gridLayout->addWidget(btn7, 1, 0, 1, 1);

        btn8 = new QPushButton(centralwidget);
        btn8->setObjectName(QString::fromUtf8("btn8"));

        gridLayout->addWidget(btn8, 1, 1, 1, 1);

        btn9 = new QPushButton(centralwidget);
        btn9->setObjectName(QString::fromUtf8("btn9"));

        gridLayout->addWidget(btn9, 1, 2, 1, 1);

        btnMinus = new QPushButton(centralwidget);
        btnMinus->setObjectName(QString::fromUtf8("btnMinus"));

        gridLayout->addWidget(btnMinus, 1, 3, 1, 1);

        btn4 = new QPushButton(centralwidget);
        btn4->setObjectName(QString::fromUtf8("btn4"));

        gridLayout->addWidget(btn4, 2, 0, 1, 1);

        btn5 = new QPushButton(centralwidget);
        btn5->setObjectName(QString::fromUtf8("btn5"));

        gridLayout->addWidget(btn5, 2, 1, 1, 1);

        btn6 = new QPushButton(centralwidget);
        btn6->setObjectName(QString::fromUtf8("btn6"));

        gridLayout->addWidget(btn6, 2, 2, 1, 1);

        btnPlus = new QPushButton(centralwidget);
        btnPlus->setObjectName(QString::fromUtf8("btnPlus"));

        gridLayout->addWidget(btnPlus, 2, 3, 1, 1);

        btn1 = new QPushButton(centralwidget);
        btn1->setObjectName(QString::fromUtf8("btn1"));

        gridLayout->addWidget(btn1, 3, 0, 1, 1);

        btn2 = new QPushButton(centralwidget);
        btn2->setObjectName(QString::fromUtf8("btn2"));

        gridLayout->addWidget(btn2, 3, 1, 1, 1);

        btn3 = new QPushButton(centralwidget);
        btn3->setObjectName(QString::fromUtf8("btn3"));

        gridLayout->addWidget(btn3, 3, 2, 1, 1);

        btnEquals = new QPushButton(centralwidget);
        btnEquals->setObjectName(QString::fromUtf8("btnEquals"));
        btnEquals->setCursor(QCursor(Qt::PointingHandCursor));

        gridLayout->addWidget(btnEquals, 3, 3, 2, 1);

        btn0 = new QPushButton(centralwidget);
        btn0->setObjectName(QString::fromUtf8("btn0"));

        gridLayout->addWidget(btn0, 4, 0, 1, 2);

        btnDot = new QPushButton(centralwidget);
        btnDot->setObjectName(QString::fromUtf8("btnDot"));

        gridLayout->addWidget(btnDot, 4, 2, 1, 1);


        verticalLayout->addLayout(gridLayout);

        MainWindow->setCentralWidget(centralwidget);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "Calculator", nullptr));
        btnClear->setText(QCoreApplication::translate("MainWindow", "C", nullptr));
        btnBackspace->setText(QCoreApplication::translate("MainWindow", "\342\214\253", nullptr));
        btnDivide->setText(QCoreApplication::translate("MainWindow", "\303\267", nullptr));
        btnMultiply->setText(QCoreApplication::translate("MainWindow", "\303\227", nullptr));
        btn7->setText(QCoreApplication::translate("MainWindow", "7", nullptr));
        btn8->setText(QCoreApplication::translate("MainWindow", "8", nullptr));
        btn9->setText(QCoreApplication::translate("MainWindow", "9", nullptr));
        btnMinus->setText(QCoreApplication::translate("MainWindow", "-", nullptr));
        btn4->setText(QCoreApplication::translate("MainWindow", "4", nullptr));
        btn5->setText(QCoreApplication::translate("MainWindow", "5", nullptr));
        btn6->setText(QCoreApplication::translate("MainWindow", "6", nullptr));
        btnPlus->setText(QCoreApplication::translate("MainWindow", "+", nullptr));
        btn1->setText(QCoreApplication::translate("MainWindow", "1", nullptr));
        btn2->setText(QCoreApplication::translate("MainWindow", "2", nullptr));
        btn3->setText(QCoreApplication::translate("MainWindow", "3", nullptr));
        btnEquals->setText(QCoreApplication::translate("MainWindow", "=", nullptr));
        btn0->setText(QCoreApplication::translate("MainWindow", "0", nullptr));
        btnDot->setText(QCoreApplication::translate("MainWindow", ".", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
