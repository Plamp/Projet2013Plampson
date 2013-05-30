#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QSqlDatabase>
#include <QSqlTableModel>
#include <QSqlQueryModel>
#include <QObject>
#include <ui_dialognouveauclient.h>
namespace Ui {
    class MainWindow;
}

class MainWindow : public QMainWindow {
    Q_OBJECT
public:
    MainWindow(QWidget *parent = 0);
    ~MainWindow();
    QSqlTableModel * modelProduit;
    QSqlTableModel * modelCommande;
    QSqlTableModel * modelClient;

    QSqlQueryModel  rechClient;
    QSqlDatabase  db;
    int id;
     QString nom;
     QString prenom;

protected:
    void changeEvent(QEvent *e);

private:
    Ui::MainWindow *ui;

private slots:

    void on_EnregistrerCommande_clicked();
    void on_Annuler_saisie_clicked();
    void on_AjouterrodCommande_clicked();
    void on_pushButton_clicked();

    void on_action_Commande_triggered();
    void rechercherClient();
    void on_AjouterProduit_clicked();
    void on_SupprimerProduit_clicked();
    void on_action_Produit_triggered();
    void on_actionQuitter_triggered();
};

#endif // MAINWINDOW_H
