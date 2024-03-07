#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QMessageBox>
#include <QString>
#include <QSqlQuery>
#include <QDebug>
#include <QSqlQueryModel>
#include <QObject>
#include "connection.h"
#include "reclamation.h"
#include <QDateEdit>
#include <QDate>
MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    ui->tableView->setModel(r.afficher());

}
MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_pushButton_ajouter_clicked()
{


            QDate datereclamation = ui->DateEdit->date();
            QString description = ui->lineEdit_Description->text();

            // Check if the conversion was successful
            if (!datereclamation.isValid()) {
                datereclamation = QDate(2020, 1, 1);
            }
            Reclamation r= Reclamation(datereclamation,description);
            bool test = r.ajouter();

            QMessageBox msgBox;
            if (test) {
                qDebug()<<"ajout avec succès";

            } else {
                //msgBox.setText("échec");
                qDebug()<<"échec";
                //msgBox.exec();
                QMessageBox::critical(nullptr, QObject::tr("not ok"),
                    QObject::tr("ajout non effectué.\n" "click cancel to exit."), QMessageBox::Cancel);
            }

}

void MainWindow::on_pushButton_supprimer_clicked()
{
    QModelIndexList selectedIndexes = ui->tableView->selectionModel()->selectedIndexes();
    if (!selectedIndexes.isEmpty()){
        int idreclamation=selectedIndexes.at(0).sibling(selectedIndexes.at(0).row(), 0).data().toInt();
        bool supprime = r.supprimer(idreclamation);
        if(supprime) {
            ui->tableView->setModel(r.afficher());
            QMessageBox::information(this, "Deleted successfully", "reclamation deleted successfully.");
        } else { QMessageBox::warning(this, "Delete failed", "reclamation delete failed.");
        } } else { QMessageBox::warning(this, "No reclamation selected", "Please select a reclamation to delete."); }
}




void MainWindow::on_pushButton_list_clicked()
{
    qDebug();

    Reclamation r;
    ui->tableView->setModel(r.afficher());
}

void MainWindow::on_pushButton_modifier_clicked()
{
    QDate datereclamation = ui->DateEdit->date();
    QString description = ui->lineEdit_Description->text();

    Reclamation r1 (datereclamation,description);
           bool test=r1.modifier(datereclamation, description);

           if(test)
               {

                   QMessageBox::information(nullptr, QObject::tr("ok"),
                                       QObject::tr("update successful.\n"
                                                   "update effectuer."), QMessageBox::Cancel);
                    ui->tableView->setModel(r.afficher());



               }
                    else

                      QMessageBox::critical(nullptr, QObject::tr("nope"),
                            QObject::tr("connection failed.\n"
                                                   "Click Cancel to exit."), QMessageBox::Cancel);
}

/*void MainWindow::on_pushButton_trier_clicked()
{

    Reclamation r1;
    ui->tableView->setModel(r1.tri());
}
*/
