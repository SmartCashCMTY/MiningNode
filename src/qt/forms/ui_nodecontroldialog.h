/********************************************************************************
** Form generated from reading UI file 'nodecontroldialog.ui'
**
** Created by: Qt User Interface Compiler version 5.6.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_NODECONTROLDIALOG_H
#define UI_NODECONTROLDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_SmartnodeControlDialog
{
public:
    QVBoxLayout *verticalLayout;
    QGridLayout *gridLayout;
    QLineEdit *ipField;
    QLineEdit *aliasField;
    QLabel *label_3;
    QLabel *label_2;
    QSpacerItem *horizontalSpacer;
    QSpacerItem *horizontalSpacer_2;
    QStackedWidget *collateralView;
    QWidget *stackedWidgetPage1;
    QVBoxLayout *verticalLayout_3;
    QLabel *label_4;
    QTableWidget *collateralTable;
    QWidget *page;
    QVBoxLayout *verticalLayout_4;
    QSpacerItem *verticalSpacer;
    QLabel *label_7;
    QGridLayout *gridLayout_2;
    QLabel *addressViewLabel;
    QLabel *label_8;
    QLabel *txIndexViewLabel;
    QLabel *label_9;
    QLabel *txHashViewLabel;
    QLabel *label_10;
    QSpacerItem *horizontalSpacer_4;
    QSpacerItem *horizontalSpacer_6;
    QSpacerItem *horizontalSpacer_7;
    QSpacerItem *verticalSpacer_2;
    QVBoxLayout *verticalLayout_2;
    QHBoxLayout *horizontalLayout;
    QLabel *label_5;
    QLabel *smartnodeKeyLabel;
    QSpacerItem *horizontalSpacer_5;
    QPushButton *copySmartnodeKeyButton;
    QPushButton *customSmartnodeKeyButton;
    QSpacerItem *horizontalSpacer_3;
    QLabel *label_6;
    QSpacerItem *verticalSpacer_3;
    QDialogButtonBox *viewButtonBox;
    QDialogButtonBox *defaultButtonBox;

    void setupUi(QDialog *SmartnodeControlDialog)
    {
        if (SmartnodeControlDialog->objectName().isEmpty())
            SmartnodeControlDialog->setObjectName(QStringLiteral("SmartnodeControlDialog"));
        SmartnodeControlDialog->resize(900, 500);
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(SmartnodeControlDialog->sizePolicy().hasHeightForWidth());
        SmartnodeControlDialog->setSizePolicy(sizePolicy);
        verticalLayout = new QVBoxLayout(SmartnodeControlDialog);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(20, 20, 20, 20);
        gridLayout = new QGridLayout();
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        ipField = new QLineEdit(SmartnodeControlDialog);
        ipField->setObjectName(QStringLiteral("ipField"));
        ipField->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(ipField, 1, 1, 1, 1);

        aliasField = new QLineEdit(SmartnodeControlDialog);
        aliasField->setObjectName(QStringLiteral("aliasField"));
        aliasField->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(aliasField, 0, 1, 1, 1);

        label_3 = new QLabel(SmartnodeControlDialog);
        label_3->setObjectName(QStringLiteral("label_3"));
        QFont font;
        font.setBold(true);
        font.setWeight(75);
        label_3->setFont(font);

        gridLayout->addWidget(label_3, 1, 0, 1, 1);

        label_2 = new QLabel(SmartnodeControlDialog);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setFont(font);

        gridLayout->addWidget(label_2, 0, 0, 1, 1);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer, 1, 2, 1, 1);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer_2, 0, 2, 1, 1);


        verticalLayout->addLayout(gridLayout);

        collateralView = new QStackedWidget(SmartnodeControlDialog);
        collateralView->setObjectName(QStringLiteral("collateralView"));
        stackedWidgetPage1 = new QWidget();
        stackedWidgetPage1->setObjectName(QStringLiteral("stackedWidgetPage1"));
        verticalLayout_3 = new QVBoxLayout(stackedWidgetPage1);
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        verticalLayout_3->setContentsMargins(0, -1, 0, -1);
        label_4 = new QLabel(stackedWidgetPage1);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setFont(font);

        verticalLayout_3->addWidget(label_4);

        collateralTable = new QTableWidget(stackedWidgetPage1);
        if (collateralTable->columnCount() < 4)
            collateralTable->setColumnCount(4);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        collateralTable->setHorizontalHeaderItem(0, __qtablewidgetitem);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        collateralTable->setHorizontalHeaderItem(1, __qtablewidgetitem1);
        QTableWidgetItem *__qtablewidgetitem2 = new QTableWidgetItem();
        collateralTable->setHorizontalHeaderItem(2, __qtablewidgetitem2);
        QTableWidgetItem *__qtablewidgetitem3 = new QTableWidgetItem();
        collateralTable->setHorizontalHeaderItem(3, __qtablewidgetitem3);
        collateralTable->setObjectName(QStringLiteral("collateralTable"));
        QFont font1;
        font1.setPointSize(12);
        collateralTable->setFont(font1);
        collateralTable->setEditTriggers(QAbstractItemView::NoEditTriggers);
        collateralTable->setSortingEnabled(false);

        verticalLayout_3->addWidget(collateralTable);

        collateralView->addWidget(stackedWidgetPage1);
        page = new QWidget();
        page->setObjectName(QStringLiteral("page"));
        verticalLayout_4 = new QVBoxLayout(page);
        verticalLayout_4->setSpacing(10);
        verticalLayout_4->setObjectName(QStringLiteral("verticalLayout_4"));
        verticalLayout_4->setContentsMargins(0, 0, 0, 0);
        verticalSpacer = new QSpacerItem(20, 10, QSizePolicy::Minimum, QSizePolicy::Maximum);

        verticalLayout_4->addItem(verticalSpacer);

        label_7 = new QLabel(page);
        label_7->setObjectName(QStringLiteral("label_7"));
        QFont font2;
        font2.setPointSize(14);
        font2.setBold(true);
        font2.setWeight(75);
        label_7->setFont(font2);

        verticalLayout_4->addWidget(label_7);

        gridLayout_2 = new QGridLayout();
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        addressViewLabel = new QLabel(page);
        addressViewLabel->setObjectName(QStringLiteral("addressViewLabel"));
        addressViewLabel->setTextInteractionFlags(Qt::LinksAccessibleByMouse|Qt::TextSelectableByKeyboard|Qt::TextSelectableByMouse);

        gridLayout_2->addWidget(addressViewLabel, 0, 1, 1, 1);

        label_8 = new QLabel(page);
        label_8->setObjectName(QStringLiteral("label_8"));
        label_8->setFont(font);

        gridLayout_2->addWidget(label_8, 0, 0, 1, 1);

        txIndexViewLabel = new QLabel(page);
        txIndexViewLabel->setObjectName(QStringLiteral("txIndexViewLabel"));
        txIndexViewLabel->setTextInteractionFlags(Qt::LinksAccessibleByMouse|Qt::TextSelectableByKeyboard|Qt::TextSelectableByMouse);

        gridLayout_2->addWidget(txIndexViewLabel, 2, 1, 1, 1);

        label_9 = new QLabel(page);
        label_9->setObjectName(QStringLiteral("label_9"));
        label_9->setFont(font);

        gridLayout_2->addWidget(label_9, 1, 0, 1, 1);

        txHashViewLabel = new QLabel(page);
        txHashViewLabel->setObjectName(QStringLiteral("txHashViewLabel"));
        txHashViewLabel->setTextInteractionFlags(Qt::LinksAccessibleByMouse|Qt::TextSelectableByKeyboard|Qt::TextSelectableByMouse);

        gridLayout_2->addWidget(txHashViewLabel, 1, 1, 1, 1);

        label_10 = new QLabel(page);
        label_10->setObjectName(QStringLiteral("label_10"));
        label_10->setFont(font);

        gridLayout_2->addWidget(label_10, 2, 0, 1, 1);

        horizontalSpacer_4 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_2->addItem(horizontalSpacer_4, 0, 2, 1, 1);

        horizontalSpacer_6 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_2->addItem(horizontalSpacer_6, 2, 2, 1, 1);

        horizontalSpacer_7 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_2->addItem(horizontalSpacer_7, 1, 2, 1, 1);


        verticalLayout_4->addLayout(gridLayout_2);

        verticalSpacer_2 = new QSpacerItem(20, 10, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_4->addItem(verticalSpacer_2);

        collateralView->addWidget(page);

        verticalLayout->addWidget(collateralView);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        label_5 = new QLabel(SmartnodeControlDialog);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setFont(font);

        horizontalLayout->addWidget(label_5);

        smartnodeKeyLabel = new QLabel(SmartnodeControlDialog);
        smartnodeKeyLabel->setObjectName(QStringLiteral("smartnodeKeyLabel"));
        QFont font3;
        font3.setPointSize(14);
        smartnodeKeyLabel->setFont(font3);
        smartnodeKeyLabel->setStyleSheet(QStringLiteral("color: rgb(120, 18, 25);"));
        smartnodeKeyLabel->setTextInteractionFlags(Qt::LinksAccessibleByMouse|Qt::TextSelectableByKeyboard|Qt::TextSelectableByMouse);

        horizontalLayout->addWidget(smartnodeKeyLabel);

        horizontalSpacer_5 = new QSpacerItem(20, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_5);

        copySmartnodeKeyButton = new QPushButton(SmartnodeControlDialog);
        copySmartnodeKeyButton->setObjectName(QStringLiteral("copySmartnodeKeyButton"));

        horizontalLayout->addWidget(copySmartnodeKeyButton);

        customSmartnodeKeyButton = new QPushButton(SmartnodeControlDialog);
        customSmartnodeKeyButton->setObjectName(QStringLiteral("customSmartnodeKeyButton"));

        horizontalLayout->addWidget(customSmartnodeKeyButton);

        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_3);


        verticalLayout_2->addLayout(horizontalLayout);

        label_6 = new QLabel(SmartnodeControlDialog);
        label_6->setObjectName(QStringLiteral("label_6"));
        QFont font4;
        font4.setPointSize(12);
        font4.setItalic(true);
        label_6->setFont(font4);
        label_6->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignTop);
        label_6->setWordWrap(true);

        verticalLayout_2->addWidget(label_6);


        verticalLayout->addLayout(verticalLayout_2);

        verticalSpacer_3 = new QSpacerItem(20, 20, QSizePolicy::Minimum, QSizePolicy::Fixed);

        verticalLayout->addItem(verticalSpacer_3);

        viewButtonBox = new QDialogButtonBox(SmartnodeControlDialog);
        viewButtonBox->setObjectName(QStringLiteral("viewButtonBox"));
        QSizePolicy sizePolicy1(QSizePolicy::Maximum, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(viewButtonBox->sizePolicy().hasHeightForWidth());
        viewButtonBox->setSizePolicy(sizePolicy1);
        viewButtonBox->setOrientation(Qt::Horizontal);
        viewButtonBox->setStandardButtons(QDialogButtonBox::Close);

        verticalLayout->addWidget(viewButtonBox);

        defaultButtonBox = new QDialogButtonBox(SmartnodeControlDialog);
        defaultButtonBox->setObjectName(QStringLiteral("defaultButtonBox"));
        sizePolicy1.setHeightForWidth(defaultButtonBox->sizePolicy().hasHeightForWidth());
        defaultButtonBox->setSizePolicy(sizePolicy1);
        defaultButtonBox->setOrientation(Qt::Horizontal);
        defaultButtonBox->setStandardButtons(QDialogButtonBox::Apply|QDialogButtonBox::Cancel);

        verticalLayout->addWidget(defaultButtonBox);

        QWidget::setTabOrder(aliasField, ipField);
        QWidget::setTabOrder(ipField, collateralTable);
        QWidget::setTabOrder(collateralTable, copySmartnodeKeyButton);

        retranslateUi(SmartnodeControlDialog);

        QMetaObject::connectSlotsByName(SmartnodeControlDialog);
    } // setupUi

    void retranslateUi(QDialog *SmartnodeControlDialog)
    {
        SmartnodeControlDialog->setWindowTitle(QApplication::translate("SmartnodeControlDialog", "Create new Smartnode", 0));
        ipField->setPlaceholderText(QApplication::translate("SmartnodeControlDialog", "000.000.000.000", 0));
        aliasField->setPlaceholderText(QApplication::translate("SmartnodeControlDialog", "MyNode1", 0));
        label_3->setText(QApplication::translate("SmartnodeControlDialog", "IP-Address", 0));
        label_2->setText(QApplication::translate("SmartnodeControlDialog", "Alias", 0));
        label_4->setText(QApplication::translate("SmartnodeControlDialog", "Select a collateral for your new node", 0));
        QTableWidgetItem *___qtablewidgetitem = collateralTable->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QApplication::translate("SmartnodeControlDialog", "Label", 0));
        QTableWidgetItem *___qtablewidgetitem1 = collateralTable->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QApplication::translate("SmartnodeControlDialog", "Address", 0));
        QTableWidgetItem *___qtablewidgetitem2 = collateralTable->horizontalHeaderItem(2);
        ___qtablewidgetitem2->setText(QApplication::translate("SmartnodeControlDialog", "TX-Hash", 0));
        QTableWidgetItem *___qtablewidgetitem3 = collateralTable->horizontalHeaderItem(3);
        ___qtablewidgetitem3->setText(QApplication::translate("SmartnodeControlDialog", "TX-Index", 0));
        label_7->setText(QApplication::translate("SmartnodeControlDialog", "Collateral", 0));
        addressViewLabel->setText(QApplication::translate("SmartnodeControlDialog", "0000000000000000000000000", 0));
        label_8->setText(QApplication::translate("SmartnodeControlDialog", "Address", 0));
        txIndexViewLabel->setText(QApplication::translate("SmartnodeControlDialog", "1", 0));
        label_9->setText(QApplication::translate("SmartnodeControlDialog", "Transaction hash", 0));
        txHashViewLabel->setText(QApplication::translate("SmartnodeControlDialog", "00000000000000000000000000000000000000000000", 0));
        label_10->setText(QApplication::translate("SmartnodeControlDialog", "Transaction output id", 0));
        label_5->setText(QApplication::translate("SmartnodeControlDialog", "Smartnode Key", 0));
        smartnodeKeyLabel->setText(QApplication::translate("SmartnodeControlDialog", "00000000000000000000000000000000000000000", 0));
        copySmartnodeKeyButton->setText(QApplication::translate("SmartnodeControlDialog", "Copy SmartnodeKey", 0));
        customSmartnodeKeyButton->setText(QApplication::translate("SmartnodeControlDialog", "Custom SmartnodeKey", 0));
        label_6->setText(QApplication::translate("SmartnodeControlDialog", "Its required to use the \"Smartnode Key\" above when you install your new node. You can manually insert it into your node's smartcash.conf or provide it to the bash installer when prompted.", 0));
    } // retranslateUi

};

namespace Ui {
    class SmartnodeControlDialog: public Ui_SmartnodeControlDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_NODECONTROLDIALOG_H
