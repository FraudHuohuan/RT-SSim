/********************************************************************************
** Form generated from reading UI file 'setprocessor.ui'
**
** Created by: Qt User Interface Compiler version 5.12.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SETPROCESSOR_H
#define UI_SETPROCESSOR_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QScrollArea>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_setprocessor
{
public:
    QVBoxLayout *verticalLayout_2;
    QGroupBox *groupBox;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QSpacerItem *horizontalSpacer;
    QComboBox *comboBox_coreNum;
    QSpacerItem *verticalSpacer;
    QSpacerItem *verticalSpacer_3;
    QScrollArea *scrollArea_period;
    QWidget *scrollAreaWidgetContents;
    QVBoxLayout *verticalLayout_3;
    QHBoxLayout *hori_core1;
    QLabel *lbl_core1;
    QSpacerItem *horizontalSpacer_2;
    QSpinBox *spinBox_period1;
    QComboBox *comboBox_core1;
    QHBoxLayout *hori_core2;
    QLabel *lbl_core2;
    QSpacerItem *horizontalSpacer_3;
    QSpinBox *spinBox_period2;
    QComboBox *comboBox_core2;
    QHBoxLayout *hori_core3;
    QLabel *lbl_core3;
    QSpacerItem *horizontalSpacer_4;
    QSpinBox *spinBox_period3;
    QComboBox *comboBox_core3;
    QHBoxLayout *hori_core4;
    QLabel *lbl_core4;
    QSpacerItem *horizontalSpacer_5;
    QSpinBox *spinBox_period4;
    QComboBox *comboBox_core4;
    QHBoxLayout *hori_core5;
    QLabel *lbl_core5;
    QSpacerItem *horizontalSpacer_6;
    QSpinBox *spinBox_period5;
    QComboBox *comboBox_core5;
    QHBoxLayout *hori_core6;
    QLabel *lbl_core6;
    QSpacerItem *horizontalSpacer_7;
    QSpinBox *spinBox_period6;
    QComboBox *comboBox_core6;
    QHBoxLayout *hori_core7;
    QLabel *lbl_core7;
    QSpacerItem *horizontalSpacer_8;
    QSpinBox *spinBox_period7;
    QComboBox *comboBox_core7;
    QHBoxLayout *hori_core8;
    QLabel *lbl_core8;
    QSpacerItem *horizontalSpacer_9;
    QSpinBox *spinBox_period8;
    QComboBox *comboBox_core8;
    QHBoxLayout *hori_core19;
    QLabel *lbl_core9;
    QSpacerItem *horizontalSpacer_10;
    QSpinBox *spinBox_period9;
    QComboBox *comboBox_core9;
    QHBoxLayout *hori_core10;
    QLabel *lbl_core10;
    QSpacerItem *horizontalSpacer_11;
    QSpinBox *spinBox_period10;
    QComboBox *comboBox_core10;
    QSpacerItem *verticalSpacer_2;
    QHBoxLayout *horizontalLayout_15;
    QSpacerItem *horizontalSpacer_12;
    QPushButton *btn_add;
    QSpacerItem *horizontalSpacer_13;
    QPushButton *btn_cancel;
    QSpacerItem *horizontalSpacer_14;

    void setupUi(QDialog *setprocessor)
    {
        if (setprocessor->objectName().isEmpty())
            setprocessor->setObjectName(QString::fromUtf8("setprocessor"));
        setprocessor->resize(412, 423);
        setprocessor->setStyleSheet(QString::fromUtf8("background-color: rgb(226, 226, 226);"));
        verticalLayout_2 = new QVBoxLayout(setprocessor);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        groupBox = new QGroupBox(setprocessor);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        QFont font;
        font.setFamily(QString::fromUtf8("Consolas"));
        font.setPointSize(20);
        groupBox->setFont(font);
        groupBox->setStyleSheet(QString::fromUtf8("color: rgb(71, 71, 71);\n"
"background-color: rgb(245, 245, 245);\n"
"border-color: rgb(18, 18, 18);"));
        verticalLayout = new QVBoxLayout(groupBox);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        label = new QLabel(groupBox);
        label->setObjectName(QString::fromUtf8("label"));
        QFont font1;
        font1.setFamily(QString::fromUtf8("Consolas"));
        font1.setPointSize(12);
        label->setFont(font1);
        label->setStyleSheet(QString::fromUtf8("color: rgb(49, 49, 49);"));

        horizontalLayout->addWidget(label);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        comboBox_coreNum = new QComboBox(groupBox);
        comboBox_coreNum->addItem(QString());
        comboBox_coreNum->addItem(QString());
        comboBox_coreNum->addItem(QString());
        comboBox_coreNum->addItem(QString());
        comboBox_coreNum->addItem(QString());
        comboBox_coreNum->addItem(QString());
        comboBox_coreNum->addItem(QString());
        comboBox_coreNum->addItem(QString());
        comboBox_coreNum->addItem(QString());
        comboBox_coreNum->addItem(QString());
        comboBox_coreNum->addItem(QString());
        comboBox_coreNum->setObjectName(QString::fromUtf8("comboBox_coreNum"));
        comboBox_coreNum->setFont(font1);
        comboBox_coreNum->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);\n"
"color: rgb(0, 0, 0);"));

        horizontalLayout->addWidget(comboBox_coreNum);

        horizontalLayout->setStretch(0, 2);
        horizontalLayout->setStretch(1, 4);
        horizontalLayout->setStretch(2, 2);

        verticalLayout->addLayout(horizontalLayout);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer);

        verticalSpacer_3 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer_3);

        scrollArea_period = new QScrollArea(groupBox);
        scrollArea_period->setObjectName(QString::fromUtf8("scrollArea_period"));
        scrollArea_period->setWidgetResizable(true);
        scrollAreaWidgetContents = new QWidget();
        scrollAreaWidgetContents->setObjectName(QString::fromUtf8("scrollAreaWidgetContents"));
        scrollAreaWidgetContents->setGeometry(QRect(0, 0, 343, 395));
        verticalLayout_3 = new QVBoxLayout(scrollAreaWidgetContents);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        hori_core1 = new QHBoxLayout();
        hori_core1->setObjectName(QString::fromUtf8("hori_core1"));
        lbl_core1 = new QLabel(scrollAreaWidgetContents);
        lbl_core1->setObjectName(QString::fromUtf8("lbl_core1"));
        lbl_core1->setStyleSheet(QString::fromUtf8("color: rgb(49, 49, 49);\n"
"font: 12pt \"Consolas\";"));

        hori_core1->addWidget(lbl_core1);

        horizontalSpacer_2 = new QSpacerItem(31, 27, QSizePolicy::Expanding, QSizePolicy::Minimum);

        hori_core1->addItem(horizontalSpacer_2);

        spinBox_period1 = new QSpinBox(scrollAreaWidgetContents);
        spinBox_period1->setObjectName(QString::fromUtf8("spinBox_period1"));
        spinBox_period1->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);\n"
"color: rgb(0, 0, 0);\n"
"font: 12pt \"Consolas\";"));
        spinBox_period1->setMaximum(999);

        hori_core1->addWidget(spinBox_period1);

        comboBox_core1 = new QComboBox(scrollAreaWidgetContents);
        comboBox_core1->addItem(QString());
        comboBox_core1->addItem(QString());
        comboBox_core1->setObjectName(QString::fromUtf8("comboBox_core1"));
        comboBox_core1->setFont(font1);
        comboBox_core1->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);\n"
"color: rgb(0, 0, 0);"));

        hori_core1->addWidget(comboBox_core1);


        verticalLayout_3->addLayout(hori_core1);

        hori_core2 = new QHBoxLayout();
        hori_core2->setObjectName(QString::fromUtf8("hori_core2"));
        lbl_core2 = new QLabel(scrollAreaWidgetContents);
        lbl_core2->setObjectName(QString::fromUtf8("lbl_core2"));
        lbl_core2->setStyleSheet(QString::fromUtf8("color: rgb(49, 49, 49);\n"
"font: 12pt \"Consolas\";"));

        hori_core2->addWidget(lbl_core2);

        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        hori_core2->addItem(horizontalSpacer_3);

        spinBox_period2 = new QSpinBox(scrollAreaWidgetContents);
        spinBox_period2->setObjectName(QString::fromUtf8("spinBox_period2"));
        spinBox_period2->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);\n"
"color: rgb(0, 0, 0);\n"
"font: 12pt \"Consolas\";"));
        spinBox_period2->setMaximum(999);

        hori_core2->addWidget(spinBox_period2);

        comboBox_core2 = new QComboBox(scrollAreaWidgetContents);
        comboBox_core2->addItem(QString());
        comboBox_core2->addItem(QString());
        comboBox_core2->setObjectName(QString::fromUtf8("comboBox_core2"));
        comboBox_core2->setFont(font1);
        comboBox_core2->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);\n"
"color: rgb(0, 0, 0);"));

        hori_core2->addWidget(comboBox_core2);


        verticalLayout_3->addLayout(hori_core2);

        hori_core3 = new QHBoxLayout();
        hori_core3->setObjectName(QString::fromUtf8("hori_core3"));
        lbl_core3 = new QLabel(scrollAreaWidgetContents);
        lbl_core3->setObjectName(QString::fromUtf8("lbl_core3"));
        lbl_core3->setStyleSheet(QString::fromUtf8("color: rgb(49, 49, 49);\n"
"font: 12pt \"Consolas\";"));

        hori_core3->addWidget(lbl_core3);

        horizontalSpacer_4 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        hori_core3->addItem(horizontalSpacer_4);

        spinBox_period3 = new QSpinBox(scrollAreaWidgetContents);
        spinBox_period3->setObjectName(QString::fromUtf8("spinBox_period3"));
        spinBox_period3->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);\n"
"color: rgb(0, 0, 0);\n"
"font: 12pt \"Consolas\";"));
        spinBox_period3->setMaximum(999);

        hori_core3->addWidget(spinBox_period3);

        comboBox_core3 = new QComboBox(scrollAreaWidgetContents);
        comboBox_core3->addItem(QString());
        comboBox_core3->addItem(QString());
        comboBox_core3->setObjectName(QString::fromUtf8("comboBox_core3"));
        comboBox_core3->setFont(font1);
        comboBox_core3->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);\n"
"color: rgb(0, 0, 0);"));

        hori_core3->addWidget(comboBox_core3);


        verticalLayout_3->addLayout(hori_core3);

        hori_core4 = new QHBoxLayout();
        hori_core4->setObjectName(QString::fromUtf8("hori_core4"));
        lbl_core4 = new QLabel(scrollAreaWidgetContents);
        lbl_core4->setObjectName(QString::fromUtf8("lbl_core4"));
        lbl_core4->setStyleSheet(QString::fromUtf8("color: rgb(49, 49, 49);\n"
"font: 12pt \"Consolas\";"));

        hori_core4->addWidget(lbl_core4);

        horizontalSpacer_5 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        hori_core4->addItem(horizontalSpacer_5);

        spinBox_period4 = new QSpinBox(scrollAreaWidgetContents);
        spinBox_period4->setObjectName(QString::fromUtf8("spinBox_period4"));
        spinBox_period4->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);\n"
"color: rgb(0, 0, 0);\n"
"font: 12pt \"Consolas\";"));
        spinBox_period4->setMaximum(999);

        hori_core4->addWidget(spinBox_period4);

        comboBox_core4 = new QComboBox(scrollAreaWidgetContents);
        comboBox_core4->addItem(QString());
        comboBox_core4->addItem(QString());
        comboBox_core4->setObjectName(QString::fromUtf8("comboBox_core4"));
        comboBox_core4->setFont(font1);
        comboBox_core4->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);\n"
"color: rgb(0, 0, 0);"));

        hori_core4->addWidget(comboBox_core4);


        verticalLayout_3->addLayout(hori_core4);

        hori_core5 = new QHBoxLayout();
        hori_core5->setObjectName(QString::fromUtf8("hori_core5"));
        lbl_core5 = new QLabel(scrollAreaWidgetContents);
        lbl_core5->setObjectName(QString::fromUtf8("lbl_core5"));
        lbl_core5->setStyleSheet(QString::fromUtf8("color: rgb(49, 49, 49);\n"
"font: 12pt \"Consolas\";"));

        hori_core5->addWidget(lbl_core5);

        horizontalSpacer_6 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        hori_core5->addItem(horizontalSpacer_6);

        spinBox_period5 = new QSpinBox(scrollAreaWidgetContents);
        spinBox_period5->setObjectName(QString::fromUtf8("spinBox_period5"));
        spinBox_period5->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);\n"
"color: rgb(0, 0, 0);\n"
"font: 12pt \"Consolas\";"));
        spinBox_period5->setMaximum(999);

        hori_core5->addWidget(spinBox_period5);

        comboBox_core5 = new QComboBox(scrollAreaWidgetContents);
        comboBox_core5->addItem(QString());
        comboBox_core5->addItem(QString());
        comboBox_core5->setObjectName(QString::fromUtf8("comboBox_core5"));
        comboBox_core5->setFont(font1);
        comboBox_core5->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);\n"
"color: rgb(0, 0, 0);"));

        hori_core5->addWidget(comboBox_core5);


        verticalLayout_3->addLayout(hori_core5);

        hori_core6 = new QHBoxLayout();
        hori_core6->setObjectName(QString::fromUtf8("hori_core6"));
        lbl_core6 = new QLabel(scrollAreaWidgetContents);
        lbl_core6->setObjectName(QString::fromUtf8("lbl_core6"));
        lbl_core6->setStyleSheet(QString::fromUtf8("color: rgb(49, 49, 49);\n"
"font: 12pt \"Consolas\";"));

        hori_core6->addWidget(lbl_core6);

        horizontalSpacer_7 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        hori_core6->addItem(horizontalSpacer_7);

        spinBox_period6 = new QSpinBox(scrollAreaWidgetContents);
        spinBox_period6->setObjectName(QString::fromUtf8("spinBox_period6"));
        spinBox_period6->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);\n"
"color: rgb(0, 0, 0);\n"
"font: 12pt \"Consolas\";"));
        spinBox_period6->setMaximum(999);

        hori_core6->addWidget(spinBox_period6);

        comboBox_core6 = new QComboBox(scrollAreaWidgetContents);
        comboBox_core6->addItem(QString());
        comboBox_core6->addItem(QString());
        comboBox_core6->setObjectName(QString::fromUtf8("comboBox_core6"));
        comboBox_core6->setFont(font1);
        comboBox_core6->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);\n"
"color: rgb(0, 0, 0);"));

        hori_core6->addWidget(comboBox_core6);


        verticalLayout_3->addLayout(hori_core6);

        hori_core7 = new QHBoxLayout();
        hori_core7->setObjectName(QString::fromUtf8("hori_core7"));
        lbl_core7 = new QLabel(scrollAreaWidgetContents);
        lbl_core7->setObjectName(QString::fromUtf8("lbl_core7"));
        lbl_core7->setStyleSheet(QString::fromUtf8("color: rgb(49, 49, 49);\n"
"font: 12pt \"Consolas\";"));

        hori_core7->addWidget(lbl_core7);

        horizontalSpacer_8 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        hori_core7->addItem(horizontalSpacer_8);

        spinBox_period7 = new QSpinBox(scrollAreaWidgetContents);
        spinBox_period7->setObjectName(QString::fromUtf8("spinBox_period7"));
        spinBox_period7->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);\n"
"color: rgb(0, 0, 0);\n"
"font: 12pt \"Consolas\";"));
        spinBox_period7->setMaximum(999);

        hori_core7->addWidget(spinBox_period7);

        comboBox_core7 = new QComboBox(scrollAreaWidgetContents);
        comboBox_core7->addItem(QString());
        comboBox_core7->addItem(QString());
        comboBox_core7->setObjectName(QString::fromUtf8("comboBox_core7"));
        comboBox_core7->setFont(font1);
        comboBox_core7->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);\n"
"color: rgb(0, 0, 0);"));

        hori_core7->addWidget(comboBox_core7);


        verticalLayout_3->addLayout(hori_core7);

        hori_core8 = new QHBoxLayout();
        hori_core8->setObjectName(QString::fromUtf8("hori_core8"));
        lbl_core8 = new QLabel(scrollAreaWidgetContents);
        lbl_core8->setObjectName(QString::fromUtf8("lbl_core8"));
        lbl_core8->setStyleSheet(QString::fromUtf8("color: rgb(49, 49, 49);\n"
"font: 12pt \"Consolas\";"));

        hori_core8->addWidget(lbl_core8);

        horizontalSpacer_9 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        hori_core8->addItem(horizontalSpacer_9);

        spinBox_period8 = new QSpinBox(scrollAreaWidgetContents);
        spinBox_period8->setObjectName(QString::fromUtf8("spinBox_period8"));
        spinBox_period8->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);\n"
"color: rgb(0, 0, 0);\n"
"font: 12pt \"Consolas\";"));
        spinBox_period8->setMaximum(999);

        hori_core8->addWidget(spinBox_period8);

        comboBox_core8 = new QComboBox(scrollAreaWidgetContents);
        comboBox_core8->addItem(QString());
        comboBox_core8->addItem(QString());
        comboBox_core8->setObjectName(QString::fromUtf8("comboBox_core8"));
        comboBox_core8->setFont(font1);
        comboBox_core8->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);\n"
"color: rgb(0, 0, 0);"));

        hori_core8->addWidget(comboBox_core8);


        verticalLayout_3->addLayout(hori_core8);

        hori_core19 = new QHBoxLayout();
        hori_core19->setObjectName(QString::fromUtf8("hori_core19"));
        lbl_core9 = new QLabel(scrollAreaWidgetContents);
        lbl_core9->setObjectName(QString::fromUtf8("lbl_core9"));
        lbl_core9->setStyleSheet(QString::fromUtf8("color: rgb(49, 49, 49);\n"
"font: 12pt \"Consolas\";"));

        hori_core19->addWidget(lbl_core9);

        horizontalSpacer_10 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        hori_core19->addItem(horizontalSpacer_10);

        spinBox_period9 = new QSpinBox(scrollAreaWidgetContents);
        spinBox_period9->setObjectName(QString::fromUtf8("spinBox_period9"));
        spinBox_period9->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);\n"
"color: rgb(0, 0, 0);\n"
"font: 12pt \"Consolas\";"));
        spinBox_period9->setMaximum(999);

        hori_core19->addWidget(spinBox_period9);

        comboBox_core9 = new QComboBox(scrollAreaWidgetContents);
        comboBox_core9->addItem(QString());
        comboBox_core9->addItem(QString());
        comboBox_core9->setObjectName(QString::fromUtf8("comboBox_core9"));
        comboBox_core9->setFont(font1);
        comboBox_core9->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);\n"
"color: rgb(0, 0, 0);"));

        hori_core19->addWidget(comboBox_core9);


        verticalLayout_3->addLayout(hori_core19);

        hori_core10 = new QHBoxLayout();
        hori_core10->setObjectName(QString::fromUtf8("hori_core10"));
        lbl_core10 = new QLabel(scrollAreaWidgetContents);
        lbl_core10->setObjectName(QString::fromUtf8("lbl_core10"));
        lbl_core10->setStyleSheet(QString::fromUtf8("color: rgb(49, 49, 49);\n"
"font: 12pt \"Consolas\";"));

        hori_core10->addWidget(lbl_core10);

        horizontalSpacer_11 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        hori_core10->addItem(horizontalSpacer_11);

        spinBox_period10 = new QSpinBox(scrollAreaWidgetContents);
        spinBox_period10->setObjectName(QString::fromUtf8("spinBox_period10"));
        spinBox_period10->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);\n"
"color: rgb(0, 0, 0);\n"
"font: 12pt \"Consolas\";"));
        spinBox_period10->setMaximum(999);

        hori_core10->addWidget(spinBox_period10);

        comboBox_core10 = new QComboBox(scrollAreaWidgetContents);
        comboBox_core10->addItem(QString());
        comboBox_core10->addItem(QString());
        comboBox_core10->setObjectName(QString::fromUtf8("comboBox_core10"));
        comboBox_core10->setFont(font1);
        comboBox_core10->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);\n"
"color: rgb(0, 0, 0);"));

        hori_core10->addWidget(comboBox_core10);


        verticalLayout_3->addLayout(hori_core10);

        scrollArea_period->setWidget(scrollAreaWidgetContents);

        verticalLayout->addWidget(scrollArea_period);

        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer_2);


        verticalLayout_2->addWidget(groupBox);

        horizontalLayout_15 = new QHBoxLayout();
        horizontalLayout_15->setObjectName(QString::fromUtf8("horizontalLayout_15"));
        horizontalSpacer_12 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_15->addItem(horizontalSpacer_12);

        btn_add = new QPushButton(setprocessor);
        btn_add->setObjectName(QString::fromUtf8("btn_add"));
        btn_add->setFont(font1);
        btn_add->setStyleSheet(QString::fromUtf8("color: rgb(7, 7, 7);\n"
"background-color: rgb(221, 221, 221);"));

        horizontalLayout_15->addWidget(btn_add);

        horizontalSpacer_13 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_15->addItem(horizontalSpacer_13);

        btn_cancel = new QPushButton(setprocessor);
        btn_cancel->setObjectName(QString::fromUtf8("btn_cancel"));
        btn_cancel->setFont(font1);
        btn_cancel->setStyleSheet(QString::fromUtf8("color: rgb(7, 7, 7);\n"
"background-color: rgb(221, 221, 221);"));

        horizontalLayout_15->addWidget(btn_cancel);

        horizontalSpacer_14 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_15->addItem(horizontalSpacer_14);


        verticalLayout_2->addLayout(horizontalLayout_15);


        retranslateUi(setprocessor);

        QMetaObject::connectSlotsByName(setprocessor);
    } // setupUi

    void retranslateUi(QDialog *setprocessor)
    {
        setprocessor->setWindowTitle(QApplication::translate("setprocessor", "Dialog", nullptr));
        groupBox->setTitle(QApplication::translate("setprocessor", "SetProcessor", nullptr));
        label->setText(QApplication::translate("setprocessor", "CoreNum", nullptr));
        comboBox_coreNum->setItemText(0, QApplication::translate("setprocessor", "1", nullptr));
        comboBox_coreNum->setItemText(1, QApplication::translate("setprocessor", "2", nullptr));
        comboBox_coreNum->setItemText(2, QApplication::translate("setprocessor", "3", nullptr));
        comboBox_coreNum->setItemText(3, QApplication::translate("setprocessor", "4", nullptr));
        comboBox_coreNum->setItemText(4, QApplication::translate("setprocessor", "5", nullptr));
        comboBox_coreNum->setItemText(5, QApplication::translate("setprocessor", "6", nullptr));
        comboBox_coreNum->setItemText(6, QApplication::translate("setprocessor", "7", nullptr));
        comboBox_coreNum->setItemText(7, QApplication::translate("setprocessor", "8", nullptr));
        comboBox_coreNum->setItemText(8, QApplication::translate("setprocessor", "9", nullptr));
        comboBox_coreNum->setItemText(9, QApplication::translate("setprocessor", "10", nullptr));
        comboBox_coreNum->setItemText(10, QApplication::translate("setprocessor", "0", nullptr));

        lbl_core1->setText(QApplication::translate("setprocessor", "Processor 1", nullptr));
        comboBox_core1->setItemText(0, QApplication::translate("setprocessor", "Hard", nullptr));
        comboBox_core1->setItemText(1, QApplication::translate("setprocessor", "Soft", nullptr));

        lbl_core2->setText(QApplication::translate("setprocessor", "Processor 2", nullptr));
        comboBox_core2->setItemText(0, QApplication::translate("setprocessor", "Hard", nullptr));
        comboBox_core2->setItemText(1, QApplication::translate("setprocessor", "Soft", nullptr));

        lbl_core3->setText(QApplication::translate("setprocessor", "Processor 3", nullptr));
        comboBox_core3->setItemText(0, QApplication::translate("setprocessor", "Hard", nullptr));
        comboBox_core3->setItemText(1, QApplication::translate("setprocessor", "Soft", nullptr));

        lbl_core4->setText(QApplication::translate("setprocessor", "Processor 4", nullptr));
        comboBox_core4->setItemText(0, QApplication::translate("setprocessor", "Hard", nullptr));
        comboBox_core4->setItemText(1, QApplication::translate("setprocessor", "Soft", nullptr));

        lbl_core5->setText(QApplication::translate("setprocessor", "Processor 5", nullptr));
        comboBox_core5->setItemText(0, QApplication::translate("setprocessor", "Hard", nullptr));
        comboBox_core5->setItemText(1, QApplication::translate("setprocessor", "Soft", nullptr));

        lbl_core6->setText(QApplication::translate("setprocessor", "Processor 6", nullptr));
        comboBox_core6->setItemText(0, QApplication::translate("setprocessor", "Hard", nullptr));
        comboBox_core6->setItemText(1, QApplication::translate("setprocessor", "Soft", nullptr));

        lbl_core7->setText(QApplication::translate("setprocessor", "Processor 7", nullptr));
        comboBox_core7->setItemText(0, QApplication::translate("setprocessor", "Hard", nullptr));
        comboBox_core7->setItemText(1, QApplication::translate("setprocessor", "Soft", nullptr));

        lbl_core8->setText(QApplication::translate("setprocessor", "Processor 8", nullptr));
        comboBox_core8->setItemText(0, QApplication::translate("setprocessor", "Hard", nullptr));
        comboBox_core8->setItemText(1, QApplication::translate("setprocessor", "Soft", nullptr));

        lbl_core9->setText(QApplication::translate("setprocessor", "Processor 9", nullptr));
        comboBox_core9->setItemText(0, QApplication::translate("setprocessor", "Hard", nullptr));
        comboBox_core9->setItemText(1, QApplication::translate("setprocessor", "Soft", nullptr));

        lbl_core10->setText(QApplication::translate("setprocessor", "Processor 10", nullptr));
        comboBox_core10->setItemText(0, QApplication::translate("setprocessor", "Hard", nullptr));
        comboBox_core10->setItemText(1, QApplication::translate("setprocessor", "Soft", nullptr));

        btn_add->setText(QApplication::translate("setprocessor", "Add", nullptr));
        btn_cancel->setText(QApplication::translate("setprocessor", "Cancel", nullptr));
    } // retranslateUi

};

namespace Ui {
    class setprocessor: public Ui_setprocessor {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SETPROCESSOR_H
