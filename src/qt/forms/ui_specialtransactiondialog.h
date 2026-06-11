/********************************************************************************
** Form generated from reading UI file 'specialtransactiondialog.ui'
**
** Created by: Qt User Interface Compiler version 5.6.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SPECIALTRANSACTIONDIALOG_H
#define UI_SPECIALTRANSACTIONDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QFrame>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include "coincontroltreewidget.h"

QT_BEGIN_NAMESPACE

class Ui_SpecialTransactionDialog
{
public:
    QVBoxLayout *verticalLayout;
    QLabel *descriptionLabel;
    QFrame *line;
    QHBoxLayout *horizontalLayoutTop;
    QSpacerItem *horizontalSpacer_4;
    QFormLayout *formLayoutCoinControl2;
    QLabel *labelAddressDesc;
    QLabel *labelAddressCount;
    QSpacerItem *horizontalSpacer_3;
    QFormLayout *formLayoutCoinControl2_4;
    QLabel *labelFeeDesc;
    QLabel *labelFeeAmount;
    QSpacerItem *horizontalSpacer;
    QFormLayout *formLayoutCoinControl3;
    QLabel *labelCoinControlFeeText;
    QLabel *labelNetworkFee;
    QSpacerItem *horizontalSpacer_2;
    QFormLayout *formLayoutCoinControl4;
    QLabel *labelCoinControlAfterFeeText;
    QLabel *labelInputAmount;
    QSpacerItem *horizontalSpacer_5;
    QFrame *line_2;
    QCheckBox *autoSelectCheckBox;
    CoinControlTreeWidget *treeWidget;
    QLabel *legendLabel;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *SpecialTransactionDialog)
    {
        if (SpecialTransactionDialog->objectName().isEmpty())
            SpecialTransactionDialog->setObjectName(QStringLiteral("SpecialTransactionDialog"));
        SpecialTransactionDialog->resize(1000, 500);
        verticalLayout = new QVBoxLayout(SpecialTransactionDialog);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        descriptionLabel = new QLabel(SpecialTransactionDialog);
        descriptionLabel->setObjectName(QStringLiteral("descriptionLabel"));
        QFont font;
        font.setBold(true);
        font.setWeight(75);
        descriptionLabel->setFont(font);
        descriptionLabel->setWordWrap(true);

        verticalLayout->addWidget(descriptionLabel);

        line = new QFrame(SpecialTransactionDialog);
        line->setObjectName(QStringLiteral("line"));
        line->setFrameShape(QFrame::HLine);
        line->setFrameShadow(QFrame::Sunken);

        verticalLayout->addWidget(line);

        horizontalLayoutTop = new QHBoxLayout();
        horizontalLayoutTop->setObjectName(QStringLiteral("horizontalLayoutTop"));
        horizontalLayoutTop->setContentsMargins(-1, 0, -1, 0);
        horizontalSpacer_4 = new QSpacerItem(10, 10, QSizePolicy::Maximum, QSizePolicy::Minimum);

        horizontalLayoutTop->addItem(horizontalSpacer_4);

        formLayoutCoinControl2 = new QFormLayout();
        formLayoutCoinControl2->setObjectName(QStringLiteral("formLayoutCoinControl2"));
        formLayoutCoinControl2->setHorizontalSpacing(10);
        formLayoutCoinControl2->setVerticalSpacing(10);
        formLayoutCoinControl2->setContentsMargins(6, -1, 6, -1);
        labelAddressDesc = new QLabel(SpecialTransactionDialog);
        labelAddressDesc->setObjectName(QStringLiteral("labelAddressDesc"));
        labelAddressDesc->setFont(font);

        formLayoutCoinControl2->setWidget(0, QFormLayout::LabelRole, labelAddressDesc);

        labelAddressCount = new QLabel(SpecialTransactionDialog);
        labelAddressCount->setObjectName(QStringLiteral("labelAddressCount"));
        labelAddressCount->setCursor(QCursor(Qt::IBeamCursor));
        labelAddressCount->setContextMenuPolicy(Qt::ActionsContextMenu);
        labelAddressCount->setText(QStringLiteral("0"));
        labelAddressCount->setTextInteractionFlags(Qt::LinksAccessibleByMouse|Qt::TextSelectableByKeyboard|Qt::TextSelectableByMouse);

        formLayoutCoinControl2->setWidget(0, QFormLayout::FieldRole, labelAddressCount);


        horizontalLayoutTop->addLayout(formLayoutCoinControl2);

        horizontalSpacer_3 = new QSpacerItem(40, 10, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayoutTop->addItem(horizontalSpacer_3);

        formLayoutCoinControl2_4 = new QFormLayout();
        formLayoutCoinControl2_4->setObjectName(QStringLiteral("formLayoutCoinControl2_4"));
        formLayoutCoinControl2_4->setHorizontalSpacing(10);
        formLayoutCoinControl2_4->setVerticalSpacing(10);
        formLayoutCoinControl2_4->setContentsMargins(6, -1, 6, -1);
        labelFeeDesc = new QLabel(SpecialTransactionDialog);
        labelFeeDesc->setObjectName(QStringLiteral("labelFeeDesc"));
        labelFeeDesc->setFont(font);

        formLayoutCoinControl2_4->setWidget(0, QFormLayout::LabelRole, labelFeeDesc);

        labelFeeAmount = new QLabel(SpecialTransactionDialog);
        labelFeeAmount->setObjectName(QStringLiteral("labelFeeAmount"));
        labelFeeAmount->setCursor(QCursor(Qt::IBeamCursor));
        labelFeeAmount->setContextMenuPolicy(Qt::ActionsContextMenu);
        labelFeeAmount->setText(QStringLiteral("0.00 SMART"));
        labelFeeAmount->setTextInteractionFlags(Qt::LinksAccessibleByMouse|Qt::TextSelectableByKeyboard|Qt::TextSelectableByMouse);

        formLayoutCoinControl2_4->setWidget(0, QFormLayout::FieldRole, labelFeeAmount);


        horizontalLayoutTop->addLayout(formLayoutCoinControl2_4);

        horizontalSpacer = new QSpacerItem(40, 10, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayoutTop->addItem(horizontalSpacer);

        formLayoutCoinControl3 = new QFormLayout();
        formLayoutCoinControl3->setObjectName(QStringLiteral("formLayoutCoinControl3"));
        formLayoutCoinControl3->setHorizontalSpacing(10);
        formLayoutCoinControl3->setVerticalSpacing(10);
        formLayoutCoinControl3->setContentsMargins(6, -1, 6, -1);
        labelCoinControlFeeText = new QLabel(SpecialTransactionDialog);
        labelCoinControlFeeText->setObjectName(QStringLiteral("labelCoinControlFeeText"));
        labelCoinControlFeeText->setFont(font);

        formLayoutCoinControl3->setWidget(0, QFormLayout::LabelRole, labelCoinControlFeeText);

        labelNetworkFee = new QLabel(SpecialTransactionDialog);
        labelNetworkFee->setObjectName(QStringLiteral("labelNetworkFee"));
        labelNetworkFee->setCursor(QCursor(Qt::IBeamCursor));
        labelNetworkFee->setContextMenuPolicy(Qt::ActionsContextMenu);
        labelNetworkFee->setText(QStringLiteral("0.002 SMART"));
        labelNetworkFee->setTextInteractionFlags(Qt::LinksAccessibleByMouse|Qt::TextSelectableByKeyboard|Qt::TextSelectableByMouse);

        formLayoutCoinControl3->setWidget(0, QFormLayout::FieldRole, labelNetworkFee);


        horizontalLayoutTop->addLayout(formLayoutCoinControl3);

        horizontalSpacer_2 = new QSpacerItem(40, 10, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayoutTop->addItem(horizontalSpacer_2);

        formLayoutCoinControl4 = new QFormLayout();
        formLayoutCoinControl4->setObjectName(QStringLiteral("formLayoutCoinControl4"));
        formLayoutCoinControl4->setHorizontalSpacing(10);
        formLayoutCoinControl4->setVerticalSpacing(10);
        formLayoutCoinControl4->setContentsMargins(6, -1, 6, -1);
        labelCoinControlAfterFeeText = new QLabel(SpecialTransactionDialog);
        labelCoinControlAfterFeeText->setObjectName(QStringLiteral("labelCoinControlAfterFeeText"));
        labelCoinControlAfterFeeText->setFont(font);

        formLayoutCoinControl4->setWidget(0, QFormLayout::LabelRole, labelCoinControlAfterFeeText);

        labelInputAmount = new QLabel(SpecialTransactionDialog);
        labelInputAmount->setObjectName(QStringLiteral("labelInputAmount"));
        labelInputAmount->setCursor(QCursor(Qt::IBeamCursor));
        labelInputAmount->setContextMenuPolicy(Qt::ActionsContextMenu);
        labelInputAmount->setText(QStringLiteral("0.002 SMART"));
        labelInputAmount->setTextInteractionFlags(Qt::LinksAccessibleByMouse|Qt::TextSelectableByKeyboard|Qt::TextSelectableByMouse);

        formLayoutCoinControl4->setWidget(0, QFormLayout::FieldRole, labelInputAmount);


        horizontalLayoutTop->addLayout(formLayoutCoinControl4);

        horizontalSpacer_5 = new QSpacerItem(10, 10, QSizePolicy::Maximum, QSizePolicy::Minimum);

        horizontalLayoutTop->addItem(horizontalSpacer_5);


        verticalLayout->addLayout(horizontalLayoutTop);

        line_2 = new QFrame(SpecialTransactionDialog);
        line_2->setObjectName(QStringLiteral("line_2"));
        line_2->setFrameShape(QFrame::HLine);
        line_2->setFrameShadow(QFrame::Sunken);

        verticalLayout->addWidget(line_2);

        autoSelectCheckBox = new QCheckBox(SpecialTransactionDialog);
        autoSelectCheckBox->setObjectName(QStringLiteral("autoSelectCheckBox"));
        QFont font1;
        font1.setBold(false);
        font1.setWeight(50);
        autoSelectCheckBox->setFont(font1);

        verticalLayout->addWidget(autoSelectCheckBox);

        treeWidget = new CoinControlTreeWidget(SpecialTransactionDialog);
        treeWidget->headerItem()->setText(0, QString());
        treeWidget->setObjectName(QStringLiteral("treeWidget"));
        treeWidget->setContextMenuPolicy(Qt::CustomContextMenu);
        treeWidget->setSortingEnabled(false);
        treeWidget->setColumnCount(4);
        treeWidget->header()->setProperty("showSortIndicator", QVariant(true));
        treeWidget->header()->setStretchLastSection(true);

        verticalLayout->addWidget(treeWidget);

        legendLabel = new QLabel(SpecialTransactionDialog);
        legendLabel->setObjectName(QStringLiteral("legendLabel"));

        verticalLayout->addWidget(legendLabel);

        buttonBox = new QDialogButtonBox(SpecialTransactionDialog);
        buttonBox->setObjectName(QStringLiteral("buttonBox"));
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        verticalLayout->addWidget(buttonBox);


        retranslateUi(SpecialTransactionDialog);

        QMetaObject::connectSlotsByName(SpecialTransactionDialog);
    } // setupUi

    void retranslateUi(QDialog *SpecialTransactionDialog)
    {
        SpecialTransactionDialog->setWindowTitle(QApplication::translate("SpecialTransactionDialog", "Coin Selection", 0));
        descriptionLabel->setText(QApplication::translate("SpecialTransactionDialog", "TextLabel", 0));
        labelAddressDesc->setText(QApplication::translate("SpecialTransactionDialog", "Selected addresses", 0));
        labelFeeDesc->setText(QApplication::translate("SpecialTransactionDialog", "FEE_DESC:", 0));
        labelCoinControlFeeText->setText(QApplication::translate("SpecialTransactionDialog", "Network fee", 0));
        labelCoinControlAfterFeeText->setText(QApplication::translate("SpecialTransactionDialog", "Total amount", 0));
        autoSelectCheckBox->setText(QApplication::translate("SpecialTransactionDialog", "Automatically select smallest possible input for all addresses (change will be send back to the funding address)", 0));
        QTreeWidgetItem *___qtreewidgetitem = treeWidget->headerItem();
        ___qtreewidgetitem->setText(3, QApplication::translate("SpecialTransactionDialog", "Address", 0));
        ___qtreewidgetitem->setText(2, QApplication::translate("SpecialTransactionDialog", "Label", 0));
        ___qtreewidgetitem->setText(1, QApplication::translate("SpecialTransactionDialog", "Amount", 0));
    } // retranslateUi

};

namespace Ui {
    class SpecialTransactionDialog: public Ui_SpecialTransactionDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SPECIALTRANSACTIONDIALOG_H
