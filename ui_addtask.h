/********************************************************************************
** Form generated from reading UI file 'addtask.ui'
**
** Created by: Qt User Interface Compiler version 5.13.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADDTASK_H
#define UI_ADDTASK_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_addTask
{
public:
    QGroupBox *groupBox;
    QWidget *verticalLayoutWidget;
    QVBoxLayout *verticalLayout_3;
    QHBoxLayout *horizontalLayout_4;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_7;
    QSpacerItem *horizontalSpacer_10;
    QSpinBox *sections;
    QHBoxLayout *horizontalLayout_12;
    QLabel *label_6;
    QSpacerItem *horizontalSpacer_5;
    QSpinBox *task_id;
    QHBoxLayout *horizontalLayout_15;
    QLabel *label_5;
    QSpacerItem *horizontalSpacer_6;
    QSpinBox *period;
    QHBoxLayout *horizontalLayout_13;
    QSpacerItem *horizontalSpacer_7;
    QPushButton *Create;
    QPushButton *Submit;
    QPushButton *Delete;
    QSpacerItem *horizontalSpacer_8;
    QHBoxLayout *horizontalLayout_5;
    QHBoxLayout *horizontalLayout_9;
    QLabel *label_3;
    QSpacerItem *horizontalSpacer_3;
    QSpinBox *section_number;
    QHBoxLayout *horizontalLayout_11;
    QLabel *label_4;
    QSpacerItem *horizontalSpacer_4;
    QSpinBox *section_core;
    QHBoxLayout *horizontalLayout_6;
    QHBoxLayout *horizontalLayout_7;
    QLabel *label;
    QSpacerItem *horizontalSpacer;
    QSpinBox *start_time;
    QHBoxLayout *horizontalLayout_8;
    QLabel *label_2;
    QSpacerItem *horizontalSpacer_2;
    QSpinBox *wcet;
    QHBoxLayout *horizontalLayout;
    QHBoxLayout *horizontalLayout_10;
    QPushButton *Add;

    void setupUi(QDialog *addTask)
    {
        if (addTask->objectName().isEmpty())
            addTask->setObjectName(QString::fromUtf8("addTask"));
        addTask->resize(738, 330);
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(addTask->sizePolicy().hasHeightForWidth());
        addTask->setSizePolicy(sizePolicy);
        addTask->setStyleSheet(QString::fromUtf8("color: rgb(71, 71, 71);\n"
"background-color: rgb(245, 245, 245);\n"
"border-color: rgb(18, 18, 18);"));
        groupBox = new QGroupBox(addTask);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        groupBox->setGeometry(QRect(0, 0, 731, 321));
        QSizePolicy sizePolicy1(QSizePolicy::Preferred, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(groupBox->sizePolicy().hasHeightForWidth());
        groupBox->setSizePolicy(sizePolicy1);
        QFont font;
        font.setPointSize(20);
        groupBox->setFont(font);
        groupBox->setStyleSheet(QString::fromUtf8("color: rgb(71, 71, 71);\n"
"background-color: rgb(245, 245, 245);\n"
"border-color: rgb(18, 18, 18);"));
        groupBox->setFlat(false);
        groupBox->setCheckable(false);
        verticalLayoutWidget = new QWidget(groupBox);
        verticalLayoutWidget->setObjectName(QString::fromUtf8("verticalLayoutWidget"));
        verticalLayoutWidget->setGeometry(QRect(0, 30, 718, 291));
        verticalLayout_3 = new QVBoxLayout(verticalLayoutWidget);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        verticalLayout_3->setContentsMargins(0, 0, 0, 0);
        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        label_7 = new QLabel(verticalLayoutWidget);
        label_7->setObjectName(QString::fromUtf8("label_7"));
        label_7->setMaximumSize(QSize(16777215, 16777215));
        QFont font1;
        font1.setPointSize(12);
        label_7->setFont(font1);
        label_7->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 0);"));

        horizontalLayout_3->addWidget(label_7);

        horizontalSpacer_10 = new QSpacerItem(40, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_10);

        sections = new QSpinBox(verticalLayoutWidget);
        sections->setObjectName(QString::fromUtf8("sections"));
        sections->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 0);\n"
"font: 12pt \"Consolas\";\n"
"background-color: rgb(255, 255, 255);"));

        horizontalLayout_3->addWidget(sections);


        horizontalLayout_4->addLayout(horizontalLayout_3);

        horizontalLayout_12 = new QHBoxLayout();
        horizontalLayout_12->setObjectName(QString::fromUtf8("horizontalLayout_12"));
        label_6 = new QLabel(verticalLayoutWidget);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setFont(font1);
        label_6->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 0);"));

        horizontalLayout_12->addWidget(label_6);

        horizontalSpacer_5 = new QSpacerItem(40, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout_12->addItem(horizontalSpacer_5);

        task_id = new QSpinBox(verticalLayoutWidget);
        task_id->setObjectName(QString::fromUtf8("task_id"));
        task_id->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 0);\n"
"font: 12pt \"Consolas\";\n"
"background-color: rgb(255, 255, 255);"));

        horizontalLayout_12->addWidget(task_id);


        horizontalLayout_4->addLayout(horizontalLayout_12);

        horizontalLayout_15 = new QHBoxLayout();
        horizontalLayout_15->setObjectName(QString::fromUtf8("horizontalLayout_15"));
        label_5 = new QLabel(verticalLayoutWidget);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        sizePolicy.setHeightForWidth(label_5->sizePolicy().hasHeightForWidth());
        label_5->setSizePolicy(sizePolicy);
        label_5->setFont(font1);
        label_5->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 0);"));

        horizontalLayout_15->addWidget(label_5);

        horizontalSpacer_6 = new QSpacerItem(40, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout_15->addItem(horizontalSpacer_6);

        period = new QSpinBox(verticalLayoutWidget);
        period->setObjectName(QString::fromUtf8("period"));
        QSizePolicy sizePolicy2(QSizePolicy::Ignored, QSizePolicy::Fixed);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(period->sizePolicy().hasHeightForWidth());
        period->setSizePolicy(sizePolicy2);
        period->setMaximumSize(QSize(110, 23));
        period->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 0);\n"
"font: 12pt \"Consolas\";\n"
"background-color: rgb(255, 255, 255);"));

        horizontalLayout_15->addWidget(period);


        horizontalLayout_4->addLayout(horizontalLayout_15);


        verticalLayout_3->addLayout(horizontalLayout_4);

        horizontalLayout_13 = new QHBoxLayout();
        horizontalLayout_13->setObjectName(QString::fromUtf8("horizontalLayout_13"));
        horizontalSpacer_7 = new QSpacerItem(40, 20, QSizePolicy::Preferred, QSizePolicy::Minimum);

        horizontalLayout_13->addItem(horizontalSpacer_7);

        Create = new QPushButton(verticalLayoutWidget);
        Create->setObjectName(QString::fromUtf8("Create"));
        Create->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 0);\n"
"font: 12pt \"Consolas\";\n"
"background-color: rgb(255, 255, 255);"));

        horizontalLayout_13->addWidget(Create);

        Submit = new QPushButton(verticalLayoutWidget);
        Submit->setObjectName(QString::fromUtf8("Submit"));
        Submit->setEnabled(true);
        Submit->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 0);\n"
"font: 12pt \"Consolas\";\n"
"background-color: rgb(255, 255, 255);"));
        Submit->setAutoDefault(true);

        horizontalLayout_13->addWidget(Submit);

        Delete = new QPushButton(verticalLayoutWidget);
        Delete->setObjectName(QString::fromUtf8("Delete"));
        Delete->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 0);\n"
"font: 12pt \"Consolas\";\n"
"background-color: rgb(255, 255, 255);"));

        horizontalLayout_13->addWidget(Delete);

        horizontalSpacer_8 = new QSpacerItem(40, 20, QSizePolicy::Preferred, QSizePolicy::Minimum);

        horizontalLayout_13->addItem(horizontalSpacer_8);


        verticalLayout_3->addLayout(horizontalLayout_13);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName(QString::fromUtf8("horizontalLayout_5"));
        horizontalLayout_9 = new QHBoxLayout();
        horizontalLayout_9->setObjectName(QString::fromUtf8("horizontalLayout_9"));
        label_3 = new QLabel(verticalLayoutWidget);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        sizePolicy.setHeightForWidth(label_3->sizePolicy().hasHeightForWidth());
        label_3->setSizePolicy(sizePolicy);
        label_3->setFont(font1);
        label_3->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 0);"));

        horizontalLayout_9->addWidget(label_3);

        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout_9->addItem(horizontalSpacer_3);

        section_number = new QSpinBox(verticalLayoutWidget);
        section_number->setObjectName(QString::fromUtf8("section_number"));
        QSizePolicy sizePolicy3(QSizePolicy::Minimum, QSizePolicy::Fixed);
        sizePolicy3.setHorizontalStretch(0);
        sizePolicy3.setVerticalStretch(0);
        sizePolicy3.setHeightForWidth(section_number->sizePolicy().hasHeightForWidth());
        section_number->setSizePolicy(sizePolicy3);
        section_number->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 0);\n"
"font: 12pt \"Consolas\";\n"
"background-color: rgb(255, 255, 255);"));

        horizontalLayout_9->addWidget(section_number);


        horizontalLayout_5->addLayout(horizontalLayout_9);

        horizontalLayout_11 = new QHBoxLayout();
        horizontalLayout_11->setObjectName(QString::fromUtf8("horizontalLayout_11"));
        label_4 = new QLabel(verticalLayoutWidget);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setFont(font1);
        label_4->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 0);"));

        horizontalLayout_11->addWidget(label_4);

        horizontalSpacer_4 = new QSpacerItem(40, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout_11->addItem(horizontalSpacer_4);

        section_core = new QSpinBox(verticalLayoutWidget);
        section_core->setObjectName(QString::fromUtf8("section_core"));
        section_core->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 0);\n"
"font: 12pt \"Consolas\";\n"
"background-color: rgb(255, 255, 255);"));

        horizontalLayout_11->addWidget(section_core);


        horizontalLayout_5->addLayout(horizontalLayout_11);


        verticalLayout_3->addLayout(horizontalLayout_5);

        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setObjectName(QString::fromUtf8("horizontalLayout_6"));
        horizontalLayout_7 = new QHBoxLayout();
        horizontalLayout_7->setObjectName(QString::fromUtf8("horizontalLayout_7"));
        label = new QLabel(verticalLayoutWidget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setFont(font1);
        label->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 0);"));

        horizontalLayout_7->addWidget(label);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout_7->addItem(horizontalSpacer);

        start_time = new QSpinBox(verticalLayoutWidget);
        start_time->setObjectName(QString::fromUtf8("start_time"));
        start_time->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 0);\n"
"font: 12pt \"Consolas\";\n"
"background-color: rgb(255, 255, 255);"));

        horizontalLayout_7->addWidget(start_time);


        horizontalLayout_6->addLayout(horizontalLayout_7);

        horizontalLayout_8 = new QHBoxLayout();
        horizontalLayout_8->setObjectName(QString::fromUtf8("horizontalLayout_8"));
        label_2 = new QLabel(verticalLayoutWidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setFont(font1);
        label_2->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 0);"));

        horizontalLayout_8->addWidget(label_2);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout_8->addItem(horizontalSpacer_2);

        wcet = new QSpinBox(verticalLayoutWidget);
        wcet->setObjectName(QString::fromUtf8("wcet"));
        wcet->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 0);\n"
"font: 12pt \"Consolas\";\n"
"background-color: rgb(255, 255, 255);"));

        horizontalLayout_8->addWidget(wcet);


        horizontalLayout_6->addLayout(horizontalLayout_8);


        verticalLayout_3->addLayout(horizontalLayout_6);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout_10 = new QHBoxLayout();
        horizontalLayout_10->setSpacing(4);
        horizontalLayout_10->setObjectName(QString::fromUtf8("horizontalLayout_10"));
        Add = new QPushButton(verticalLayoutWidget);
        Add->setObjectName(QString::fromUtf8("Add"));
        QSizePolicy sizePolicy4(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy4.setHorizontalStretch(0);
        sizePolicy4.setVerticalStretch(0);
        sizePolicy4.setHeightForWidth(Add->sizePolicy().hasHeightForWidth());
        Add->setSizePolicy(sizePolicy4);
        QFont font2;
        font2.setFamily(QString::fromUtf8("Consolas"));
        font2.setPointSize(12);
        font2.setBold(false);
        font2.setItalic(false);
        Add->setFont(font2);
        Add->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 0);\n"
"font: 12pt \"Consolas\";\n"
"background-color: rgb(255, 255, 255);"));

        horizontalLayout_10->addWidget(Add);


        horizontalLayout->addLayout(horizontalLayout_10);


        verticalLayout_3->addLayout(horizontalLayout);


        retranslateUi(addTask);

        Submit->setDefault(false);


        QMetaObject::connectSlotsByName(addTask);
    } // setupUi

    void retranslateUi(QDialog *addTask)
    {
        addTask->setWindowTitle(QCoreApplication::translate("addTask", "Dialog", nullptr));
        groupBox->setTitle(QCoreApplication::translate("addTask", "\346\267\273\345\212\240\344\273\273\345\212\241", nullptr));
        label_7->setText(QCoreApplication::translate("addTask", "        \345\210\206\346\256\265\346\225\260\351\207\217", nullptr));
        label_6->setText(QCoreApplication::translate("addTask", "        \344\273\273\345\212\241\345\217\267", nullptr));
        label_5->setText(QCoreApplication::translate("addTask", "          \345\221\250\346\234\237", nullptr));
        Create->setText(QCoreApplication::translate("addTask", "\345\210\233\345\273\272\344\273\273\345\212\241", nullptr));
        Submit->setText(QCoreApplication::translate("addTask", "\346\217\220\344\272\244\344\273\273\345\212\241", nullptr));
        Delete->setText(QCoreApplication::translate("addTask", "\345\217\226\346\266\210", nullptr));
        label_3->setText(QCoreApplication::translate("addTask", "      \344\273\273\345\212\241\345\210\206\346\256\265\345\217\267", nullptr));
        label_4->setText(QCoreApplication::translate("addTask", "      \345\210\206\346\256\265\346\211\200\345\234\250\346\240\270", nullptr));
        label->setText(QCoreApplication::translate("addTask", "     \344\273\273\345\212\241\345\274\200\345\247\213\346\227\266\351\227\264", nullptr));
        label_2->setText(QCoreApplication::translate("addTask", "          WCET", nullptr));
        Add->setText(QCoreApplication::translate("addTask", "\346\267\273\345\212\240\345\210\206\346\256\265", nullptr));
    } // retranslateUi

};

namespace Ui {
    class addTask: public Ui_addTask {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADDTASK_H
