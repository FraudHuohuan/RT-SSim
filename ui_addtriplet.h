/********************************************************************************
** Form generated from reading UI file 'addtriplet.ui'
**
** Created by: Qt User Interface Compiler version 5.13.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADDTRIPLET_H
#define UI_ADDTRIPLET_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QListView>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_addTriplet
{
public:
    QListView *listView;
    QWidget *horizontalLayoutWidget_5;
    QHBoxLayout *horizontalLayout_6;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QSpinBox *spinBox;
    QHBoxLayout *horizontalLayout_4;
    QLabel *label_2;
    QSpinBox *spinBox_2;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_3;
    QSpinBox *spinBox_3;
    QSpacerItem *horizontalSpacer_3;
    QVBoxLayout *verticalLayout_2;
    QHBoxLayout *horizontalLayout_7;
    QLabel *label_4;
    QSpinBox *spinBox_4;
    QHBoxLayout *horizontalLayout_8;
    QLabel *label_5;
    QSpinBox *spinBox_5;
    QHBoxLayout *horizontalLayout_5;
    QPushButton *pushButton;
    QPushButton *pushButton_2;

    void setupUi(QDialog *addTriplet)
    {
        if (addTriplet->objectName().isEmpty())
            addTriplet->setObjectName(QString::fromUtf8("addTriplet"));
        addTriplet->resize(622, 301);
        listView = new QListView(addTriplet);
        listView->setObjectName(QString::fromUtf8("listView"));
        listView->setGeometry(QRect(10, 10, 601, 281));
        horizontalLayoutWidget_5 = new QWidget(addTriplet);
        horizontalLayoutWidget_5->setObjectName(QString::fromUtf8("horizontalLayoutWidget_5"));
        horizontalLayoutWidget_5->setGeometry(QRect(30, 20, 559, 259));
        horizontalLayout_6 = new QHBoxLayout(horizontalLayoutWidget_5);
        horizontalLayout_6->setObjectName(QString::fromUtf8("horizontalLayout_6"));
        horizontalLayout_6->setContentsMargins(0, 0, 0, 0);
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        label = new QLabel(horizontalLayoutWidget_5);
        label->setObjectName(QString::fromUtf8("label"));

        horizontalLayout->addWidget(label);

        spinBox = new QSpinBox(horizontalLayoutWidget_5);
        spinBox->setObjectName(QString::fromUtf8("spinBox"));

        horizontalLayout->addWidget(spinBox);


        verticalLayout->addLayout(horizontalLayout);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        label_2 = new QLabel(horizontalLayoutWidget_5);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        horizontalLayout_4->addWidget(label_2);

        spinBox_2 = new QSpinBox(horizontalLayoutWidget_5);
        spinBox_2->setObjectName(QString::fromUtf8("spinBox_2"));

        horizontalLayout_4->addWidget(spinBox_2);


        verticalLayout->addLayout(horizontalLayout_4);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        label_3 = new QLabel(horizontalLayoutWidget_5);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        horizontalLayout_3->addWidget(label_3);

        spinBox_3 = new QSpinBox(horizontalLayoutWidget_5);
        spinBox_3->setObjectName(QString::fromUtf8("spinBox_3"));

        horizontalLayout_3->addWidget(spinBox_3);


        verticalLayout->addLayout(horizontalLayout_3);


        horizontalLayout_6->addLayout(verticalLayout);

        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout_6->addItem(horizontalSpacer_3);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        horizontalLayout_7 = new QHBoxLayout();
        horizontalLayout_7->setObjectName(QString::fromUtf8("horizontalLayout_7"));
        label_4 = new QLabel(horizontalLayoutWidget_5);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        horizontalLayout_7->addWidget(label_4);

        spinBox_4 = new QSpinBox(horizontalLayoutWidget_5);
        spinBox_4->setObjectName(QString::fromUtf8("spinBox_4"));

        horizontalLayout_7->addWidget(spinBox_4);


        verticalLayout_2->addLayout(horizontalLayout_7);

        horizontalLayout_8 = new QHBoxLayout();
        horizontalLayout_8->setObjectName(QString::fromUtf8("horizontalLayout_8"));
        label_5 = new QLabel(horizontalLayoutWidget_5);
        label_5->setObjectName(QString::fromUtf8("label_5"));

        horizontalLayout_8->addWidget(label_5);

        spinBox_5 = new QSpinBox(horizontalLayoutWidget_5);
        spinBox_5->setObjectName(QString::fromUtf8("spinBox_5"));

        horizontalLayout_8->addWidget(spinBox_5);


        verticalLayout_2->addLayout(horizontalLayout_8);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName(QString::fromUtf8("horizontalLayout_5"));
        pushButton = new QPushButton(horizontalLayoutWidget_5);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));

        horizontalLayout_5->addWidget(pushButton);

        pushButton_2 = new QPushButton(horizontalLayoutWidget_5);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));

        horizontalLayout_5->addWidget(pushButton_2);


        verticalLayout_2->addLayout(horizontalLayout_5);


        horizontalLayout_6->addLayout(verticalLayout_2);


        retranslateUi(addTriplet);

        QMetaObject::connectSlotsByName(addTriplet);
    } // setupUi

    void retranslateUi(QDialog *addTriplet)
    {
        addTriplet->setWindowTitle(QCoreApplication::translate("addTriplet", "Triplet", nullptr));
        label->setText(QCoreApplication::translate("addTriplet", "TaskID", nullptr));
        label_2->setText(QCoreApplication::translate("addTriplet", "Period", nullptr));
        label_3->setText(QCoreApplication::translate("addTriplet", "Deadline", nullptr));
        label_4->setText(QCoreApplication::translate("addTriplet", "CoreID", nullptr));
        label_5->setText(QCoreApplication::translate("addTriplet", "WCET", nullptr));
        pushButton->setText(QCoreApplication::translate("addTriplet", "\346\267\273\345\212\240", nullptr));
        pushButton_2->setText(QCoreApplication::translate("addTriplet", "\345\217\226\346\266\210", nullptr));
    } // retranslateUi

};

namespace Ui {
    class addTriplet: public Ui_addTriplet {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADDTRIPLET_H
