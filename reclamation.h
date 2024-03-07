#ifndef RECLAMATION_H
#define RECLAMATION_H
#include <QSqlQuery>
#include "QSqlQueryModel"
#include <QtCore/QDate>
#include <QString>
#include <QLCDNumber>
#include <QDebug>
#include <QObject>
#include <QDate>

class Reclamation
{

public:
    Reclamation();
    Reclamation(int idreclamation,QDate datereclamation,QString description);
    Reclamation(QDate datereclamation,QString description);

    void setidreclamation(int);
    void setDescription(QString description);
    void setDatereclamation(QDate datereclamation);

    int getidreclamation();
    QString getDescription();
    QDate getDatereclamation();

    bool ajouter();
   QSqlQueryModel * afficher();
   bool supprimer(int);
   bool modifier(QDate datereclaamtion,QString description);
   //QSqlQueryModel* tri();



private:
   int idreclamation;
    QString description;
    QDate datereclamation;
};

#endif // RECLAMATION_H
