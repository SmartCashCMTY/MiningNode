/********************************************************************************
** Form generated from reading UI file 'castvotesdialog.ui'
**
** Created by: Qt User Interface Compiler version 5.6.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CASTVOTESDIALOG_H
#define UI_CASTVOTESDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTextBrowser>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_CastVotesDialog
{
public:
    QVBoxLayout *verticalLayout;
    QTextBrowser *results;
    QWidget *widget_2;
    QHBoxLayout *horizontalLayout_2;
    QSpacerItem *horizontalSpacer_3;
    QPushButton *button;
    QSpacerItem *horizontalSpacer;

    void setupUi(QDialog *CastVotesDialog)
    {
        if (CastVotesDialog->objectName().isEmpty())
            CastVotesDialog->setObjectName(QStringLiteral("CastVotesDialog"));
        CastVotesDialog->resize(900, 500);
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(CastVotesDialog->sizePolicy().hasHeightForWidth());
        CastVotesDialog->setSizePolicy(sizePolicy);
        verticalLayout = new QVBoxLayout(CastVotesDialog);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(20, 20, 20, 20);
        results = new QTextBrowser(CastVotesDialog);
        results->setObjectName(QStringLiteral("results"));
        results->setFrameShape(QFrame::NoFrame);
        results->setFrameShadow(QFrame::Plain);

        verticalLayout->addWidget(results);

        widget_2 = new QWidget(CastVotesDialog);
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


        retranslateUi(CastVotesDialog);

        QMetaObject::connectSlotsByName(CastVotesDialog);
    } // setupUi

    void retranslateUi(QDialog *CastVotesDialog)
    {
        CastVotesDialog->setWindowTitle(QApplication::translate("CastVotesDialog", "Create new Smartnode", 0));
        results->setHtml(QApplication::translate("CastVotesDialog", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'.SF NS Text'; font-size:13pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-weight:600; color:#000000;\">Start voting...</span></p></body></html>", 0));
        button->setText(QApplication::translate("CastVotesDialog", "Cancel", 0));
    } // retranslateUi

};

namespace Ui {
    class CastVotesDialog: public Ui_CastVotesDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CASTVOTESDIALOG_H
