/********************************************************************************
** Form generated from reading UI file 'smartproposaltab.ui'
**
** Created by: Qt User Interface Compiler version 5.6.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SMARTPROPOSALTAB_H
#define UI_SMARTPROPOSALTAB_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QFrame>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QScrollArea>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include "smartproposaltab.h"

QT_BEGIN_NAMESPACE

class Ui_SmartProposalTabWidget
{
public:
    QVBoxLayout *verticalLayout_4;
    QWidget *widget;
    QVBoxLayout *verticalLayout_3;
    QScrollArea *scrollArea;
    QWidget *scrollAreaWidgetContents;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout_2;
    QPushButton *removeButton;
    QSpacerItem *horizontalSpacer;
    QPushButton *publishButton;
    QPushButton *detailsButton;
    QSpacerItem *verticalSpacer;
    QLabel *label;
    QFrame *line_3;
    QHBoxLayout *horizontalLayout_3;
    QProposalInput *titleField;
    QLabel *label_2;
    QFrame *line_5;
    QHBoxLayout *horizontalLayout_4;
    QProposalInput *urlField;
    QLabel *label_9;
    QFrame *line_4;
    QHBoxLayout *horizontalLayout_5;
    QPushButton *selectAddressButton;
    QLabel *addressLabel;
    QLabel *label_4;
    QFrame *line_2;
    QHBoxLayout *horizontalLayout_6;
    QHBoxLayout *horizontalLayout_7;
    QPushButton *addMilestoneButton;
    QPushButton *removeMilestoneButton;
    QLabel *label_3;
    QLabel *finalAmountLabel;
    QTableWidget *milestoneTable;

    void setupUi(QWidget *SmartProposalTabWidget)
    {
        if (SmartProposalTabWidget->objectName().isEmpty())
            SmartProposalTabWidget->setObjectName(QStringLiteral("SmartProposalTabWidget"));
        SmartProposalTabWidget->resize(655, 687);
        SmartProposalTabWidget->setStyleSheet(QLatin1String("#SmartProposalWidget{\n"
"border: 1px solid black;\n"
"border-radius: 5px;\n"
"background-color: #FBFCFC;\n"
"}\n"
"\n"
"QProgressBar {\n"
"	background-color: rgb(201, 199, 202);\n"
"	max-height:5px;\n"
"    border-radius: 2px;\n"
"	height:6px;\n"
"}\n"
"\n"
""));
        verticalLayout_4 = new QVBoxLayout(SmartProposalTabWidget);
        verticalLayout_4->setSpacing(9);
        verticalLayout_4->setObjectName(QStringLiteral("verticalLayout_4"));
        verticalLayout_4->setContentsMargins(9, 9, 9, 9);
        widget = new QWidget(SmartProposalTabWidget);
        widget->setObjectName(QStringLiteral("widget"));
        verticalLayout_3 = new QVBoxLayout(widget);
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        verticalLayout_3->setContentsMargins(0, 0, 0, 0);

        verticalLayout_4->addWidget(widget);

        scrollArea = new QScrollArea(SmartProposalTabWidget);
        scrollArea->setObjectName(QStringLiteral("scrollArea"));
        scrollArea->setFrameShape(QFrame::NoFrame);
        scrollArea->setFrameShadow(QFrame::Plain);
        scrollArea->setLineWidth(0);
        scrollArea->setWidgetResizable(true);
        scrollAreaWidgetContents = new QWidget();
        scrollAreaWidgetContents->setObjectName(QStringLiteral("scrollAreaWidgetContents"));
        scrollAreaWidgetContents->setGeometry(QRect(0, 0, 637, 660));
        verticalLayout = new QVBoxLayout(scrollAreaWidgetContents);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        removeButton = new QPushButton(scrollAreaWidgetContents);
        removeButton->setObjectName(QStringLiteral("removeButton"));

        horizontalLayout_2->addWidget(removeButton);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer);

        publishButton = new QPushButton(scrollAreaWidgetContents);
        publishButton->setObjectName(QStringLiteral("publishButton"));

        horizontalLayout_2->addWidget(publishButton);

        detailsButton = new QPushButton(scrollAreaWidgetContents);
        detailsButton->setObjectName(QStringLiteral("detailsButton"));

        horizontalLayout_2->addWidget(detailsButton);


        verticalLayout->addLayout(horizontalLayout_2);

        verticalSpacer = new QSpacerItem(20, 10, QSizePolicy::Minimum, QSizePolicy::Minimum);

        verticalLayout->addItem(verticalSpacer);

        label = new QLabel(scrollAreaWidgetContents);
        label->setObjectName(QStringLiteral("label"));
        QFont font;
        font.setPointSize(13);
        font.setBold(true);
        font.setWeight(75);
        label->setFont(font);

        verticalLayout->addWidget(label);

        line_3 = new QFrame(scrollAreaWidgetContents);
        line_3->setObjectName(QStringLiteral("line_3"));
        line_3->setFrameShape(QFrame::HLine);
        line_3->setFrameShadow(QFrame::Sunken);

        verticalLayout->addWidget(line_3);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        titleField = new QProposalInput(scrollAreaWidgetContents);
        titleField->setObjectName(QStringLiteral("titleField"));

        horizontalLayout_3->addWidget(titleField);


        verticalLayout->addLayout(horizontalLayout_3);

        label_2 = new QLabel(scrollAreaWidgetContents);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setFont(font);

        verticalLayout->addWidget(label_2);

        line_5 = new QFrame(scrollAreaWidgetContents);
        line_5->setObjectName(QStringLiteral("line_5"));
        line_5->setFrameShape(QFrame::HLine);
        line_5->setFrameShadow(QFrame::Sunken);

        verticalLayout->addWidget(line_5);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QStringLiteral("horizontalLayout_4"));
        urlField = new QProposalInput(scrollAreaWidgetContents);
        urlField->setObjectName(QStringLiteral("urlField"));

        horizontalLayout_4->addWidget(urlField);


        verticalLayout->addLayout(horizontalLayout_4);

        label_9 = new QLabel(scrollAreaWidgetContents);
        label_9->setObjectName(QStringLiteral("label_9"));
        label_9->setFont(font);

        verticalLayout->addWidget(label_9);

        line_4 = new QFrame(scrollAreaWidgetContents);
        line_4->setObjectName(QStringLiteral("line_4"));
        line_4->setFrameShape(QFrame::HLine);
        line_4->setFrameShadow(QFrame::Sunken);

        verticalLayout->addWidget(line_4);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName(QStringLiteral("horizontalLayout_5"));
        selectAddressButton = new QPushButton(scrollAreaWidgetContents);
        selectAddressButton->setObjectName(QStringLiteral("selectAddressButton"));
        QSizePolicy sizePolicy(QSizePolicy::Maximum, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(selectAddressButton->sizePolicy().hasHeightForWidth());
        selectAddressButton->setSizePolicy(sizePolicy);

        horizontalLayout_5->addWidget(selectAddressButton);

        addressLabel = new QLabel(scrollAreaWidgetContents);
        addressLabel->setObjectName(QStringLiteral("addressLabel"));

        horizontalLayout_5->addWidget(addressLabel);


        verticalLayout->addLayout(horizontalLayout_5);

        label_4 = new QLabel(scrollAreaWidgetContents);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setFont(font);

        verticalLayout->addWidget(label_4);

        line_2 = new QFrame(scrollAreaWidgetContents);
        line_2->setObjectName(QStringLiteral("line_2"));
        line_2->setFrameShape(QFrame::HLine);
        line_2->setFrameShadow(QFrame::Sunken);

        verticalLayout->addWidget(line_2);

        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setObjectName(QStringLiteral("horizontalLayout_6"));
        horizontalLayout_7 = new QHBoxLayout();
        horizontalLayout_7->setObjectName(QStringLiteral("horizontalLayout_7"));
        addMilestoneButton = new QPushButton(scrollAreaWidgetContents);
        addMilestoneButton->setObjectName(QStringLiteral("addMilestoneButton"));
        sizePolicy.setHeightForWidth(addMilestoneButton->sizePolicy().hasHeightForWidth());
        addMilestoneButton->setSizePolicy(sizePolicy);

        horizontalLayout_7->addWidget(addMilestoneButton);

        removeMilestoneButton = new QPushButton(scrollAreaWidgetContents);
        removeMilestoneButton->setObjectName(QStringLiteral("removeMilestoneButton"));
        sizePolicy.setHeightForWidth(removeMilestoneButton->sizePolicy().hasHeightForWidth());
        removeMilestoneButton->setSizePolicy(sizePolicy);

        horizontalLayout_7->addWidget(removeMilestoneButton);

        label_3 = new QLabel(scrollAreaWidgetContents);
        label_3->setObjectName(QStringLiteral("label_3"));
        QSizePolicy sizePolicy1(QSizePolicy::Maximum, QSizePolicy::Preferred);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(label_3->sizePolicy().hasHeightForWidth());
        label_3->setSizePolicy(sizePolicy1);

        horizontalLayout_7->addWidget(label_3);

        finalAmountLabel = new QLabel(scrollAreaWidgetContents);
        finalAmountLabel->setObjectName(QStringLiteral("finalAmountLabel"));
        QFont font1;
        font1.setBold(true);
        font1.setWeight(75);
        finalAmountLabel->setFont(font1);

        horizontalLayout_7->addWidget(finalAmountLabel);


        horizontalLayout_6->addLayout(horizontalLayout_7);


        verticalLayout->addLayout(horizontalLayout_6);

        milestoneTable = new QTableWidget(scrollAreaWidgetContents);
        if (milestoneTable->columnCount() < 3)
            milestoneTable->setColumnCount(3);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        milestoneTable->setHorizontalHeaderItem(0, __qtablewidgetitem);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        milestoneTable->setHorizontalHeaderItem(1, __qtablewidgetitem1);
        QTableWidgetItem *__qtablewidgetitem2 = new QTableWidgetItem();
        milestoneTable->setHorizontalHeaderItem(2, __qtablewidgetitem2);
        milestoneTable->setObjectName(QStringLiteral("milestoneTable"));
        QSizePolicy sizePolicy2(QSizePolicy::Expanding, QSizePolicy::MinimumExpanding);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(milestoneTable->sizePolicy().hasHeightForWidth());
        milestoneTable->setSizePolicy(sizePolicy2);
        milestoneTable->setMinimumSize(QSize(0, 100));
        milestoneTable->setEditTriggers(QAbstractItemView::NoEditTriggers);
        milestoneTable->setAlternatingRowColors(true);
        milestoneTable->setSelectionMode(QAbstractItemView::SingleSelection);
        milestoneTable->setSelectionBehavior(QAbstractItemView::SelectRows);
        milestoneTable->horizontalHeader()->setStretchLastSection(true);
        milestoneTable->verticalHeader()->setStretchLastSection(false);

        verticalLayout->addWidget(milestoneTable);

        scrollArea->setWidget(scrollAreaWidgetContents);

        verticalLayout_4->addWidget(scrollArea);


        retranslateUi(SmartProposalTabWidget);

        QMetaObject::connectSlotsByName(SmartProposalTabWidget);
    } // setupUi

    void retranslateUi(QWidget *SmartProposalTabWidget)
    {
        SmartProposalTabWidget->setWindowTitle(QApplication::translate("SmartProposalTabWidget", "Form", 0));
        removeButton->setText(QApplication::translate("SmartProposalTabWidget", "Remove", 0));
        publishButton->setText(QApplication::translate("SmartProposalTabWidget", "Publish", 0));
        detailsButton->setText(QApplication::translate("SmartProposalTabWidget", "Details", 0));
        label->setText(QApplication::translate("SmartProposalTabWidget", "Proposal title", 0));
        titleField->setPlaceholderText(QApplication::translate("SmartProposalTabWidget", "Enter a meaningful title for your proposal", 0));
        label_2->setText(QApplication::translate("SmartProposalTabWidget", "Proposal URL", 0));
        urlField->setPlaceholderText(QApplication::translate("SmartProposalTabWidget", "Enter the url of your pre-proposal forum post or your own proposal description site if available", 0));
        label_9->setText(QApplication::translate("SmartProposalTabWidget", "Proposal address", 0));
        selectAddressButton->setText(QApplication::translate("SmartProposalTabWidget", "Select address", 0));
        addressLabel->setText(QApplication::translate("SmartProposalTabWidget", "No address selected", 0));
        label_4->setText(QApplication::translate("SmartProposalTabWidget", "Proposal milestones", 0));
        addMilestoneButton->setText(QApplication::translate("SmartProposalTabWidget", "Add milestone", 0));
        removeMilestoneButton->setText(QApplication::translate("SmartProposalTabWidget", "Remove selected", 0));
        label_3->setText(QApplication::translate("SmartProposalTabWidget", "Final amount", 0));
        finalAmountLabel->setText(QApplication::translate("SmartProposalTabWidget", "0 USD", 0));
        QTableWidgetItem *___qtablewidgetitem = milestoneTable->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QApplication::translate("SmartProposalTabWidget", "Date", 0));
        QTableWidgetItem *___qtablewidgetitem1 = milestoneTable->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QApplication::translate("SmartProposalTabWidget", "Amount", 0));
        QTableWidgetItem *___qtablewidgetitem2 = milestoneTable->horizontalHeaderItem(2);
        ___qtablewidgetitem2->setText(QApplication::translate("SmartProposalTabWidget", "Description", 0));
    } // retranslateUi

};

namespace Ui {
    class SmartProposalTabWidget: public Ui_SmartProposalTabWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SMARTPROPOSALTAB_H
