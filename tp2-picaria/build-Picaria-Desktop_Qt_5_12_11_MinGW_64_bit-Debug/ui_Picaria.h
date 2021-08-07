/********************************************************************************
** Form generated from reading UI file 'Picaria.ui'
**
** Created by: Qt User Interface Compiler version 5.12.11
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PICARIA_H
#define UI_PICARIA_H

#include <Hole.h>
#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Picaria
{
public:
    QAction *actionNew;
    QAction *actionQuit;
    QAction *actionAbout;
    QAction *action9_holes;
    QAction *action13_holes;
    QWidget *centralwidget;
    Hole *hole00;
    Hole *hole01;
    Hole *hole02;
    Hole *hole10;
    Hole *hole11;
    Hole *hole12;
    Hole *hole20;
    Hole *hole21;
    Hole *hole22;
    QMenuBar *menubar;
    QMenu *menuJogo;
    QMenu *menuSobre;
    QMenu *menuModo;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *Picaria)
    {
        if (Picaria->objectName().isEmpty())
            Picaria->setObjectName(QString::fromUtf8("Picaria"));
        Picaria->setMinimumSize(QSize(500, 500));
        Picaria->setMaximumSize(QSize(500, 550));
        Picaria->setAutoFillBackground(false);
        Picaria->setStyleSheet(QString::fromUtf8(""));
        actionNew = new QAction(Picaria);
        actionNew->setObjectName(QString::fromUtf8("actionNew"));
        actionQuit = new QAction(Picaria);
        actionQuit->setObjectName(QString::fromUtf8("actionQuit"));
        actionAbout = new QAction(Picaria);
        actionAbout->setObjectName(QString::fromUtf8("actionAbout"));
        action9_holes = new QAction(Picaria);
        action9_holes->setObjectName(QString::fromUtf8("action9_holes"));
        action13_holes = new QAction(Picaria);
        action13_holes->setObjectName(QString::fromUtf8("action13_holes"));
        centralwidget = new QWidget(Picaria);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(centralwidget->sizePolicy().hasHeightForWidth());
        centralwidget->setSizePolicy(sizePolicy);
        centralwidget->setMinimumSize(QSize(500, 500));
        centralwidget->setMaximumSize(QSize(500, 500));
        centralwidget->setToolTipDuration(0);
        centralwidget->setAutoFillBackground(false);
        centralwidget->setStyleSheet(QString::fromUtf8("#centralwidget {background: url(':/grid');}"));
        hole00 = new Hole(centralwidget);
        hole00->setObjectName(QString::fromUtf8("hole00"));
        hole00->setGeometry(QRect(0, 0, 100, 100));
        hole00->setMinimumSize(QSize(100, 100));
        hole00->setMaximumSize(QSize(100, 100));
        hole00->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"	border: none;\n"
"	outline: none;\n"
"}"));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/empty"), QSize(), QIcon::Normal, QIcon::Off);
        hole00->setIcon(icon);
        hole00->setIconSize(QSize(50, 50));
        hole00->setFlat(true);
        hole00->setProperty("row", QVariant(0));
        hole00->setProperty("col", QVariant(0));
        hole01 = new Hole(centralwidget);
        hole01->setObjectName(QString::fromUtf8("hole01"));
        hole01->setGeometry(QRect(200, 0, 100, 100));
        hole01->setMinimumSize(QSize(100, 100));
        hole01->setMaximumSize(QSize(100, 100));
        hole01->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"	border: none;\n"
"	outline: none;\n"
"}"));
        hole01->setIcon(icon);
        hole01->setIconSize(QSize(50, 50));
        hole01->setFlat(true);
        hole01->setProperty("row", QVariant(0));
        hole01->setProperty("col", QVariant(1));
        hole02 = new Hole(centralwidget);
        hole02->setObjectName(QString::fromUtf8("hole02"));
        hole02->setGeometry(QRect(400, 0, 100, 100));
        hole02->setMinimumSize(QSize(100, 100));
        hole02->setMaximumSize(QSize(100, 100));
        hole02->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"	border: none;\n"
"	outline: none;\n"
"}"));
        hole02->setIcon(icon);
        hole02->setIconSize(QSize(50, 50));
        hole02->setFlat(true);
        hole02->setProperty("row", QVariant(0));
        hole02->setProperty("col", QVariant(2));
        hole10 = new Hole(centralwidget);
        hole10->setObjectName(QString::fromUtf8("hole10"));
        hole10->setGeometry(QRect(0, 200, 100, 100));
        hole10->setMinimumSize(QSize(100, 100));
        hole10->setMaximumSize(QSize(100, 100));
        hole10->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"	border: none;\n"
"	outline: none;\n"
"}"));
        hole10->setIcon(icon);
        hole10->setIconSize(QSize(50, 50));
        hole10->setFlat(true);
        hole10->setProperty("row", QVariant(1));
        hole10->setProperty("col", QVariant(0));
        hole11 = new Hole(centralwidget);
        hole11->setObjectName(QString::fromUtf8("hole11"));
        hole11->setGeometry(QRect(200, 200, 100, 100));
        hole11->setMinimumSize(QSize(100, 100));
        hole11->setMaximumSize(QSize(100, 100));
        hole11->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"	border: none;\n"
"	outline: none;\n"
"}"));
        hole11->setIcon(icon);
        hole11->setIconSize(QSize(50, 50));
        hole11->setFlat(true);
        hole11->setProperty("row", QVariant(1));
        hole11->setProperty("col", QVariant(1));
        hole12 = new Hole(centralwidget);
        hole12->setObjectName(QString::fromUtf8("hole12"));
        hole12->setGeometry(QRect(400, 200, 100, 100));
        hole12->setMinimumSize(QSize(100, 100));
        hole12->setMaximumSize(QSize(100, 100));
        hole12->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"	border: none;\n"
"	outline: none;\n"
"}"));
        hole12->setIcon(icon);
        hole12->setIconSize(QSize(50, 50));
        hole12->setFlat(true);
        hole12->setProperty("row", QVariant(1));
        hole12->setProperty("col", QVariant(2));
        hole20 = new Hole(centralwidget);
        hole20->setObjectName(QString::fromUtf8("hole20"));
        hole20->setGeometry(QRect(0, 400, 100, 100));
        hole20->setMinimumSize(QSize(100, 100));
        hole20->setMaximumSize(QSize(100, 100));
        hole20->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"	border: none;\n"
"	outline: none;\n"
"}"));
        hole20->setIcon(icon);
        hole20->setIconSize(QSize(50, 50));
        hole20->setFlat(true);
        hole20->setProperty("row", QVariant(2));
        hole20->setProperty("col", QVariant(0));
        hole21 = new Hole(centralwidget);
        hole21->setObjectName(QString::fromUtf8("hole21"));
        hole21->setGeometry(QRect(200, 400, 100, 100));
        hole21->setMinimumSize(QSize(100, 100));
        hole21->setMaximumSize(QSize(100, 100));
        hole21->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"	border: none;\n"
"	outline: none;\n"
"}"));
        hole21->setIcon(icon);
        hole21->setIconSize(QSize(50, 50));
        hole21->setFlat(true);
        hole21->setProperty("row", QVariant(2));
        hole21->setProperty("col", QVariant(1));
        hole22 = new Hole(centralwidget);
        hole22->setObjectName(QString::fromUtf8("hole22"));
        hole22->setGeometry(QRect(400, 400, 100, 100));
        hole22->setMinimumSize(QSize(100, 100));
        hole22->setMaximumSize(QSize(100, 100));
        hole22->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"	border: none;\n"
"	outline: none;\n"
"}"));
        hole22->setIcon(icon);
        hole22->setIconSize(QSize(50, 50));
        hole22->setFlat(true);
        hole22->setProperty("row", QVariant(2));
        hole22->setProperty("col", QVariant(2));
        Picaria->setCentralWidget(centralwidget);
        menubar = new QMenuBar(Picaria);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 500, 25));
        menuJogo = new QMenu(menubar);
        menuJogo->setObjectName(QString::fromUtf8("menuJogo"));
        menuSobre = new QMenu(menubar);
        menuSobre->setObjectName(QString::fromUtf8("menuSobre"));
        menuModo = new QMenu(menubar);
        menuModo->setObjectName(QString::fromUtf8("menuModo"));
        Picaria->setMenuBar(menubar);
        statusbar = new QStatusBar(Picaria);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        Picaria->setStatusBar(statusbar);

        menubar->addAction(menuJogo->menuAction());
        menubar->addAction(menuModo->menuAction());
        menubar->addAction(menuSobre->menuAction());
        menuJogo->addAction(actionNew);
        menuJogo->addAction(actionQuit);
        menuSobre->addAction(actionAbout);
        menuModo->addAction(action9_holes);
        menuModo->addAction(action13_holes);

        retranslateUi(Picaria);

        QMetaObject::connectSlotsByName(Picaria);
    } // setupUi

    void retranslateUi(QMainWindow *Picaria)
    {
        Picaria->setWindowTitle(QApplication::translate("Picaria", "Picaria", nullptr));
        actionNew->setText(QApplication::translate("Picaria", "Novo", nullptr));
        actionQuit->setText(QApplication::translate("Picaria", "Sair", nullptr));
        actionAbout->setText(QApplication::translate("Picaria", "Ajuda", nullptr));
        action9_holes->setText(QApplication::translate("Picaria", "9 Buracos", nullptr));
        action13_holes->setText(QApplication::translate("Picaria", "13 Buracos", nullptr));
        menuJogo->setTitle(QApplication::translate("Picaria", "Jogo", nullptr));
        menuSobre->setTitle(QApplication::translate("Picaria", "Sobre", nullptr));
        menuModo->setTitle(QApplication::translate("Picaria", "Modo", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Picaria: public Ui_Picaria {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PICARIA_H
