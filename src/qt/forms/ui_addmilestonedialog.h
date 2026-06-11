/********************************************************************************
** Form generated from reading UI file 'addmilestonedialog.ui'
**
** Created by: Qt User Interface Compiler version 5.6.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADDMILESTONEDIALOG_H
#define UI_ADDMILESTONEDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCalendarWidget>
#include <QtWidgets/QDialog>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_AddMilestoneDialog
{
public:
    QVBoxLayout *verticalLayout;
    QWidget *widget;
    QVBoxLayout *verticalLayout_2;
    QLabel *label_3;
    QCalendarWidget *calendarWidget;
    QFormLayout *formLayout_2;
    QLineEdit *amountField;
    QLabel *label_2;
    QLabel *label;
    QLineEdit *descriptionField;
    QWidget *widget_2;
    QHBoxLayout *horizontalLayout_2;
    QSpacerItem *horizontalSpacer_3;
    QPushButton *addButton;
    QPushButton *cancelButton;
    QSpacerItem *horizontalSpacer;

    void setupUi(QDialog *AddMilestoneDialog)
    {
        if (AddMilestoneDialog->objectName().isEmpty())
            AddMilestoneDialog->setObjectName(QStringLiteral("AddMilestoneDialog"));
        AddMilestoneDialog->resize(370, 412);
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(AddMilestoneDialog->sizePolicy().hasHeightForWidth());
        AddMilestoneDialog->setSizePolicy(sizePolicy);
        verticalLayout = new QVBoxLayout(AddMilestoneDialog);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        widget = new QWidget(AddMilestoneDialog);
        widget->setObjectName(QStringLiteral("widget"));
        verticalLayout_2 = new QVBoxLayout(widget);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        label_3 = new QLabel(widget);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setWordWrap(true);

        verticalLayout_2->addWidget(label_3);

        calendarWidget = new QCalendarWidget(widget);
        calendarWidget->setObjectName(QStringLiteral("calendarWidget"));

        verticalLayout_2->addWidget(calendarWidget);


        verticalLayout->addWidget(widget);

        formLayout_2 = new QFormLayout();
        formLayout_2->setObjectName(QStringLiteral("formLayout_2"));
        amountField = new QLineEdit(AddMilestoneDialog);
        amountField->setObjectName(QStringLiteral("amountField"));

        formLayout_2->setWidget(0, QFormLayout::FieldRole, amountField);

        label_2 = new QLabel(AddMilestoneDialog);
        label_2->setObjectName(QStringLiteral("label_2"));
        QFont font;
        font.setBold(true);
        font.setWeight(75);
        label_2->setFont(font);

        formLayout_2->setWidget(0, QFormLayout::LabelRole, label_2);

        label = new QLabel(AddMilestoneDialog);
        label->setObjectName(QStringLiteral("label"));
        label->setFont(font);

        formLayout_2->setWidget(1, QFormLayout::LabelRole, label);

        descriptionField = new QLineEdit(AddMilestoneDialog);
        descriptionField->setObjectName(QStringLiteral("descriptionField"));

        formLayout_2->setWidget(1, QFormLayout::FieldRole, descriptionField);


        verticalLayout->addLayout(formLayout_2);

        widget_2 = new QWidget(AddMilestoneDialog);
        widget_2->setObjectName(QStringLiteral("widget_2"));
        widget_2->setMinimumSize(QSize(0, 0));
        horizontalLayout_2 = new QHBoxLayout(widget_2);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        horizontalSpacer_3 = new QSpacerItem(89, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_3);

        addButton = new QPushButton(widget_2);
        addButton->setObjectName(QStringLiteral("addButton"));

        horizontalLayout_2->addWidget(addButton);

        cancelButton = new QPushButton(widget_2);
        cancelButton->setObjectName(QStringLiteral("cancelButton"));

        horizontalLayout_2->addWidget(cancelButton);

        horizontalSpacer = new QSpacerItem(88, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer);


        verticalLayout->addWidget(widget_2);


        retranslateUi(AddMilestoneDialog);

        QMetaObject::connectSlotsByName(AddMilestoneDialog);
    } // setupUi

    void retranslateUi(QDialog *AddMilestoneDialog)
    {
        AddMilestoneDialog->setWindowTitle(QApplication::translate("AddMilestoneDialog", "Create new Smartnode", 0));
        label_3->setText(QApplication::translate("AddMilestoneDialog", "The first proposal milestone needs to be at least 14 days later than the date of the proposal creation. Also during your milestone creation consider other milestones can't have a period of more than two months. ", 0));
        label_2->setText(QApplication::translate("AddMilestoneDialog", "Amount USD", 0));
        label->setText(QApplication::translate("AddMilestoneDialog", "Description", 0));
        addButton->setText(QApplication::translate("AddMilestoneDialog", "Add", 0));
        cancelButton->setText(QApplication::translate("AddMilestoneDialog", "Cancel", 0));
    } // retranslateUi

};

namespace Ui {
    class AddMilestoneDialog: public Ui_AddMilestoneDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADDMILESTONEDIALOG_H
