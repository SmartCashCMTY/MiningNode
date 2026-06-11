/********************************************************************************
** Form generated from reading UI file 'smartrewardslist.ui'
**
** Created by: Qt User Interface Compiler version 5.6.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SMARTREWARDSLIST_H
#define UI_SMARTREWARDSLIST_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QScrollArea>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include "waitingspinnerwidget.h"

QT_BEGIN_NAMESPACE

class Ui_SmartrewardsList
{
public:
    QVBoxLayout *verticalLayout;
    QStackedWidget *stackedWidget;
    QWidget *page;
    QVBoxLayout *verticalLayout_3;
    QSpacerItem *verticalSpacer_2;
    QLabel *label_3;
    QSpacerItem *verticalSpacer_3;
    QHBoxLayout *horizontalLayout_4;
    QSpacerItem *horizontalSpacer_5;
    QWidget *spinnerContainer;
    QVBoxLayout *verticalLayout_4;
    WaitingSpinnerWidget *spinnerWidget;
    QSpacerItem *horizontalSpacer_6;
    QSpacerItem *verticalSpacer;
    QWidget *rewardsPage;
    QVBoxLayout *verticalLayout_2;
    QWidget *widget_2;
    QHBoxLayout *horizontalLayout_11;
    QVBoxLayout *verticalLayout_5;
    QHBoxLayout *horizontalLayout_12;
    QLabel *label_17;
    QLabel *roundLabel;
    QLabel *roundEndsLabel;
    QLabel *nextRoundLabel;
    QHBoxLayout *horizontalLayout_13;
    QLabel *label_2100;
    QHBoxLayout *horizontalLayout_131;
    QVBoxLayout *verticalLayout_9;
    QLabel *label_21;
    QLabel *label_211;
    QLabel *label_212;
    QVBoxLayout *verticalLayout_10;
    QLabel *label_213;
    QLabel *label_214;
    QLabel *label_215;
    QVBoxLayout *verticalLayout_13;
    QLabel *label_216;
    QLabel *percentLabel;
    QLabel *percentLabela;
    QVBoxLayout *verticalLayout_12;
    QLabel *label_217;
    QLabel *percentLabelb;
    QLabel *percentLabelSuper;
    QVBoxLayout *verticalLayout_14;
    QLabel *label_218;
    QLabel *percentLabelTwo;
    QLabel *percentLabelSuperTwo;
    QVBoxLayout *verticalLayout_141;
    QLabel *label_219;
    QLabel *percentLabelThree;
    QLabel *percentLabelSuperThree;
    QVBoxLayout *verticalLayout_11;
    QLabel *label_2110;
    QLabel *percentLabelFour;
    QLabel *percentLabelSuperFour;
    QSpacerItem *verticalSpacer_4;
    QFrame *line;
    QWidget *widget_3;
    QGridLayout *gridLayout;
    QSpacerItem *horizontalSpacer_1;
    QLabel *lblTotalRewards;
    QLabel *label_9;
    QLabel *lblEligibleAddresses;
    QLabel *label_6;
    QLabel *lblActiveAddresses;
    QLabel *label_4;
    QScrollArea *scrollArea;
    QWidget *smartRewardsList;
    QVBoxLayout *verticalLayout_8;
    QWidget *widget;
    QHBoxLayout *horizontalLayout_3;
    QPushButton *btnSendProofs;
    QSpacerItem *horizontalSpacer_3;

    void setupUi(QWidget *SmartrewardsList)
    {
        if (SmartrewardsList->objectName().isEmpty())
            SmartrewardsList->setObjectName(QStringLiteral("SmartrewardsList"));
        verticalLayout = new QVBoxLayout(SmartrewardsList);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(9, 0, -1, 0);
        stackedWidget = new QStackedWidget(SmartrewardsList);
        stackedWidget->setObjectName(QStringLiteral("stackedWidget"));
        page = new QWidget();
        page->setObjectName(QStringLiteral("page"));
        verticalLayout_3 = new QVBoxLayout(page);
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        verticalSpacer_2 = new QSpacerItem(20, 142, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_3->addItem(verticalSpacer_2);

        label_3 = new QLabel(page);
        label_3->setObjectName(QStringLiteral("label_3"));
        QFont font;
        font.setPointSize(29);
        font.setBold(true);
        font.setWeight(75);
        label_3->setFont(font);
        label_3->setAlignment(Qt::AlignCenter);

        verticalLayout_3->addWidget(label_3);

        verticalSpacer_3 = new QSpacerItem(20, 30, QSizePolicy::Minimum, QSizePolicy::Fixed);

        verticalLayout_3->addItem(verticalSpacer_3);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QStringLiteral("horizontalLayout_4"));
        horizontalSpacer_5 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer_5);

        spinnerContainer = new QWidget(page);
        spinnerContainer->setObjectName(QStringLiteral("spinnerContainer"));
        spinnerContainer->setMinimumSize(QSize(100, 100));
        verticalLayout_4 = new QVBoxLayout(spinnerContainer);
        verticalLayout_4->setObjectName(QStringLiteral("verticalLayout_4"));
        spinnerWidget = new WaitingSpinnerWidget(spinnerContainer);
        spinnerWidget->setObjectName(QStringLiteral("spinnerWidget"));

        verticalLayout_4->addWidget(spinnerWidget);


        horizontalLayout_4->addWidget(spinnerContainer);

        horizontalSpacer_6 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer_6);


        verticalLayout_3->addLayout(horizontalLayout_4);

        verticalSpacer = new QSpacerItem(20, 76, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_3->addItem(verticalSpacer);

        stackedWidget->addWidget(page);
        rewardsPage = new QWidget();
        rewardsPage->setObjectName(QStringLiteral("rewardsPage"));
        verticalLayout_2 = new QVBoxLayout(rewardsPage);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        widget_2 = new QWidget(rewardsPage);
        widget_2->setObjectName(QStringLiteral("widget_2"));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(widget_2->sizePolicy().hasHeightForWidth());
        widget_2->setSizePolicy(sizePolicy);
        horizontalLayout_11 = new QHBoxLayout(widget_2);
        horizontalLayout_11->setObjectName(QStringLiteral("horizontalLayout_11"));
        horizontalLayout_11->setContentsMargins(0, 0, 0, 0);
        verticalLayout_5 = new QVBoxLayout();
        verticalLayout_5->setObjectName(QStringLiteral("verticalLayout_5"));
        horizontalLayout_12 = new QHBoxLayout();
        horizontalLayout_12->setObjectName(QStringLiteral("horizontalLayout_12"));
        label_17 = new QLabel(widget_2);
        label_17->setObjectName(QStringLiteral("label_17"));
        QFont font1;
        font1.setPointSize(15);
        label_17->setFont(font1);

        horizontalLayout_12->addWidget(label_17);

        roundLabel = new QLabel(widget_2);
        roundLabel->setObjectName(QStringLiteral("roundLabel"));
        QSizePolicy sizePolicy1(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(roundLabel->sizePolicy().hasHeightForWidth());
        roundLabel->setSizePolicy(sizePolicy1);
        QFont font2;
        font2.setPointSize(15);
        font2.setBold(true);
        font2.setWeight(75);
        roundLabel->setFont(font2);

        horizontalLayout_12->addWidget(roundLabel);

        roundEndsLabel = new QLabel(widget_2);
        roundEndsLabel->setObjectName(QStringLiteral("roundEndsLabel"));
        sizePolicy1.setHeightForWidth(roundEndsLabel->sizePolicy().hasHeightForWidth());
        roundEndsLabel->setSizePolicy(sizePolicy1);
        roundEndsLabel->setFont(font1);

        horizontalLayout_12->addWidget(roundEndsLabel);

        nextRoundLabel = new QLabel(widget_2);
        nextRoundLabel->setObjectName(QStringLiteral("nextRoundLabel"));
        QSizePolicy sizePolicy2(QSizePolicy::Expanding, QSizePolicy::Preferred);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(nextRoundLabel->sizePolicy().hasHeightForWidth());
        nextRoundLabel->setSizePolicy(sizePolicy2);
        nextRoundLabel->setFont(font2);

        horizontalLayout_12->addWidget(nextRoundLabel);


        verticalLayout_5->addLayout(horizontalLayout_12);

        horizontalLayout_13 = new QHBoxLayout();
        horizontalLayout_13->setObjectName(QStringLiteral("horizontalLayout_13"));
        label_2100 = new QLabel(widget_2);
        label_2100->setObjectName(QStringLiteral("label_2100"));
        QFont font3;
        font3.setPointSize(12);
        label_2100->setFont(font3);

        horizontalLayout_13->addWidget(label_2100);


        verticalLayout_5->addLayout(horizontalLayout_13);

        horizontalLayout_131 = new QHBoxLayout();
        horizontalLayout_131->setObjectName(QStringLiteral("horizontalLayout_131"));
        verticalLayout_9 = new QVBoxLayout();
        verticalLayout_9->setObjectName(QStringLiteral("verticalLayout_9"));
        label_21 = new QLabel(widget_2);
        label_21->setObjectName(QStringLiteral("label_21"));
        QFont font4;
        font4.setPointSize(12);
        font4.setBold(true);
        font4.setWeight(75);
        label_21->setFont(font4);

        verticalLayout_9->addWidget(label_21);

        label_211 = new QLabel(widget_2);
        label_211->setObjectName(QStringLiteral("label_211"));
        label_211->setFont(font4);

        verticalLayout_9->addWidget(label_211);

        label_212 = new QLabel(widget_2);
        label_212->setObjectName(QStringLiteral("label_212"));
        label_212->setFont(font4);

        verticalLayout_9->addWidget(label_212);


        horizontalLayout_131->addLayout(verticalLayout_9);

        verticalLayout_10 = new QVBoxLayout();
        verticalLayout_10->setObjectName(QStringLiteral("verticalLayout_10"));
        label_213 = new QLabel(widget_2);
        label_213->setObjectName(QStringLiteral("label_213"));
        label_213->setFont(font4);
        label_213->setAlignment(Qt::AlignCenter);

        verticalLayout_10->addWidget(label_213);

        label_214 = new QLabel(widget_2);
        label_214->setObjectName(QStringLiteral("label_214"));
        label_214->setFont(font4);
        label_214->setAlignment(Qt::AlignCenter);

        verticalLayout_10->addWidget(label_214);

        label_215 = new QLabel(widget_2);
        label_215->setObjectName(QStringLiteral("label_215"));
        label_215->setFont(font4);
        label_215->setAlignment(Qt::AlignCenter);

        verticalLayout_10->addWidget(label_215);


        horizontalLayout_131->addLayout(verticalLayout_10);

        verticalLayout_13 = new QVBoxLayout();
        verticalLayout_13->setObjectName(QStringLiteral("verticalLayout_13"));
        label_216 = new QLabel(widget_2);
        label_216->setObjectName(QStringLiteral("label_216"));
        label_216->setFont(font4);
        label_216->setAlignment(Qt::AlignCenter);

        verticalLayout_13->addWidget(label_216);

        percentLabel = new QLabel(widget_2);
        percentLabel->setObjectName(QStringLiteral("percentLabel"));
        percentLabel->setFont(font3);
        percentLabel->setAlignment(Qt::AlignCenter);

        verticalLayout_13->addWidget(percentLabel);

        percentLabela = new QLabel(widget_2);
        percentLabela->setObjectName(QStringLiteral("percentLabela"));
        percentLabela->setFont(font3);
        percentLabela->setAlignment(Qt::AlignCenter);

        verticalLayout_13->addWidget(percentLabela);


        horizontalLayout_131->addLayout(verticalLayout_13);

        verticalLayout_12 = new QVBoxLayout();
        verticalLayout_12->setObjectName(QStringLiteral("verticalLayout_12"));
        label_217 = new QLabel(widget_2);
        label_217->setObjectName(QStringLiteral("label_217"));
        label_217->setFont(font4);
        label_217->setAlignment(Qt::AlignCenter);

        verticalLayout_12->addWidget(label_217);

        percentLabelb = new QLabel(widget_2);
        percentLabelb->setObjectName(QStringLiteral("percentLabelb"));
        percentLabelb->setFont(font3);
        percentLabelb->setAlignment(Qt::AlignCenter);

        verticalLayout_12->addWidget(percentLabelb);

        percentLabelSuper = new QLabel(widget_2);
        percentLabelSuper->setObjectName(QStringLiteral("percentLabelSuper"));
        percentLabelSuper->setFont(font3);
        percentLabelSuper->setAlignment(Qt::AlignCenter);

        verticalLayout_12->addWidget(percentLabelSuper);


        horizontalLayout_131->addLayout(verticalLayout_12);

        verticalLayout_14 = new QVBoxLayout();
        verticalLayout_14->setObjectName(QStringLiteral("verticalLayout_14"));
        label_218 = new QLabel(widget_2);
        label_218->setObjectName(QStringLiteral("label_218"));
        label_218->setFont(font4);
        label_218->setAlignment(Qt::AlignCenter);

        verticalLayout_14->addWidget(label_218);

        percentLabelTwo = new QLabel(widget_2);
        percentLabelTwo->setObjectName(QStringLiteral("percentLabelTwo"));
        percentLabelTwo->setFont(font3);
        percentLabelTwo->setAlignment(Qt::AlignCenter);

        verticalLayout_14->addWidget(percentLabelTwo);

        percentLabelSuperTwo = new QLabel(widget_2);
        percentLabelSuperTwo->setObjectName(QStringLiteral("percentLabelSuperTwo"));
        percentLabelSuperTwo->setFont(font3);
        percentLabelSuperTwo->setAlignment(Qt::AlignCenter);

        verticalLayout_14->addWidget(percentLabelSuperTwo);


        horizontalLayout_131->addLayout(verticalLayout_14);

        verticalLayout_141 = new QVBoxLayout();
        verticalLayout_141->setObjectName(QStringLiteral("verticalLayout_141"));
        label_219 = new QLabel(widget_2);
        label_219->setObjectName(QStringLiteral("label_219"));
        label_219->setFont(font4);
        label_219->setAlignment(Qt::AlignCenter);

        verticalLayout_141->addWidget(label_219);

        percentLabelThree = new QLabel(widget_2);
        percentLabelThree->setObjectName(QStringLiteral("percentLabelThree"));
        percentLabelThree->setFont(font3);
        percentLabelThree->setAlignment(Qt::AlignCenter);

        verticalLayout_141->addWidget(percentLabelThree);

        percentLabelSuperThree = new QLabel(widget_2);
        percentLabelSuperThree->setObjectName(QStringLiteral("percentLabelSuperThree"));
        percentLabelSuperThree->setFont(font3);
        percentLabelSuperThree->setAlignment(Qt::AlignCenter);

        verticalLayout_141->addWidget(percentLabelSuperThree);


        horizontalLayout_131->addLayout(verticalLayout_141);

        verticalLayout_11 = new QVBoxLayout();
        verticalLayout_11->setObjectName(QStringLiteral("verticalLayout_11"));
        label_2110 = new QLabel(widget_2);
        label_2110->setObjectName(QStringLiteral("label_2110"));
        label_2110->setFont(font4);
        label_2110->setAlignment(Qt::AlignCenter);

        verticalLayout_11->addWidget(label_2110);

        percentLabelFour = new QLabel(widget_2);
        percentLabelFour->setObjectName(QStringLiteral("percentLabelFour"));
        percentLabelFour->setFont(font3);
        percentLabelFour->setAlignment(Qt::AlignCenter);

        verticalLayout_11->addWidget(percentLabelFour);

        percentLabelSuperFour = new QLabel(widget_2);
        percentLabelSuperFour->setObjectName(QStringLiteral("percentLabelSuperFour"));
        percentLabelSuperFour->setFont(font3);
        percentLabelSuperFour->setAlignment(Qt::AlignCenter);

        verticalLayout_11->addWidget(percentLabelSuperFour);


        horizontalLayout_131->addLayout(verticalLayout_11);

        verticalSpacer_4 = new QSpacerItem(QSizePolicy::Minimum, QSizePolicy::Expanding);

        horizontalLayout_131->addItem(verticalSpacer_4);


        verticalLayout_5->addLayout(horizontalLayout_131);


        horizontalLayout_11->addLayout(verticalLayout_5);


        verticalLayout_2->addWidget(widget_2);

        line = new QFrame(rewardsPage);
        line->setObjectName(QStringLiteral("line"));
        line->setFrameShape(QFrame::HLine);
        line->setFrameShadow(QFrame::Sunken);

        verticalLayout_2->addWidget(line);

        widget_3 = new QWidget(rewardsPage);
        widget_3->setObjectName(QStringLiteral("widget_3"));
        gridLayout = new QGridLayout(widget_3);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 0);
        horizontalSpacer_1 = new QSpacerItem(QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer_1, 0, 6, 1, 1);

        lblTotalRewards = new QLabel(widget_3);
        lblTotalRewards->setObjectName(QStringLiteral("lblTotalRewards"));

        gridLayout->addWidget(lblTotalRewards, 0, 5, 1, 1);

        label_9 = new QLabel(widget_3);
        label_9->setObjectName(QStringLiteral("label_9"));
        QFont font5;
        font5.setBold(true);
        font5.setWeight(75);
        label_9->setFont(font5);

        gridLayout->addWidget(label_9, 0, 4, 1, 1);

        lblEligibleAddresses = new QLabel(widget_3);
        lblEligibleAddresses->setObjectName(QStringLiteral("lblEligibleAddresses"));

        gridLayout->addWidget(lblEligibleAddresses, 0, 3, 1, 1);

        label_6 = new QLabel(widget_3);
        label_6->setObjectName(QStringLiteral("label_6"));
        label_6->setFont(font5);

        gridLayout->addWidget(label_6, 0, 2, 1, 1);

        lblActiveAddresses = new QLabel(widget_3);
        lblActiveAddresses->setObjectName(QStringLiteral("lblActiveAddresses"));

        gridLayout->addWidget(lblActiveAddresses, 0, 1, 1, 1);

        label_4 = new QLabel(widget_3);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setFont(font5);

        gridLayout->addWidget(label_4, 0, 0, 1, 1);


        verticalLayout_2->addWidget(widget_3);

        scrollArea = new QScrollArea(rewardsPage);
        scrollArea->setObjectName(QStringLiteral("scrollArea"));
        scrollArea->setFrameShape(QFrame::Box);
        scrollArea->setFrameShadow(QFrame::Plain);
        scrollArea->setWidgetResizable(true);
        smartRewardsList = new QWidget();
        smartRewardsList->setObjectName(QStringLiteral("smartRewardsList"));
        verticalLayout_8 = new QVBoxLayout(smartRewardsList);
        verticalLayout_8->setSpacing(0);
        verticalLayout_8->setObjectName(QStringLiteral("verticalLayout_8"));
        verticalLayout_8->setContentsMargins(0, 0, 0, 0);
        scrollArea->setWidget(smartRewardsList);

        verticalLayout_2->addWidget(scrollArea);

        widget = new QWidget(rewardsPage);
        widget->setObjectName(QStringLiteral("widget"));
        horizontalLayout_3 = new QHBoxLayout(widget);
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        horizontalLayout_3->setContentsMargins(0, 0, 0, 0);
        btnSendProofs = new QPushButton(widget);
        btnSendProofs->setObjectName(QStringLiteral("btnSendProofs"));

        horizontalLayout_3->addWidget(btnSendProofs);

        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_3);


        verticalLayout_2->addWidget(widget);

        stackedWidget->addWidget(rewardsPage);

        verticalLayout->addWidget(stackedWidget);


        retranslateUi(SmartrewardsList);

        stackedWidget->setCurrentIndex(1);


        QMetaObject::connectSlotsByName(SmartrewardsList);
    } // setupUi

    void retranslateUi(QWidget *SmartrewardsList)
    {
        SmartrewardsList->setWindowTitle(QApplication::translate("SmartrewardsList", "Form", 0));
        label_3->setText(QApplication::translate("SmartrewardsList", "Initializing SmartRewards...", 0));
        label_17->setText(QApplication::translate("SmartrewardsList", "Round", 0));
        roundLabel->setText(QApplication::translate("SmartrewardsList", "0", 0));
        roundEndsLabel->setText(QApplication::translate("SmartrewardsList", "ends in", 0));
        nextRoundLabel->setText(QApplication::translate("SmartrewardsList", "25.12.1999", 0));
        label_2100->setText(QApplication::translate("SmartrewardsList", "Activate an address with button below. Eligible balance will update after start of next round.", 0));
        label_21->setText(QApplication::translate("SmartrewardsList", "Yearly Yield", 0));
        label_211->setText(QApplication::translate("SmartrewardsList", "SmartRewards", 0));
        label_212->setText(QApplication::translate("SmartrewardsList", "SuperRewards", 0));
        label_213->setText(QApplication::translate("SmartrewardsList", "Paid Weekly", 0));
        label_214->setText(QApplication::translate("SmartrewardsList", "1000+ Smart", 0));
        label_215->setText(QApplication::translate("SmartrewardsList", "100K+ Smart", 0));
        label_216->setText(QApplication::translate("SmartrewardsList", "After Full Round", 0));
        percentLabel->setText(QApplication::translate("SmartrewardsList", "0.0%", 0));
        percentLabela->setText(QApplication::translate("SmartrewardsList", "0.0%", 0));
        label_217->setText(QApplication::translate("SmartrewardsList", "1 Week", 0));
        percentLabelb->setText(QApplication::translate("SmartrewardsList", "0.0%", 0));
        percentLabelSuper->setText(QApplication::translate("SmartrewardsList", "0.0%", 0));
        label_218->setText(QApplication::translate("SmartrewardsList", "2 Weeks", 0));
        percentLabelTwo->setText(QApplication::translate("SmartrewardsList", "0.0%", 0));
        percentLabelSuperTwo->setText(QApplication::translate("SmartrewardsList", "0.0%", 0));
        label_219->setText(QApplication::translate("SmartrewardsList", "3 Weeks", 0));
        percentLabelThree->setText(QApplication::translate("SmartrewardsList", "0.0%", 0));
        percentLabelSuperThree->setText(QApplication::translate("SmartrewardsList", "0.0%", 0));
        label_2110->setText(QApplication::translate("SmartrewardsList", "4 Weeks+ (Compounded)", 0));
        percentLabelFour->setText(QApplication::translate("SmartrewardsList", "0.0%", 0));
        percentLabelSuperFour->setText(QApplication::translate("SmartrewardsList", "0.0%", 0));
        lblTotalRewards->setText(QApplication::translate("SmartrewardsList", "0", 0));
        label_9->setText(QApplication::translate("SmartrewardsList", "Estimated SmartRewards", 0));
        lblEligibleAddresses->setText(QApplication::translate("SmartrewardsList", "0", 0));
        label_6->setText(QApplication::translate("SmartrewardsList", "Eligible addresses", 0));
        lblActiveAddresses->setText(QApplication::translate("SmartrewardsList", "0", 0));
        label_4->setText(QApplication::translate("SmartrewardsList", "Active addresses", 0));
        btnSendProofs->setText(QApplication::translate("SmartrewardsList", "Activate Rewards [0]", 0));
    } // retranslateUi

};

namespace Ui {
    class SmartrewardsList: public Ui_SmartrewardsList {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SMARTREWARDSLIST_H
