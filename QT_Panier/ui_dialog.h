/********************************************************************************
** Form generated from reading UI file 'dialog.ui'
**
** Created: Thu May 2 15:40:38 2013
**      by: Qt User Interface Compiler version 4.6.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DIALOG_H
#define UI_DIALOG_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QDialog>
#include <QtGui/QDialogButtonBox>
#include <QtGui/QGridLayout>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QSpacerItem>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_DialogNouveauClient
{
public:
    QWidget *widget;
    QHBoxLayout *horizontalLayout_10;
    QSpacerItem *horizontalSpacer;
    QDialogButtonBox *buttonBox;
    QSpacerItem *horizontalSpacer_2;
    QWidget *widget1;
    QGridLayout *gridLayout_5;
    QGridLayout *gridLayout_4;
    QGridLayout *gridLayout;
    QLabel *label_6;
    QLineEdit *lineEdit_6;
    QGridLayout *gridLayout_2;
    QLabel *label_5;
    QLineEdit *lineEdit_5;
    QGridLayout *gridLayout_3;
    QLabel *label_4;
    QLineEdit *lineEdit_4;
    QWidget *widget2;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QLineEdit *lineEdit;
    QWidget *widget3;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_2;
    QLineEdit *lineEdit_2;
    QWidget *widget4;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_3;
    QLineEdit *lineEdit_3;

    void setupUi(QDialog *DialogNouveauClient)
    {
        if (DialogNouveauClient->objectName().isEmpty())
            DialogNouveauClient->setObjectName(QString::fromUtf8("DialogNouveauClient"));
        DialogNouveauClient->resize(435, 306);
        widget = new QWidget(DialogNouveauClient);
        widget->setObjectName(QString::fromUtf8("widget"));
        widget->setGeometry(QRect(10, 123, 270, 29));
        horizontalLayout_10 = new QHBoxLayout(widget);
        horizontalLayout_10->setObjectName(QString::fromUtf8("horizontalLayout_10"));
        horizontalLayout_10->setContentsMargins(0, 0, 0, 0);
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_10->addItem(horizontalSpacer);

        buttonBox = new QDialogButtonBox(widget);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        horizontalLayout_10->addWidget(buttonBox);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_10->addItem(horizontalSpacer_2);

        widget1 = new QWidget(DialogNouveauClient);
        widget1->setObjectName(QString::fromUtf8("widget1"));
        widget1->setGeometry(QRect(190, 13, 217, 103));
        gridLayout_5 = new QGridLayout(widget1);
        gridLayout_5->setObjectName(QString::fromUtf8("gridLayout_5"));
        gridLayout_5->setContentsMargins(0, 0, 0, 0);
        gridLayout_4 = new QGridLayout();
        gridLayout_4->setObjectName(QString::fromUtf8("gridLayout_4"));
        gridLayout = new QGridLayout();
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        label_6 = new QLabel(widget1);
        label_6->setObjectName(QString::fromUtf8("label_6"));

        gridLayout->addWidget(label_6, 0, 0, 1, 1);

        lineEdit_6 = new QLineEdit(widget1);
        lineEdit_6->setObjectName(QString::fromUtf8("lineEdit_6"));

        gridLayout->addWidget(lineEdit_6, 0, 1, 1, 1);


        gridLayout_4->addLayout(gridLayout, 0, 0, 1, 1);

        gridLayout_2 = new QGridLayout();
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        label_5 = new QLabel(widget1);
        label_5->setObjectName(QString::fromUtf8("label_5"));

        gridLayout_2->addWidget(label_5, 0, 0, 1, 1);

        lineEdit_5 = new QLineEdit(widget1);
        lineEdit_5->setObjectName(QString::fromUtf8("lineEdit_5"));

        gridLayout_2->addWidget(lineEdit_5, 0, 1, 1, 1);


        gridLayout_4->addLayout(gridLayout_2, 1, 0, 1, 1);


        gridLayout_5->addLayout(gridLayout_4, 0, 0, 1, 1);

        gridLayout_3 = new QGridLayout();
        gridLayout_3->setObjectName(QString::fromUtf8("gridLayout_3"));
        label_4 = new QLabel(widget1);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        gridLayout_3->addWidget(label_4, 0, 0, 1, 1);

        lineEdit_4 = new QLineEdit(widget1);
        lineEdit_4->setObjectName(QString::fromUtf8("lineEdit_4"));

        gridLayout_3->addWidget(lineEdit_4, 0, 1, 1, 1);


        gridLayout_5->addLayout(gridLayout_3, 1, 0, 1, 1);

        widget2 = new QWidget(DialogNouveauClient);
        widget2->setObjectName(QString::fromUtf8("widget2"));
        widget2->setGeometry(QRect(13, 13, 176, 29));
        horizontalLayout = new QHBoxLayout(widget2);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        label = new QLabel(widget2);
        label->setObjectName(QString::fromUtf8("label"));

        horizontalLayout->addWidget(label);

        lineEdit = new QLineEdit(widget2);
        lineEdit->setObjectName(QString::fromUtf8("lineEdit"));

        horizontalLayout->addWidget(lineEdit);

        widget3 = new QWidget(DialogNouveauClient);
        widget3->setObjectName(QString::fromUtf8("widget3"));
        widget3->setGeometry(QRect(13, 50, 195, 29));
        horizontalLayout_2 = new QHBoxLayout(widget3);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        label_2 = new QLabel(widget3);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        horizontalLayout_2->addWidget(label_2);

        lineEdit_2 = new QLineEdit(widget3);
        lineEdit_2->setObjectName(QString::fromUtf8("lineEdit_2"));

        horizontalLayout_2->addWidget(lineEdit_2);

        widget4 = new QWidget(DialogNouveauClient);
        widget4->setObjectName(QString::fromUtf8("widget4"));
        widget4->setGeometry(QRect(13, 87, 171, 29));
        horizontalLayout_3 = new QHBoxLayout(widget4);
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        horizontalLayout_3->setContentsMargins(0, 0, 0, 0);
        label_3 = new QLabel(widget4);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        horizontalLayout_3->addWidget(label_3);

        lineEdit_3 = new QLineEdit(widget4);
        lineEdit_3->setObjectName(QString::fromUtf8("lineEdit_3"));

        horizontalLayout_3->addWidget(lineEdit_3);


        retranslateUi(DialogNouveauClient);
        QObject::connect(buttonBox, SIGNAL(accepted()), DialogNouveauClient, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), DialogNouveauClient, SLOT(reject()));

        QMetaObject::connectSlotsByName(DialogNouveauClient);
    } // setupUi

    void retranslateUi(QDialog *DialogNouveauClient)
    {
        DialogNouveauClient->setWindowTitle(QApplication::translate("DialogNouveauClient", "Dialog", 0, QApplication::UnicodeUTF8));
        label_6->setText(QApplication::translate("DialogNouveauClient", "Code Postal", 0, QApplication::UnicodeUTF8));
        label_5->setText(QApplication::translate("DialogNouveauClient", "Rue :", 0, QApplication::UnicodeUTF8));
        label_4->setText(QApplication::translate("DialogNouveauClient", "Telephone :", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("DialogNouveauClient", "Nom :", 0, QApplication::UnicodeUTF8));
        label_2->setText(QApplication::translate("DialogNouveauClient", "Prenom :", 0, QApplication::UnicodeUTF8));
        label_3->setText(QApplication::translate("DialogNouveauClient", "Ville :", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class DialogNouveauClient: public Ui_DialogNouveauClient {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DIALOG_H
