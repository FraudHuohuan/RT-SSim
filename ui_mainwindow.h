/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.13.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGraphicsView>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSlider>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTableView>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *heter_taskset;
    QAction *action1cpu_1dsp;
    QAction *action_mode_herter;
    QAction *heter_multicore;
    QAction *action_2;
    QAction *action1cpu_8dsp;
    QAction *addTask;
    QAction *addCore;
    QAction *action;
    QWidget *centralwidget;
    QVBoxLayout *verticalLayout_3;
    QGraphicsView *graphicsView;
    QHBoxLayout *horizontalLayout_5;
    QGroupBox *groupBox_controller;
    QHBoxLayout *horizontalLayout_7;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer_8;
    QPushButton *btn_reset;
    QSpacerItem *horizontalSpacer_10;
    QPushButton *btn_start;
    QPushButton *btn_stop;
    QSpacerItem *horizontalSpacer_2;
    QPushButton *btn_next;
    QSpacerItem *horizontalSpacer;
    QSpacerItem *horizontalSpacer_9;
    QGroupBox *groupBox_speed;
    QVBoxLayout *verticalLayout_4;
    QSlider *Slider_speed;
    QHBoxLayout *horizontalLayout_4;
    QGroupBox *groupBox;
    QHBoxLayout *horizontalLayout_2;
    QTableView *table_joined;
    QTableView *table_utilizaiton;
    QMenuBar *menubar;
    QMenu *menuMODE;
    QMenu *menu;
    QMenu *menu_2;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(1244, 793);
        MainWindow->setStyleSheet(QString::fromUtf8("background-color: rgb(238, 238, 238);"));
        heter_taskset = new QAction(MainWindow);
        heter_taskset->setObjectName(QString::fromUtf8("heter_taskset"));
        action1cpu_1dsp = new QAction(MainWindow);
        action1cpu_1dsp->setObjectName(QString::fromUtf8("action1cpu_1dsp"));
        action_mode_herter = new QAction(MainWindow);
        action_mode_herter->setObjectName(QString::fromUtf8("action_mode_herter"));
        heter_multicore = new QAction(MainWindow);
        heter_multicore->setObjectName(QString::fromUtf8("heter_multicore"));
        action_2 = new QAction(MainWindow);
        action_2->setObjectName(QString::fromUtf8("action_2"));
        action1cpu_8dsp = new QAction(MainWindow);
        action1cpu_8dsp->setObjectName(QString::fromUtf8("action1cpu_8dsp"));
        addTask = new QAction(MainWindow);
        addTask->setObjectName(QString::fromUtf8("addTask"));
        addCore = new QAction(MainWindow);
        addCore->setObjectName(QString::fromUtf8("addCore"));
        action = new QAction(MainWindow);
        action->setObjectName(QString::fromUtf8("action"));
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        verticalLayout_3 = new QVBoxLayout(centralwidget);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        graphicsView = new QGraphicsView(centralwidget);
        graphicsView->setObjectName(QString::fromUtf8("graphicsView"));
        graphicsView->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));

        verticalLayout_3->addWidget(graphicsView);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName(QString::fromUtf8("horizontalLayout_5"));
        groupBox_controller = new QGroupBox(centralwidget);
        groupBox_controller->setObjectName(QString::fromUtf8("groupBox_controller"));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(groupBox_controller->sizePolicy().hasHeightForWidth());
        groupBox_controller->setSizePolicy(sizePolicy);
        groupBox_controller->setStyleSheet(QString::fromUtf8("QGroupBox{\n"
"	color: rgb(7, 7, 7);\n"
"	background-color: rgb(238, 238, 238);\n"
"	font: 12pt \"Consolas\";\n"
"	border: 1px solid rgb(200, 200, 200);\n"
"	margin-top: 0.5em;\n"
"}\n"
"QGroupBox::title{\n"
"    subcontrol-origin: margin;\n"
"    left: 10px;\n"
"    padding: 0 3px 0 3px;\n"
"\n"
"}"));
        horizontalLayout_7 = new QHBoxLayout(groupBox_controller);
        horizontalLayout_7->setObjectName(QString::fromUtf8("horizontalLayout_7"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalSpacer_8 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_8);

        btn_reset = new QPushButton(groupBox_controller);
        btn_reset->setObjectName(QString::fromUtf8("btn_reset"));
        QSizePolicy sizePolicy1(QSizePolicy::Minimum, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(btn_reset->sizePolicy().hasHeightForWidth());
        btn_reset->setSizePolicy(sizePolicy1);
        btn_reset->setStyleSheet(QString::fromUtf8("font: 12pt \"Consolas\";\n"
"color: rgb(0, 0, 0);\n"
"background-color: rgb(221, 221, 221);\n"
"border:1px solid;\n"
"border-color: rgb(71, 71, 71);\n"
"border-radius:5px"));

        horizontalLayout->addWidget(btn_reset);

        horizontalSpacer_10 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_10);

        btn_start = new QPushButton(groupBox_controller);
        btn_start->setObjectName(QString::fromUtf8("btn_start"));
        sizePolicy1.setHeightForWidth(btn_start->sizePolicy().hasHeightForWidth());
        btn_start->setSizePolicy(sizePolicy1);
        btn_start->setLayoutDirection(Qt::LeftToRight);
        btn_start->setStyleSheet(QString::fromUtf8("font: 12pt \"Consolas\";\n"
"color: rgb(0, 0, 0);\n"
"background-color: rgb(221, 221, 221);\n"
"border:1px solid;\n"
"border-color: rgb(71, 71, 71);\n"
"border-radius:5px"));

        horizontalLayout->addWidget(btn_start);

        btn_stop = new QPushButton(groupBox_controller);
        btn_stop->setObjectName(QString::fromUtf8("btn_stop"));
        sizePolicy1.setHeightForWidth(btn_stop->sizePolicy().hasHeightForWidth());
        btn_stop->setSizePolicy(sizePolicy1);
        btn_stop->setStyleSheet(QString::fromUtf8("font: 12pt \"Consolas\";\n"
"color: rgb(0, 0, 0);\n"
"background-color: rgb(221, 221, 221);\n"
"border:1px solid;\n"
"border-color: rgb(71, 71, 71);\n"
"border-radius:5px"));

        horizontalLayout->addWidget(btn_stop);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_2);

        btn_next = new QPushButton(groupBox_controller);
        btn_next->setObjectName(QString::fromUtf8("btn_next"));
        sizePolicy1.setHeightForWidth(btn_next->sizePolicy().hasHeightForWidth());
        btn_next->setSizePolicy(sizePolicy1);
        btn_next->setStyleSheet(QString::fromUtf8("font: 12pt \"Consolas\";\n"
"color: rgb(0, 0, 0);\n"
"background-color: rgb(221, 221, 221);\n"
"border:1px solid;\n"
"border-color: rgb(71, 71, 71);\n"
"border-radius:5px"));

        horizontalLayout->addWidget(btn_next);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        horizontalSpacer_9 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_9);

        horizontalLayout->setStretch(0, 1);
        horizontalLayout->setStretch(1, 2);
        horizontalLayout->setStretch(2, 1);
        horizontalLayout->setStretch(3, 2);
        horizontalLayout->setStretch(4, 2);
        horizontalLayout->setStretch(5, 1);
        horizontalLayout->setStretch(6, 2);
        horizontalLayout->setStretch(8, 1);

        horizontalLayout_7->addLayout(horizontalLayout);


        horizontalLayout_5->addWidget(groupBox_controller);

        groupBox_speed = new QGroupBox(centralwidget);
        groupBox_speed->setObjectName(QString::fromUtf8("groupBox_speed"));
        sizePolicy.setHeightForWidth(groupBox_speed->sizePolicy().hasHeightForWidth());
        groupBox_speed->setSizePolicy(sizePolicy);
        groupBox_speed->setStyleSheet(QString::fromUtf8("QGroupBox{\n"
"	color: rgb(7, 7, 7);\n"
"	background-color: rgb(238, 238, 238);\n"
"	font: 12pt \"Consolas\";\n"
"	border: 1px solid rgb(200, 200, 200);\n"
"	margin-top: 0.5em;\n"
"}\n"
"QGroupBox::title{\n"
"    subcontrol-origin: margin;\n"
"    left: 10px;\n"
"    padding: 0 3px 0 3px;\n"
"\n"
"}"));
        verticalLayout_4 = new QVBoxLayout(groupBox_speed);
        verticalLayout_4->setObjectName(QString::fromUtf8("verticalLayout_4"));
        Slider_speed = new QSlider(groupBox_speed);
        Slider_speed->setObjectName(QString::fromUtf8("Slider_speed"));
        QSizePolicy sizePolicy2(QSizePolicy::Expanding, QSizePolicy::Fixed);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(Slider_speed->sizePolicy().hasHeightForWidth());
        Slider_speed->setSizePolicy(sizePolicy2);
        Slider_speed->setOrientation(Qt::Horizontal);

        verticalLayout_4->addWidget(Slider_speed);


        horizontalLayout_5->addWidget(groupBox_speed);

        horizontalLayout_5->setStretch(0, 3);
        horizontalLayout_5->setStretch(1, 2);

        verticalLayout_3->addLayout(horizontalLayout_5);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        groupBox = new QGroupBox(centralwidget);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        groupBox->setStyleSheet(QString::fromUtf8("color: rgb(7, 7, 7);\n"
"background-color: rgb(238, 238, 238);\n"
"font: 12pt \"Consolas\";\n"
""));
        horizontalLayout_2 = new QHBoxLayout(groupBox);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        table_joined = new QTableView(groupBox);
        table_joined->setObjectName(QString::fromUtf8("table_joined"));
        QFont font;
        font.setFamily(QString::fromUtf8("Consolas"));
        font.setPointSize(12);
        font.setBold(false);
        font.setItalic(false);
        table_joined->setFont(font);
        table_joined->setStyleSheet(QString::fromUtf8("color: rgb(7, 7, 7);\n"
"background-color: rgb(255, 255, 255);"));

        horizontalLayout_2->addWidget(table_joined);

        table_utilizaiton = new QTableView(groupBox);
        table_utilizaiton->setObjectName(QString::fromUtf8("table_utilizaiton"));
        table_utilizaiton->setFont(font);
        table_utilizaiton->setLayoutDirection(Qt::LeftToRight);
        table_utilizaiton->setStyleSheet(QString::fromUtf8("color: rgb(7, 7, 7);\n"
"background-color: rgb(255, 255, 255);"));

        horizontalLayout_2->addWidget(table_utilizaiton);


        horizontalLayout_4->addWidget(groupBox);


        verticalLayout_3->addLayout(horizontalLayout_4);

        verticalLayout_3->setStretch(0, 18);
        verticalLayout_3->setStretch(1, 3);
        verticalLayout_3->setStretch(2, 9);
        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 1244, 35));
        menubar->setFont(font);
        menubar->setMouseTracking(true);
        menubar->setStyleSheet(QString::fromUtf8("color: rgb(7, 7, 7);\n"
"font: 12pt \"Consolas\";"));
        menuMODE = new QMenu(menubar);
        menuMODE->setObjectName(QString::fromUtf8("menuMODE"));
        menu = new QMenu(menubar);
        menu->setObjectName(QString::fromUtf8("menu"));
        menu_2 = new QMenu(menubar);
        menu_2->setObjectName(QString::fromUtf8("menu_2"));
        MainWindow->setMenuBar(menubar);

        menubar->addAction(menuMODE->menuAction());
        menubar->addAction(menu->menuAction());
        menubar->addAction(menu_2->menuAction());
        menuMODE->addAction(heter_multicore);
        menu->addAction(action1cpu_1dsp);
        menu->addAction(action1cpu_8dsp);
        menu->addSeparator();
        menu->addAction(addCore);
        menu_2->addAction(heter_taskset);
        menu_2->addAction(action_2);
        menu_2->addSeparator();
        menu_2->addAction(addTask);
        menu_2->addAction(action);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "Scheduler", nullptr));
        heter_taskset->setText(QCoreApplication::translate("MainWindow", "\344\273\273\345\212\241\351\233\206\345\220\2101", nullptr));
        action1cpu_1dsp->setText(QCoreApplication::translate("MainWindow", "2cpu+4dsp", nullptr));
        action_mode_herter->setText(QCoreApplication::translate("MainWindow", "\345\274\202\346\236\204\345\244\232\346\240\270", nullptr));
        heter_multicore->setText(QCoreApplication::translate("MainWindow", "\345\274\202\346\236\204\345\244\232\346\240\270", nullptr));
        action_2->setText(QCoreApplication::translate("MainWindow", "\344\273\273\345\212\241\351\233\206\345\220\2102", nullptr));
        action1cpu_8dsp->setText(QCoreApplication::translate("MainWindow", "1cpu+8dsp", nullptr));
        addTask->setText(QCoreApplication::translate("MainWindow", "\350\207\252\345\256\232\344\271\211\344\273\273\345\212\241\351\233\206", nullptr));
        addCore->setText(QCoreApplication::translate("MainWindow", "\350\207\252\345\256\232\344\271\211\345\244\204\347\220\206\345\231\250", nullptr));
        action->setText(QCoreApplication::translate("MainWindow", "\350\207\252\345\256\232\344\271\211\345\272\217\345\210\227\344\273\273\345\212\241", nullptr));
        groupBox_controller->setTitle(QString());
        btn_reset->setText(QCoreApplication::translate("MainWindow", "Init", nullptr));
        btn_start->setText(QCoreApplication::translate("MainWindow", "Start", nullptr));
        btn_stop->setText(QCoreApplication::translate("MainWindow", "Stop", nullptr));
        btn_next->setText(QCoreApplication::translate("MainWindow", "Next", nullptr));
        groupBox_speed->setTitle(QCoreApplication::translate("MainWindow", "display speed", nullptr));
        groupBox->setTitle(QString());
        menuMODE->setTitle(QCoreApplication::translate("MainWindow", "\344\273\277\347\234\237\346\250\241\345\274\217", nullptr));
        menu->setTitle(QCoreApplication::translate("MainWindow", "\345\244\204\347\220\206\345\231\250\351\205\215\347\275\256", nullptr));
        menu_2->setTitle(QCoreApplication::translate("MainWindow", "\344\273\273\345\212\241\351\233\206\351\205\215\347\275\256", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
