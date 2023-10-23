/********************************************************************************
** Form generated from reading UI file 'addtask2.ui'
**
** Created by: Qt User Interface Compiler version 5.13.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADDTASK2_H
#define UI_ADDTASK2_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QListView>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_addTask2
{
public:
    QListView *listView;
    QWidget *verticalLayoutWidget;
    QVBoxLayout *verticalLayout;
    QGroupBox *groupBox;
    QWidget *verticalLayoutWidget_3;
    QVBoxLayout *verticalLayout_3;
    QHBoxLayout *horizontalLayout_5;
    QPushButton *pushButton;
    QHBoxLayout *horizontalLayout;
    QPushButton *pushButton_2;
    QGroupBox *groupBox_2;
    QWidget *verticalLayoutWidget_5;
    QVBoxLayout *verticalLayout_5;
    QHBoxLayout *horizontalLayout_7;
    QPushButton *pushButton_5;
    QHBoxLayout *horizontalLayout_9;
    QPushButton *pushButton_6;
    QListView *listView_2;

    void setupUi(QDialog *addTask2)
    {
        if (addTask2->objectName().isEmpty())
            addTask2->setObjectName(QString::fromUtf8("addTask2"));
        addTask2->resize(532, 200);
        listView = new QListView(addTask2);
        listView->setObjectName(QString::fromUtf8("listView"));
        listView->setGeometry(QRect(10, 10, 251, 181));
        verticalLayoutWidget = new QWidget(addTask2);
        verticalLayoutWidget->setObjectName(QString::fromUtf8("verticalLayoutWidget"));
        verticalLayoutWidget->setGeometry(QRect(20, 20, 231, 161));
        verticalLayout = new QVBoxLayout(verticalLayoutWidget);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        groupBox = new QGroupBox(verticalLayoutWidget);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        QSizePolicy sizePolicy(QSizePolicy::Minimum, QSizePolicy::Minimum);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(groupBox->sizePolicy().hasHeightForWidth());
        groupBox->setSizePolicy(sizePolicy);
        verticalLayoutWidget_3 = new QWidget(groupBox);
        verticalLayoutWidget_3->setObjectName(QString::fromUtf8("verticalLayoutWidget_3"));
        verticalLayoutWidget_3->setGeometry(QRect(10, 30, 201, 101));
        verticalLayout_3 = new QVBoxLayout(verticalLayoutWidget_3);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        verticalLayout_3->setContentsMargins(0, 0, 0, 0);
        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName(QString::fromUtf8("horizontalLayout_5"));
        pushButton = new QPushButton(verticalLayoutWidget_3);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        QSizePolicy sizePolicy1(QSizePolicy::MinimumExpanding, QSizePolicy::MinimumExpanding);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(pushButton->sizePolicy().hasHeightForWidth());
        pushButton->setSizePolicy(sizePolicy1);

        horizontalLayout_5->addWidget(pushButton);


        verticalLayout_3->addLayout(horizontalLayout_5);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        pushButton_2 = new QPushButton(verticalLayoutWidget_3);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));
        sizePolicy1.setHeightForWidth(pushButton_2->sizePolicy().hasHeightForWidth());
        pushButton_2->setSizePolicy(sizePolicy1);

        horizontalLayout->addWidget(pushButton_2);


        verticalLayout_3->addLayout(horizontalLayout);


        verticalLayout->addWidget(groupBox);

        groupBox_2 = new QGroupBox(addTask2);
        groupBox_2->setObjectName(QString::fromUtf8("groupBox_2"));
        groupBox_2->setGeometry(QRect(280, 20, 231, 161));
        verticalLayoutWidget_5 = new QWidget(groupBox_2);
        verticalLayoutWidget_5->setObjectName(QString::fromUtf8("verticalLayoutWidget_5"));
        verticalLayoutWidget_5->setGeometry(QRect(20, 30, 201, 101));
        verticalLayout_5 = new QVBoxLayout(verticalLayoutWidget_5);
        verticalLayout_5->setObjectName(QString::fromUtf8("verticalLayout_5"));
        verticalLayout_5->setContentsMargins(0, 0, 0, 0);
        horizontalLayout_7 = new QHBoxLayout();
        horizontalLayout_7->setObjectName(QString::fromUtf8("horizontalLayout_7"));
        pushButton_5 = new QPushButton(verticalLayoutWidget_5);
        pushButton_5->setObjectName(QString::fromUtf8("pushButton_5"));
        sizePolicy1.setHeightForWidth(pushButton_5->sizePolicy().hasHeightForWidth());
        pushButton_5->setSizePolicy(sizePolicy1);

        horizontalLayout_7->addWidget(pushButton_5);


        verticalLayout_5->addLayout(horizontalLayout_7);

        horizontalLayout_9 = new QHBoxLayout();
        horizontalLayout_9->setObjectName(QString::fromUtf8("horizontalLayout_9"));
        pushButton_6 = new QPushButton(verticalLayoutWidget_5);
        pushButton_6->setObjectName(QString::fromUtf8("pushButton_6"));
        sizePolicy1.setHeightForWidth(pushButton_6->sizePolicy().hasHeightForWidth());
        pushButton_6->setSizePolicy(sizePolicy1);

        horizontalLayout_9->addWidget(pushButton_6);


        verticalLayout_5->addLayout(horizontalLayout_9);

        listView_2 = new QListView(addTask2);
        listView_2->setObjectName(QString::fromUtf8("listView_2"));
        listView_2->setGeometry(QRect(270, 10, 251, 181));
        listView_2->raise();
        listView->raise();
        verticalLayoutWidget->raise();
        groupBox_2->raise();

        retranslateUi(addTask2);

        QMetaObject::connectSlotsByName(addTask2);
    } // setupUi

    void retranslateUi(QDialog *addTask2)
    {
        addTask2->setWindowTitle(QCoreApplication::translate("addTask2", "Dialog", nullptr));
        groupBox->setTitle(QCoreApplication::translate("addTask2", "DAG", nullptr));
        pushButton->setText(QCoreApplication::translate("addTask2", "\351\273\230\350\256\244DAG", nullptr));
        pushButton_2->setText(QCoreApplication::translate("addTask2", "\350\207\252\345\256\232\344\271\211DAG\344\273\273\345\212\241", nullptr));
        groupBox_2->setTitle(QCoreApplication::translate("addTask2", "\344\270\211\345\205\203\347\273\204", nullptr));
        pushButton_5->setText(QCoreApplication::translate("addTask2", "\351\273\230\350\256\244\344\270\211\345\205\203\347\273\204", nullptr));
        pushButton_6->setText(QCoreApplication::translate("addTask2", "\350\207\252\345\256\232\344\271\211\344\270\211\345\205\203\347\273\204", nullptr));
    } // retranslateUi

};

namespace Ui {
    class addTask2: public Ui_addTask2 {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADDTASK2_H
