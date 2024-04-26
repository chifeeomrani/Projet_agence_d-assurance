#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "contrats.h"
#include <QTableView>
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
namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = nullptr);
    ~MainWindow();
    void on_pdf_seance_clicked();

private slots:
    void on_pushButton_36_clicked();

    void on_Ajouter_clicked();

    void on_pushButton_2_clicked();

    void on_pushButton_clicked();

    void on_statistiques_clicked();

    void on_table_as_activated(const QModelIndex &index);
    void searchContrats(const QString &text);
    void sortAscending();
    void sortDescending();
    //void exportPdf();
private:
//void exportToPdf(const QString &fileName, QTableView *table_as);

private:
    Ui::MainWindow *ui;
    contrats C;
};

#endif // MAINWINDOW_H
