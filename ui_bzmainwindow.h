/********************************************************************************
** Form generated from reading UI file 'bzmainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.9.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_BZMAINWINDOW_H
#define UI_BZMAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>
#include "bzview.h"

QT_BEGIN_NAMESPACE

class Ui_BzMainWindow
{
public:
    QAction *action_Nouveau;
    QAction *action_Quitter;
    QAction *action_Charger;
    QAction *action_Sauvegarder;
    QAction *action_Effacer;
    QAction *action_Construire;
    QWidget *centralWidget;
    QGridLayout *gridLayout;
    BzView *View;
    QMenuBar *menuBar;
    QMenu *menu_Fichier;
    QMenu *menu_Tools;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *BzMainWindow)
    {
        if (BzMainWindow->objectName().isEmpty())
            BzMainWindow->setObjectName(QStringLiteral("BzMainWindow"));
        BzMainWindow->resize(400, 300);
        action_Nouveau = new QAction(BzMainWindow);
        action_Nouveau->setObjectName(QStringLiteral("action_Nouveau"));
        QIcon icon;
        icon.addFile(QStringLiteral(":/icones/images/new.png"), QSize(), QIcon::Normal, QIcon::Off);
        action_Nouveau->setIcon(icon);
        action_Quitter = new QAction(BzMainWindow);
        action_Quitter->setObjectName(QStringLiteral("action_Quitter"));
        QIcon icon1;
        icon1.addFile(QStringLiteral(":/icones/images/Quit.png"), QSize(), QIcon::Normal, QIcon::Off);
        action_Quitter->setIcon(icon1);
        action_Charger = new QAction(BzMainWindow);
        action_Charger->setObjectName(QStringLiteral("action_Charger"));
        QIcon icon2;
        icon2.addFile(QStringLiteral(":/icones/images/open.png"), QSize(), QIcon::Normal, QIcon::Off);
        action_Charger->setIcon(icon2);
        action_Sauvegarder = new QAction(BzMainWindow);
        action_Sauvegarder->setObjectName(QStringLiteral("action_Sauvegarder"));
        QIcon icon3;
        icon3.addFile(QStringLiteral(":/icones/images/save.png"), QSize(), QIcon::Normal, QIcon::Off);
        action_Sauvegarder->setIcon(icon3);
        action_Effacer = new QAction(BzMainWindow);
        action_Effacer->setObjectName(QStringLiteral("action_Effacer"));
        QIcon icon4;
        icon4.addFile(QStringLiteral(":/icones/images/Redo.png"), QSize(), QIcon::Normal, QIcon::Off);
        action_Effacer->setIcon(icon4);
        action_Construire = new QAction(BzMainWindow);
        action_Construire->setObjectName(QStringLiteral("action_Construire"));
        QIcon icon5;
        icon5.addFile(QStringLiteral(":/icones/images/BezierConstruct.png"), QSize(), QIcon::Normal, QIcon::Off);
        action_Construire->setIcon(icon5);
        centralWidget = new QWidget(BzMainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        gridLayout = new QGridLayout(centralWidget);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        View = new BzView(centralWidget);
        View->setObjectName(QStringLiteral("View"));
        QPalette palette;
        QBrush brush(QColor(255, 255, 255, 255));
        brush.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Base, brush);
        palette.setBrush(QPalette::Active, QPalette::Window, brush);
        palette.setBrush(QPalette::Inactive, QPalette::Base, brush);
        palette.setBrush(QPalette::Inactive, QPalette::Window, brush);
        palette.setBrush(QPalette::Disabled, QPalette::Base, brush);
        palette.setBrush(QPalette::Disabled, QPalette::Window, brush);
        View->setPalette(palette);
        View->setCursor(QCursor(Qt::CrossCursor));
        View->setAutoFillBackground(true);

        gridLayout->addWidget(View, 0, 0, 1, 1);

        BzMainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(BzMainWindow);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 400, 22));
        menu_Fichier = new QMenu(menuBar);
        menu_Fichier->setObjectName(QStringLiteral("menu_Fichier"));
        menu_Tools = new QMenu(menuBar);
        menu_Tools->setObjectName(QStringLiteral("menu_Tools"));
        BzMainWindow->setMenuBar(menuBar);
        mainToolBar = new QToolBar(BzMainWindow);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        BzMainWindow->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(BzMainWindow);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        BzMainWindow->setStatusBar(statusBar);

        menuBar->addAction(menu_Fichier->menuAction());
        menuBar->addAction(menu_Tools->menuAction());
        menu_Fichier->addAction(action_Nouveau);
        menu_Fichier->addAction(action_Charger);
        menu_Fichier->addAction(action_Sauvegarder);
        menu_Fichier->addAction(action_Quitter);
        menu_Tools->addAction(action_Effacer);
        menu_Tools->addAction(action_Construire);
        mainToolBar->addAction(action_Nouveau);
        mainToolBar->addAction(action_Quitter);
        mainToolBar->addAction(action_Charger);
        mainToolBar->addAction(action_Sauvegarder);
        mainToolBar->addAction(action_Effacer);
        mainToolBar->addAction(action_Construire);

        retranslateUi(BzMainWindow);
        QObject::connect(action_Effacer, SIGNAL(triggered()), View, SLOT(OnEffacer()));
        QObject::connect(action_Construire, SIGNAL(toggled(bool)), View, SLOT(OnConstruire(bool)));

        QMetaObject::connectSlotsByName(BzMainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *BzMainWindow)
    {
        BzMainWindow->setWindowTitle(QApplication::translate("BzMainWindow", "BzMainWindow", Q_NULLPTR));
        action_Nouveau->setText(QApplication::translate("BzMainWindow", "&Nouveau", Q_NULLPTR));
        action_Quitter->setText(QApplication::translate("BzMainWindow", "&Quitter", Q_NULLPTR));
#ifndef QT_NO_SHORTCUT
        action_Quitter->setShortcut(QApplication::translate("BzMainWindow", "Shift+Q", Q_NULLPTR));
#endif // QT_NO_SHORTCUT
        action_Charger->setText(QApplication::translate("BzMainWindow", "&Charger", Q_NULLPTR));
        action_Sauvegarder->setText(QApplication::translate("BzMainWindow", "&Sauvegarder", Q_NULLPTR));
        action_Effacer->setText(QApplication::translate("BzMainWindow", "&Effacer", Q_NULLPTR));
        action_Construire->setText(QApplication::translate("BzMainWindow", "&Construire", Q_NULLPTR));
        menu_Fichier->setTitle(QApplication::translate("BzMainWindow", "&Fichier", Q_NULLPTR));
        menu_Tools->setTitle(QApplication::translate("BzMainWindow", "&Tools", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class BzMainWindow: public Ui_BzMainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_BZMAINWINDOW_H
