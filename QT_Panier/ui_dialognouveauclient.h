/********************************************************************************
** Form generated from reading UI file 'dialognouveauclient.ui'
**
** Created: Thu May 2 16:22:44 2013
**      by: Qt User Interface Compiler version 4.6.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DIALOGNOUVEAUCLIENT_H
#define UI_DIALOGNOUVEAUCLIENT_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QDialog>
#include <QtGui/QDialogButtonBox>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>

QT_BEGIN_NAMESPACE

class Ui_DialogNouveauClient
{
public:
    QDialogButtonBox *buttonBox;
    QLineEdit *lineEdit_Nom;
    QLineEdit *lineEdit_Prenom;
    QLineEdit *lineEdit_Rue;
    QLineEdit *lineEdit_Ville;
    QLineEdit *lineEdit_CP;
    QLineEdit *lineEdit_Tel;
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label_4;
    QLabel *label_5;
    QLabel *label_6;

    void setupUi(QDialog *DialogNouveauClient)
    {
        if (DialogNouveauClient->objectName().isEmpty())
            DialogNouveauClient->setObjectName(QString::fromUtf8("DialogNouveauClient"));
        DialogNouveauClient->resize(400, 300);
        buttonBox = new QDialogButtonBox(DialogNouveauClient);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setGeometry(QRect(30, 240, 341, 32));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);
        lineEdit_Nom = new QLineEdit(DialogNouveauClient);
        lineEdit_Nom->setObjectName(QString::fromUtf8("lineEdit_Nom"));
        lineEdit_Nom->setGeometry(QRect(60, 30, 113, 27));
        lineEdit_Prenom = new QLineEdit(DialogNouveauClient);
        lineEdit_Prenom->setObjectName(QString::fromUtf8("lineEdit_Prenom"));
        lineEdit_Prenom->setGeometry(QRect(60, 70, 113, 27));
        lineEdit_Rue = new QLineEdit(DialogNouveauClient);
        lineEdit_Rue->setObjectName(QString::fromUtf8("lineEdit_Rue"));
        lineEdit_Rue->setGeometry(QRect(60, 110, 113, 27));
        lineEdit_Ville = new QLineEdit(DialogNouveauClient);
        lineEdit_Ville->setObjectName(QString::fromUtf8("lineEdit_Ville"));
        lineEdit_Ville->setGeometry(QRect(260, 30, 113, 27));
        lineEdit_CP = new QLineEdit(DialogNouveauClient);
        lineEdit_CP->setObjectName(QString::fromUtf8("lineEdit_CP"));
        lineEdit_CP->setGeometry(QRect(260, 70, 113, 27));
        lineEdit_Tel = new QLineEdit(DialogNouveauClient);
        lineEdit_Tel->setObjectName(QString::fromUtf8("lineEdit_Tel"));
        lineEdit_Tel->setGeometry(QRect(260, 110, 113, 27));
        label = new QLabel(DialogNouveauClient);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(0, 30, 59, 17));
        label_2 = new QLabel(DialogNouveauClient);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(0, 70, 59, 17));
        label_3 = new QLabel(DialogNouveauClient);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(0, 120, 59, 17));
        label_4 = new QLabel(DialogNouveauClient);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(180, 110, 71, 17));
        label_5 = new QLabel(DialogNouveauClient);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setGeometry(QRect(178, 70, 81, 20));
        label_6 = new QLabel(DialogNouveauClient);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setGeometry(QRect(180, 40, 59, 17));

        retranslateUi(DialogNouveauClient);
        QObject::connect(buttonBox, SIGNAL(accepted()), DialogNouveauClient, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), DialogNouveauClient, SLOT(reject()));

        QMetaObject::connectSlotsByName(DialogNouveauClient);
    } // setupUi

    void retranslateUi(QDialog *DialogNouveauClient)
    {
        DialogNouveauClient->setWindowTitle(QApplication::translate("DialogNouveauClient", "Dialog", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("DialogNouveauClient", "Nom", 0, QApplication::UnicodeUTF8));
        label_2->setText(QApplication::translate("DialogNouveauClient", "Prenom:", 0, QApplication::UnicodeUTF8));
        label_3->setText(QApplication::translate("DialogNouveauClient", "Rue:", 0, QApplication::UnicodeUTF8));
        label_4->setText(QApplication::translate("DialogNouveauClient", "Telephone:", 0, QApplication::UnicodeUTF8));
        label_5->setText(QApplication::translate("DialogNouveauClient", "Code Postal:", 0, QApplication::UnicodeUTF8));
        label_6->setText(QApplication::translate("DialogNouveauClient", "Ville:", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class DialogNouveauClient: public Ui_DialogNouveauClient {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DIALOGNOUVEAUCLIENT_H
