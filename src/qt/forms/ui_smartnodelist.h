/********************************************************************************
** Form generated from reading UI file 'smartnodelist.ui'
**
** Created by: Qt User Interface Compiler version 5.6.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SMARTNODELIST_H
#define UI_SMARTNODELIST_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_SmartnodeList
{
public:
    QVBoxLayout *topLayout;
    QVBoxLayout *verticalLayout;
    QTabWidget *tabWidget;
    QWidget *tabMySmartnodes;
    QGridLayout *gridLayout_2;
    QVBoxLayout *verticalLayout_2;
    QHBoxLayout *horizontalLayout_note;
    QLabel *updateNote;
    QWidget *widget;
    QHBoxLayout *horizontalLayout;
    QPushButton *CreateButton;
    QPushButton *EditButton;
    QPushButton *RemoveButton;
    QPushButton *ViewButton;
    QSpacerItem *horizontalSpacer;
    QTableWidget *tableWidgetMySmartnodes;
    QHBoxLayout *horizontalLayout_5;
    QPushButton *startButton;
    QPushButton *startMissingButton;
    QPushButton *UpdateButton;
    QLabel *autoupdate_label;
    QLabel *secondsLabel;
    QSpacerItem *horizontalSpacer_5;
    QWidget *tabAllSmartnodes;
    QGridLayout *gridLayout;
    QTableWidget *tableWidgetSmartnodes;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_filter;
    QLineEdit *filterLineEdit;
    QSpacerItem *horizontalSpacer_3;
    QLabel *label_count;
    QLabel *countLabel;

    void setupUi(QWidget *SmartnodeList)
    {
        if (SmartnodeList->objectName().isEmpty())
            SmartnodeList->setObjectName(QStringLiteral("SmartnodeList"));
        SmartnodeList->resize(811, 457);
        SmartnodeList->setMinimumSize(QSize(0, 0));
        topLayout = new QVBoxLayout(SmartnodeList);
        topLayout->setObjectName(QStringLiteral("topLayout"));
        topLayout->setContentsMargins(9, 9, 9, 9);
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(-1, -1, -1, 0);
        tabWidget = new QTabWidget(SmartnodeList);
        tabWidget->setObjectName(QStringLiteral("tabWidget"));
        tabMySmartnodes = new QWidget();
        tabMySmartnodes->setObjectName(QStringLiteral("tabMySmartnodes"));
        gridLayout_2 = new QGridLayout(tabMySmartnodes);
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(-1, -1, -1, 0);
        horizontalLayout_note = new QHBoxLayout();
        horizontalLayout_note->setObjectName(QStringLiteral("horizontalLayout_note"));
        horizontalLayout_note->setContentsMargins(-1, -1, -1, 0);
        updateNote = new QLabel(tabMySmartnodes);
        updateNote->setObjectName(QStringLiteral("updateNote"));
        QFont font;
        font.setPointSize(14);
        updateNote->setFont(font);

        horizontalLayout_note->addWidget(updateNote);


        verticalLayout_2->addLayout(horizontalLayout_note);

        widget = new QWidget(tabMySmartnodes);
        widget->setObjectName(QStringLiteral("widget"));
        widget->setMinimumSize(QSize(0, 0));
        horizontalLayout = new QHBoxLayout(widget);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        CreateButton = new QPushButton(widget);
        CreateButton->setObjectName(QStringLiteral("CreateButton"));

        horizontalLayout->addWidget(CreateButton);

        EditButton = new QPushButton(widget);
        EditButton->setObjectName(QStringLiteral("EditButton"));
        EditButton->setEnabled(false);

        horizontalLayout->addWidget(EditButton);

        RemoveButton = new QPushButton(widget);
        RemoveButton->setObjectName(QStringLiteral("RemoveButton"));
        RemoveButton->setEnabled(false);

        horizontalLayout->addWidget(RemoveButton);

        ViewButton = new QPushButton(widget);
        ViewButton->setObjectName(QStringLiteral("ViewButton"));
        ViewButton->setEnabled(false);

        horizontalLayout->addWidget(ViewButton);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);


        verticalLayout_2->addWidget(widget);

        tableWidgetMySmartnodes = new QTableWidget(tabMySmartnodes);
        if (tableWidgetMySmartnodes->columnCount() < 7)
            tableWidgetMySmartnodes->setColumnCount(7);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        tableWidgetMySmartnodes->setHorizontalHeaderItem(0, __qtablewidgetitem);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        tableWidgetMySmartnodes->setHorizontalHeaderItem(1, __qtablewidgetitem1);
        QTableWidgetItem *__qtablewidgetitem2 = new QTableWidgetItem();
        tableWidgetMySmartnodes->setHorizontalHeaderItem(2, __qtablewidgetitem2);
        QTableWidgetItem *__qtablewidgetitem3 = new QTableWidgetItem();
        tableWidgetMySmartnodes->setHorizontalHeaderItem(3, __qtablewidgetitem3);
        QTableWidgetItem *__qtablewidgetitem4 = new QTableWidgetItem();
        tableWidgetMySmartnodes->setHorizontalHeaderItem(4, __qtablewidgetitem4);
        QTableWidgetItem *__qtablewidgetitem5 = new QTableWidgetItem();
        tableWidgetMySmartnodes->setHorizontalHeaderItem(5, __qtablewidgetitem5);
        QTableWidgetItem *__qtablewidgetitem6 = new QTableWidgetItem();
        tableWidgetMySmartnodes->setHorizontalHeaderItem(6, __qtablewidgetitem6);
        tableWidgetMySmartnodes->setObjectName(QStringLiteral("tableWidgetMySmartnodes"));
        tableWidgetMySmartnodes->setMinimumSize(QSize(695, 0));
        tableWidgetMySmartnodes->setEditTriggers(QAbstractItemView::NoEditTriggers);
        tableWidgetMySmartnodes->setAlternatingRowColors(true);
        tableWidgetMySmartnodes->setSelectionMode(QAbstractItemView::SingleSelection);
        tableWidgetMySmartnodes->setSelectionBehavior(QAbstractItemView::SelectRows);
        tableWidgetMySmartnodes->setSortingEnabled(true);
        tableWidgetMySmartnodes->horizontalHeader()->setStretchLastSection(true);

        verticalLayout_2->addWidget(tableWidgetMySmartnodes);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName(QStringLiteral("horizontalLayout_5"));
        horizontalLayout_5->setContentsMargins(-1, -1, -1, 0);
        startButton = new QPushButton(tabMySmartnodes);
        startButton->setObjectName(QStringLiteral("startButton"));

        horizontalLayout_5->addWidget(startButton);

        startMissingButton = new QPushButton(tabMySmartnodes);
        startMissingButton->setObjectName(QStringLiteral("startMissingButton"));

        horizontalLayout_5->addWidget(startMissingButton);

        UpdateButton = new QPushButton(tabMySmartnodes);
        UpdateButton->setObjectName(QStringLiteral("UpdateButton"));

        horizontalLayout_5->addWidget(UpdateButton);

        autoupdate_label = new QLabel(tabMySmartnodes);
        autoupdate_label->setObjectName(QStringLiteral("autoupdate_label"));

        horizontalLayout_5->addWidget(autoupdate_label);

        secondsLabel = new QLabel(tabMySmartnodes);
        secondsLabel->setObjectName(QStringLiteral("secondsLabel"));

        horizontalLayout_5->addWidget(secondsLabel);

        horizontalSpacer_5 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_5->addItem(horizontalSpacer_5);


        verticalLayout_2->addLayout(horizontalLayout_5);


        gridLayout_2->addLayout(verticalLayout_2, 0, 0, 1, 1);

        tabWidget->addTab(tabMySmartnodes, QString());
        tabAllSmartnodes = new QWidget();
        tabAllSmartnodes->setObjectName(QStringLiteral("tabAllSmartnodes"));
        gridLayout = new QGridLayout(tabAllSmartnodes);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        tableWidgetSmartnodes = new QTableWidget(tabAllSmartnodes);
        if (tableWidgetSmartnodes->columnCount() < 6)
            tableWidgetSmartnodes->setColumnCount(6);
        QTableWidgetItem *__qtablewidgetitem7 = new QTableWidgetItem();
        tableWidgetSmartnodes->setHorizontalHeaderItem(0, __qtablewidgetitem7);
        QTableWidgetItem *__qtablewidgetitem8 = new QTableWidgetItem();
        tableWidgetSmartnodes->setHorizontalHeaderItem(1, __qtablewidgetitem8);
        QTableWidgetItem *__qtablewidgetitem9 = new QTableWidgetItem();
        tableWidgetSmartnodes->setHorizontalHeaderItem(2, __qtablewidgetitem9);
        QTableWidgetItem *__qtablewidgetitem10 = new QTableWidgetItem();
        tableWidgetSmartnodes->setHorizontalHeaderItem(3, __qtablewidgetitem10);
        QTableWidgetItem *__qtablewidgetitem11 = new QTableWidgetItem();
        tableWidgetSmartnodes->setHorizontalHeaderItem(4, __qtablewidgetitem11);
        QTableWidgetItem *__qtablewidgetitem12 = new QTableWidgetItem();
        tableWidgetSmartnodes->setHorizontalHeaderItem(5, __qtablewidgetitem12);
        tableWidgetSmartnodes->setObjectName(QStringLiteral("tableWidgetSmartnodes"));
        tableWidgetSmartnodes->setEditTriggers(QAbstractItemView::NoEditTriggers);
        tableWidgetSmartnodes->setAlternatingRowColors(true);
        tableWidgetSmartnodes->setSelectionBehavior(QAbstractItemView::SelectRows);
        tableWidgetSmartnodes->setSortingEnabled(true);
        tableWidgetSmartnodes->horizontalHeader()->setStretchLastSection(true);

        gridLayout->addWidget(tableWidgetSmartnodes, 1, 0, 1, 1);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        horizontalLayout_3->setContentsMargins(-1, -1, -1, 0);
        label_filter = new QLabel(tabAllSmartnodes);
        label_filter->setObjectName(QStringLiteral("label_filter"));

        horizontalLayout_3->addWidget(label_filter);

        filterLineEdit = new QLineEdit(tabAllSmartnodes);
        filterLineEdit->setObjectName(QStringLiteral("filterLineEdit"));

        horizontalLayout_3->addWidget(filterLineEdit);

        horizontalSpacer_3 = new QSpacerItem(10, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_3);

        label_count = new QLabel(tabAllSmartnodes);
        label_count->setObjectName(QStringLiteral("label_count"));

        horizontalLayout_3->addWidget(label_count);

        countLabel = new QLabel(tabAllSmartnodes);
        countLabel->setObjectName(QStringLiteral("countLabel"));

        horizontalLayout_3->addWidget(countLabel);


        gridLayout->addLayout(horizontalLayout_3, 0, 0, 1, 1);

        tabWidget->addTab(tabAllSmartnodes, QString());

        verticalLayout->addWidget(tabWidget);


        topLayout->addLayout(verticalLayout);


        retranslateUi(SmartnodeList);

        tabWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(SmartnodeList);
    } // setupUi

    void retranslateUi(QWidget *SmartnodeList)
    {
        SmartnodeList->setWindowTitle(QApplication::translate("SmartnodeList", "Form", 0));
        updateNote->setText(QApplication::translate("SmartnodeList", "Note: Wait 20 minutes after synced before using the ENABLED status below.<br />It is recommended to check status directly and to make sure seed node shows enabled from a browser.<br />http://yourserverip:8080/v1/client/status will show your node status.<br />http://seed.smarts.cash:8080/v1/smartnode/check/yourserverip will show if enabled.", 0));
        CreateButton->setText(QApplication::translate("SmartnodeList", "Create Smartnode", 0));
        EditButton->setText(QApplication::translate("SmartnodeList", "Edit selected", 0));
        RemoveButton->setText(QApplication::translate("SmartnodeList", "Remove selected", 0));
        ViewButton->setText(QApplication::translate("SmartnodeList", "View selected", 0));
        QTableWidgetItem *___qtablewidgetitem = tableWidgetMySmartnodes->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QApplication::translate("SmartnodeList", "Alias", 0));
        QTableWidgetItem *___qtablewidgetitem1 = tableWidgetMySmartnodes->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QApplication::translate("SmartnodeList", "Address", 0));
        QTableWidgetItem *___qtablewidgetitem2 = tableWidgetMySmartnodes->horizontalHeaderItem(2);
        ___qtablewidgetitem2->setText(QApplication::translate("SmartnodeList", "Protocol", 0));
        QTableWidgetItem *___qtablewidgetitem3 = tableWidgetMySmartnodes->horizontalHeaderItem(3);
        ___qtablewidgetitem3->setText(QApplication::translate("SmartnodeList", "Status", 0));
        QTableWidgetItem *___qtablewidgetitem4 = tableWidgetMySmartnodes->horizontalHeaderItem(4);
        ___qtablewidgetitem4->setText(QApplication::translate("SmartnodeList", "Active", 0));
        QTableWidgetItem *___qtablewidgetitem5 = tableWidgetMySmartnodes->horizontalHeaderItem(5);
        ___qtablewidgetitem5->setText(QApplication::translate("SmartnodeList", "Last Seen", 0));
        QTableWidgetItem *___qtablewidgetitem6 = tableWidgetMySmartnodes->horizontalHeaderItem(6);
        ___qtablewidgetitem6->setText(QApplication::translate("SmartnodeList", "Payee", 0));
        startButton->setText(QApplication::translate("SmartnodeList", "S&tart alias", 0));
        startMissingButton->setText(QApplication::translate("SmartnodeList", "Start &MISSING", 0));
        UpdateButton->setText(QApplication::translate("SmartnodeList", "&Update status", 0));
        autoupdate_label->setText(QApplication::translate("SmartnodeList", "Status will be updated automatically in (sec):", 0));
        secondsLabel->setText(QApplication::translate("SmartnodeList", "0", 0));
        tabWidget->setTabText(tabWidget->indexOf(tabMySmartnodes), QApplication::translate("SmartnodeList", "My SmartNodes", 0));
        QTableWidgetItem *___qtablewidgetitem7 = tableWidgetSmartnodes->horizontalHeaderItem(0);
        ___qtablewidgetitem7->setText(QApplication::translate("SmartnodeList", "Address", 0));
        QTableWidgetItem *___qtablewidgetitem8 = tableWidgetSmartnodes->horizontalHeaderItem(1);
        ___qtablewidgetitem8->setText(QApplication::translate("SmartnodeList", "Protocol", 0));
        QTableWidgetItem *___qtablewidgetitem9 = tableWidgetSmartnodes->horizontalHeaderItem(2);
        ___qtablewidgetitem9->setText(QApplication::translate("SmartnodeList", "Status", 0));
        QTableWidgetItem *___qtablewidgetitem10 = tableWidgetSmartnodes->horizontalHeaderItem(3);
        ___qtablewidgetitem10->setText(QApplication::translate("SmartnodeList", "Active", 0));
        QTableWidgetItem *___qtablewidgetitem11 = tableWidgetSmartnodes->horizontalHeaderItem(4);
        ___qtablewidgetitem11->setText(QApplication::translate("SmartnodeList", "Last Seen", 0));
        QTableWidgetItem *___qtablewidgetitem12 = tableWidgetSmartnodes->horizontalHeaderItem(5);
        ___qtablewidgetitem12->setText(QApplication::translate("SmartnodeList", "Payee", 0));
        label_filter->setText(QApplication::translate("SmartnodeList", "Filter List:", 0));
#ifndef QT_NO_TOOLTIP
        filterLineEdit->setToolTip(QApplication::translate("SmartnodeList", "Filter smartnode list", 0));
#endif // QT_NO_TOOLTIP
        label_count->setText(QApplication::translate("SmartnodeList", "Node Count:", 0));
        countLabel->setText(QApplication::translate("SmartnodeList", "0", 0));
        tabWidget->setTabText(tabWidget->indexOf(tabAllSmartnodes), QApplication::translate("SmartnodeList", "All SmartNodes", 0));
    } // retranslateUi

};

namespace Ui {
    class SmartnodeList: public Ui_SmartnodeList {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SMARTNODELIST_H
