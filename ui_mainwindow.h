/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMdiArea>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *action_new;
    QAction *action_open;
    QAction *action_close;
    QAction *action_save;
    QAction *action_saveas;
    QAction *action_exit;
    QAction *action;
    QAction *action_8;
    QAction *action_10;
    QAction *action_11;
    QAction *action_13;
    QAction *action_help;
    QWidget *centralWidget;
    QGridLayout *gridLayout;
    QMdiArea *mdiArea;
    QMenuBar *menuBar;
    QMenu *menu;
    QMenu *menu_2;
    QMenu *menu_3;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(754, 502);
        action_new = new QAction(MainWindow);
        action_new->setObjectName(QStringLiteral("action_new"));
        QIcon icon;
        icon.addFile(QStringLiteral(":/images/images/document-new.png"), QSize(), QIcon::Normal, QIcon::Off);
        action_new->setIcon(icon);
        action_open = new QAction(MainWindow);
        action_open->setObjectName(QStringLiteral("action_open"));
        QIcon icon1;
        icon1.addFile(QStringLiteral(":/images/images/document-open.png"), QSize(), QIcon::Normal, QIcon::Off);
        action_open->setIcon(icon1);
        action_close = new QAction(MainWindow);
        action_close->setObjectName(QStringLiteral("action_close"));
        QIcon icon2;
        icon2.addFile(QStringLiteral(":/images/images/gtk-close.png"), QSize(), QIcon::Normal, QIcon::Off);
        action_close->setIcon(icon2);
        action_save = new QAction(MainWindow);
        action_save->setObjectName(QStringLiteral("action_save"));
        QIcon icon3;
        icon3.addFile(QStringLiteral(":/images/images/document-save.png"), QSize(), QIcon::Normal, QIcon::Off);
        action_save->setIcon(icon3);
        action_saveas = new QAction(MainWindow);
        action_saveas->setObjectName(QStringLiteral("action_saveas"));
        QIcon icon4;
        icon4.addFile(QStringLiteral(":/images/images/document-save-as.png"), QSize(), QIcon::Normal, QIcon::Off);
        action_saveas->setIcon(icon4);
        action_exit = new QAction(MainWindow);
        action_exit->setObjectName(QStringLiteral("action_exit"));
        QIcon icon5;
        icon5.addFile(QStringLiteral(":/images/images/exit.png"), QSize(), QIcon::Normal, QIcon::Off);
        action_exit->setIcon(icon5);
        action = new QAction(MainWindow);
        action->setObjectName(QStringLiteral("action"));
        QIcon icon6;
        icon6.addFile(QStringLiteral(":/images/images/edit-undo.png"), QSize(), QIcon::Normal, QIcon::Off);
        action->setIcon(icon6);
        action_8 = new QAction(MainWindow);
        action_8->setObjectName(QStringLiteral("action_8"));
        QIcon icon7;
        icon7.addFile(QStringLiteral(":/images/images/editcut.png"), QSize(), QIcon::Normal, QIcon::Off);
        action_8->setIcon(icon7);
        action_10 = new QAction(MainWindow);
        action_10->setObjectName(QStringLiteral("action_10"));
        QIcon icon8;
        icon8.addFile(QStringLiteral(":/images/images/editcopy.png"), QSize(), QIcon::Normal, QIcon::Off);
        action_10->setIcon(icon8);
        action_11 = new QAction(MainWindow);
        action_11->setObjectName(QStringLiteral("action_11"));
        QIcon icon9;
        icon9.addFile(QStringLiteral(":/images/images/editpaste.png"), QSize(), QIcon::Normal, QIcon::Off);
        action_11->setIcon(icon9);
        action_13 = new QAction(MainWindow);
        action_13->setObjectName(QStringLiteral("action_13"));
        QIcon icon10;
        icon10.addFile(QStringLiteral(":/images/images/edit-find.png"), QSize(), QIcon::Normal, QIcon::Off);
        action_13->setIcon(icon10);
        action_help = new QAction(MainWindow);
        action_help->setObjectName(QStringLiteral("action_help"));
        QIcon icon11;
        icon11.addFile(QStringLiteral(":/images/images/help.png"), QSize(), QIcon::Normal, QIcon::Off);
        action_help->setIcon(icon11);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        centralWidget->setAcceptDrops(false);
        centralWidget->setAutoFillBackground(false);
        gridLayout = new QGridLayout(centralWidget);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        mdiArea = new QMdiArea(centralWidget);
        mdiArea->setObjectName(QStringLiteral("mdiArea"));

        gridLayout->addWidget(mdiArea, 0, 0, 1, 1);

        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 754, 26));
        menu = new QMenu(menuBar);
        menu->setObjectName(QStringLiteral("menu"));
        menu_2 = new QMenu(menuBar);
        menu_2->setObjectName(QStringLiteral("menu_2"));
        menu_3 = new QMenu(menuBar);
        menu_3->setObjectName(QStringLiteral("menu_3"));
        MainWindow->setMenuBar(menuBar);
        mainToolBar = new QToolBar(MainWindow);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        mainToolBar->setMovable(false);
        mainToolBar->setIconSize(QSize(30, 30));
        mainToolBar->setToolButtonStyle(Qt::ToolButtonIconOnly);
        mainToolBar->setFloatable(true);
        MainWindow->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        MainWindow->setStatusBar(statusBar);

        menuBar->addAction(menu->menuAction());
        menuBar->addAction(menu_2->menuAction());
        menuBar->addAction(menu_3->menuAction());
        menu->addAction(action_new);
        menu->addAction(action_open);
        menu->addAction(action_close);
        menu->addSeparator();
        menu->addAction(action_save);
        menu->addAction(action_saveas);
        menu->addSeparator();
        menu->addAction(action_exit);
        menu_2->addAction(action);
        menu_2->addSeparator();
        menu_2->addAction(action_8);
        menu_2->addAction(action_10);
        menu_2->addAction(action_11);
        menu_2->addSeparator();
        menu_2->addAction(action_13);
        menu_2->addSeparator();
        menu_3->addAction(action_help);
        mainToolBar->addSeparator();
        mainToolBar->addAction(action_new);
        mainToolBar->addAction(action_open);
        mainToolBar->addAction(action_save);
        mainToolBar->addSeparator();
        mainToolBar->addAction(action);
        mainToolBar->addAction(action_8);
        mainToolBar->addAction(action_10);
        mainToolBar->addAction(action_11);
        mainToolBar->addSeparator();
        mainToolBar->addAction(action_13);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", Q_NULLPTR));
        action_new->setText(QApplication::translate("MainWindow", "\346\226\260\345\273\272", Q_NULLPTR));
        action_open->setText(QApplication::translate("MainWindow", "\346\211\223\345\274\200", Q_NULLPTR));
        action_open->setShortcut(QApplication::translate("MainWindow", "Alt+F", Q_NULLPTR));
        action_close->setText(QApplication::translate("MainWindow", "\345\205\263\351\227\255", Q_NULLPTR));
        action_save->setText(QApplication::translate("MainWindow", "\344\277\235\345\255\230", Q_NULLPTR));
        action_saveas->setText(QApplication::translate("MainWindow", "\345\217\246\345\255\230\344\270\272", Q_NULLPTR));
        action_exit->setText(QApplication::translate("MainWindow", "\351\200\200\345\207\272", Q_NULLPTR));
        action->setText(QApplication::translate("MainWindow", "\346\222\244\351\224\200", Q_NULLPTR));
        action_8->setText(QApplication::translate("MainWindow", "\345\211\252\345\210\207", Q_NULLPTR));
        action_10->setText(QApplication::translate("MainWindow", "\345\244\215\345\210\266", Q_NULLPTR));
        action_11->setText(QApplication::translate("MainWindow", "\347\262\230\350\264\264", Q_NULLPTR));
        action_13->setText(QApplication::translate("MainWindow", "\346\237\245\346\211\276", Q_NULLPTR));
        action_help->setText(QApplication::translate("MainWindow", "\347\211\210\346\234\254\350\257\264\346\230\216", Q_NULLPTR));
        menu->setTitle(QApplication::translate("MainWindow", "\346\226\207\344\273\266", Q_NULLPTR));
        menu_2->setTitle(QApplication::translate("MainWindow", "\347\274\226\350\276\221", Q_NULLPTR));
        menu_3->setTitle(QApplication::translate("MainWindow", "\345\270\256\345\212\251", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
