/********************************************************************************
** Form generated from reading UI file 'proposaladdressdialog.ui'
**
** Created by: Qt User Interface Compiler version 5.6.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PROPOSALADDRESSDIALOG_H
#define UI_PROPOSALADDRESSDIALOG_H

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

class Ui_ProposalAddressDialog
{
public:
    QVBoxLayout *verticalLayout;
    QLabel *infoLabel;
    QTableWidget *addressTable;
    QWidget *widget_2;
    QHBoxLayout *horizontalLayout_2;
    QSpacerItem *horizontalSpacer_3;
    QPushButton *button;
    QSpacerItem *horizontalSpacer;

    void setupUi(QDialog *ProposalAddressDialog)
    {
        if (ProposalAddressDialog->objectName().isEmpty())
            ProposalAddressDialog->setObjectName(QStringLiteral("ProposalAddressDialog"));
        ProposalAddressDialog->resize(900, 500);
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(ProposalAddressDialog->sizePolicy().hasHeightForWidth());
        ProposalAddressDialog->setSizePolicy(sizePolicy);
        verticalLayout = new QVBoxLayout(ProposalAddressDialog);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(20, 20, 20, 20);
        infoLabel = new QLabel(ProposalAddressDialog);
        infoLabel->setObjectName(QStringLiteral("infoLabel"));
        QFont font;
        font.setBold(true);
        font.setWeight(75);
        infoLabel->setFont(font);
        infoLabel->setWordWrap(true);

        verticalLayout->addWidget(infoLabel);

        addressTable = new QTableWidget(ProposalAddressDialog);
        if (addressTable->columnCount() < 2)
            addressTable->setColumnCount(2);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        addressTable->setHorizontalHeaderItem(0, __qtablewidgetitem);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        addressTable->setHorizontalHeaderItem(1, __qtablewidgetitem1);
        addressTable->setObjectName(QStringLiteral("addressTable"));
        addressTable->setEditTriggers(QAbstractItemView::NoEditTriggers);

        verticalLayout->addWidget(addressTable);

        widget_2 = new QWidget(ProposalAddressDialog);
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


        retranslateUi(ProposalAddressDialog);

        QMetaObject::connectSlotsByName(ProposalAddressDialog);
    } // setupUi

    void retranslateUi(QDialog *ProposalAddressDialog)
    {
        ProposalAddressDialog->setWindowTitle(QApplication::translate("ProposalAddressDialog", "Create new Smartnode", 0));
        infoLabel->setText(QApplication::translate("ProposalAddressDialog", "A proposal address needs to hold at least %1 SMART to cover the proposal and the transaction fee. Other addresses will not be listed here.", 0));
        QTableWidgetItem *___qtablewidgetitem = addressTable->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QApplication::translate("ProposalAddressDialog", "Address", 0));
        QTableWidgetItem *___qtablewidgetitem1 = addressTable->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QApplication::translate("ProposalAddressDialog", "Amount", 0));
        button->setText(QApplication::translate("ProposalAddressDialog", "Close", 0));
    } // retranslateUi

};

namespace Ui {
    class ProposalAddressDialog: public Ui_ProposalAddressDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PROPOSALADDRESSDIALOG_H
