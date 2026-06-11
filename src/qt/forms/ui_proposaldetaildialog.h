/********************************************************************************
** Form generated from reading UI file 'proposaldetaildialog.ui'
**
** Created by: Qt User Interface Compiler version 5.6.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PROPOSALDETAILDIALOG_H
#define UI_PROPOSALDETAILDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QFrame>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ProposalDetailDialog
{
public:
    QVBoxLayout *verticalLayout_4;
    QLabel *label;
    QFrame *line;
    QLabel *label_3;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QLabel *label_2;
    QSpacerItem *horizontalSpacer_8;
    QPushButton *hashCopyButton;
    QSpacerItem *horizontalSpacer_7;
    QLabel *hashLabel;
    QVBoxLayout *verticalLayout_2;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_4;
    QSpacerItem *horizontalSpacer_5;
    QPushButton *sigCopyButton;
    QSpacerItem *horizontalSpacer_4;
    QLabel *signatureLabel;
    QSpacerItem *verticalSpacer;
    QLabel *label_6;
    QFrame *line_2;
    QVBoxLayout *verticalLayout_3;
    QHBoxLayout *horizontalLayout_4;
    QLabel *label_7;
    QSpacerItem *horizontalSpacer_6;
    QPushButton *txCopyButton;
    QPushButton *txExplorerButton;
    QSpacerItem *horizontalSpacer_2;
    QLabel *txLabel;
    QSpacerItem *verticalSpacer_2;
    QWidget *closeWidget;
    QHBoxLayout *horizontalLayout_2;
    QSpacerItem *horizontalSpacer_3;
    QPushButton *copyRawProposalButton;
    QSpacerItem *horizontalSpacer_9;
    QPushButton *closeButton;
    QSpacerItem *horizontalSpacer;

    void setupUi(QDialog *ProposalDetailDialog)
    {
        if (ProposalDetailDialog->objectName().isEmpty())
            ProposalDetailDialog->setObjectName(QStringLiteral("ProposalDetailDialog"));
        ProposalDetailDialog->resize(374, 467);
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(ProposalDetailDialog->sizePolicy().hasHeightForWidth());
        ProposalDetailDialog->setSizePolicy(sizePolicy);
        verticalLayout_4 = new QVBoxLayout(ProposalDetailDialog);
        verticalLayout_4->setObjectName(QStringLiteral("verticalLayout_4"));
        label = new QLabel(ProposalDetailDialog);
        label->setObjectName(QStringLiteral("label"));
        QSizePolicy sizePolicy1(QSizePolicy::Preferred, QSizePolicy::Maximum);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(label->sizePolicy().hasHeightForWidth());
        label->setSizePolicy(sizePolicy1);
        QFont font;
        font.setBold(true);
        font.setWeight(75);
        label->setFont(font);

        verticalLayout_4->addWidget(label);

        line = new QFrame(ProposalDetailDialog);
        line->setObjectName(QStringLiteral("line"));
        line->setFrameShape(QFrame::HLine);
        line->setFrameShadow(QFrame::Sunken);

        verticalLayout_4->addWidget(line);

        label_3 = new QLabel(ProposalDetailDialog);
        label_3->setObjectName(QStringLiteral("label_3"));
        QFont font1;
        font1.setPointSize(12);
        label_3->setFont(font1);
        label_3->setWordWrap(true);
        label_3->setOpenExternalLinks(false);

        verticalLayout_4->addWidget(label_3);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        label_2 = new QLabel(ProposalDetailDialog);
        label_2->setObjectName(QStringLiteral("label_2"));
        QSizePolicy sizePolicy2(QSizePolicy::Maximum, QSizePolicy::Preferred);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(label_2->sizePolicy().hasHeightForWidth());
        label_2->setSizePolicy(sizePolicy2);
        label_2->setFont(font);

        horizontalLayout->addWidget(label_2);

        horizontalSpacer_8 = new QSpacerItem(5, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_8);

        hashCopyButton = new QPushButton(ProposalDetailDialog);
        hashCopyButton->setObjectName(QStringLiteral("hashCopyButton"));
        QSizePolicy sizePolicy3(QSizePolicy::Maximum, QSizePolicy::Fixed);
        sizePolicy3.setHorizontalStretch(0);
        sizePolicy3.setVerticalStretch(0);
        sizePolicy3.setHeightForWidth(hashCopyButton->sizePolicy().hasHeightForWidth());
        hashCopyButton->setSizePolicy(sizePolicy3);
        hashCopyButton->setAutoDefault(false);

        horizontalLayout->addWidget(hashCopyButton);

        horizontalSpacer_7 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_7);


        verticalLayout->addLayout(horizontalLayout);

        hashLabel = new QLabel(ProposalDetailDialog);
        hashLabel->setObjectName(QStringLiteral("hashLabel"));
        QFont font2;
        font2.setPointSize(12);
        font2.setItalic(true);
        hashLabel->setFont(font2);
        hashLabel->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        verticalLayout->addWidget(hashLabel);


        verticalLayout_4->addLayout(verticalLayout);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        label_4 = new QLabel(ProposalDetailDialog);
        label_4->setObjectName(QStringLiteral("label_4"));
        sizePolicy2.setHeightForWidth(label_4->sizePolicy().hasHeightForWidth());
        label_4->setSizePolicy(sizePolicy2);
        label_4->setFont(font);

        horizontalLayout_3->addWidget(label_4);

        horizontalSpacer_5 = new QSpacerItem(5, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_5);

        sigCopyButton = new QPushButton(ProposalDetailDialog);
        sigCopyButton->setObjectName(QStringLiteral("sigCopyButton"));
        sizePolicy3.setHeightForWidth(sigCopyButton->sizePolicy().hasHeightForWidth());
        sigCopyButton->setSizePolicy(sizePolicy3);
        sigCopyButton->setAutoDefault(false);

        horizontalLayout_3->addWidget(sigCopyButton);

        horizontalSpacer_4 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_4);


        verticalLayout_2->addLayout(horizontalLayout_3);

        signatureLabel = new QLabel(ProposalDetailDialog);
        signatureLabel->setObjectName(QStringLiteral("signatureLabel"));
        signatureLabel->setFont(font2);
        signatureLabel->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);
        signatureLabel->setWordWrap(false);

        verticalLayout_2->addWidget(signatureLabel);


        verticalLayout_4->addLayout(verticalLayout_2);

        verticalSpacer = new QSpacerItem(20, 20, QSizePolicy::Minimum, QSizePolicy::Fixed);

        verticalLayout_4->addItem(verticalSpacer);

        label_6 = new QLabel(ProposalDetailDialog);
        label_6->setObjectName(QStringLiteral("label_6"));
        sizePolicy1.setHeightForWidth(label_6->sizePolicy().hasHeightForWidth());
        label_6->setSizePolicy(sizePolicy1);
        label_6->setFont(font);

        verticalLayout_4->addWidget(label_6);

        line_2 = new QFrame(ProposalDetailDialog);
        line_2->setObjectName(QStringLiteral("line_2"));
        line_2->setFrameShape(QFrame::HLine);
        line_2->setFrameShadow(QFrame::Sunken);

        verticalLayout_4->addWidget(line_2);

        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QStringLiteral("horizontalLayout_4"));
        label_7 = new QLabel(ProposalDetailDialog);
        label_7->setObjectName(QStringLiteral("label_7"));
        sizePolicy2.setHeightForWidth(label_7->sizePolicy().hasHeightForWidth());
        label_7->setSizePolicy(sizePolicy2);
        label_7->setFont(font);

        horizontalLayout_4->addWidget(label_7);

        horizontalSpacer_6 = new QSpacerItem(5, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer_6);

        txCopyButton = new QPushButton(ProposalDetailDialog);
        txCopyButton->setObjectName(QStringLiteral("txCopyButton"));
        sizePolicy3.setHeightForWidth(txCopyButton->sizePolicy().hasHeightForWidth());
        txCopyButton->setSizePolicy(sizePolicy3);
        txCopyButton->setAutoDefault(false);

        horizontalLayout_4->addWidget(txCopyButton);

        txExplorerButton = new QPushButton(ProposalDetailDialog);
        txExplorerButton->setObjectName(QStringLiteral("txExplorerButton"));
        sizePolicy3.setHeightForWidth(txExplorerButton->sizePolicy().hasHeightForWidth());
        txExplorerButton->setSizePolicy(sizePolicy3);

        horizontalLayout_4->addWidget(txExplorerButton);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer_2);


        verticalLayout_3->addLayout(horizontalLayout_4);

        txLabel = new QLabel(ProposalDetailDialog);
        txLabel->setObjectName(QStringLiteral("txLabel"));
        txLabel->setFont(font2);
        txLabel->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        verticalLayout_3->addWidget(txLabel);


        verticalLayout_4->addLayout(verticalLayout_3);

        verticalSpacer_2 = new QSpacerItem(20, 20, QSizePolicy::Minimum, QSizePolicy::Fixed);

        verticalLayout_4->addItem(verticalSpacer_2);

        closeWidget = new QWidget(ProposalDetailDialog);
        closeWidget->setObjectName(QStringLiteral("closeWidget"));
        sizePolicy1.setHeightForWidth(closeWidget->sizePolicy().hasHeightForWidth());
        closeWidget->setSizePolicy(sizePolicy1);
        closeWidget->setMinimumSize(QSize(0, 0));
        horizontalLayout_2 = new QHBoxLayout(closeWidget);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        horizontalSpacer_3 = new QSpacerItem(89, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_3);

        copyRawProposalButton = new QPushButton(closeWidget);
        copyRawProposalButton->setObjectName(QStringLiteral("copyRawProposalButton"));

        horizontalLayout_2->addWidget(copyRawProposalButton);

        horizontalSpacer_9 = new QSpacerItem(89, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_9);

        closeButton = new QPushButton(closeWidget);
        closeButton->setObjectName(QStringLiteral("closeButton"));
        sizePolicy3.setHeightForWidth(closeButton->sizePolicy().hasHeightForWidth());
        closeButton->setSizePolicy(sizePolicy3);
        closeButton->setAutoDefault(false);

        horizontalLayout_2->addWidget(closeButton);

        horizontalSpacer = new QSpacerItem(88, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer);


        verticalLayout_4->addWidget(closeWidget);


        retranslateUi(ProposalDetailDialog);

        closeButton->setDefault(true);


        QMetaObject::connectSlotsByName(ProposalDetailDialog);
    } // setupUi

    void retranslateUi(QDialog *ProposalDetailDialog)
    {
        ProposalDetailDialog->setWindowTitle(QApplication::translate("ProposalDetailDialog", "Create new Smartnode", 0));
        label->setText(QApplication::translate("ProposalDetailDialog", "Voting portal credentials", 0));
        label_3->setText(QApplication::translate("ProposalDetailDialog", "You can use the \"Proposal hash\" and \"Signature\" below to claim the proposal to your account at https://vote.smartcash.cc. By doing this you can add a detailed description of your proposal to the voting portal to bring more attention to your proposal.", 0));
        label_2->setText(QApplication::translate("ProposalDetailDialog", "Proposal hash", 0));
        hashCopyButton->setText(QApplication::translate("ProposalDetailDialog", "Copy", 0));
        hashLabel->setText(QApplication::translate("ProposalDetailDialog", "Proposal hash", 0));
        label_4->setText(QApplication::translate("ProposalDetailDialog", "Signature", 0));
        sigCopyButton->setText(QApplication::translate("ProposalDetailDialog", "Copy", 0));
        signatureLabel->setText(QApplication::translate("ProposalDetailDialog", "Proposal signature", 0));
        label_6->setText(QApplication::translate("ProposalDetailDialog", "Proposal transaction", 0));
        label_7->setText(QApplication::translate("ProposalDetailDialog", "Transaction hash", 0));
        txCopyButton->setText(QApplication::translate("ProposalDetailDialog", "Copy", 0));
        txExplorerButton->setText(QApplication::translate("ProposalDetailDialog", "Open in explorer", 0));
        txLabel->setText(QApplication::translate("ProposalDetailDialog", "transaction hash", 0));
        copyRawProposalButton->setText(QApplication::translate("ProposalDetailDialog", "Copy raw proposal data", 0));
        closeButton->setText(QApplication::translate("ProposalDetailDialog", "Close", 0));
    } // retranslateUi

};

namespace Ui {
    class ProposalDetailDialog: public Ui_ProposalDetailDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PROPOSALDETAILDIALOG_H
