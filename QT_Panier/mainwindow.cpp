#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "QMessageBox"
#include "QTextCodec"
 #include "QSqlDriver"
#include "QSqlRelationalTableModel"
#include "QSqlQuery"
#include "QSqlRecord"
#include "QPixmap"
#include "QSqlQueryModel"
#include "QVariant"
#include "QLineEdit"
#include "QDate"
#include "QObject"
#include "dialognouveauclient.h"
#include "QDebug"
#include "QSqlTableModel"
#include "QTableWidgetItem"
#include "QModelIndex"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    //prise en compte de l'utf8
    QTextCodec::setCodecForCStrings(QTextCodec::codecForName("UTF -8"));
    QTextCodec::setCodecForTr(QTextCodec::codecForName("UTF -8"));
    //connexion à la base
    db= QSqlDatabase::addDatabase("QMYSQL");
db.setHostName("LocalHost");
db.setUserName("root");// crée un utilisateur plutot que root
db.setPassword("ini01");
db.setDatabaseName("Qt_Panier");
if(!db.open())
{
 QMessageBox::warning(this,this->windowTitle(),tr("Le serveur de base de donnée est inexistant./r/nMerci de contacter l'administrateur et de relancer l'application"),"Ok");
}
else
{
ui->statusBar->setStatusTip("Connexion à la base reussite");
on_action_Produit_triggered();
on_action_Commande_triggered();
rechClient.setQuery("select * from Client");
ui->TableViewRechercherClient->setModel(&rechClient);
//les connexions des signaux aux slots correspondant
connect(ui->idLine,SIGNAL(textChanged(QString)),this,SLOT(rechercherClient()));
connect(ui->nomLine,SIGNAL(textChanged(QString)),this,SLOT(rechercherClient()));
connect(ui->RueLine,SIGNAL(textChanged(QString)),this,SLOT(rechercherClient()));
connect(ui->prenomLine,SIGNAL(textChanged(QString)),this,SLOT(rechercherClient()));
connect(ui->CPline,SIGNAL(textChanged(QString)),this,SLOT(rechercherClient()));
}
modelClient= new QSqlTableModel(this);
modelClient->setTable("Client");
//on interroge la bdd (select * from Client)
modelClient->select();
modelProduit->select();
//designation dans la combo box
ui->comboBoxProd->setModel(modelProduit);
ui->comboBoxProd->setModelColumn(1);
//Numéro de la commande dans le qlabel
QSqlQuery maRequete("select ifnull (Max(numCom)+1,1) from Commande");
maRequete.first();
QString numComMax= maRequete.value(0).toString();
ui->noCommande->setText(numComMax);
}
MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::changeEvent(QEvent *e)
{
    QMainWindow::changeEvent(e);
    switch (e->type()) {
    case QEvent::LanguageChange:
        ui->retranslateUi(this);
        break;
    default:
        break;
    }
}

void MainWindow::on_actionQuitter_triggered()
{
    if(QMessageBox::question(this,this->windowTitle(),tr(" Voulez vous vraiment fermer l'application ? "),QMessageBox::Ok|QMessageBox::Cancel,QMessageBox::Cancel)==QMessageBox::Ok)
    {
    close();
}
}

void MainWindow::on_action_Produit_triggered()
{
 modelProduit= new QSqlRelationalTableModel(this,db);
 modelProduit->setTable("Produit");
 modelProduit->setEditStrategy(QSqlRelationalTableModel::OnRowChange);
 modelProduit->select();

modelProduit->setHeaderData(0, Qt::Horizontal, tr("Réference"));
modelProduit->setHeaderData(1, Qt::Horizontal, tr("Description"));
modelProduit->setHeaderData(2, Qt::Horizontal, tr("PU"));
 modelProduit->setHeaderData(3, Qt::Horizontal, tr("Quantité"));
 modelProduit->setHeaderData(4, Qt::Horizontal, tr("Lien source"));

 ui->tableViewCatalogue->setModel(modelProduit);
 ui->tableViewCatalogue->show();
 ui->tableViewCatalogue->resizeColumnsToContents();
}


void MainWindow::on_SupprimerProduit_clicked()
{
    int noLineSelected=ui->tableViewCatalogue->selectionModel()->currentIndex().row();
    modelProduit->removeRow(noLineSelected);
}

void MainWindow::on_AjouterProduit_clicked()
{
    QSqlRecord newProduit=modelProduit->record();
    QSqlQuery maRequete("select max(refProduit)+1 from Produit");
    maRequete.next();
    int noProdOk = maRequete.value(0).toInt();
    newProduit.setValue("refProduit",noProdOk);

    newProduit.setValue("imageFile","/home/Metinan/Document/SLAM2/QT_Panier/");
    modelProduit->insertRecord(-1,newProduit);
}
//connexion
void MainWindow::on_action_Commande_triggered()
{
    ui->Day->setDate(QDate::currentDate());
    QSqlQuery maRequete("select max(numCom)+1 from Commande");
    maRequete.next();
}

void MainWindow::rechercherClient()
{
QString where="";
QStringList listeRestrictions;
//s'il y a un id
if(ui->idLine->text()!="")
{
 listeRestrictions.append(" numCli = "+ui->idLine->text());
}
//si il y a un nom
if(ui->nomLine->text()!="")
{
 listeRestrictions.append(" nomCli like  '%"+ui->nomLine->text()+"%'");
}
//si il y a un prenom
if(ui->prenomLine->text()!="")
{
 listeRestrictions.append(" prenomCli like '%"+ui->prenomLine->text()+"%'");
}
//si il y a une rue
if(ui->RueLine->text()!="")
{
 listeRestrictions.append(" rueCli like '%"+ui->RueLine->text()+"%'");
}
// si il y a un code postal
if(ui->CPline->text()!="")
{
 listeRestrictions.append(" cpCli like  '%"+ui->CPline->text()+"%'");
}
if(listeRestrictions.count()>0)
{
 where="where "+listeRestrictions.join(" and ");
}
QString texteReq="Select * from Client "+where;
qDebug()<<texteReq;
rechClient.setQuery(texteReq);
}

