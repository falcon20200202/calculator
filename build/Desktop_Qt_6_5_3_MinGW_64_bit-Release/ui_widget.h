/********************************************************************************
** Form generated from reading UI file 'widget.ui'
**
** Created by: Qt User Interface Compiler version 6.5.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WIDGET_H
#define UI_WIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Widget
{
public:
    QGroupBox *groupBox;
    QGridLayout *gridLayout;
    QPushButton *num_7;
    QPushButton *num_8;
    QPushButton *num_9;
    QPushButton *symMul;
    QPushButton *num_4;
    QPushButton *num_5;
    QPushButton *num_6;
    QPushButton *symMinus;
    QPushButton *num_1;
    QPushButton *num_2;
    QPushButton *num_3;
    QPushButton *symPlus;
    QPushButton *symClear;
    QPushButton *num_0;
    QPushButton *symDel;
    QPushButton *symEqual;
    QLabel *label_calculate;

    void setupUi(QWidget *Widget)
    {
        if (Widget->objectName().isEmpty())
            Widget->setObjectName("Widget");
        Widget->resize(340, 500);
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(Widget->sizePolicy().hasHeightForWidth());
        Widget->setSizePolicy(sizePolicy);
        Widget->setMinimumSize(QSize(340, 500));
        Widget->setMaximumSize(QSize(340, 500));
        groupBox = new QGroupBox(Widget);
        groupBox->setObjectName("groupBox");
        groupBox->setEnabled(true);
        groupBox->setGeometry(QRect(0, 220, 341, 281));
        QSizePolicy sizePolicy1(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(groupBox->sizePolicy().hasHeightForWidth());
        groupBox->setSizePolicy(sizePolicy1);
        groupBox->setBaseSize(QSize(0, 0));
        QFont font;
        font.setPointSize(31);
        groupBox->setFont(font);
        groupBox->setAlignment(Qt::AlignmentFlag::AlignCenter);
        groupBox->setFlat(false);
        groupBox->setCheckable(false);
        gridLayout = new QGridLayout(groupBox);
        gridLayout->setSpacing(0);
        gridLayout->setObjectName("gridLayout");
        gridLayout->setContentsMargins(0, 0, 0, 0);
        num_7 = new QPushButton(groupBox);
        num_7->setObjectName("num_7");
        num_7->setEnabled(true);
        QSizePolicy sizePolicy2(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(10);
        sizePolicy2.setHeightForWidth(num_7->sizePolicy().hasHeightForWidth());
        num_7->setSizePolicy(sizePolicy2);
        num_7->setMinimumSize(QSize(0, 0));
        num_7->setBaseSize(QSize(0, 0));

        gridLayout->addWidget(num_7, 0, 0, 1, 1);

        num_8 = new QPushButton(groupBox);
        num_8->setObjectName("num_8");
        sizePolicy2.setHeightForWidth(num_8->sizePolicy().hasHeightForWidth());
        num_8->setSizePolicy(sizePolicy2);

        gridLayout->addWidget(num_8, 0, 1, 1, 1);

        num_9 = new QPushButton(groupBox);
        num_9->setObjectName("num_9");
        sizePolicy2.setHeightForWidth(num_9->sizePolicy().hasHeightForWidth());
        num_9->setSizePolicy(sizePolicy2);

        gridLayout->addWidget(num_9, 0, 2, 1, 1);

        symMul = new QPushButton(groupBox);
        symMul->setObjectName("symMul");
        sizePolicy2.setHeightForWidth(symMul->sizePolicy().hasHeightForWidth());
        symMul->setSizePolicy(sizePolicy2);

        gridLayout->addWidget(symMul, 0, 3, 1, 1);

        num_4 = new QPushButton(groupBox);
        num_4->setObjectName("num_4");
        sizePolicy2.setHeightForWidth(num_4->sizePolicy().hasHeightForWidth());
        num_4->setSizePolicy(sizePolicy2);

        gridLayout->addWidget(num_4, 1, 0, 1, 1);

        num_5 = new QPushButton(groupBox);
        num_5->setObjectName("num_5");
        sizePolicy2.setHeightForWidth(num_5->sizePolicy().hasHeightForWidth());
        num_5->setSizePolicy(sizePolicy2);

        gridLayout->addWidget(num_5, 1, 1, 1, 1);

        num_6 = new QPushButton(groupBox);
        num_6->setObjectName("num_6");
        sizePolicy2.setHeightForWidth(num_6->sizePolicy().hasHeightForWidth());
        num_6->setSizePolicy(sizePolicy2);

        gridLayout->addWidget(num_6, 1, 2, 1, 1);

        symMinus = new QPushButton(groupBox);
        symMinus->setObjectName("symMinus");
        sizePolicy2.setHeightForWidth(symMinus->sizePolicy().hasHeightForWidth());
        symMinus->setSizePolicy(sizePolicy2);

        gridLayout->addWidget(symMinus, 1, 3, 1, 1);

        num_1 = new QPushButton(groupBox);
        num_1->setObjectName("num_1");
        sizePolicy2.setHeightForWidth(num_1->sizePolicy().hasHeightForWidth());
        num_1->setSizePolicy(sizePolicy2);

        gridLayout->addWidget(num_1, 2, 0, 1, 1);

        num_2 = new QPushButton(groupBox);
        num_2->setObjectName("num_2");
        sizePolicy2.setHeightForWidth(num_2->sizePolicy().hasHeightForWidth());
        num_2->setSizePolicy(sizePolicy2);

        gridLayout->addWidget(num_2, 2, 1, 1, 1);

        num_3 = new QPushButton(groupBox);
        num_3->setObjectName("num_3");
        sizePolicy2.setHeightForWidth(num_3->sizePolicy().hasHeightForWidth());
        num_3->setSizePolicy(sizePolicy2);

        gridLayout->addWidget(num_3, 2, 2, 1, 1);

        symPlus = new QPushButton(groupBox);
        symPlus->setObjectName("symPlus");
        sizePolicy2.setHeightForWidth(symPlus->sizePolicy().hasHeightForWidth());
        symPlus->setSizePolicy(sizePolicy2);

        gridLayout->addWidget(symPlus, 2, 3, 1, 1);

        symClear = new QPushButton(groupBox);
        symClear->setObjectName("symClear");
        sizePolicy2.setHeightForWidth(symClear->sizePolicy().hasHeightForWidth());
        symClear->setSizePolicy(sizePolicy2);

        gridLayout->addWidget(symClear, 3, 0, 1, 1);

        num_0 = new QPushButton(groupBox);
        num_0->setObjectName("num_0");
        sizePolicy2.setHeightForWidth(num_0->sizePolicy().hasHeightForWidth());
        num_0->setSizePolicy(sizePolicy2);

        gridLayout->addWidget(num_0, 3, 1, 1, 1);

        symDel = new QPushButton(groupBox);
        symDel->setObjectName("symDel");
        sizePolicy2.setHeightForWidth(symDel->sizePolicy().hasHeightForWidth());
        symDel->setSizePolicy(sizePolicy2);

        gridLayout->addWidget(symDel, 3, 2, 1, 1);

        symEqual = new QPushButton(groupBox);
        symEqual->setObjectName("symEqual");
        sizePolicy2.setHeightForWidth(symEqual->sizePolicy().hasHeightForWidth());
        symEqual->setSizePolicy(sizePolicy2);

        gridLayout->addWidget(symEqual, 3, 3, 1, 1);

        label_calculate = new QLabel(Widget);
        label_calculate->setObjectName("label_calculate");
        label_calculate->setGeometry(QRect(20, 30, 291, 151));
        label_calculate->setFont(font);
        label_calculate->setTextFormat(Qt::TextFormat::AutoText);
        label_calculate->setAlignment(Qt::AlignmentFlag::AlignRight|Qt::AlignmentFlag::AlignTrailing|Qt::AlignmentFlag::AlignVCenter);

        retranslateUi(Widget);

        QMetaObject::connectSlotsByName(Widget);
    } // setupUi

    void retranslateUi(QWidget *Widget)
    {
        Widget->setWindowTitle(QCoreApplication::translate("Widget", "Widget", nullptr));
        groupBox->setTitle(QString());
        num_7->setText(QCoreApplication::translate("Widget", "7", nullptr));
        num_8->setText(QCoreApplication::translate("Widget", "8", nullptr));
        num_9->setText(QCoreApplication::translate("Widget", "9", nullptr));
        symMul->setText(QCoreApplication::translate("Widget", "\303\227", nullptr));
        num_4->setText(QCoreApplication::translate("Widget", "4", nullptr));
        num_5->setText(QCoreApplication::translate("Widget", "5", nullptr));
        num_6->setText(QCoreApplication::translate("Widget", "6", nullptr));
        symMinus->setText(QCoreApplication::translate("Widget", "-", nullptr));
        num_1->setText(QCoreApplication::translate("Widget", "1", nullptr));
        num_2->setText(QCoreApplication::translate("Widget", "2", nullptr));
        num_3->setText(QCoreApplication::translate("Widget", "3", nullptr));
        symPlus->setText(QCoreApplication::translate("Widget", "+", nullptr));
        symClear->setText(QCoreApplication::translate("Widget", "C", nullptr));
        num_0->setText(QCoreApplication::translate("Widget", "0", nullptr));
        symDel->setText(QCoreApplication::translate("Widget", "D", nullptr));
        symEqual->setText(QCoreApplication::translate("Widget", "=", nullptr));
        label_calculate->setText(QCoreApplication::translate("Widget", "0", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Widget: public Ui_Widget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WIDGET_H
