/********************************************************************************
** Form generated from reading UI file 'addressconverter.ui'
**
** Created by: Qt User Interface Compiler version 5.6.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADDRESSCONVERTER_H
#define UI_ADDRESSCONVERTER_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_AddressConverter
{
public:
    QVBoxLayout *verticalLayout;
    QLabel *label_2;
    QLineEdit *input;
    QSpacerItem *verticalSpacer;
    QLabel *output;

    void setupUi(QDialog *AddressConverter)
    {
        if (AddressConverter->objectName().isEmpty())
            AddressConverter->setObjectName(QStringLiteral("AddressConverter"));
        AddressConverter->resize(431, 153);
        verticalLayout = new QVBoxLayout(AddressConverter);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        label_2 = new QLabel(AddressConverter);
        label_2->setObjectName(QStringLiteral("label_2"));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Minimum);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(label_2->sizePolicy().hasHeightForWidth());
        label_2->setSizePolicy(sizePolicy);
        label_2->setWordWrap(true);

        verticalLayout->addWidget(label_2);

        input = new QLineEdit(AddressConverter);
        input->setObjectName(QStringLiteral("input"));
        input->setMinimumSize(QSize(0, 25));
        input->setMaximumSize(QSize(16777215, 25));
        input->setFocusPolicy(Qt::ClickFocus);
        input->setStyleSheet(QLatin1String("QLineEdit{\n"
"color: black;\n"
"border: 1px solid;\n"
"background-color: white;\n"
"border-color: rgb(118, 118, 119);\n"
"}"));
        input->setAlignment(Qt::AlignCenter);

        verticalLayout->addWidget(input);

        verticalSpacer = new QSpacerItem(20, 10, QSizePolicy::Minimum, QSizePolicy::Fixed);

        verticalLayout->addItem(verticalSpacer);

        output = new QLabel(AddressConverter);
        output->setObjectName(QStringLiteral("output"));
        output->setMinimumSize(QSize(0, 25));
        output->setMaximumSize(QSize(16777215, 25));
        output->setStyleSheet(QLatin1String("QLabel{\n"
"color: black;\n"
"border: 1px solid;\n"
"background-color: white;\n"
"border-color: rgb(118, 118, 119);\n"
"}"));
        output->setAlignment(Qt::AlignCenter);
        output->setTextInteractionFlags(Qt::TextSelectableByMouse);

        verticalLayout->addWidget(output);


        retranslateUi(AddressConverter);

        QMetaObject::connectSlotsByName(AddressConverter);
    } // setupUi

    void retranslateUi(QDialog *AddressConverter)
    {
        AddressConverter->setWindowTitle(QApplication::translate("AddressConverter", "Address Converter", 0));
        label_2->setText(QApplication::translate("AddressConverter", "Helps to convert SmartCash addresses from/to the old/new address format.", 0));
        input->setPlaceholderText(QApplication::translate("AddressConverter", "Enter a SmartCash address", 0));
        output->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class AddressConverter: public Ui_AddressConverter {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADDRESSCONVERTER_H
