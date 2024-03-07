#ifndef AFFICHER_H
#define AFFICHER_H
#include "reclamation.h"
#include <QDialog>

class Afficher
{

public:
    Afficher();
    Afficher(QDate datereclamation,QString description);

    void setDescription(QString description);
    void setDatereclamation(QDate datereclamation);

    QString getDescription();
    QDate getDatereclamation();

private:
    QString description;
    QDate datereclamation;
};

#endif // AFFICHER_H
