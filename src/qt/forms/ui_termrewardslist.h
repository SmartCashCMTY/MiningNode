/********************************************************************************
** Form generated from reading UI file 'termrewardslist.ui'
**
** Created by: Qt User Interface Compiler version 5.6.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TERMREWARDSLIST_H
#define UI_TERMREWARDSLIST_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include "waitingspinnerwidget.h"

QT_BEGIN_NAMESPACE

class Ui_TermRewardsList
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
    QWidget *verticalLayout22;
    QVBoxLayout *verticallayout22;
    QWidget *widget_2;
    QHBoxLayout *horizontalLayout_11;
    QVBoxLayout *verticalLayout_5;
    QLabel *updateNote22;
    QVBoxLayout *verticalLayout_6;
    QLabel *label_21;
    QLabel *label_212;
    QLabel *label_213;
    QLabel *label_214;
    QLabel *label_2141;
    QTableWidget *tableWidgetTermRewards;

    void setupUi(QWidget *TermRewardsList)
    {
        if (TermRewardsList->objectName().isEmpty())
            TermRewardsList->setObjectName(QStringLiteral("TermRewardsList"));
        TermRewardsList->resize(811, 557);
        verticalLayout = new QVBoxLayout(TermRewardsList);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(9, 0, -1, 0);
        stackedWidget = new QStackedWidget(TermRewardsList);
        stackedWidget->setObjectName(QStringLiteral("stackedWidget"));
        stackedWidget->setMaximumSize(QSize(16777215, 16777215));
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
        verticalLayout22 = new QWidget();
        verticalLayout22->setObjectName(QStringLiteral("verticalLayout22"));
        verticallayout22 = new QVBoxLayout(verticalLayout22);
        verticallayout22->setObjectName(QStringLiteral("verticallayout22"));
        widget_2 = new QWidget(verticalLayout22);
        widget_2->setObjectName(QStringLiteral("widget_2"));
        widget_2->setMinimumSize(QSize(0, 60));
        horizontalLayout_11 = new QHBoxLayout(widget_2);
        horizontalLayout_11->setObjectName(QStringLiteral("horizontalLayout_11"));
        horizontalLayout_11->setContentsMargins(0, 0, 0, 0);
        verticalLayout_5 = new QVBoxLayout();
        verticalLayout_5->setObjectName(QStringLiteral("verticalLayout_5"));
        updateNote22 = new QLabel(widget_2);
        updateNote22->setObjectName(QStringLiteral("updateNote22"));
        QFont font1;
        font1.setPointSize(12);
        updateNote22->setFont(font1);

        verticalLayout_5->addWidget(updateNote22);


        horizontalLayout_11->addLayout(verticalLayout_5);

        verticalLayout_6 = new QVBoxLayout();
        verticalLayout_6->setObjectName(QStringLiteral("verticalLayout_6"));
        label_21 = new QLabel(widget_2);
        label_21->setObjectName(QStringLiteral("label_21"));
        QFont font2;
        font2.setPointSize(12);
        font2.setBold(true);
        font2.setWeight(75);
        label_21->setFont(font2);
        label_21->setAlignment(Qt::AlignCenter);

        verticalLayout_6->addWidget(label_21);

        label_212 = new QLabel(widget_2);
        label_212->setObjectName(QStringLiteral("label_212"));
        label_212->setFont(font1);
        label_212->setAlignment(Qt::AlignCenter);

        verticalLayout_6->addWidget(label_212);

        label_213 = new QLabel(widget_2);
        label_213->setObjectName(QStringLiteral("label_213"));
        label_213->setFont(font1);
        label_213->setAlignment(Qt::AlignCenter);

        verticalLayout_6->addWidget(label_213);

        label_214 = new QLabel(widget_2);
        label_214->setObjectName(QStringLiteral("label_214"));
        label_214->setFont(font1);
        label_214->setAlignment(Qt::AlignCenter);

        verticalLayout_6->addWidget(label_214);

        label_2141 = new QLabel(widget_2);
        label_2141->setObjectName(QStringLiteral("label_2141"));
        label_2141->setFont(font1);
        label_2141->setAlignment(Qt::AlignCenter);

        verticalLayout_6->addWidget(label_2141);


        horizontalLayout_11->addLayout(verticalLayout_6);


        verticallayout22->addWidget(widget_2);

        tableWidgetTermRewards = new QTableWidget(verticalLayout22);
        if (tableWidgetTermRewards->columnCount() < 6)
            tableWidgetTermRewards->setColumnCount(6);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        tableWidgetTermRewards->setHorizontalHeaderItem(0, __qtablewidgetitem);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        tableWidgetTermRewards->setHorizontalHeaderItem(1, __qtablewidgetitem1);
        QTableWidgetItem *__qtablewidgetitem2 = new QTableWidgetItem();
        tableWidgetTermRewards->setHorizontalHeaderItem(2, __qtablewidgetitem2);
        QTableWidgetItem *__qtablewidgetitem3 = new QTableWidgetItem();
        tableWidgetTermRewards->setHorizontalHeaderItem(3, __qtablewidgetitem3);
        QTableWidgetItem *__qtablewidgetitem4 = new QTableWidgetItem();
        tableWidgetTermRewards->setHorizontalHeaderItem(4, __qtablewidgetitem4);
        QTableWidgetItem *__qtablewidgetitem5 = new QTableWidgetItem();
        tableWidgetTermRewards->setHorizontalHeaderItem(5, __qtablewidgetitem5);
        tableWidgetTermRewards->setObjectName(QStringLiteral("tableWidgetTermRewards"));
        tableWidgetTermRewards->setMinimumSize(QSize(695, 0));
        tableWidgetTermRewards->setEditTriggers(QAbstractItemView::NoEditTriggers);
        tableWidgetTermRewards->setAlternatingRowColors(true);
        tableWidgetTermRewards->setSelectionMode(QAbstractItemView::SingleSelection);
        tableWidgetTermRewards->setSelectionBehavior(QAbstractItemView::SelectRows);
        tableWidgetTermRewards->setSortingEnabled(true);
        tableWidgetTermRewards->horizontalHeader()->setStretchLastSection(true);

        verticallayout22->addWidget(tableWidgetTermRewards);

        stackedWidget->addWidget(verticalLayout22);

        verticalLayout->addWidget(stackedWidget);


        retranslateUi(TermRewardsList);

        stackedWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(TermRewardsList);
    } // setupUi

    void retranslateUi(QWidget *TermRewardsList)
    {
        TermRewardsList->setWindowTitle(QApplication::translate("TermRewardsList", "Form", 0));
        label_3->setText(QApplication::translate("TermRewardsList", "Initializing TermRewards...", 0));
        updateNote22->setText(QApplication::translate("TermRewardsList", "TermRewards and SmartRetire has ended.<br />Payments for previously activated addresses are already paid with timelocks.<br />Payments are set to unlock quarterly and can be spent when unlocked. ", 0));
        label_21->setText(QApplication::translate("TermRewardsList", "Yearly Yield (Paid Quarterly)", 0));
        label_212->setText(QApplication::translate("TermRewardsList", "1 Year Term: <b>35%</b>", 0));
        label_213->setText(QApplication::translate("TermRewardsList", "2 Year Term: <b>40%</>", 0));
        label_214->setText(QApplication::translate("TermRewardsList", "3 Year Term: <b>45%</b>", 0));
        label_2141->setText(QApplication::translate("TermRewardsList", "SmartRetire:  <b>50%</b>", 0));
        QTableWidgetItem *___qtablewidgetitem = tableWidgetTermRewards->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QApplication::translate("TermRewardsList", "Address", 0));
        QTableWidgetItem *___qtablewidgetitem1 = tableWidgetTermRewards->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QApplication::translate("TermRewardsList", "Balance", 0));
        QTableWidgetItem *___qtablewidgetitem2 = tableWidgetTermRewards->horizontalHeaderItem(2);
        ___qtablewidgetitem2->setText(QApplication::translate("TermRewardsList", "Term", 0));
        QTableWidgetItem *___qtablewidgetitem3 = tableWidgetTermRewards->horizontalHeaderItem(3);
        ___qtablewidgetitem3->setText(QApplication::translate("TermRewardsList", "Yearly Yield", 0));
        QTableWidgetItem *___qtablewidgetitem4 = tableWidgetTermRewards->horizontalHeaderItem(4);
        ___qtablewidgetitem4->setText(QApplication::translate("TermRewardsList", "Expiration", 0));
        QTableWidgetItem *___qtablewidgetitem5 = tableWidgetTermRewards->horizontalHeaderItem(5);
        ___qtablewidgetitem5->setText(QApplication::translate("TermRewardsList", "TX ID", 0));
    } // retranslateUi

};

namespace Ui {
    class TermRewardsList: public Ui_TermRewardsList {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TERMREWARDSLIST_H
