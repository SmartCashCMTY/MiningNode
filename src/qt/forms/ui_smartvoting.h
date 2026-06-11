/********************************************************************************
** Form generated from reading UI file 'smartvoting.ui'
**
** Created by: Qt User Interface Compiler version 5.6.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SMARTVOTING_H
#define UI_SMARTVOTING_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QScrollArea>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_SmartVotingPage
{
public:
    QVBoxLayout *verticalLayout;
    QStackedWidget *stackedWidget;
    QWidget *page;
    QVBoxLayout *verticalLayout_3;
    QWidget *loadingPage;
    QVBoxLayout *verticalLayout_7;
    QWidget *rewardsPage;
    QVBoxLayout *verticalLayout_2;
    QWidget *widget_2;
    QHBoxLayout *horizontalLayout_5;
    QVBoxLayout *verticalLayout_5;
    QHBoxLayout *horizontalLayout_12;
    QLabel *label_17;
    QLabel *openProposalsLabel;
    QHBoxLayout *horizontalLayout;
    QLabel *label_18;
    QLabel *votedForLabel;
    QVBoxLayout *verticalLayout_8;
    QHBoxLayout *horizontalLayout_3;
    QLabel *votingPower;
    QLabel *votingPowerLabel;
    QHBoxLayout *horizontalLayout_6;
    QLabel *addressesLabel;
    QPushButton *selectAddressesButton;
    QScrollArea *scrollArea;
    QWidget *proposalList;
    QVBoxLayout *verticalLayout_6;
    QHBoxLayout *horizontalLayout_2;
    QSpacerItem *horizontalSpacer_3;
    QPushButton *refreshButton;
    QSpacerItem *horizontalSpacer_7;
    QLabel *busybee;
    QSpacerItem *horizontalSpacer_71;
    QPushButton *castVotesButton;
    QSpacerItem *horizontalSpacer_4;

    void setupUi(QWidget *SmartVotingPage)
    {
        if (SmartVotingPage->objectName().isEmpty())
            SmartVotingPage->setObjectName(QStringLiteral("SmartVotingPage"));
        SmartVotingPage->resize(811, 457);
        verticalLayout = new QVBoxLayout(SmartVotingPage);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        stackedWidget = new QStackedWidget(SmartVotingPage);
        stackedWidget->setObjectName(QStringLiteral("stackedWidget"));
        stackedWidget->setMaximumSize(QSize(16777215, 16777215));
        page = new QWidget();
        page->setObjectName(QStringLiteral("page"));
        verticalLayout_3 = new QVBoxLayout(page);
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        stackedWidget->addWidget(page);
        loadingPage = new QWidget();
        loadingPage->setObjectName(QStringLiteral("loadingPage"));
        verticalLayout_7 = new QVBoxLayout(loadingPage);
        verticalLayout_7->setObjectName(QStringLiteral("verticalLayout_7"));
        stackedWidget->addWidget(loadingPage);
        rewardsPage = new QWidget();
        rewardsPage->setObjectName(QStringLiteral("rewardsPage"));
        rewardsPage->setMinimumSize(QSize(0, 0));
        rewardsPage->setMaximumSize(QSize(16777215, 16777215));
        verticalLayout_2 = new QVBoxLayout(rewardsPage);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        widget_2 = new QWidget(rewardsPage);
        widget_2->setObjectName(QStringLiteral("widget_2"));
        widget_2->setMinimumSize(QSize(0, 60));
        horizontalLayout_5 = new QHBoxLayout(widget_2);
        horizontalLayout_5->setObjectName(QStringLiteral("horizontalLayout_5"));
        horizontalLayout_5->setContentsMargins(-1, 0, -1, 0);
        verticalLayout_5 = new QVBoxLayout();
        verticalLayout_5->setObjectName(QStringLiteral("verticalLayout_5"));
        horizontalLayout_12 = new QHBoxLayout();
        horizontalLayout_12->setObjectName(QStringLiteral("horizontalLayout_12"));
        label_17 = new QLabel(widget_2);
        label_17->setObjectName(QStringLiteral("label_17"));
        QFont font;
        font.setPointSize(14);
        label_17->setFont(font);

        horizontalLayout_12->addWidget(label_17);

        openProposalsLabel = new QLabel(widget_2);
        openProposalsLabel->setObjectName(QStringLiteral("openProposalsLabel"));
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(openProposalsLabel->sizePolicy().hasHeightForWidth());
        openProposalsLabel->setSizePolicy(sizePolicy);
        QFont font1;
        font1.setPointSize(14);
        font1.setBold(true);
        font1.setWeight(75);
        openProposalsLabel->setFont(font1);

        horizontalLayout_12->addWidget(openProposalsLabel);


        verticalLayout_5->addLayout(horizontalLayout_12);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        label_18 = new QLabel(widget_2);
        label_18->setObjectName(QStringLiteral("label_18"));
        label_18->setFont(font);

        horizontalLayout->addWidget(label_18);

        votedForLabel = new QLabel(widget_2);
        votedForLabel->setObjectName(QStringLiteral("votedForLabel"));
        sizePolicy.setHeightForWidth(votedForLabel->sizePolicy().hasHeightForWidth());
        votedForLabel->setSizePolicy(sizePolicy);
        votedForLabel->setFont(font1);

        horizontalLayout->addWidget(votedForLabel);


        verticalLayout_5->addLayout(horizontalLayout);


        horizontalLayout_5->addLayout(verticalLayout_5);

        verticalLayout_8 = new QVBoxLayout();
        verticalLayout_8->setSpacing(4);
        verticalLayout_8->setObjectName(QStringLiteral("verticalLayout_8"));
        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        votingPower = new QLabel(widget_2);
        votingPower->setObjectName(QStringLiteral("votingPower"));
        votingPower->setFont(font);

        horizontalLayout_3->addWidget(votingPower);

        votingPowerLabel = new QLabel(widget_2);
        votingPowerLabel->setObjectName(QStringLiteral("votingPowerLabel"));
        votingPowerLabel->setFont(font1);

        horizontalLayout_3->addWidget(votingPowerLabel);


        verticalLayout_8->addLayout(horizontalLayout_3);

        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setObjectName(QStringLiteral("horizontalLayout_6"));
        addressesLabel = new QLabel(widget_2);
        addressesLabel->setObjectName(QStringLiteral("addressesLabel"));
        addressesLabel->setFont(font);

        horizontalLayout_6->addWidget(addressesLabel);

        selectAddressesButton = new QPushButton(widget_2);
        selectAddressesButton->setObjectName(QStringLiteral("selectAddressesButton"));

        horizontalLayout_6->addWidget(selectAddressesButton);


        verticalLayout_8->addLayout(horizontalLayout_6);


        horizontalLayout_5->addLayout(verticalLayout_8);


        verticalLayout_2->addWidget(widget_2);

        scrollArea = new QScrollArea(rewardsPage);
        scrollArea->setObjectName(QStringLiteral("scrollArea"));
        scrollArea->setWidgetResizable(true);
        proposalList = new QWidget();
        proposalList->setObjectName(QStringLiteral("proposalList"));
        proposalList->setGeometry(QRect(0, 0, 791, 339));
        verticalLayout_6 = new QVBoxLayout(proposalList);
        verticalLayout_6->setSpacing(8);
        verticalLayout_6->setObjectName(QStringLiteral("verticalLayout_6"));
        verticalLayout_6->setContentsMargins(9, -1, 9, -1);
        scrollArea->setWidget(proposalList);

        verticalLayout_2->addWidget(scrollArea);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_3);

        refreshButton = new QPushButton(rewardsPage);
        refreshButton->setObjectName(QStringLiteral("refreshButton"));

        horizontalLayout_2->addWidget(refreshButton);

        horizontalSpacer_7 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_7);

        busybee = new QLabel(rewardsPage);
        busybee->setObjectName(QStringLiteral("busybee"));
        busybee->setFont(font1);

        horizontalLayout_2->addWidget(busybee);

        horizontalSpacer_71 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_71);

        castVotesButton = new QPushButton(rewardsPage);
        castVotesButton->setObjectName(QStringLiteral("castVotesButton"));

        horizontalLayout_2->addWidget(castVotesButton);

        horizontalSpacer_4 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_4);


        verticalLayout_2->addLayout(horizontalLayout_2);

        stackedWidget->addWidget(rewardsPage);

        verticalLayout->addWidget(stackedWidget);


        retranslateUi(SmartVotingPage);

        stackedWidget->setCurrentIndex(2);


        QMetaObject::connectSlotsByName(SmartVotingPage);
    } // setupUi

    void retranslateUi(QWidget *SmartVotingPage)
    {
        SmartVotingPage->setWindowTitle(QApplication::translate("SmartVotingPage", "Form", 0));
        label_17->setText(QApplication::translate("SmartVotingPage", "Open proposals", 0));
        openProposalsLabel->setText(QApplication::translate("SmartVotingPage", "0", 0));
        label_18->setText(QApplication::translate("SmartVotingPage", "You voted for", 0));
        votedForLabel->setText(QApplication::translate("SmartVotingPage", "0", 0));
        votingPower->setText(QApplication::translate("SmartVotingPage", "Selected voting power", 0));
        votingPowerLabel->setText(QApplication::translate("SmartVotingPage", "0 SMART", 0));
        addressesLabel->setText(QApplication::translate("SmartVotingPage", "( 0 addresses )", 0));
        selectAddressesButton->setText(QApplication::translate("SmartVotingPage", "Select addresses", 0));
        refreshButton->setText(QApplication::translate("SmartVotingPage", "Refresh List", 0));
        busybee->setText(QApplication::translate("SmartVotingPage", "No proposals? Checkout our paid tasks on http://BusyBee.Auction.", 0));
        castVotesButton->setText(QApplication::translate("SmartVotingPage", "Vote for X proposals", 0));
    } // retranslateUi

};

namespace Ui {
    class SmartVotingPage: public Ui_SmartVotingPage {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SMARTVOTING_H
