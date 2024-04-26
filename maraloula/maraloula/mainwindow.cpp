#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "contrats.h"
#include <QDebug>
#include <QDate>
#include <QAbstractItemModel>
#include <QStandardItemModel>
#include <QMessageBox>
#include <QSqlDatabase>
#include <QSqlQueryModel>
#include <QFileDialog>
#include <QPrinter>
#include <QPainter>

#include <QTextTableCell>


MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    ui->table_as->setModel(C.AfficherContrats());
    ui->table_as->setColumnWidth(0, 80);
    ui->table_as->setColumnWidth(2, 100);
    ui->table_as->setColumnWidth(3, 100);

    ui->id->setValidator(new QIntValidator(0,999999999,this));
    ui->NomC->setValidator(new QRegExpValidator(QRegExp("[A-Za-z]+"), this));
    ui->Prenom_1->setValidator(new QRegExpValidator(QRegExp("[A-Za-z]+"), this));
    ui->adresse_2->setValidator(new QRegExpValidator(QRegExp("[A-Za-z]+"), this));
    ui->Add_1->setValidator(new QRegExpValidator(QRegExp("[A-Za-z]+"), this));
    connect(ui->Recherche, &QLineEdit::textChanged, this, &MainWindow::searchContrats);
    connect(ui->pushButton_5, &QPushButton::clicked, this, &MainWindow::sortAscending);
    connect(ui->pushButton_15, &QPushButton::clicked, this, &MainWindow::sortDescending);
    connect(ui->pdf, &QPushButton::clicked, this, &MainWindow::on_pdf_seance_clicked);

}

MainWindow::~MainWindow()
{
    delete ui;
}



void MainWindow::on_pushButton_36_clicked()
{
ui->stackedWidget->setCurrentIndex(1);
}

void MainWindow::on_statistiques_clicked()
{
ui->stackedWidget->setCurrentIndex(2);
}






void MainWindow::on_pushButton_2_clicked()
{
    QModelIndex index=ui->table_as->currentIndex();
    int i=index.row();
    QModelIndex in=index.sibling(i,0);
    int val=ui->table_as->model()->data(in).toInt();
    contrats S2;
    bool test=S2.SupprimerContrats(val);
    ui->table_as->setModel(C.AfficherContrats());
    if (test)
    {
        QMessageBox::information(nullptr, QObject::tr("OK"),
                                 QObject::tr("suppression effectué:\n"
                                             "Cliquez sur Annuler pour quitter."),
                                 QMessageBox::Cancel);
    }
    else
    {
        QMessageBox::critical(nullptr, QObject::tr("Erreur"),
                              QObject::tr("suppression non effectué:\n"
                                          "Cliquez sur Annuler pour quitter."),
                              QMessageBox::Cancel);
    }
}

void MainWindow::on_pushButton_clicked()
{
    int ID_S =ui->id->text().toInt();
    QDate Dispo_de =ui->date_a->date();
    QString nom =ui->NomC->text();
    QString prenom =ui->Prenom_1->text();
    QString adress =ui->adresse_2->text();
    QString add =ui->Add_1->text();
    QString type =ui->typeaa->currentText();

    contrats S1(ID_S, Dispo_de, nom, prenom, adress, add,type );
    bool test = S1.ModifierContrats();
       ui->table_as->setModel(C.AfficherContrats());
    if (test)
    {
        QMessageBox::information(this, tr("OK"),
                                 tr("modification effectué:\n"
                                    "Cliquez sur Annuler pour quitter."));
    }
    else
    {
        QMessageBox::critical(this, tr("Erreur"),
                               tr("modification non effectué:\n"
                                  "Cliquez sur Annuler pour quitter."));
    }

}
void MainWindow::on_Ajouter_clicked()
{
    int ID_S =ui->id->text().toInt();
    QDate Dispo_de =ui->date_a->date();
    QString nom =ui->NomC->text();
    QString prenom =ui->Prenom_1->text();
    QString adress =ui->adresse_2->text();
    QString add =ui->Add_1->text();
    QString type =ui->typeaa->currentText();

    contrats S(ID_S, Dispo_de, nom, prenom, adress, add,type );
    bool test = S.AjouterContrats();
      ui->table_as->setModel(C.AfficherContrats());
    if (test)
    {
        // Si l'ajout est réussi, affichez les valeurs dans le message d'information.
        QMessageBox::information(this, tr("OK"),
                                 tr("Ajout effectué:\n"
                                    "Cliquez sur Annuler pour quitter."),
                        QMessageBox::Cancel);
    }
    else
    {
        // En cas d'échec, affichez également les valeurs.
        QMessageBox::critical(this, tr("Erreur"),
                               tr("Ajout non effectué:\n"
                                  "Cliquez sur Annuler pour quitter."),
                      QMessageBox::Cancel);
    }
}
void MainWindow::on_table_as_activated(const QModelIndex &index)
{
   int row =index.row();
   QModelIndex col1 =index.sibling(row,0);
   QModelIndex col2 =index.sibling(row,1);
   QModelIndex col3 =index.sibling(row,2);
   QModelIndex col4 =index.sibling(row,3);
   QModelIndex col5 =index.sibling(row,4);
   QModelIndex col6 =index.sibling(row,5);
   QString data1 =  ui->table_as->model()->data(col1).toString();
   QDate data2=  ui->table_as->model()->data(col2).toDate();
   QString data3=  ui->table_as->model()->data(col3).toString();
   QString data4=  ui->table_as->model()->data(col4).toString();
   QString data5=  ui->table_as->model()->data(col5).toString();
   QString data6=  ui->table_as->model()->data(col6).toString();
   ui->id->setText(data1);
   ui->date_a->setDate(data2);
   ui->NomC->setText(data3);
   ui->Prenom_1->setText(data4);
   ui->adresse_2->setText(data5);
   ui->Add_1->setText(data6);

}

