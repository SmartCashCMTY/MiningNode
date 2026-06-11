/********************************************************************************
** Form generated from reading UI file 'smartproposal.ui'
**
** Created by: Qt User Interface Compiler version 5.6.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SMARTPROPOSAL_H
#define UI_SMARTPROPOSAL_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QProgressBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_SmartProposalWidget
{
public:
    QHBoxLayout *horizontalLayout_3;
    QVBoxLayout *verticalLayout_4;
    QLabel *titleLabel;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer_5;
    QGroupBox *groupBox_4;
    QVBoxLayout *verticalLayout_3;
    QLabel *amountSmartLabel;
    QLabel *amountUSDLabel;
    QSpacerItem *horizontalSpacer;
    QGroupBox *groupBox_3;
    QVBoxLayout *verticalLayout_8;
    QLabel *deadlineLabel;
    QProgressBar *deadlineProgress;
    QSpacerItem *horizontalSpacer_8;
    QGroupBox *groupBox_2;
    QVBoxLayout *verticalLayout_2;
    QLabel *votedLabel;
    QSpacerItem *horizontalSpacer_2;
    QHBoxLayout *horizontalLayout_2;
    QSpacerItem *horizontalSpacer_6;
    QPushButton *viewProposalButton;
    QSpacerItem *horizontalSpacer_3;
    QGroupBox *groupBox;
    QHBoxLayout *horizontalLayout_4;
    QRadioButton *disabledButton;
    QRadioButton *yesButton;
    QRadioButton *noButton;
    QRadioButton *abstainButton;
    QSpacerItem *horizontalSpacer_4;
    QSpacerItem *horizontalSpacer_7;
    QVBoxLayout *verticalLayout;
    QLabel *yesLabel;
    QProgressBar *progressYes;
    QLabel *noLabel;
    QProgressBar *progressNo;
    QLabel *abstainLabel;
    QProgressBar *progressAbstain;

    void setupUi(QWidget *SmartProposalWidget)
    {
        if (SmartProposalWidget->objectName().isEmpty())
            SmartProposalWidget->setObjectName(QStringLiteral("SmartProposalWidget"));
        SmartProposalWidget->resize(768, 203);
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(SmartProposalWidget->sizePolicy().hasHeightForWidth());
        SmartProposalWidget->setSizePolicy(sizePolicy);
        SmartProposalWidget->setStyleSheet(QLatin1String("#SmartProposalWidget{\n"
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
        horizontalLayout_3 = new QHBoxLayout(SmartProposalWidget);
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        verticalLayout_4 = new QVBoxLayout();
        verticalLayout_4->setObjectName(QStringLiteral("verticalLayout_4"));
        titleLabel = new QLabel(SmartProposalWidget);
        titleLabel->setObjectName(QStringLiteral("titleLabel"));
        QFont font;
        font.setBold(true);
        font.setWeight(75);
        titleLabel->setFont(font);
        titleLabel->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignTop);
        titleLabel->setWordWrap(true);

        verticalLayout_4->addWidget(titleLabel);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(0);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalLayout->setContentsMargins(-1, 0, -1, -1);
        horizontalSpacer_5 = new QSpacerItem(40, 20, QSizePolicy::Minimum, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_5);

        groupBox_4 = new QGroupBox(SmartProposalWidget);
        groupBox_4->setObjectName(QStringLiteral("groupBox_4"));
        groupBox_4->setFont(font);
        verticalLayout_3 = new QVBoxLayout(groupBox_4);
        verticalLayout_3->setSpacing(6);
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        verticalLayout_3->setContentsMargins(6, 6, 6, 6);
        amountSmartLabel = new QLabel(groupBox_4);
        amountSmartLabel->setObjectName(QStringLiteral("amountSmartLabel"));

        verticalLayout_3->addWidget(amountSmartLabel);

        amountUSDLabel = new QLabel(groupBox_4);
        amountUSDLabel->setObjectName(QStringLiteral("amountUSDLabel"));

        verticalLayout_3->addWidget(amountUSDLabel);


        horizontalLayout->addWidget(groupBox_4);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Minimum, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        groupBox_3 = new QGroupBox(SmartProposalWidget);
        groupBox_3->setObjectName(QStringLiteral("groupBox_3"));
        QFont font1;
        font1.setBold(true);
        font1.setItalic(false);
        font1.setWeight(75);
        groupBox_3->setFont(font1);
        verticalLayout_8 = new QVBoxLayout(groupBox_3);
        verticalLayout_8->setSpacing(6);
        verticalLayout_8->setObjectName(QStringLiteral("verticalLayout_8"));
        verticalLayout_8->setContentsMargins(6, 6, 6, 6);
        deadlineLabel = new QLabel(groupBox_3);
        deadlineLabel->setObjectName(QStringLiteral("deadlineLabel"));

        verticalLayout_8->addWidget(deadlineLabel);

        deadlineProgress = new QProgressBar(groupBox_3);
        deadlineProgress->setObjectName(QStringLiteral("deadlineProgress"));
        deadlineProgress->setStyleSheet(QLatin1String("QProgressBar::chunk {\n"
"    background-color: #FEC60D;\n"
"}"));
        deadlineProgress->setValue(24);
        deadlineProgress->setTextVisible(false);

        verticalLayout_8->addWidget(deadlineProgress);


        horizontalLayout->addWidget(groupBox_3);

        horizontalSpacer_8 = new QSpacerItem(40, 20, QSizePolicy::Minimum, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_8);

        groupBox_2 = new QGroupBox(SmartProposalWidget);
        groupBox_2->setObjectName(QStringLiteral("groupBox_2"));
        QSizePolicy sizePolicy1(QSizePolicy::Preferred, QSizePolicy::Expanding);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(groupBox_2->sizePolicy().hasHeightForWidth());
        groupBox_2->setSizePolicy(sizePolicy1);
        groupBox_2->setFont(font);
        verticalLayout_2 = new QVBoxLayout(groupBox_2);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(6, 6, 6, 6);
        votedLabel = new QLabel(groupBox_2);
        votedLabel->setObjectName(QStringLiteral("votedLabel"));
        votedLabel->setWordWrap(true);

        verticalLayout_2->addWidget(votedLabel);


        horizontalLayout->addWidget(groupBox_2);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_2);


        verticalLayout_4->addLayout(horizontalLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        horizontalSpacer_6 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_6);

        viewProposalButton = new QPushButton(SmartProposalWidget);
        viewProposalButton->setObjectName(QStringLiteral("viewProposalButton"));
        viewProposalButton->setAutoDefault(false);
        viewProposalButton->setFlat(false);

        horizontalLayout_2->addWidget(viewProposalButton);

        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_3);

        groupBox = new QGroupBox(SmartProposalWidget);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        horizontalLayout_4 = new QHBoxLayout(groupBox);
        horizontalLayout_4->setObjectName(QStringLiteral("horizontalLayout_4"));
        disabledButton = new QRadioButton(groupBox);
        disabledButton->setObjectName(QStringLiteral("disabledButton"));
        disabledButton->setChecked(true);

        horizontalLayout_4->addWidget(disabledButton);

        yesButton = new QRadioButton(groupBox);
        yesButton->setObjectName(QStringLiteral("yesButton"));

        horizontalLayout_4->addWidget(yesButton);

        noButton = new QRadioButton(groupBox);
        noButton->setObjectName(QStringLiteral("noButton"));

        horizontalLayout_4->addWidget(noButton);

        abstainButton = new QRadioButton(groupBox);
        abstainButton->setObjectName(QStringLiteral("abstainButton"));

        horizontalLayout_4->addWidget(abstainButton);


        horizontalLayout_2->addWidget(groupBox);

        horizontalSpacer_4 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_4);


        verticalLayout_4->addLayout(horizontalLayout_2);


        horizontalLayout_3->addLayout(verticalLayout_4);

        horizontalSpacer_7 = new QSpacerItem(40, 20, QSizePolicy::MinimumExpanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_7);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        yesLabel = new QLabel(SmartProposalWidget);
        yesLabel->setObjectName(QStringLiteral("yesLabel"));

        verticalLayout->addWidget(yesLabel);

        progressYes = new QProgressBar(SmartProposalWidget);
        progressYes->setObjectName(QStringLiteral("progressYes"));
        progressYes->setStyleSheet(QLatin1String("QProgressBar::chunk {\n"
"    background-color: rgb(156, 194, 85)\n"
"}"));
        progressYes->setValue(24);
        progressYes->setTextVisible(false);

        verticalLayout->addWidget(progressYes);

        noLabel = new QLabel(SmartProposalWidget);
        noLabel->setObjectName(QStringLiteral("noLabel"));

        verticalLayout->addWidget(noLabel);

        progressNo = new QProgressBar(SmartProposalWidget);
        progressNo->setObjectName(QStringLiteral("progressNo"));
        progressNo->setStyleSheet(QLatin1String("QProgressBar::chunk {\n"
"    background-color: rgb(179, 2, 0)\n"
"}"));
        progressNo->setValue(24);
        progressNo->setTextVisible(false);

        verticalLayout->addWidget(progressNo);

        abstainLabel = new QLabel(SmartProposalWidget);
        abstainLabel->setObjectName(QStringLiteral("abstainLabel"));

        verticalLayout->addWidget(abstainLabel);

        progressAbstain = new QProgressBar(SmartProposalWidget);
        progressAbstain->setObjectName(QStringLiteral("progressAbstain"));
        progressAbstain->setStyleSheet(QLatin1String("QProgressBar::chunk {\n"
"    background-color: rgb(131, 142, 162)\n"
"}"));
        progressAbstain->setValue(24);
        progressAbstain->setTextVisible(false);

        verticalLayout->addWidget(progressAbstain);


        horizontalLayout_3->addLayout(verticalLayout);

        QWidget::setTabOrder(viewProposalButton, disabledButton);
        QWidget::setTabOrder(disabledButton, yesButton);
        QWidget::setTabOrder(yesButton, noButton);
        QWidget::setTabOrder(noButton, abstainButton);

        retranslateUi(SmartProposalWidget);

        QMetaObject::connectSlotsByName(SmartProposalWidget);
    } // setupUi

    void retranslateUi(QWidget *SmartProposalWidget)
    {
        SmartProposalWidget->setWindowTitle(QApplication::translate("SmartProposalWidget", "Form", 0));
        titleLabel->setText(QApplication::translate("SmartProposalWidget", "# 1000 - SmartCash 360 Video Editor & Creation Tool rtCash 360 Video Editor & Creation Tool", 0));
        groupBox_4->setTitle(QApplication::translate("SmartProposalWidget", "Requested funds", 0));
        amountSmartLabel->setText(QApplication::translate("SmartProposalWidget", "\316\243 245,145.93", 0));
        amountUSDLabel->setText(QApplication::translate("SmartProposalWidget", "US$ 20,950.00", 0));
        groupBox_3->setTitle(QApplication::translate("SmartProposalWidget", "Voting deadline", 0));
        deadlineLabel->setText(QApplication::translate("SmartProposalWidget", "06 days 20:49:08", 0));
        groupBox_2->setTitle(QApplication::translate("SmartProposalWidget", "You voted", 0));
        votedLabel->setText(QApplication::translate("SmartProposalWidget", "Nothing", 0));
        viewProposalButton->setText(QApplication::translate("SmartProposalWidget", "View in browser", 0));
        groupBox->setTitle(QApplication::translate("SmartProposalWidget", "Select your vote", 0));
        disabledButton->setText(QApplication::translate("SmartProposalWidget", "Disabled", 0));
        yesButton->setText(QApplication::translate("SmartProposalWidget", "Yes", 0));
        noButton->setText(QApplication::translate("SmartProposalWidget", "No", 0));
        abstainButton->setText(QApplication::translate("SmartProposalWidget", "Abstain", 0));
        yesLabel->setText(QApplication::translate("SmartProposalWidget", "Yes ( 0000000.0000  )", 0));
        noLabel->setText(QApplication::translate("SmartProposalWidget", "No ( 0000000.0000  )", 0));
        abstainLabel->setText(QApplication::translate("SmartProposalWidget", "Abstain ( 0000000.0000  )", 0));
    } // retranslateUi

};

namespace Ui {
    class SmartProposalWidget: public Ui_SmartProposalWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SMARTPROPOSAL_H
