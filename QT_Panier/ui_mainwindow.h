/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created: Fri May 24 11:00:31 2013
**      by: Qt User Interface Compiler version 4.6.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QComboBox>
#include <QtGui/QDateEdit>
#include <QtGui/QFrame>
#include <QtGui/QGridLayout>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QMainWindow>
#include <QtGui/QMenu>
#include <QtGui/QMenuBar>
#include <QtGui/QPushButton>
#include <QtGui/QSpacerItem>
#include <QtGui/QSpinBox>
#include <QtGui/QStatusBar>
#include <QtGui/QTabWidget>
#include <QtGui/QTableView>
#include <QtGui/QTableWidget>
#include <QtGui/QToolBar>
#include <QtGui/QVBoxLayout>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *actionQuitter;
    QAction *action_Produit;
    QAction *action_Client;
    QAction *action_Commande;
    QAction *action_A_propos;
    QWidget *centralWidget;
    QGridLayout *gridLayout_2;
    QTabWidget *tabWidgetClient;
    QWidget *tab;
    QVBoxLayout *verticalLayout_2;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer;
    QLabel *label;
    QSpacerItem *horizontalSpacer_2;
    QVBoxLayout *verticalLayout;
    QTableView *tableViewCatalogue;
    QHBoxLayout *horizontalLayout_2;
    QSpacerItem *horizontalSpacer_4;
    QPushButton *AjouterProduit;
    QPushButton *SupprimerProduit;
    QSpacerItem *horizontalSpacer_3;
    QWidget *tab_3;
    QGridLayout *gridLayout;
    QHBoxLayout *horizontalLayout_13;
    QHBoxLayout *horizontalLayout_12;
    QLabel *label_8;
    QDateEdit *Day;
    QHBoxLayout *horizontalLayout_11;
    QLabel *label_10;
    QLabel *label_9;
    QLabel *noCommande;
    QHBoxLayout *horizontalLayout_3;
    QSpacerItem *horizontalSpacer_5;
    QLabel *label_3;
    QSpacerItem *horizontalSpacer_6;
    QHBoxLayout *horizontalLayout_8;
    QHBoxLayout *horizontalLayout_6;
    QHBoxLayout *horizontalLayout_5;
    QVBoxLayout *verticalLayout_8;
    QLabel *label_2;
    QLabel *label_7;
    QVBoxLayout *verticalLayout_7;
    QLineEdit *idLine;
    QLineEdit *CPline;
    QHBoxLayout *horizontalLayout_4;
    QVBoxLayout *verticalLayout_6;
    QLabel *label_4;
    QLabel *label_6;
    QVBoxLayout *verticalLayout_5;
    QLineEdit *nomLine;
    QLineEdit *RueLine;
    QHBoxLayout *horizontalLayout_7;
    QVBoxLayout *verticalLayout_3;
    QLabel *label_5;
    QLabel *label_11;
    QVBoxLayout *verticalLayout_4;
    QLineEdit *prenomLine;
    QPushButton *pushButton;
    QFrame *line;
    QHBoxLayout *horizontalLayout_10;
    QVBoxLayout *verticalLayout_9;
    QTableView *TableViewRechercherClient;
    QHBoxLayout *horizontalLayout_9;
    QLabel *LabelCommande;
    QComboBox *comboBoxProd;
    QLabel *label_12;
    QSpinBox *spinBoxQuantite;
    QPushButton *AjouterrodCommande;
    QHBoxLayout *horizontalLayout_14;
    QTableWidget *tableWidgetCommande;
    QPushButton *Annuler_saisie;
    QPushButton *EnregistrerCommande;
    QMenuBar *menuBar;
    QMenu *menuPanier;
    QMenu *menuCommande;
    QMenu *menuAide;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->setWindowModality(Qt::ApplicationModal);
        MainWindow->resize(944, 607);
        QPalette palette;
        QBrush brush(QColor(0, 0, 0, 255));
        brush.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::WindowText, brush);
        QBrush brush1(QColor(85, 170, 127, 255));
        brush1.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Button, brush1);
        QBrush brush2(QColor(127, 255, 191, 255));
        brush2.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Light, brush2);
        QBrush brush3(QColor(106, 212, 159, 255));
        brush3.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Midlight, brush3);
        QBrush brush4(QColor(42, 85, 63, 255));
        brush4.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Dark, brush4);
        QBrush brush5(QColor(56, 113, 84, 255));
        brush5.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Mid, brush5);
        palette.setBrush(QPalette::Active, QPalette::Text, brush);
        QBrush brush6(QColor(255, 255, 255, 255));
        brush6.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::BrightText, brush6);
        palette.setBrush(QPalette::Active, QPalette::ButtonText, brush);
        palette.setBrush(QPalette::Active, QPalette::Base, brush6);
        palette.setBrush(QPalette::Active, QPalette::Window, brush1);
        palette.setBrush(QPalette::Active, QPalette::Shadow, brush);
        QBrush brush7(QColor(170, 212, 191, 255));
        brush7.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::AlternateBase, brush7);
        QBrush brush8(QColor(255, 255, 220, 255));
        brush8.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::ToolTipBase, brush8);
        palette.setBrush(QPalette::Active, QPalette::ToolTipText, brush);
        palette.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette.setBrush(QPalette::Inactive, QPalette::Button, brush1);
        palette.setBrush(QPalette::Inactive, QPalette::Light, brush2);
        palette.setBrush(QPalette::Inactive, QPalette::Midlight, brush3);
        palette.setBrush(QPalette::Inactive, QPalette::Dark, brush4);
        palette.setBrush(QPalette::Inactive, QPalette::Mid, brush5);
        palette.setBrush(QPalette::Inactive, QPalette::Text, brush);
        palette.setBrush(QPalette::Inactive, QPalette::BrightText, brush6);
        palette.setBrush(QPalette::Inactive, QPalette::ButtonText, brush);
        palette.setBrush(QPalette::Inactive, QPalette::Base, brush6);
        palette.setBrush(QPalette::Inactive, QPalette::Window, brush1);
        palette.setBrush(QPalette::Inactive, QPalette::Shadow, brush);
        palette.setBrush(QPalette::Inactive, QPalette::AlternateBase, brush7);
        palette.setBrush(QPalette::Inactive, QPalette::ToolTipBase, brush8);
        palette.setBrush(QPalette::Inactive, QPalette::ToolTipText, brush);
        palette.setBrush(QPalette::Disabled, QPalette::WindowText, brush4);
        palette.setBrush(QPalette::Disabled, QPalette::Button, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::Light, brush2);
        palette.setBrush(QPalette::Disabled, QPalette::Midlight, brush3);
        palette.setBrush(QPalette::Disabled, QPalette::Dark, brush4);
        palette.setBrush(QPalette::Disabled, QPalette::Mid, brush5);
        palette.setBrush(QPalette::Disabled, QPalette::Text, brush4);
        palette.setBrush(QPalette::Disabled, QPalette::BrightText, brush6);
        palette.setBrush(QPalette::Disabled, QPalette::ButtonText, brush4);
        palette.setBrush(QPalette::Disabled, QPalette::Base, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::Window, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::Shadow, brush);
        palette.setBrush(QPalette::Disabled, QPalette::AlternateBase, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::ToolTipBase, brush8);
        palette.setBrush(QPalette::Disabled, QPalette::ToolTipText, brush);
        MainWindow->setPalette(palette);
        MainWindow->setAutoFillBackground(true);
        actionQuitter = new QAction(MainWindow);
        actionQuitter->setObjectName(QString::fromUtf8("actionQuitter"));
        action_Produit = new QAction(MainWindow);
        action_Produit->setObjectName(QString::fromUtf8("action_Produit"));
        action_Client = new QAction(MainWindow);
        action_Client->setObjectName(QString::fromUtf8("action_Client"));
        action_Commande = new QAction(MainWindow);
        action_Commande->setObjectName(QString::fromUtf8("action_Commande"));
        action_A_propos = new QAction(MainWindow);
        action_A_propos->setObjectName(QString::fromUtf8("action_A_propos"));
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        gridLayout_2 = new QGridLayout(centralWidget);
        gridLayout_2->setSpacing(6);
        gridLayout_2->setContentsMargins(11, 11, 11, 11);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        tabWidgetClient = new QTabWidget(centralWidget);
        tabWidgetClient->setObjectName(QString::fromUtf8("tabWidgetClient"));
        tab = new QWidget();
        tab->setObjectName(QString::fromUtf8("tab"));
        verticalLayout_2 = new QVBoxLayout(tab);
        verticalLayout_2->setSpacing(6);
        verticalLayout_2->setContentsMargins(11, 11, 11, 11);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        label = new QLabel(tab);
        label->setObjectName(QString::fromUtf8("label"));

        horizontalLayout->addWidget(label);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_2);


        verticalLayout_2->addLayout(horizontalLayout);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setSpacing(6);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        tableViewCatalogue = new QTableView(tab);
        tableViewCatalogue->setObjectName(QString::fromUtf8("tableViewCatalogue"));
        QPalette palette1;
        palette1.setBrush(QPalette::Active, QPalette::WindowText, brush);
        palette1.setBrush(QPalette::Active, QPalette::Button, brush6);
        palette1.setBrush(QPalette::Active, QPalette::Light, brush6);
        palette1.setBrush(QPalette::Active, QPalette::Midlight, brush6);
        QBrush brush9(QColor(127, 127, 127, 255));
        brush9.setStyle(Qt::SolidPattern);
        palette1.setBrush(QPalette::Active, QPalette::Dark, brush9);
        QBrush brush10(QColor(170, 170, 170, 255));
        brush10.setStyle(Qt::SolidPattern);
        palette1.setBrush(QPalette::Active, QPalette::Mid, brush10);
        palette1.setBrush(QPalette::Active, QPalette::Text, brush);
        palette1.setBrush(QPalette::Active, QPalette::BrightText, brush6);
        palette1.setBrush(QPalette::Active, QPalette::ButtonText, brush);
        palette1.setBrush(QPalette::Active, QPalette::Base, brush6);
        palette1.setBrush(QPalette::Active, QPalette::Window, brush6);
        palette1.setBrush(QPalette::Active, QPalette::Shadow, brush);
        QBrush brush11(QColor(0, 85, 0, 255));
        brush11.setStyle(Qt::SolidPattern);
        palette1.setBrush(QPalette::Active, QPalette::AlternateBase, brush11);
        palette1.setBrush(QPalette::Active, QPalette::ToolTipBase, brush8);
        palette1.setBrush(QPalette::Active, QPalette::ToolTipText, brush);
        palette1.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette1.setBrush(QPalette::Inactive, QPalette::Button, brush6);
        palette1.setBrush(QPalette::Inactive, QPalette::Light, brush6);
        palette1.setBrush(QPalette::Inactive, QPalette::Midlight, brush6);
        palette1.setBrush(QPalette::Inactive, QPalette::Dark, brush9);
        palette1.setBrush(QPalette::Inactive, QPalette::Mid, brush10);
        palette1.setBrush(QPalette::Inactive, QPalette::Text, brush);
        palette1.setBrush(QPalette::Inactive, QPalette::BrightText, brush6);
        palette1.setBrush(QPalette::Inactive, QPalette::ButtonText, brush);
        palette1.setBrush(QPalette::Inactive, QPalette::Base, brush6);
        palette1.setBrush(QPalette::Inactive, QPalette::Window, brush6);
        palette1.setBrush(QPalette::Inactive, QPalette::Shadow, brush);
        palette1.setBrush(QPalette::Inactive, QPalette::AlternateBase, brush11);
        palette1.setBrush(QPalette::Inactive, QPalette::ToolTipBase, brush8);
        palette1.setBrush(QPalette::Inactive, QPalette::ToolTipText, brush);
        palette1.setBrush(QPalette::Disabled, QPalette::WindowText, brush9);
        palette1.setBrush(QPalette::Disabled, QPalette::Button, brush6);
        palette1.setBrush(QPalette::Disabled, QPalette::Light, brush6);
        palette1.setBrush(QPalette::Disabled, QPalette::Midlight, brush6);
        palette1.setBrush(QPalette::Disabled, QPalette::Dark, brush9);
        palette1.setBrush(QPalette::Disabled, QPalette::Mid, brush10);
        palette1.setBrush(QPalette::Disabled, QPalette::Text, brush9);
        palette1.setBrush(QPalette::Disabled, QPalette::BrightText, brush6);
        palette1.setBrush(QPalette::Disabled, QPalette::ButtonText, brush9);
        palette1.setBrush(QPalette::Disabled, QPalette::Base, brush6);
        palette1.setBrush(QPalette::Disabled, QPalette::Window, brush6);
        palette1.setBrush(QPalette::Disabled, QPalette::Shadow, brush);
        palette1.setBrush(QPalette::Disabled, QPalette::AlternateBase, brush11);
        palette1.setBrush(QPalette::Disabled, QPalette::ToolTipBase, brush8);
        palette1.setBrush(QPalette::Disabled, QPalette::ToolTipText, brush);
        tableViewCatalogue->setPalette(palette1);
        tableViewCatalogue->setAlternatingRowColors(true);
        tableViewCatalogue->setSelectionBehavior(QAbstractItemView::SelectRows);

        verticalLayout->addWidget(tableViewCatalogue);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        horizontalSpacer_4 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_4);

        AjouterProduit = new QPushButton(tab);
        AjouterProduit->setObjectName(QString::fromUtf8("AjouterProduit"));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/home/metinan/icone/add.png"), QSize(), QIcon::Normal, QIcon::Off);
        AjouterProduit->setIcon(icon);

        horizontalLayout_2->addWidget(AjouterProduit);

        SupprimerProduit = new QPushButton(tab);
        SupprimerProduit->setObjectName(QString::fromUtf8("SupprimerProduit"));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/home/metinan/icone/remove.png"), QSize(), QIcon::Normal, QIcon::Off);
        SupprimerProduit->setIcon(icon1);

        horizontalLayout_2->addWidget(SupprimerProduit);

        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_3);


        verticalLayout->addLayout(horizontalLayout_2);


        verticalLayout_2->addLayout(verticalLayout);

        tabWidgetClient->addTab(tab, QString());
        tab_3 = new QWidget();
        tab_3->setObjectName(QString::fromUtf8("tab_3"));
        gridLayout = new QGridLayout(tab_3);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        horizontalLayout_13 = new QHBoxLayout();
        horizontalLayout_13->setSpacing(6);
        horizontalLayout_13->setObjectName(QString::fromUtf8("horizontalLayout_13"));
        horizontalLayout_12 = new QHBoxLayout();
        horizontalLayout_12->setSpacing(6);
        horizontalLayout_12->setObjectName(QString::fromUtf8("horizontalLayout_12"));
        label_8 = new QLabel(tab_3);
        label_8->setObjectName(QString::fromUtf8("label_8"));

        horizontalLayout_12->addWidget(label_8);

        Day = new QDateEdit(tab_3);
        Day->setObjectName(QString::fromUtf8("Day"));
        Day->setCalendarPopup(true);

        horizontalLayout_12->addWidget(Day);


        horizontalLayout_13->addLayout(horizontalLayout_12);

        horizontalLayout_11 = new QHBoxLayout();
        horizontalLayout_11->setSpacing(6);
        horizontalLayout_11->setObjectName(QString::fromUtf8("horizontalLayout_11"));
        label_10 = new QLabel(tab_3);
        label_10->setObjectName(QString::fromUtf8("label_10"));

        horizontalLayout_11->addWidget(label_10);

        label_9 = new QLabel(tab_3);
        label_9->setObjectName(QString::fromUtf8("label_9"));

        horizontalLayout_11->addWidget(label_9);

        noCommande = new QLabel(tab_3);
        noCommande->setObjectName(QString::fromUtf8("noCommande"));

        horizontalLayout_11->addWidget(noCommande);


        horizontalLayout_13->addLayout(horizontalLayout_11);


        gridLayout->addLayout(horizontalLayout_13, 0, 0, 1, 2);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setSpacing(6);
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        horizontalSpacer_5 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_5);

        label_3 = new QLabel(tab_3);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        horizontalLayout_3->addWidget(label_3);

        horizontalSpacer_6 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_6);


        gridLayout->addLayout(horizontalLayout_3, 1, 0, 1, 2);

        horizontalLayout_8 = new QHBoxLayout();
        horizontalLayout_8->setSpacing(6);
        horizontalLayout_8->setObjectName(QString::fromUtf8("horizontalLayout_8"));
        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setSpacing(6);
        horizontalLayout_6->setObjectName(QString::fromUtf8("horizontalLayout_6"));
        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setSpacing(6);
        horizontalLayout_5->setObjectName(QString::fromUtf8("horizontalLayout_5"));
        verticalLayout_8 = new QVBoxLayout();
        verticalLayout_8->setSpacing(6);
        verticalLayout_8->setObjectName(QString::fromUtf8("verticalLayout_8"));
        label_2 = new QLabel(tab_3);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        verticalLayout_8->addWidget(label_2);

        label_7 = new QLabel(tab_3);
        label_7->setObjectName(QString::fromUtf8("label_7"));

        verticalLayout_8->addWidget(label_7);


        horizontalLayout_5->addLayout(verticalLayout_8);

        verticalLayout_7 = new QVBoxLayout();
        verticalLayout_7->setSpacing(6);
        verticalLayout_7->setObjectName(QString::fromUtf8("verticalLayout_7"));
        idLine = new QLineEdit(tab_3);
        idLine->setObjectName(QString::fromUtf8("idLine"));

        verticalLayout_7->addWidget(idLine);

        CPline = new QLineEdit(tab_3);
        CPline->setObjectName(QString::fromUtf8("CPline"));

        verticalLayout_7->addWidget(CPline);


        horizontalLayout_5->addLayout(verticalLayout_7);


        horizontalLayout_6->addLayout(horizontalLayout_5);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setSpacing(6);
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        verticalLayout_6 = new QVBoxLayout();
        verticalLayout_6->setSpacing(6);
        verticalLayout_6->setObjectName(QString::fromUtf8("verticalLayout_6"));
        label_4 = new QLabel(tab_3);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        verticalLayout_6->addWidget(label_4);

        label_6 = new QLabel(tab_3);
        label_6->setObjectName(QString::fromUtf8("label_6"));

        verticalLayout_6->addWidget(label_6);


        horizontalLayout_4->addLayout(verticalLayout_6);

        verticalLayout_5 = new QVBoxLayout();
        verticalLayout_5->setSpacing(6);
        verticalLayout_5->setObjectName(QString::fromUtf8("verticalLayout_5"));
        nomLine = new QLineEdit(tab_3);
        nomLine->setObjectName(QString::fromUtf8("nomLine"));

        verticalLayout_5->addWidget(nomLine);

        RueLine = new QLineEdit(tab_3);
        RueLine->setObjectName(QString::fromUtf8("RueLine"));

        verticalLayout_5->addWidget(RueLine);


        horizontalLayout_4->addLayout(verticalLayout_5);


        horizontalLayout_6->addLayout(horizontalLayout_4);


        horizontalLayout_8->addLayout(horizontalLayout_6);

        horizontalLayout_7 = new QHBoxLayout();
        horizontalLayout_7->setSpacing(6);
        horizontalLayout_7->setObjectName(QString::fromUtf8("horizontalLayout_7"));
        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setSpacing(6);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        label_5 = new QLabel(tab_3);
        label_5->setObjectName(QString::fromUtf8("label_5"));

        verticalLayout_3->addWidget(label_5);

        label_11 = new QLabel(tab_3);
        label_11->setObjectName(QString::fromUtf8("label_11"));

        verticalLayout_3->addWidget(label_11);


        horizontalLayout_7->addLayout(verticalLayout_3);

        verticalLayout_4 = new QVBoxLayout();
        verticalLayout_4->setSpacing(6);
        verticalLayout_4->setObjectName(QString::fromUtf8("verticalLayout_4"));
        prenomLine = new QLineEdit(tab_3);
        prenomLine->setObjectName(QString::fromUtf8("prenomLine"));

        verticalLayout_4->addWidget(prenomLine);

        pushButton = new QPushButton(tab_3);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        QFont font;
        font.setFamily(QString::fromUtf8("Gentium"));
        pushButton->setFont(font);
        pushButton->setIcon(icon);

        verticalLayout_4->addWidget(pushButton);


        horizontalLayout_7->addLayout(verticalLayout_4);


        horizontalLayout_8->addLayout(horizontalLayout_7);


        gridLayout->addLayout(horizontalLayout_8, 2, 0, 1, 2);

        line = new QFrame(tab_3);
        line->setObjectName(QString::fromUtf8("line"));
        line->setFrameShape(QFrame::HLine);
        line->setFrameShadow(QFrame::Sunken);

        gridLayout->addWidget(line, 2, 2, 1, 1);

        horizontalLayout_10 = new QHBoxLayout();
        horizontalLayout_10->setSpacing(6);
        horizontalLayout_10->setObjectName(QString::fromUtf8("horizontalLayout_10"));
        verticalLayout_9 = new QVBoxLayout();
        verticalLayout_9->setSpacing(6);
        verticalLayout_9->setObjectName(QString::fromUtf8("verticalLayout_9"));
        TableViewRechercherClient = new QTableView(tab_3);
        TableViewRechercherClient->setObjectName(QString::fromUtf8("TableViewRechercherClient"));
        QPalette palette2;
        palette2.setBrush(QPalette::Active, QPalette::WindowText, brush);
        palette2.setBrush(QPalette::Active, QPalette::Button, brush6);
        palette2.setBrush(QPalette::Active, QPalette::Light, brush6);
        palette2.setBrush(QPalette::Active, QPalette::Midlight, brush6);
        palette2.setBrush(QPalette::Active, QPalette::Dark, brush9);
        palette2.setBrush(QPalette::Active, QPalette::Mid, brush10);
        palette2.setBrush(QPalette::Active, QPalette::Text, brush);
        palette2.setBrush(QPalette::Active, QPalette::BrightText, brush6);
        palette2.setBrush(QPalette::Active, QPalette::ButtonText, brush);
        palette2.setBrush(QPalette::Active, QPalette::Base, brush6);
        palette2.setBrush(QPalette::Active, QPalette::Window, brush6);
        palette2.setBrush(QPalette::Active, QPalette::Shadow, brush);
        palette2.setBrush(QPalette::Active, QPalette::AlternateBase, brush6);
        palette2.setBrush(QPalette::Active, QPalette::ToolTipBase, brush8);
        palette2.setBrush(QPalette::Active, QPalette::ToolTipText, brush);
        palette2.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette2.setBrush(QPalette::Inactive, QPalette::Button, brush6);
        palette2.setBrush(QPalette::Inactive, QPalette::Light, brush6);
        palette2.setBrush(QPalette::Inactive, QPalette::Midlight, brush6);
        palette2.setBrush(QPalette::Inactive, QPalette::Dark, brush9);
        palette2.setBrush(QPalette::Inactive, QPalette::Mid, brush10);
        palette2.setBrush(QPalette::Inactive, QPalette::Text, brush);
        palette2.setBrush(QPalette::Inactive, QPalette::BrightText, brush6);
        palette2.setBrush(QPalette::Inactive, QPalette::ButtonText, brush);
        palette2.setBrush(QPalette::Inactive, QPalette::Base, brush6);
        palette2.setBrush(QPalette::Inactive, QPalette::Window, brush6);
        palette2.setBrush(QPalette::Inactive, QPalette::Shadow, brush);
        palette2.setBrush(QPalette::Inactive, QPalette::AlternateBase, brush6);
        palette2.setBrush(QPalette::Inactive, QPalette::ToolTipBase, brush8);
        palette2.setBrush(QPalette::Inactive, QPalette::ToolTipText, brush);
        palette2.setBrush(QPalette::Disabled, QPalette::WindowText, brush9);
        palette2.setBrush(QPalette::Disabled, QPalette::Button, brush6);
        palette2.setBrush(QPalette::Disabled, QPalette::Light, brush6);
        palette2.setBrush(QPalette::Disabled, QPalette::Midlight, brush6);
        palette2.setBrush(QPalette::Disabled, QPalette::Dark, brush9);
        palette2.setBrush(QPalette::Disabled, QPalette::Mid, brush10);
        palette2.setBrush(QPalette::Disabled, QPalette::Text, brush9);
        palette2.setBrush(QPalette::Disabled, QPalette::BrightText, brush6);
        palette2.setBrush(QPalette::Disabled, QPalette::ButtonText, brush9);
        palette2.setBrush(QPalette::Disabled, QPalette::Base, brush6);
        palette2.setBrush(QPalette::Disabled, QPalette::Window, brush6);
        palette2.setBrush(QPalette::Disabled, QPalette::Shadow, brush);
        palette2.setBrush(QPalette::Disabled, QPalette::AlternateBase, brush6);
        palette2.setBrush(QPalette::Disabled, QPalette::ToolTipBase, brush8);
        palette2.setBrush(QPalette::Disabled, QPalette::ToolTipText, brush);
        TableViewRechercherClient->setPalette(palette2);
        TableViewRechercherClient->viewport()->setProperty("cursor", QVariant(QCursor(Qt::CrossCursor)));
        TableViewRechercherClient->setTabKeyNavigation(false);
        TableViewRechercherClient->setSelectionBehavior(QAbstractItemView::SelectRows);

        verticalLayout_9->addWidget(TableViewRechercherClient);

        horizontalLayout_9 = new QHBoxLayout();
        horizontalLayout_9->setSpacing(6);
        horizontalLayout_9->setObjectName(QString::fromUtf8("horizontalLayout_9"));
        LabelCommande = new QLabel(tab_3);
        LabelCommande->setObjectName(QString::fromUtf8("LabelCommande"));

        horizontalLayout_9->addWidget(LabelCommande);

        comboBoxProd = new QComboBox(tab_3);
        comboBoxProd->setObjectName(QString::fromUtf8("comboBoxProd"));
        comboBoxProd->setFocusPolicy(Qt::WheelFocus);

        horizontalLayout_9->addWidget(comboBoxProd);

        label_12 = new QLabel(tab_3);
        label_12->setObjectName(QString::fromUtf8("label_12"));

        horizontalLayout_9->addWidget(label_12);

        spinBoxQuantite = new QSpinBox(tab_3);
        spinBoxQuantite->setObjectName(QString::fromUtf8("spinBoxQuantite"));
        spinBoxQuantite->setMinimum(1);

        horizontalLayout_9->addWidget(spinBoxQuantite);

        AjouterrodCommande = new QPushButton(tab_3);
        AjouterrodCommande->setObjectName(QString::fromUtf8("AjouterrodCommande"));
        AjouterrodCommande->setFont(font);
        AjouterrodCommande->setContextMenuPolicy(Qt::DefaultContextMenu);
        AjouterrodCommande->setIcon(icon);

        horizontalLayout_9->addWidget(AjouterrodCommande);


        verticalLayout_9->addLayout(horizontalLayout_9);


        horizontalLayout_10->addLayout(verticalLayout_9);


        gridLayout->addLayout(horizontalLayout_10, 3, 1, 1, 1);

        horizontalLayout_14 = new QHBoxLayout();
        horizontalLayout_14->setSpacing(6);
        horizontalLayout_14->setObjectName(QString::fromUtf8("horizontalLayout_14"));
        tableWidgetCommande = new QTableWidget(tab_3);
        if (tableWidgetCommande->columnCount() < 4)
            tableWidgetCommande->setColumnCount(4);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        tableWidgetCommande->setHorizontalHeaderItem(0, __qtablewidgetitem);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        tableWidgetCommande->setHorizontalHeaderItem(1, __qtablewidgetitem1);
        QTableWidgetItem *__qtablewidgetitem2 = new QTableWidgetItem();
        tableWidgetCommande->setHorizontalHeaderItem(2, __qtablewidgetitem2);
        QTableWidgetItem *__qtablewidgetitem3 = new QTableWidgetItem();
        tableWidgetCommande->setHorizontalHeaderItem(3, __qtablewidgetitem3);
        tableWidgetCommande->setObjectName(QString::fromUtf8("tableWidgetCommande"));
        QPalette palette3;
        palette3.setBrush(QPalette::Active, QPalette::WindowText, brush);
        palette3.setBrush(QPalette::Active, QPalette::Button, brush6);
        palette3.setBrush(QPalette::Active, QPalette::Light, brush6);
        palette3.setBrush(QPalette::Active, QPalette::Midlight, brush6);
        palette3.setBrush(QPalette::Active, QPalette::Dark, brush9);
        palette3.setBrush(QPalette::Active, QPalette::Mid, brush10);
        palette3.setBrush(QPalette::Active, QPalette::Text, brush);
        palette3.setBrush(QPalette::Active, QPalette::BrightText, brush6);
        palette3.setBrush(QPalette::Active, QPalette::ButtonText, brush);
        palette3.setBrush(QPalette::Active, QPalette::Base, brush6);
        palette3.setBrush(QPalette::Active, QPalette::Window, brush6);
        palette3.setBrush(QPalette::Active, QPalette::Shadow, brush);
        palette3.setBrush(QPalette::Active, QPalette::AlternateBase, brush6);
        palette3.setBrush(QPalette::Active, QPalette::ToolTipBase, brush8);
        palette3.setBrush(QPalette::Active, QPalette::ToolTipText, brush);
        palette3.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette3.setBrush(QPalette::Inactive, QPalette::Button, brush6);
        palette3.setBrush(QPalette::Inactive, QPalette::Light, brush6);
        palette3.setBrush(QPalette::Inactive, QPalette::Midlight, brush6);
        palette3.setBrush(QPalette::Inactive, QPalette::Dark, brush9);
        palette3.setBrush(QPalette::Inactive, QPalette::Mid, brush10);
        palette3.setBrush(QPalette::Inactive, QPalette::Text, brush);
        palette3.setBrush(QPalette::Inactive, QPalette::BrightText, brush6);
        palette3.setBrush(QPalette::Inactive, QPalette::ButtonText, brush);
        palette3.setBrush(QPalette::Inactive, QPalette::Base, brush6);
        palette3.setBrush(QPalette::Inactive, QPalette::Window, brush6);
        palette3.setBrush(QPalette::Inactive, QPalette::Shadow, brush);
        palette3.setBrush(QPalette::Inactive, QPalette::AlternateBase, brush6);
        palette3.setBrush(QPalette::Inactive, QPalette::ToolTipBase, brush8);
        palette3.setBrush(QPalette::Inactive, QPalette::ToolTipText, brush);
        palette3.setBrush(QPalette::Disabled, QPalette::WindowText, brush9);
        palette3.setBrush(QPalette::Disabled, QPalette::Button, brush6);
        palette3.setBrush(QPalette::Disabled, QPalette::Light, brush6);
        palette3.setBrush(QPalette::Disabled, QPalette::Midlight, brush6);
        palette3.setBrush(QPalette::Disabled, QPalette::Dark, brush9);
        palette3.setBrush(QPalette::Disabled, QPalette::Mid, brush10);
        palette3.setBrush(QPalette::Disabled, QPalette::Text, brush9);
        palette3.setBrush(QPalette::Disabled, QPalette::BrightText, brush6);
        palette3.setBrush(QPalette::Disabled, QPalette::ButtonText, brush9);
        palette3.setBrush(QPalette::Disabled, QPalette::Base, brush6);
        palette3.setBrush(QPalette::Disabled, QPalette::Window, brush6);
        palette3.setBrush(QPalette::Disabled, QPalette::Shadow, brush);
        palette3.setBrush(QPalette::Disabled, QPalette::AlternateBase, brush6);
        palette3.setBrush(QPalette::Disabled, QPalette::ToolTipBase, brush8);
        palette3.setBrush(QPalette::Disabled, QPalette::ToolTipText, brush);
        tableWidgetCommande->setPalette(palette3);
        tableWidgetCommande->viewport()->setProperty("cursor", QVariant(QCursor(Qt::CrossCursor)));
        tableWidgetCommande->setTabKeyNavigation(false);
        tableWidgetCommande->setSelectionBehavior(QAbstractItemView::SelectRows);

        horizontalLayout_14->addWidget(tableWidgetCommande);

        Annuler_saisie = new QPushButton(tab_3);
        Annuler_saisie->setObjectName(QString::fromUtf8("Annuler_saisie"));
        Annuler_saisie->setFont(font);
        Annuler_saisie->setIcon(icon1);

        horizontalLayout_14->addWidget(Annuler_saisie);

        EnregistrerCommande = new QPushButton(tab_3);
        EnregistrerCommande->setObjectName(QString::fromUtf8("EnregistrerCommande"));
        EnregistrerCommande->setFont(font);
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/home/metinan/icone/save.png"), QSize(), QIcon::Normal, QIcon::Off);
        EnregistrerCommande->setIcon(icon2);

        horizontalLayout_14->addWidget(EnregistrerCommande);


        gridLayout->addLayout(horizontalLayout_14, 4, 0, 1, 2);

        tabWidgetClient->addTab(tab_3, QString());

        gridLayout_2->addWidget(tabWidgetClient, 0, 0, 1, 1);

        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QString::fromUtf8("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 944, 25));
        menuPanier = new QMenu(menuBar);
        menuPanier->setObjectName(QString::fromUtf8("menuPanier"));
        menuCommande = new QMenu(menuBar);
        menuCommande->setObjectName(QString::fromUtf8("menuCommande"));
        menuAide = new QMenu(menuBar);
        menuAide->setObjectName(QString::fromUtf8("menuAide"));
        MainWindow->setMenuBar(menuBar);
        mainToolBar = new QToolBar(MainWindow);
        mainToolBar->setObjectName(QString::fromUtf8("mainToolBar"));
        MainWindow->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QString::fromUtf8("statusBar"));
        MainWindow->setStatusBar(statusBar);
        QWidget::setTabOrder(tabWidgetClient, tableViewCatalogue);
        QWidget::setTabOrder(tableViewCatalogue, AjouterProduit);
        QWidget::setTabOrder(AjouterProduit, SupprimerProduit);
        QWidget::setTabOrder(SupprimerProduit, Day);
        QWidget::setTabOrder(Day, idLine);
        QWidget::setTabOrder(idLine, CPline);
        QWidget::setTabOrder(CPline, nomLine);
        QWidget::setTabOrder(nomLine, RueLine);
        QWidget::setTabOrder(RueLine, prenomLine);
        QWidget::setTabOrder(prenomLine, pushButton);
        QWidget::setTabOrder(pushButton, TableViewRechercherClient);
        QWidget::setTabOrder(TableViewRechercherClient, comboBoxProd);
        QWidget::setTabOrder(comboBoxProd, spinBoxQuantite);
        QWidget::setTabOrder(spinBoxQuantite, AjouterrodCommande);
        QWidget::setTabOrder(AjouterrodCommande, tableWidgetCommande);
        QWidget::setTabOrder(tableWidgetCommande, Annuler_saisie);
        QWidget::setTabOrder(Annuler_saisie, EnregistrerCommande);

        menuBar->addAction(menuPanier->menuAction());
        menuBar->addAction(menuCommande->menuAction());
        menuBar->addAction(menuAide->menuAction());
        menuPanier->addAction(actionQuitter);
        menuCommande->addAction(action_Produit);
        menuCommande->addAction(action_Commande);
        menuAide->addAction(action_A_propos);

        retranslateUi(MainWindow);

        tabWidgetClient->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", 0, QApplication::UnicodeUTF8));
        actionQuitter->setText(QApplication::translate("MainWindow", "&Quitter", 0, QApplication::UnicodeUTF8));
        action_Produit->setText(QApplication::translate("MainWindow", "&Produit", 0, QApplication::UnicodeUTF8));
        action_Client->setText(QApplication::translate("MainWindow", "&Client", 0, QApplication::UnicodeUTF8));
        action_Commande->setText(QApplication::translate("MainWindow", "&Commande", 0, QApplication::UnicodeUTF8));
        action_A_propos->setText(QApplication::translate("MainWindow", "&A propos", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("MainWindow", "Liste des produits", 0, QApplication::UnicodeUTF8));
        AjouterProduit->setText(QApplication::translate("MainWindow", "Nouveau", 0, QApplication::UnicodeUTF8));
        SupprimerProduit->setText(QApplication::translate("MainWindow", "Supprimer", 0, QApplication::UnicodeUTF8));
        tabWidgetClient->setTabText(tabWidgetClient->indexOf(tab), QApplication::translate("MainWindow", "Catalogue", 0, QApplication::UnicodeUTF8));
        label_8->setText(QApplication::translate("MainWindow", "Date", 0, QApplication::UnicodeUTF8));
        label_10->setText(QString());
        label_9->setText(QApplication::translate("MainWindow", "Num\303\251ro de la commande :", 0, QApplication::UnicodeUTF8));
        noCommande->setText(QString());
        label_3->setText(QApplication::translate("MainWindow", "Selection du client", 0, QApplication::UnicodeUTF8));
        label_2->setText(QApplication::translate("MainWindow", "id :", 0, QApplication::UnicodeUTF8));
        label_7->setText(QApplication::translate("MainWindow", "cp :", 0, QApplication::UnicodeUTF8));
        label_4->setText(QApplication::translate("MainWindow", "nom:", 0, QApplication::UnicodeUTF8));
        label_6->setText(QApplication::translate("MainWindow", "rue :", 0, QApplication::UnicodeUTF8));
        label_5->setText(QApplication::translate("MainWindow", "Prenom :", 0, QApplication::UnicodeUTF8));
        label_11->setText(QString());
        pushButton->setText(QApplication::translate("MainWindow", "Ajouter un client", 0, QApplication::UnicodeUTF8));
        LabelCommande->setText(QApplication::translate("MainWindow", "Selectionnez le produit:", 0, QApplication::UnicodeUTF8));
        label_12->setText(QApplication::translate("MainWindow", "Et la quantit\303\251:", 0, QApplication::UnicodeUTF8));
        AjouterrodCommande->setText(QApplication::translate("MainWindow", "Ajouter", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem = tableWidgetCommande->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QApplication::translate("MainWindow", "Numero", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem1 = tableWidgetCommande->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QApplication::translate("MainWindow", "Designation", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem2 = tableWidgetCommande->horizontalHeaderItem(2);
        ___qtablewidgetitem2->setText(QApplication::translate("MainWindow", "Quantit\303\251", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem3 = tableWidgetCommande->horizontalHeaderItem(3);
        ___qtablewidgetitem3->setText(QApplication::translate("MainWindow", "Montant", 0, QApplication::UnicodeUTF8));
        Annuler_saisie->setText(QApplication::translate("MainWindow", "supprimer", 0, QApplication::UnicodeUTF8));
        EnregistrerCommande->setText(QApplication::translate("MainWindow", "Enregistrer", 0, QApplication::UnicodeUTF8));
        tabWidgetClient->setTabText(tabWidgetClient->indexOf(tab_3), QApplication::translate("MainWindow", "Commande", 0, QApplication::UnicodeUTF8));
        menuPanier->setTitle(QApplication::translate("MainWindow", "&Fichier", 0, QApplication::UnicodeUTF8));
        menuCommande->setTitle(QApplication::translate("MainWindow", "&Form", 0, QApplication::UnicodeUTF8));
        menuAide->setTitle(QApplication::translate("MainWindow", "&aide", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