void MainWindow::on_pushButton_clicked()
{
//ouverture de la fenetre
    DialogNouveauClient * formNouveauClient=new DialogNouveauClient(this);
    if (formNouveauClient->exec()==QDialog::Accepted)
    {
        qDebug()<<"ça marche";
        QSqlRecord newClient=modelClient->record();
        modelClient->setEditStrategy(QSqlRelationalTableModel::OnRowChange);
        QSqlQuery maRequete2("select max(numCli)+1 from Client");
        maRequete2.next();
        int noClientOk = maRequete2.value(0).toInt();

        newClient.setValue("numCli",noClientOk);
        newClient.setValue("nomCli",formNouveauClient->ui->lineEdit_Nom->text());
        newClient.setValue("prenomCli",formNouveauClient->ui->lineEdit_Prenom->text());
        newClient.setValue("rueCli",formNouveauClient->ui->lineEdit_Rue->text());
        newClient.setValue("villeCli",formNouveauClient->ui->lineEdit_Ville->text());
        newClient.setValue("cpCli",formNouveauClient->ui->lineEdit_CP->text());
        newClient.setValue("telCli",formNouveauClient->ui->lineEdit_Tel->text());

if(modelClient->insertRecord(-1,newClient))
{
    ui->statusBar->showMessage("client ajouté avec succés",301);
    modelClient->submit();
    ui->idLine->setText(formNouveauClient->ui->lineEdit_Nom->text());
}
else
{
 //QString erreurSql=Qt_Panier.lastError();
}
    }
    else
    {
        qDebug()<<"ça marche pas";
    }
}

void MainWindow::on_AjouterrodCommande_clicked()
{
    modelCommande= new QSqlTableModel(this);
    modelCommande->setTable("LigneDeCommande");

    //ajout d'une ligne au panier
    ui->tableWidgetCommande->insertRow(ui->tableWidgetCommande->rowCount());
            //rajout du code
            //N°
            ui->comboBoxProd->setModelColumn(0);
            QTableWidgetItem * itemCodeProduit=new QTableWidgetItem(ui->comboBoxProd->currentText());
            ui->tableWidgetCommande->setItem(ui->tableWidgetCommande->rowCount() -1,0,itemCodeProduit);
                    //Designation
                    ui->comboBoxProd->setModelColumn(1);
                    QTableWidgetItem * itemDesiProduit=new QTableWidgetItem(ui->comboBoxProd->currentText());
                    ui->tableWidgetCommande->setItem(ui->tableWidgetCommande->rowCount()-1,1,itemDesiProduit);
                    //quantité
                    QTableWidgetItem * itemQuantProduit=new QTableWidgetItem(QString::number(ui->spinBoxQuantite->value()));
                    ui->tableWidgetCommande->setItem(ui->tableWidgetCommande->rowCount()-1,2,itemQuantProduit);
                    //calcul du montant
                    QSqlQuery maRequete3("select PUProduit from Produit where desProduit='"+ui->comboBoxProd->currentText()+"'");
                    maRequete3.first();
                    double PU = maRequete3.value(0).toDouble();
                    double montant=(ui->spinBoxQuantite->value())*PU;
                    //Montant
                    QTableWidgetItem * itemMontantProduit=new QTableWidgetItem(QString::number(montant));
                    ui->tableWidgetCommande->setItem(ui->tableWidgetCommande->rowCount()-1,3,itemMontantProduit);
}

void MainWindow::on_Annuler_saisie_clicked()
{
    int noLineSelected=ui->tableWidgetCommande->currentRow();
    ui->tableWidgetCommande->removeRow(noLineSelected);


        }

void MainWindow::on_EnregistrerCommande_clicked()
{

    QStringList listeChamps;
//requete numCommande
    QSqlQuery maRequete("select ifnull (Max(numCom)+1,1) from Commande");
    maRequete.first();
    int numComMax= maRequete.value(0).toInt();

QString no=QString::number(numComMax);
//incrémentation de la liste avec le numCommande
    listeChamps.append(no);

//recup id
    QModelIndex index=ui->TableViewRechercherClient->selectionModel()->currentIndex();
    //recup du n° de ligne
    int noLigne=ui->TableViewRechercherClient->selectionModel()->currentIndex().row();
    //limiter l'index à la seule colonne qui nous interesse
    index= index.sibling(noLigne,0);
    //et enfin la donnée à cet index
    QVariant idCli=index.data();

    listeChamps.append(idCli.toString());

     QString reqCreCommande="insert into Commande(numCom,numCli) values ("+listeChamps.join(" , ")+")";

   // maRequete2.first();
      qDebug()<<reqCreCommande;
//enregistrer valeur QtableWidget
   for(int noLigne=0;noLigne<ui->tableWidgetCommande->rowCount();noLigne++)
    {
       //recuperation du refProd dans chaque ligne
       QTableWidgetItem * itemQuantiteProd = ui->tableWidgetCommande->item(noLigne,0);
                        const QString quantite = itemQuantiteProd->text();

    }
}

