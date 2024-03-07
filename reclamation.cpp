#include "reclamation.h"
#include <QSqlQuery>
#include <QtDebug>
#include <QString>
#include <QIntValidator>
#include <QObject>
#include <QMessageBox>
#include <QTextDocument>
#include <QTextStream>
#include <QComboBox>
#include <QTabWidget>
#include <QSqlTableModel>
#include <QDate>
#include <QDebug>
#include <QSqlError>

Reclamation::Reclamation()
{

    datereclamation=QDate();
    description="";
}
Reclamation::Reclamation(int idreclamation,QDate datereclamation,QString description)
{
        this->idreclamation=idreclamation;
        this->datereclamation=datereclamation;
        this->description=description;
}
Reclamation::Reclamation(QDate datereclamation,QString description)
{
    this->datereclamation = datereclamation;
    this->description = description;
}
int Reclamation::getidreclamation(){return idreclamation;}
QDate Reclamation::getDatereclamation(){return datereclamation;}
QString Reclamation::getDescription(){return description;}

void Reclamation::setidreclamation(int idreclamation){this-> idreclamation=idreclamation;}
void Reclamation::setDatereclamation(QDate datereclamation ){this->datereclamation=datereclamation;}
void Reclamation::setDescription(QString description){this->description=description;}


bool Reclamation::ajouter()
{
    qDebug();

    QSqlQuery query;


             query.prepare("INSERT INTO Reclamation (datereclamation,description) "
                           "VALUES (:datereclamation,:description)");


            query.bindValue(":datereclamation",datereclamation);
            query.bindValue(":description",description);

        return query.exec();
}
QSqlQueryModel * Reclamation::afficher(){
    qDebug();
    QSqlQueryModel * model= new QSqlQueryModel();
    model->setQuery("select * from RECLAMATION order by idreclamation");
    model->setHeaderData(0, Qt::Horizontal, QObject::tr("idreclamation"));
    model->setHeaderData(1, Qt::Horizontal, QObject::tr("datereclamation"));
    model->setHeaderData(2, Qt::Horizontal, QObject::tr("description"));
    return model;
}

bool Reclamation::supprimer(int idreclamation)
{
    qDebug();
    QSqlQuery query;
    QString res = QString::number(idreclamation);
    query.prepare("DELETE FROM RECLAMATION WHERE idreclamation = :idreclamation");
    query.bindValue(":idreclamation", res);
    return query.exec();
}

bool Reclamation::modifier(QDate datereclamation,QString description)

{
       QSqlDatabase db = QSqlDatabase::addDatabase("QODBC");
       db.setDatabaseName("assurance");
       db.setUserName("system");
       db.setPassword("221JFT0027");

       if (!db.open()) {
           qDebug() << "Erreur de connexion à la base de données : " << db.lastError();
           return false;
       }

       QSqlQuery query;
          query.prepare("UPDATE Reclaamtion SET datereclamation = :datereclamation, description = :description WHERE idreclamation = :idreclamation");
          query.bindValue(":datereclamation", datereclamation);
          query.bindValue(":description", description);

          if(!query.exec()) {
              qDebug() << "Erreur : " << query.lastError();
              return false;
          }

          return true;
}

/*QSqlQueryModel* Reclamation::tri()
{

                QSqlQueryModel * model= new QSqlQueryModel();


                   model->setQuery("select * from  Reclamation  ORDER BY DATE");
                   model->setHeaderData(0, Qt::Horizontal, QObject::tr("idreclamation "));
                   model->setHeaderData(1, Qt::Horizontal, QObject::tr("datereclamation"));
                   model->setHeaderData(2, Qt::Horizontal, QObject::tr("description "));

                   return model;


}
*/
