/********************************************************************************
** Form generated from reading UI file 'addcore.ui'
**
** Created by: Qt User Interface Compiler version 5.13.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADDCORE_H
#define UI_ADDCORE_H

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

class Ui_addCore
{
public:
    QGroupBox *groupBox;
    QWidget *verticalLayoutWidget;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout_5;
    QHBoxLayout *horizontalLayout;
    QHBoxLayout *horizontalLayout_6;
    QHBoxLayout *horizontalLayout_9;
    QSpacerItem *horizontalSpacer;
    QLabel *label_3;
    QSpinBox *type_id;
    QSpacerItem *horizontalSpacer_8;
    QHBoxLayout *horizontalLayout_2;
    QSpacerItem *horizontalSpacer_3;
    QLabel *label_2;
    QSpinBox *core_number;
    QSpacerItem *horizontalSpacer_4;
    QHBoxLayout *horizontalLayout_3;
    QSpacerItem *horizontalSpacer_5;
    QPushButton *Add;
    QSpacerItem *horizontalSpacer_7;
    QPushButton *Delete;
    QSpacerItem *horizontalSpacer_6;

    void setupUi(QDialog *addCore)
    {
        if (addCore->objectName().isEmpty())
            addCore->setObjectName(QString::fromUtf8("addCore"));
        addCore->resize(400, 299);
        groupBox = new QGroupBox(addCore);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        groupBox->setGeometry(QRect(0, 0, 401, 301));
        QFont font;
        font.setPointSize(20);
        groupBox->setFont(font);
        groupBox->setStyleSheet(QString::fromUtf8("color: rgb(71, 71, 71);\n"
"background-color: rgb(245, 245, 245);\n"
"border-color: rgb(18, 18, 18);"));
        verticalLayoutWidget = new QWidget(groupBox);
        verticalLayoutWidget->setObjectName(QString::fromUtf8("verticalLayoutWidget"));
        verticalLayoutWidget->setGeometry(QRect(0, 30, 401, 271));
        verticalLayout = new QVBoxLayout(verticalLayoutWidget);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName(QString::fromUtf8("horizontalLayout_5"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setObjectName(QString::fromUtf8("horizontalLayout_6"));

        horizontalLayout->addLayout(horizontalLayout_6);

        horizontalLayout_9 = new QHBoxLayout();
        horizontalLayout_9->setObjectName(QString::fromUtf8("horizontalLayout_9"));

        horizontalLayout->addLayout(horizontalLayout_9);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        label_3 = new QLabel(verticalLayoutWidget);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        QFont font1;
        font1.setPointSize(12);
        label_3->setFont(font1);
        label_3->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 0);"));

        horizontalLayout->addWidget(label_3);

        type_id = new QSpinBox(verticalLayoutWidget);
        type_id->setObjectName(QString::fromUtf8("type_id"));
        type_id->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 0);\n"
"font: 12pt \"Consolas\";\n"
"background-color: rgb(255, 255, 255);"));

        horizontalLayout->addWidget(type_id);

        horizontalSpacer_8 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_8);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_3);

        label_2 = new QLabel(verticalLayoutWidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setFont(font1);
        label_2->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 0);"));

        horizontalLayout_2->addWidget(label_2);

        core_number = new QSpinBox(verticalLayoutWidget);
        core_number->setObjectName(QString::fromUtf8("core_number"));
        core_number->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 0);\n"
"font: 12pt \"Consolas\";\n"
"background-color: rgb(255, 255, 255);"));

        horizontalLayout_2->addWidget(core_number);

        horizontalSpacer_4 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_4);


        horizontalLayout->addLayout(horizontalLayout_2);


        horizontalLayout_5->addLayout(horizontalLayout);


        verticalLayout->addLayout(horizontalLayout_5);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        horizontalSpacer_5 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_5);

        Add = new QPushButton(verticalLayoutWidget);
        Add->setObjectName(QString::fromUtf8("Add"));

        horizontalLayout_3->addWidget(Add);

        horizontalSpacer_7 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_7);

        Delete = new QPushButton(verticalLayoutWidget);
        Delete->setObjectName(QString::fromUtf8("Delete"));

        horizontalLayout_3->addWidget(Delete);

        horizontalSpacer_6 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_6);


        verticalLayout->addLayout(horizontalLayout_3);


        retranslateUi(addCore);

        QMetaObject::connectSlotsByName(addCore);
    } // setupUi

    void retranslateUi(QDialog *addCore)
    {
        addCore->setWindowTitle(QCoreApplication::translate("addCore", "Dialog", nullptr));
        groupBox->setTitle(QCoreApplication::translate("addCore", "\350\256\276\347\275\256\345\244\204\347\220\206\345\231\250", nullptr));
        label_3->setText(QCoreApplication::translate("addCore", "\347\261\273\345\236\213\347\274\226\345\217\267", nullptr));
        label_2->setText(QCoreApplication::translate("addCore", "\345\244\204\347\220\206\345\231\250\344\270\252\346\225\260", nullptr));
        Add->setText(QCoreApplication::translate("addCore", "\346\267\273\345\212\240", nullptr));
        Delete->setText(QCoreApplication::translate("addCore", "\345\210\240\351\231\244", nullptr));
    } // retranslateUi

};

namespace Ui {
    class addCore: public Ui_addCore {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADDCORE_H
