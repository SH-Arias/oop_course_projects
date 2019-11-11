/********************************************************************************
** Form generated from reading UI file 'tablero.ui'
**
** Created by: Qt User Interface Compiler version 5.5.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TABLERO_H
#define UI_TABLERO_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Tablero
{
public:
    QWidget *centralWidget;
    QPushButton *pushButton;
    QPushButton *pushButton_7;
    QPushButton *pushButton_4;
    QPushButton *pushButton_8;
    QPushButton *pushButton_5;
    QPushButton *pushButton_2;
    QPushButton *pushButton_9;
    QPushButton *pushButton_6;
    QPushButton *pushButton_3;
    QLabel *letrero;
    QMenuBar *menuBar;
    QMenu *menuTriqui;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *Tablero)
    {
        if (Tablero->objectName().isEmpty())
            Tablero->setObjectName(QStringLiteral("Tablero"));
        Tablero->resize(219, 264);
        centralWidget = new QWidget(Tablero);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        pushButton = new QPushButton(centralWidget);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(30, 40, 51, 51));
        pushButton_7 = new QPushButton(centralWidget);
        pushButton_7->setObjectName(QStringLiteral("pushButton_7"));
        pushButton_7->setGeometry(QRect(30, 140, 51, 51));
        pushButton_4 = new QPushButton(centralWidget);
        pushButton_4->setObjectName(QStringLiteral("pushButton_4"));
        pushButton_4->setGeometry(QRect(30, 90, 51, 51));
        pushButton_8 = new QPushButton(centralWidget);
        pushButton_8->setObjectName(QStringLiteral("pushButton_8"));
        pushButton_8->setGeometry(QRect(80, 140, 51, 51));
        pushButton_5 = new QPushButton(centralWidget);
        pushButton_5->setObjectName(QStringLiteral("pushButton_5"));
        pushButton_5->setGeometry(QRect(80, 90, 51, 51));
        pushButton_2 = new QPushButton(centralWidget);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));
        pushButton_2->setGeometry(QRect(80, 40, 51, 51));
        pushButton_9 = new QPushButton(centralWidget);
        pushButton_9->setObjectName(QStringLiteral("pushButton_9"));
        pushButton_9->setGeometry(QRect(130, 140, 51, 51));
        pushButton_6 = new QPushButton(centralWidget);
        pushButton_6->setObjectName(QStringLiteral("pushButton_6"));
        pushButton_6->setGeometry(QRect(130, 90, 51, 51));
        pushButton_3 = new QPushButton(centralWidget);
        pushButton_3->setObjectName(QStringLiteral("pushButton_3"));
        pushButton_3->setGeometry(QRect(130, 40, 51, 51));
        letrero = new QLabel(centralWidget);
        letrero->setObjectName(QStringLiteral("letrero"));
        letrero->setGeometry(QRect(30, 10, 141, 17));
        Tablero->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(Tablero);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 219, 25));
        menuTriqui = new QMenu(menuBar);
        menuTriqui->setObjectName(QStringLiteral("menuTriqui"));
        Tablero->setMenuBar(menuBar);
        mainToolBar = new QToolBar(Tablero);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        Tablero->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(Tablero);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        Tablero->setStatusBar(statusBar);

        menuBar->addAction(menuTriqui->menuAction());

        retranslateUi(Tablero);

        QMetaObject::connectSlotsByName(Tablero);
    } // setupUi

    void retranslateUi(QMainWindow *Tablero)
    {
        Tablero->setWindowTitle(QApplication::translate("Tablero", "Tablero", 0));
        pushButton->setText(QString());
        pushButton_7->setText(QString());
        pushButton_4->setText(QString());
        pushButton_8->setText(QString());
        pushButton_5->setText(QString());
        pushButton_2->setText(QString());
        pushButton_9->setText(QString());
        pushButton_6->setText(QString());
        pushButton_3->setText(QString());
        letrero->setText(QString());
        menuTriqui->setTitle(QApplication::translate("Tablero", "Triqui", 0));
    } // retranslateUi

};

namespace Ui {
    class Tablero: public Ui_Tablero {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TABLERO_H
