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
    QAction *action9holes;
    QAction *action13holes;
    QWidget *centralwidget;
    Hole *hole01;
    Hole *hole02;
    Hole *hole03;
    Hole *hole04;
    Hole *hole05;
    Hole *hole06;
    Hole *hole07;
    Hole *hole08;
    Hole *hole09;
    Hole *hole10;
    Hole *hole11;
    Hole *hole12;
    Hole *hole13;
    QMenuBar *menubar;
    QMenu *menuJogo;
    QMenu *menuSobre;
    QMenu *menuModo;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *Picaria)
    {
        if (Picaria->objectName().isEmpty())
            Picaria->setObjectName(QString::fromUtf8("Picaria"));
        Picaria->resize(500, 550);
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
        action9holes = new QAction(Picaria);
        action9holes->setObjectName(QString::fromUtf8("action9holes"));
        action13holes = new QAction(Picaria);
        action13holes->setObjectName(QString::fromUtf8("action13holes"));
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
        hole01 = new Hole(centralwidget);
        hole01->setObjectName(QString::fromUtf8("hole01"));
        hole01->setGeometry(QRect(0, 0, 100, 100));
        hole01->setMinimumSize(QSize(100, 100));
        hole01->setMaximumSize(QSize(100, 100));
        hole01->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"	border: none;\n"
"	outline: none;\n"
"}"));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/empty"), QSize(), QIcon::Normal, QIcon::Off);
        hole01->setIcon(icon);
        hole01->setIconSize(QSize(50, 50));
        hole01->setFlat(true);
        hole01->setProperty("row", QVariant(0));
        hole01->setProperty("col", QVariant(0));
        hole02 = new Hole(centralwidget);
        hole02->setObjectName(QString::fromUtf8("hole02"));
        hole02->setGeometry(QRect(200, 0, 100, 100));
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
        hole02->setProperty("col", QVariant(1));
        hole03 = new Hole(centralwidget);
        hole03->setObjectName(QString::fromUtf8("hole03"));
        hole03->setGeometry(QRect(400, 0, 100, 100));
        hole03->setMinimumSize(QSize(100, 100));
        hole03->setMaximumSize(QSize(100, 100));
        hole03->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"	border: none;\n"
"	outline: none;\n"
"}"));
        hole03->setIcon(icon);
        hole03->setIconSize(QSize(50, 50));
        hole03->setFlat(true);
        hole03->setProperty("row", QVariant(0));
        hole03->setProperty("col", QVariant(2));
        hole04 = new Hole(centralwidget);
        hole04->setObjectName(QString::fromUtf8("hole04"));
        hole04->setGeometry(QRect(100, 100, 100, 100));
        hole04->setMinimumSize(QSize(100, 100));
        hole04->setMaximumSize(QSize(100, 100));
        hole04->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"	border: none;\n"
"	outline: none;\n"
"}"));
        hole04->setIcon(icon);
        hole04->setIconSize(QSize(50, 50));
        hole04->setFlat(true);
        hole04->setProperty("row", QVariant(1));
        hole04->setProperty("col", QVariant(0));
        hole05 = new Hole(centralwidget);
        hole05->setObjectName(QString::fromUtf8("hole05"));
        hole05->setGeometry(QRect(300, 100, 100, 100));
        hole05->setMinimumSize(QSize(100, 100));
        hole05->setMaximumSize(QSize(100, 100));
        hole05->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"	border: none;\n"
"	outline: none;\n"
"}"));
        hole05->setIcon(icon);
        hole05->setIconSize(QSize(50, 50));
        hole05->setFlat(true);
        hole05->setProperty("row", QVariant(1));
        hole05->setProperty("col", QVariant(1));
        hole06 = new Hole(centralwidget);
        hole06->setObjectName(QString::fromUtf8("hole06"));
        hole06->setGeometry(QRect(0, 200, 100, 100));
        hole06->setMinimumSize(QSize(100, 100));
        hole06->setMaximumSize(QSize(100, 100));
        hole06->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"	border: none;\n"
"	outline: none;\n"
"}"));
        hole06->setIcon(icon);
        hole06->setIconSize(QSize(50, 50));
        hole06->setFlat(true);
        hole06->setProperty("row", QVariant(1));
        hole06->setProperty("col", QVariant(2));
        hole07 = new Hole(centralwidget);
        hole07->setObjectName(QString::fromUtf8("hole07"));
        hole07->setGeometry(QRect(200, 200, 100, 100));
        hole07->setMinimumSize(QSize(100, 100));
        hole07->setMaximumSize(QSize(100, 100));
        hole07->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"	border: none;\n"
