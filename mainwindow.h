#ifndef MAINWINDOW_H
#define MAINWINDOW_H
#include "reclamation.h"
#include <QMainWindow>

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

    void updateRow_reclamation();
       void validateUpdate_reclamation();


private slots:
    void on_pushButton_ajouter_clicked();

    void on_pushButton_supprimer_clicked();

    void on_pushButton_list_clicked();

    void on_pushButton_modifier_clicked();

    //void on_pushButton_trier_clicked();

private:
    void afficherreclamation();
    void modifierreclamation();
    void supprimerreclamation(int idreclamation);
    void afficherreclamation(QDate datereclamation,QString description);
    void modifierreclamation(QDate reclamation, QString description);
    Reclamation r;
    Reclamation r1;
    Ui::MainWindow *ui;
};
#endif // MAINWINDOW_H