void MainWindow::searchContrats(const QString &text)
{
    QSqlQueryModel *model = new QSqlQueryModel();
    QSqlQuery query;

    // Utilisez LIKE pour rechercher les événements qui contiennent le terme de recherche
    query.prepare("SELECT * FROM contrat WHERE DATESIGNATURE LIKE :search OR PRENOM LIKE :search OR NOM LIKE :search or ADRESSE like :search" );
    query.bindValue(":search", "%" + text + "%");

    if (query.exec())
    {
        model->setQuery(query);
        ui->table_as->setModel(model);
    }
    else
    {
        qDebug() << "Erreur lors de la recherche : " << query.lastError().text();
    }
}



void MainWindow::sortAscending()
{
    QSqlQueryModel *model = new QSqlQueryModel();
    model->setQuery("SELECT * FROM CONTRAT ORDER BY DATESIGNATURE ASC");
    ui->table_as->setModel(model);
}

void MainWindow::sortDescending()
{
    QSqlQueryModel *model = new QSqlQueryModel();
    model->setQuery("SELECT * FROM CONTRAT ORDER BY DATESIGNATURE DESC");
    ui->table_as->setModel(model);
}



void MainWindow::on_pdf_seance_clicked()
{
    QString filename = QFileDialog::getSaveFileName(this, "Enregistrer en PDF", QString(), "Fichiers PDF (*.pdf)");
    if (!filename.isEmpty()) {
        QTextDocument doc;

        // Configuration de la police et du titre
        QTextBlockFormat titleFormat;
        titleFormat.setAlignment(Qt::AlignHCenter);

        QTextCharFormat titleCharFormat;
        titleCharFormat.setFontPointSize(16);

        // Ajout du titre au document
        QTextCursor cursor(&doc);
        cursor.insertBlock(titleFormat);
        cursor.setCharFormat(titleCharFormat);
        cursor.insertText("Tableau des Séances");
        cursor.setCharFormat(QTextCharFormat());
        cursor.insertBlock();

        QTableView *tableView = ui->table_as;
        int rowCount = tableView->model()->rowCount();
        int columnCount = tableView->model()->columnCount();

        // Insertion du tableau au document
        QTextTableFormat tableFormat;
        tableFormat.setBorder(1);
        tableFormat.setBorderStyle(QTextFrameFormat::BorderStyle_Solid);
        tableFormat.setAlignment(Qt::AlignHCenter);

        QTextTable *table = cursor.insertTable(rowCount + 1, columnCount, tableFormat);

        // Remplissage du tableau avec les données du QTableView //
        for (int row = 0; row < rowCount; ++row) {
            for (int col = 0; col < columnCount; ++col) {
                QModelIndex index = tableView->model()->index(row, col);
                QString text = tableView->model()->data(index).toString();

                // Insertion des données dans les cellules du tableau
                QTextTableCell cell = table->cellAt(row + 1, col);
                QTextCursor cellCursor = cell.firstCursorPosition();
                cellCursor.insertText(text);
            }
        }

        // Définition des en-têtes de colonne
        for (int col = 0; col < columnCount; ++col) {
            QString headerText = tableView->model()->headerData(col, Qt::Horizontal).toString();

            // Insertion des en-têtes dans la première ligne du tableau
            QTextTableCell cell = table->cellAt(0, col);
            QTextCursor cellCursor = cell.firstCursorPosition();
            cellCursor.insertText(headerText);
        }

        // Configuration de l'imprimante pour exporter le document texte au format PDF
        QPrinter printer(QPrinter::PrinterResolution);
        printer.setOutputFormat(QPrinter::PdfFormat);
        printer.setOutputFileName(filename);

        // Impression du document texte sur l'imprimante
        doc.print(&printer);

        // Affichage d'un message de confirmation
        QMessageBox::information(this, "Exportation PDF", "Le tableau complet a été exporté avec succès en format PDF !");
    }
}


