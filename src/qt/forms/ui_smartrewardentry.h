/********************************************************************************
** Form generated from reading UI file 'smartrewardentry.ui'
**
** Created by: Qt User Interface Compiler version 5.6.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SMARTREWARDENTRY_H
#define UI_SMARTREWARDENTRY_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_QSmartRewardEntry
{
public:
    QHBoxLayout *horizontalLayout;
    QVBoxLayout *verticalLayout_2;
    QLabel *lblLabel;
    QLabel *lblAddress;
    QLabel *lblBalance;
    QSpacerItem *horizontalSpacer_4;
    QStackedWidget *stackedWidget;
    QWidget *eligiblePage;
    QHBoxLayout *horizontalLayout_2;
    QVBoxLayout *verticalLayout_3;
    QLabel *label_5;
    QLabel *lblBonus;
    QLabel *lblEligible;
    QSpacerItem *horizontalSpacer_2;
    QVBoxLayout *verticalLayout;
    QLabel *lblEstimatedRewards;
    QLabel *lblBonusIcon;
    QLabel *lblEstimated;
    QSpacerItem *horizontalSpacer_3;
    QWidget *infoPage;
    QVBoxLayout *verticalLayout_4;
    QLabel *lblInfo;

    void setupUi(QWidget *QSmartRewardEntry)
    {
        if (QSmartRewardEntry->objectName().isEmpty())
            QSmartRewardEntry->setObjectName(QStringLiteral("QSmartRewardEntry"));
        QSmartRewardEntry->resize(768, 80);
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(QSmartRewardEntry->sizePolicy().hasHeightForWidth());
        QSmartRewardEntry->setSizePolicy(sizePolicy);
        horizontalLayout = new QHBoxLayout(QSmartRewardEntry);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        lblLabel = new QLabel(QSmartRewardEntry);
        lblLabel->setObjectName(QStringLiteral("lblLabel"));

        verticalLayout_2->addWidget(lblLabel);

        lblAddress = new QLabel(QSmartRewardEntry);
        lblAddress->setObjectName(QStringLiteral("lblAddress"));
        lblAddress->setMinimumSize(QSize(320, 40));
        lblAddress->setMaximumSize(QSize(320, 40));
        QFont font;
        font.setBold(true);
        font.setWeight(75);
        lblAddress->setFont(font);
        lblAddress->setWordWrap(true);

        verticalLayout_2->addWidget(lblAddress);

        lblBalance = new QLabel(QSmartRewardEntry);
        lblBalance->setObjectName(QStringLiteral("lblBalance"));

        verticalLayout_2->addWidget(lblBalance);


        horizontalLayout->addLayout(verticalLayout_2);

        horizontalSpacer_4 = new QSpacerItem(25, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_4);

        stackedWidget = new QStackedWidget(QSmartRewardEntry);
        stackedWidget->setObjectName(QStringLiteral("stackedWidget"));
        eligiblePage = new QWidget();
        eligiblePage->setObjectName(QStringLiteral("eligiblePage"));
        horizontalLayout_2 = new QHBoxLayout(eligiblePage);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        label_5 = new QLabel(eligiblePage);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setFont(font);
        label_5->setMinimumSize(QSize(240, 0));
        label_5->setMaximumSize(QSize(320, 16777215));

        verticalLayout_3->addWidget(label_5);

        lblBonus = new QLabel(eligiblePage);
        lblBonus->setObjectName(QStringLiteral("lblBonus"));
        lblBonus->setMinimumSize(QSize(240, 40));
        lblBonus->setFont(font);
        lblBonus->setStyleSheet(QStringLiteral("color: rgb(60, 179, 113);"));

        verticalLayout_3->addWidget(lblBonus);

        lblEligible = new QLabel(eligiblePage);
        lblEligible->setObjectName(QStringLiteral("lblEligible"));

        verticalLayout_3->addWidget(lblEligible);


        horizontalLayout_2->addLayout(verticalLayout_3);

        horizontalSpacer_2 = new QSpacerItem(35, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_2);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        lblEstimatedRewards = new QLabel(eligiblePage);
        lblEstimatedRewards->setObjectName(QStringLiteral("lblEstimatedRewards"));
        lblEstimatedRewards->setFont(font);

        verticalLayout->addWidget(lblEstimatedRewards);

        lblBonusIcon = new QLabel(eligiblePage);
        lblBonusIcon->setObjectName(QStringLiteral("lblBonusIcon"));

        verticalLayout->addWidget(lblBonusIcon);

        lblEstimated = new QLabel(eligiblePage);
        lblEstimated->setObjectName(QStringLiteral("lblEstimated"));

        verticalLayout->addWidget(lblEstimated);


        horizontalLayout_2->addLayout(verticalLayout);

        horizontalSpacer_3 = new QSpacerItem(60, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_3);

        stackedWidget->addWidget(eligiblePage);
        infoPage = new QWidget();
        infoPage->setObjectName(QStringLiteral("infoPage"));
        verticalLayout_4 = new QVBoxLayout(infoPage);
        verticalLayout_4->setObjectName(QStringLiteral("verticalLayout_4"));
        lblInfo = new QLabel(infoPage);
        lblInfo->setObjectName(QStringLiteral("lblInfo"));
        lblInfo->setFont(font);
        lblInfo->setStyleSheet(QStringLiteral("color: rgb(173, 47, 19);"));
        lblInfo->setWordWrap(true);

        verticalLayout_4->addWidget(lblInfo);

        stackedWidget->addWidget(infoPage);

        horizontalLayout->addWidget(stackedWidget);


        retranslateUi(QSmartRewardEntry);

        stackedWidget->setCurrentIndex(1);


        QMetaObject::connectSlotsByName(QSmartRewardEntry);
    } // setupUi

    void retranslateUi(QWidget *QSmartRewardEntry)
    {
        QSmartRewardEntry->setWindowTitle(QApplication::translate("QSmartRewardEntry", "Form", 0));
        lblLabel->setText(QApplication::translate("QSmartRewardEntry", "(no label)", 0));
        lblAddress->setText(QApplication::translate("QSmartRewardEntry", "TCJDy8ZoSw7BF8jCyHDhN3QRkBwTXsPbCu", 0));
        lblBalance->setText(QApplication::translate("QSmartRewardEntry", "100 000 SMART", 0));
        label_5->setText(QApplication::translate("QSmartRewardEntry", "Eligible Amount", 0));
        lblBonus->setText(QString());
        lblEligible->setText(QApplication::translate("QSmartRewardEntry", "100 SMART", 0));
        lblEstimatedRewards->setText(QApplication::translate("QSmartRewardEntry", "Estimated SmartReward", 0));
        lblEstimated->setText(QApplication::translate("QSmartRewardEntry", "100 SMART", 0));
        lblInfo->setText(QApplication::translate("QSmartRewardEntry", "ActivateRewards required. Click button below to activate this address for rewards", 0));
    } // retranslateUi

};

namespace Ui {
    class QSmartRewardEntry: public Ui_QSmartRewardEntry {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SMARTREWARDENTRY_H
