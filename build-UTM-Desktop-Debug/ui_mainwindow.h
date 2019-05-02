/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.12.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QComboBox *CB_selectTM;
    QPushButton *BTN_LoadFile;
    QWidget *layoutWidget;
    QHBoxLayout *horizontalLayout_5;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QLabel *LBL_startStatus;
    QLineEdit *LE_startStatus;
    QHBoxLayout *horizontalLayout_2;
    QLabel *LBL_finalStatus;
    QLineEdit *LE_finalStatus;
    QHBoxLayout *horizontalLayout_3;
    QLabel *LBL_inputString;
    QLineEdit *LE_inputString;
    QHBoxLayout *horizontalLayout_4;
    QVBoxLayout *verticalLayout_2;
    QPushButton *BTN_LoadString;
    QPushButton *BTN_RESET;
    QPushButton *BTN_NextStep;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(1084, 743);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        CB_selectTM = new QComboBox(centralWidget);
        CB_selectTM->setObjectName(QString::fromUtf8("CB_selectTM"));
        CB_selectTM->setGeometry(QRect(70, 50, 151, 34));
        CB_selectTM->setEditable(true);
        BTN_LoadFile = new QPushButton(centralWidget);
        BTN_LoadFile->setObjectName(QString::fromUtf8("BTN_LoadFile"));
        BTN_LoadFile->setGeometry(QRect(310, 50, 115, 40));
        QFont font;
        font.setBold(true);
        font.setItalic(false);
        font.setWeight(75);
        BTN_LoadFile->setFont(font);
        layoutWidget = new QWidget(centralWidget);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutWidget->setGeometry(QRect(60, 190, 731, 211));
        horizontalLayout_5 = new QHBoxLayout(layoutWidget);
        horizontalLayout_5->setSpacing(6);
        horizontalLayout_5->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_5->setObjectName(QString::fromUtf8("horizontalLayout_5"));
        horizontalLayout_5->setContentsMargins(0, 0, 0, 0);
        verticalLayout = new QVBoxLayout();
        verticalLayout->setSpacing(6);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        LBL_startStatus = new QLabel(layoutWidget);
        LBL_startStatus->setObjectName(QString::fromUtf8("LBL_startStatus"));
        QFont font1;
        font1.setFamily(QString::fromUtf8("Consolas"));
        font1.setPointSize(12);
        font1.setBold(true);
        font1.setWeight(75);
        LBL_startStatus->setFont(font1);

        horizontalLayout->addWidget(LBL_startStatus);

        LE_startStatus = new QLineEdit(layoutWidget);
        LE_startStatus->setObjectName(QString::fromUtf8("LE_startStatus"));
        LE_startStatus->setReadOnly(true);

        horizontalLayout->addWidget(LE_startStatus);


        verticalLayout->addLayout(horizontalLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        LBL_finalStatus = new QLabel(layoutWidget);
        LBL_finalStatus->setObjectName(QString::fromUtf8("LBL_finalStatus"));
        LBL_finalStatus->setFont(font1);

        horizontalLayout_2->addWidget(LBL_finalStatus);

        LE_finalStatus = new QLineEdit(layoutWidget);
        LE_finalStatus->setObjectName(QString::fromUtf8("LE_finalStatus"));
        LE_finalStatus->setReadOnly(true);

        horizontalLayout_2->addWidget(LE_finalStatus);


        verticalLayout->addLayout(horizontalLayout_2);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setSpacing(6);
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        LBL_inputString = new QLabel(layoutWidget);
        LBL_inputString->setObjectName(QString::fromUtf8("LBL_inputString"));
        LBL_inputString->setFont(font1);

        horizontalLayout_3->addWidget(LBL_inputString);

        LE_inputString = new QLineEdit(layoutWidget);
        LE_inputString->setObjectName(QString::fromUtf8("LE_inputString"));

        horizontalLayout_3->addWidget(LE_inputString);


        verticalLayout->addLayout(horizontalLayout_3);


        horizontalLayout_5->addLayout(verticalLayout);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setSpacing(6);
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setSpacing(6);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        BTN_LoadString = new QPushButton(layoutWidget);
        BTN_LoadString->setObjectName(QString::fromUtf8("BTN_LoadString"));

        verticalLayout_2->addWidget(BTN_LoadString);

        BTN_RESET = new QPushButton(layoutWidget);
        BTN_RESET->setObjectName(QString::fromUtf8("BTN_RESET"));
        BTN_RESET->setFlat(false);

        verticalLayout_2->addWidget(BTN_RESET);


        horizontalLayout_4->addLayout(verticalLayout_2);

        BTN_NextStep = new QPushButton(layoutWidget);
        BTN_NextStep->setObjectName(QString::fromUtf8("BTN_NextStep"));

        horizontalLayout_4->addWidget(BTN_NextStep);


        horizontalLayout_5->addLayout(horizontalLayout_4);

        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QString::fromUtf8("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 1084, 36));
        MainWindow->setMenuBar(menuBar);
        mainToolBar = new QToolBar(MainWindow);
        mainToolBar->setObjectName(QString::fromUtf8("mainToolBar"));
        MainWindow->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QString::fromUtf8("statusBar"));
        MainWindow->setStatusBar(statusBar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", nullptr));
        CB_selectTM->setCurrentText(QString());
        BTN_LoadFile->setText(QApplication::translate("MainWindow", "LoadFile", nullptr));
        LBL_startStatus->setText(QApplication::translate("MainWindow", "start status", nullptr));
        LBL_finalStatus->setText(QApplication::translate("MainWindow", "final status", nullptr));
        LBL_inputString->setText(QApplication::translate("MainWindow", "input string", nullptr));
        BTN_LoadString->setText(QApplication::translate("MainWindow", "LOAD STRING", nullptr));
        BTN_RESET->setText(QApplication::translate("MainWindow", "RESET INPUT", nullptr));
        BTN_NextStep->setText(QApplication::translate("MainWindow", "NEXT STEP", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
