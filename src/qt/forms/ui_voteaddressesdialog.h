/********************************************************************************
** Form generated from reading UI file 'voteaddressesdialog.ui'
**
** Created by: Qt User Interface Compiler version 5.6.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_VOTEADDRESSESDIALOG_H
#define UI_VOTEADDRESSESDIALOG_H

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
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_VoteAddressesDialog
{
public:
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QLabel *votingPowerLabel;
    QHBoxLayout *horizontalLayout_3;
    QPushButton *selectionButton;
    QSpacerItem *horizontalSpacer_2;
    QTableWidget *addressTable;
    QWidget *widget_2;
    QHBoxLayout *horizontalLayout_2;
    QSpacerItem *horizontalSpacer_3;
    QPushButton *button;
    QSpacerItem *horizontalSpacer;

    void setupUi(QDialog *VoteAddressesDialog)
    {
        if (VoteAddressesDialog->objectName().isEmpty())
            VoteAddressesDialog->setObjectName(QStringLiteral("VoteAddressesDialog"));
        VoteAddressesDialog->resize(900, 500);
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(VoteAddressesDialog->sizePolicy().hasHeightForWidth());
        VoteAddressesDialog->setSizePolicy(sizePolicy);
        verticalLayout = new QVBoxLayout(VoteAddressesDialog);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(20, 20, 20, 20);
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        label = new QLabel(VoteAddressesDialog);
        label->setObjectName(QStringLiteral("label"));

        horizontalLayout->addWidget(label);

        votingPowerLabel = new QLabel(VoteAddressesDialog);
        votingPowerLabel->setObjectName(QStringLiteral("votingPowerLabel"));
        QSizePolicy sizePolicy1(QSizePolicy::Expanding, QSizePolicy::Preferred);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(votingPowerLabel->sizePolicy().hasHeightForWidth());
        votingPowerLabel->setSizePolicy(sizePolicy1);
        QFont font;
        font.setBold(true);
        font.setWeight(75);
        votingPowerLabel->setFont(font);

        horizontalLayout->addWidget(votingPowerLabel);


        verticalLayout->addLayout(horizontalLayout);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        selectionButton = new QPushButton(VoteAddressesDialog);
        selectionButton->setObjectName(QStringLiteral("selectionButton"));

        horizontalLayout_3->addWidget(selectionButton);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_2);


        verticalLayout->addLayout(horizontalLayout_3);

        addressTable = new QTableWidget(VoteAddressesDialog);
        if (addressTable->columnCount() < 3)
            addressTable->setColumnCount(3);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        addressTable->setHorizontalHeaderItem(0, __qtablewidgetitem);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        addressTable->setHorizontalHeaderItem(1, __qtablewidgetitem1);
        QTableWidgetItem *__qtablewidgetitem2 = new QTableWidgetItem();
        addressTable->setHorizontalHeaderItem(2, __qtablewidgetitem2);
        addressTable->setObjectName(QStringLiteral("addressTable"));
        addressTable->setEditTriggers(QAbstractItemView::NoEditTriggers);

        verticalLayout->addWidget(addressTable);

        widget_2 = new QWidget(VoteAddressesDialog);
        widget_2->setObjectName(QStringLiteral("widget_2"));
        widget_2->setMinimumSize(QSize(0, 0));
        horizontalLayout_2 = new QHBoxLayout(widget_2);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        horizontalSpacer_3 = new QSpacerItem(89, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_3);

        button = new QPushButton(widget_2);
        button->setObjectName(QStringLiteral("button"));

        horizontalLayout_2->addWidget(button);

        horizontalSpacer = new QSpacerItem(88, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer);


        verticalLayout->addWidget(widget_2);


        retranslateUi(VoteAddressesDialog);

        QMetaObject::connectSlotsByName(VoteAddressesDialog);
    } // setupUi

    void retranslateUi(QDialog *VoteAddressesDialog)
    {
        VoteAddressesDialog->setWindowTitle(QApplication::translate("VoteAddressesDialog", "Create new Smartnode", 0));
        label->setText(QApplication::translate("VoteAddressesDialog", "Selected voting power", 0));
        votingPowerLabel->setText(QApplication::translate("VoteAddressesDialog", "0 SMART", 0));
        selectionButton->setText(QApplication::translate("VoteAddressesDialog", "(un)select all", 0));
        QTableWidgetItem *___qtablewidgetitem = addressTable->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QApplication::translate("VoteAddressesDialog", "Enabled", 0));
        QTableWidgetItem *___qtablewidgetitem1 = addressTable->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QApplication::translate("VoteAddressesDialog", "Voting power", 0));
        QTableWidgetItem *___qtablewidgetitem2 = addressTable->horizontalHeaderItem(2);
        ___qtablewidgetitem2->setText(QApplication::translate("VoteAddressesDialog", "Address", 0));
        button->setText(QApplication::translate("VoteAddressesDialog", "Close", 0));
    } // retranslateUi

};

namespace Ui {
    class VoteAddressesDialog: public Ui_VoteAddressesDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_VOTEADDRESSESDIALOG_H
