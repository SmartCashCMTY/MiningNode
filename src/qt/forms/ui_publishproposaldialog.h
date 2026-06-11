/********************************************************************************
** Form generated from reading UI file 'publishproposaldialog.ui'
**
** Created by: Qt User Interface Compiler version 5.6.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PUBLISHPROPOSALDIALOG_H
#define UI_PUBLISHPROPOSALDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include "waitingspinnerwidget.h"

QT_BEGIN_NAMESPACE

class Ui_PublishProposalDialog
{
public:
    QVBoxLayout *verticalLayout;
    QLabel *infoLabel;
    QSpacerItem *verticalSpacer;
    QWidget *loadingWidget;
    QVBoxLayout *verticalLayout_2;
    QHBoxLayout *layout;
    QSpacerItem *horizontalSpacer_2;
    WaitingSpinnerWidget *spinnerWidget;
    QSpacerItem *horizontalSpacer_4;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer_5;
    QLabel *label_2;
    QLabel *confirmationsLabel;
    QSpacerItem *horizontalSpacer_6;
    QSpacerItem *verticalSpacer_2;
    QWidget *closeWidget;
    QHBoxLayout *horizontalLayout_2;
    QSpacerItem *horizontalSpacer_3;
    QPushButton *explorerButton;
    QPushButton *closeButton;
    QSpacerItem *horizontalSpacer;

    void setupUi(QDialog *PublishProposalDialog)
    {
        if (PublishProposalDialog->objectName().isEmpty())
            PublishProposalDialog->setObjectName(QStringLiteral("PublishProposalDialog"));
        PublishProposalDialog->resize(351, 301);
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(PublishProposalDialog->sizePolicy().hasHeightForWidth());
        PublishProposalDialog->setSizePolicy(sizePolicy);
        verticalLayout = new QVBoxLayout(PublishProposalDialog);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        infoLabel = new QLabel(PublishProposalDialog);
        infoLabel->setObjectName(QStringLiteral("infoLabel"));
        QFont font;
        font.setBold(true);
        font.setWeight(75);
        infoLabel->setFont(font);
        infoLabel->setWordWrap(true);

        verticalLayout->addWidget(infoLabel);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer);

        loadingWidget = new QWidget(PublishProposalDialog);
        loadingWidget->setObjectName(QStringLiteral("loadingWidget"));
        verticalLayout_2 = new QVBoxLayout(loadingWidget);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        layout = new QHBoxLayout();
        layout->setObjectName(QStringLiteral("layout"));
        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        layout->addItem(horizontalSpacer_2);

        spinnerWidget = new WaitingSpinnerWidget(loadingWidget);
        spinnerWidget->setObjectName(QStringLiteral("spinnerWidget"));
        sizePolicy.setHeightForWidth(spinnerWidget->sizePolicy().hasHeightForWidth());
        spinnerWidget->setSizePolicy(sizePolicy);
        spinnerWidget->setMinimumSize(QSize(100, 100));

        layout->addWidget(spinnerWidget);

        horizontalSpacer_4 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        layout->addItem(horizontalSpacer_4);


        verticalLayout_2->addLayout(layout);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalSpacer_5 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_5);

        label_2 = new QLabel(loadingWidget);
        label_2->setObjectName(QStringLiteral("label_2"));
        QSizePolicy sizePolicy1(QSizePolicy::Preferred, QSizePolicy::Maximum);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(label_2->sizePolicy().hasHeightForWidth());
        label_2->setSizePolicy(sizePolicy1);
        label_2->setFont(font);

        horizontalLayout->addWidget(label_2);

        confirmationsLabel = new QLabel(loadingWidget);
        confirmationsLabel->setObjectName(QStringLiteral("confirmationsLabel"));
        confirmationsLabel->setFont(font);

        horizontalLayout->addWidget(confirmationsLabel);

        horizontalSpacer_6 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_6);


        verticalLayout_2->addLayout(horizontalLayout);


        verticalLayout->addWidget(loadingWidget);

        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer_2);

        closeWidget = new QWidget(PublishProposalDialog);
        closeWidget->setObjectName(QStringLiteral("closeWidget"));
        closeWidget->setMinimumSize(QSize(0, 0));
        horizontalLayout_2 = new QHBoxLayout(closeWidget);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        horizontalSpacer_3 = new QSpacerItem(89, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_3);

        explorerButton = new QPushButton(closeWidget);
        explorerButton->setObjectName(QStringLiteral("explorerButton"));

        horizontalLayout_2->addWidget(explorerButton);

        closeButton = new QPushButton(closeWidget);
        closeButton->setObjectName(QStringLiteral("closeButton"));

        horizontalLayout_2->addWidget(closeButton);

        horizontalSpacer = new QSpacerItem(88, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer);


        verticalLayout->addWidget(closeWidget);


        retranslateUi(PublishProposalDialog);

        QMetaObject::connectSlotsByName(PublishProposalDialog);
    } // setupUi

    void retranslateUi(QDialog *PublishProposalDialog)
    {
        PublishProposalDialog->setWindowTitle(QApplication::translate("PublishProposalDialog", "Create new Smartnode", 0));
        infoLabel->setText(QApplication::translate("PublishProposalDialog", "Your proposal will be published to the SmartCash network as soon as your proposal fee transaction has 3 confirmations.", 0));
        label_2->setText(QApplication::translate("PublishProposalDialog", "Confirmations", 0));
        confirmationsLabel->setText(QApplication::translate("PublishProposalDialog", "0/6", 0));
        explorerButton->setText(QApplication::translate("PublishProposalDialog", "Open in explorer", 0));
        closeButton->setText(QApplication::translate("PublishProposalDialog", "Close", 0));
    } // retranslateUi

};

namespace Ui {
    class PublishProposalDialog: public Ui_PublishProposalDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PUBLISHPROPOSALDIALOG_H