"	outline: none;\n"
"}"));
        hole07->setIcon(icon);
        hole07->setIconSize(QSize(50, 50));
        hole07->setFlat(true);
        hole07->setProperty("row", QVariant(2));
        hole07->setProperty("col", QVariant(0));
        hole08 = new Hole(centralwidget);
        hole08->setObjectName(QString::fromUtf8("hole08"));
        hole08->setGeometry(QRect(400, 200, 100, 100));
        hole08->setMinimumSize(QSize(100, 100));
        hole08->setMaximumSize(QSize(100, 100));
        hole08->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"	border: none;\n"
"	outline: none;\n"
"}"));
        hole08->setIcon(icon);
        hole08->setIconSize(QSize(50, 50));
        hole08->setFlat(true);
        hole08->setProperty("row", QVariant(2));
        hole08->setProperty("col", QVariant(1));
        hole09 = new Hole(centralwidget);
        hole09->setObjectName(QString::fromUtf8("hole09"));
        hole09->setGeometry(QRect(100, 300, 100, 100));
        hole09->setMinimumSize(QSize(100, 100));
        hole09->setMaximumSize(QSize(100, 100));
        hole09->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"	border: none;\n"
"	outline: none;\n"
"}"));
        hole09->setIcon(icon);
        hole09->setIconSize(QSize(50, 50));
        hole09->setFlat(true);
        hole09->setProperty("row", QVariant(2));
        hole09->setProperty("col", QVariant(2));
        hole10 = new Hole(centralwidget);
        hole10->setObjectName(QString::fromUtf8("hole10"));
        hole10->setGeometry(QRect(300, 300, 100, 100));
        hole10->setMinimumSize(QSize(100, 100));
        hole10->setMaximumSize(QSize(100, 100));
        hole10->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"	border: none;\n"
"	outline: none;\n"
"}"));
        hole10->setIcon(icon);
        hole10->setIconSize(QSize(50, 50));
        hole10->setFlat(true);
        hole10->setProperty("row", QVariant(2));
        hole10->setProperty("col", QVariant(2));
        hole11 = new Hole(centralwidget);
        hole11->setObjectName(QString::fromUtf8("hole11"));
        hole11->setGeometry(QRect(0, 400, 100, 100));
        hole11->setMinimumSize(QSize(100, 100));
        hole11->setMaximumSize(QSize(100, 100));
        hole11->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"	border: none;\n"
"	outline: none;\n"
"}"));
        hole11->setIcon(icon);
        hole11->setIconSize(QSize(50, 50));
        hole11->setFlat(true);
        hole11->setProperty("row", QVariant(2));
        hole11->setProperty("col", QVariant(2));
        hole12 = new Hole(centralwidget);
        hole12->setObjectName(QString::fromUtf8("hole12"));
        hole12->setGeometry(QRect(200, 400, 100, 100));
        hole12->setMinimumSize(QSize(100, 100));
        hole12->setMaximumSize(QSize(100, 100));
        hole12->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"	border: none;\n"
"	outline: none;\n"
"}"));
        hole12->setIcon(icon);
        hole12->setIconSize(QSize(50, 50));
        hole12->setFlat(true);
        hole12->setProperty("row", QVariant(2));
        hole12->setProperty("col", QVariant(2));
        hole13 = new Hole(centralwidget);
        hole13->setObjectName(QString::fromUtf8("hole13"));
        hole13->setGeometry(QRect(400, 400, 100, 100));
        hole13->setMinimumSize(QSize(100, 100));
        hole13->setMaximumSize(QSize(100, 100));
        hole13->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"	border: none;\n"
"	outline: none;\n"
"}"));
        hole13->setIcon(icon);
        hole13->setIconSize(QSize(50, 50));
        hole13->setFlat(true);
        hole13->setProperty("row", QVariant(2));
        hole13->setProperty("col", QVariant(2));
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
        menuModo->addAction(action9holes);
        menuModo->addAction(action13holes);

        retranslateUi(Picaria);

        QMetaObject::connectSlotsByName(Picaria);
    } // setupUi

    void retranslateUi(QMainWindow *Picaria)
    {
        Picaria->setWindowTitle(QApplication::translate("Picaria", "Picaria", nullptr));
        actionNew->setText(QApplication::translate("Picaria", "Novo", nullptr));
        actionQuit->setText(QApplication::translate("Picaria", "Sair", nullptr));
        actionAbout->setText(QApplication::translate("Picaria", "Ajuda", nullptr));
        action9holes->setText(QApplication::translate("Picaria", "9 Buracos", nullptr));
        action13holes->setText(QApplication::translate("Picaria", "13 Buracos", nullptr));
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
