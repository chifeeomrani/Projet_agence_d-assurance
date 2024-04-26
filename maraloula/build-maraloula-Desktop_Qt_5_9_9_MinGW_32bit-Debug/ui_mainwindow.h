/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.9.9
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDateEdit>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTableView>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QLabel *label;
    QLabel *label_4;
    QLabel *label_6;
    QLabel *label_7;
    QLabel *label_8;
    QLabel *label_10;
    QStackedWidget *stackedWidget;
    QWidget *page;
    QGroupBox *groupBox;
    QLabel *label_15;
    QPushButton *pushButton_7;
    QPushButton *pushButton_8;
    QPushButton *pushButton_9;
    QPushButton *pushButton_10;
    QPushButton *pushButton_11;
    QTextEdit *textEdit;
    QTextEdit *textEdit_2;
    QTextEdit *textEdit_3;
    QTextEdit *textEdit_4;
    QTextEdit *textEdit_5;
    QTextEdit *textEdit_6;
    QTextEdit *textEdit_7;
    QTextEdit *textEdit_8;
    QTextEdit *textEdit_9;
    QTextEdit *textEdit_10;
    QTextEdit *textEdit_11;
    QTextEdit *textEdit_12;
    QPushButton *pushButton_36;
    QLineEdit *lineEdit;
    QLineEdit *lineEdit_2;
    QLineEdit *lineEdit_5;
    QLineEdit *lineEdit_4;
    QLineEdit *lineEdit_3;
    QLineEdit *lineEdit_6;
    QLineEdit *lineEdit_10;
    QLineEdit *lineEdit_9;
    QLineEdit *lineEdit_8;
    QLineEdit *lineEdit_11;
    QLineEdit *lineEdit_12;
    QLineEdit *lineEdit_13;
    QLineEdit *lineEdit_14;
    QLineEdit *lineEdit_15;
    QLineEdit *lineEdit_7;
    QLineEdit *lineEdit_16;
    QLineEdit *lineEdit_17;
    QLineEdit *lineEdit_18;
    QLineEdit *lineEdit_19;
    QLineEdit *lineEdit_20;
    QLineEdit *lineEdit_21;
    QLineEdit *lineEdit_22;
    QLineEdit *lineEdit_23;
    QLineEdit *lineEdit_24;
    QComboBox *comboBox;
    QWidget *page_2;
    QLabel *interfacerose;
    QLabel *Prenom_2;
    QLabel *Nom;
    QLabel *Datedesignature;
    QLabel *adresse;
    QLabel *Adresse_du_destinataire;
    QLabel *Typedassurance;
    QLineEdit *Prenom_1;
    QLineEdit *NomC;
    QLineEdit *adresse_2;
    QLineEdit *Add_1;
    QPushButton *Ajouter;
    QDateEdit *date_a;
    QTableView *table_as;
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QComboBox *typeaa;
    QLineEdit *id;
    QLabel *Datedesignature_2;
    QLineEdit *Recherche;
    QPushButton *pushButton_5;
    QPushButton *pushButton_15;
    QPushButton *pdf;
    QPushButton *statistiques;
    QWidget *page_5;
    QPushButton *pushButton_12;
    QPushButton *pushButton_13;
    QLabel *label_16;
    QLabel *label_17;
    QPushButton *pushButton_3;
    QLabel *label_18;
    QPushButton *pushButton_6;
    QLabel *label_11;
    QPushButton *pushButton_4;
    QLabel *label_19;
    QPushButton *pushButton_14;
    QLabel *label_20;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(1339, 639);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QStringLiteral("centralwidget"));
        label = new QLabel(centralwidget);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(40, 20, 121, 31));
        label_4 = new QLabel(centralwidget);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(20, 230, 91, 21));
        label_4->setStyleSheet(QStringLiteral("image: url(:/home.png);"));
        label_6 = new QLabel(centralwidget);
        label_6->setObjectName(QStringLiteral("label_6"));
        label_6->setGeometry(QRect(30, 270, 61, 31));
        label_6->setStyleSheet(QStringLiteral("image: url(:/client.png);"));
        label_7 = new QLabel(centralwidget);
        label_7->setObjectName(QStringLiteral("label_7"));
        label_7->setGeometry(QRect(20, 430, 81, 31));
        label_7->setStyleSheet(QStringLiteral("image: url(:/employe-de-bureau.png);"));
        label_8 = new QLabel(centralwidget);
        label_8->setObjectName(QStringLiteral("label_8"));
        label_8->setGeometry(QRect(30, 370, 81, 31));
        label_8->setStyleSheet(QStringLiteral("image: url(:/signe.png);"));
        label_10 = new QLabel(centralwidget);
        label_10->setObjectName(QStringLiteral("label_10"));
        label_10->setGeometry(QRect(230, 40, 91, 41));
        stackedWidget = new QStackedWidget(centralwidget);
        stackedWidget->setObjectName(QStringLiteral("stackedWidget"));
        stackedWidget->setGeometry(QRect(70, 20, 1201, 511));
        page = new QWidget();
        page->setObjectName(QStringLiteral("page"));
        groupBox = new QGroupBox(page);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        groupBox->setGeometry(QRect(10, 20, 1191, 461));
        groupBox->setStyleSheet(QLatin1String("font: 75 48pt \"MS Shell Dlg 2\";\n"
"font: 8pt \"Segoe Fluent Icons\";\n"
"color: rgb(170, 0, 0);\n"
"font: 36pt \"Kristen ITC\";\n"
"font: 25 26pt \"Yu Gothic UI Light\";\n"
" border: none;\n"
"    background-color:          #fff7fa\n"
"\n"
" ;"));
        label_15 = new QLabel(groupBox);
        label_15->setObjectName(QStringLiteral("label_15"));
        label_15->setGeometry(QRect(-10, -20, 101, 101));
        label_15->setStyleSheet(QLatin1String("image: url(:/res/logo.png);\n"
"font: 8pt \"MS Shell Dlg 2\";"));
        pushButton_7 = new QPushButton(groupBox);
        pushButton_7->setObjectName(QStringLiteral("pushButton_7"));
        pushButton_7->setGeometry(QRect(70, 70, 241, 41));
        pushButton_7->setStyleSheet(QLatin1String("QPushButton {\n"
"    border: none;\n"
"    background-color: #e40b0b;  \n"
"    color: white;   \n"
"    font-family: Tahoma, Verdana, sans-serif;\n"
"    font-size: 17px;\n"
"    border-radius: 50px;\n"
"}\n"
"\n"
"QPushButton:hover {\n"
"    background-color: #ffeaea; \n"
"    border: 2px solid black;\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"    background-color: #e40b0b; \n"
"    border: 2px solid white;\n"
"}"));
        pushButton_8 = new QPushButton(groupBox);
        pushButton_8->setObjectName(QStringLiteral("pushButton_8"));
        pushButton_8->setGeometry(QRect(310, 70, 221, 41));
        pushButton_8->setStyleSheet(QLatin1String(" QPushButton\n"
"{\n"
"    border: none;\n"
"    background-color:          #ffeaea\n"
" ;\n"
"    color: black;\n"
"      font-family: Tahoma, Verdana, sans-serif;\n"
"     font-size: 17px;\n"
"    border-radius: 50px;\n"
"}\n"
"\n"
"QPushButton:hover\n"
"{\n"
"   \n"
"	background-color:       #e40b0b ;\n"
" ;\n"
"    border: 2px solid black;\n"
"}\n"
"\n"
"QPushButton:pressed\n"
"{\n"
"    background-color:   #f3cbcb ;\n"
"    border: 2px solid white;\n"
"}"));
        pushButton_9 = new QPushButton(groupBox);
        pushButton_9->setObjectName(QStringLiteral("pushButton_9"));
        pushButton_9->setGeometry(QRect(530, 70, 221, 41));
        pushButton_9->setStyleSheet(QLatin1String(" QPushButton\n"
"{\n"
"    border: none;\n"
"    background-color:          #ffeaea\n"
" ;\n"
"    color: black;\n"
"      font-family: Tahoma, Verdana, sans-serif;\n"
"     font-size: 17px;\n"
"    border-radius: 50px;\n"
"}\n"
"\n"
"QPushButton:hover\n"
"{\n"
"   \n"
"	background-color:       #e40b0b ;\n"
" ;\n"
"    border: 2px solid black;\n"
"}\n"
"\n"
"QPushButton:pressed\n"
"{\n"
"    background-color:   #f3cbcb ;\n"
"    border: 2px solid white;\n"
"}"));
        pushButton_10 = new QPushButton(groupBox);
        pushButton_10->setObjectName(QStringLiteral("pushButton_10"));
        pushButton_10->setGeometry(QRect(750, 70, 221, 41));
        pushButton_10->setStyleSheet(QLatin1String(" QPushButton\n"
"{\n"
"    border: none;\n"
"    background-color:          #ffeaea\n"
" ;\n"
"    color: black;\n"
"      font-family: Tahoma, Verdana, sans-serif;\n"
"     font-size: 17px;\n"
"    border-radius: 50px;\n"
"}\n"
"\n"
"QPushButton:hover\n"
"{\n"
"   \n"
"	background-color:       #e40b0b ;\n"
" ;\n"
"    border: 2px solid black;\n"
"}\n"
"\n"
"QPushButton:pressed\n"
"{\n"
"    background-color:   #f3cbcb ;\n"
"    border: 2px solid white;\n"
"}"));
        pushButton_11 = new QPushButton(groupBox);
        pushButton_11->setObjectName(QStringLiteral("pushButton_11"));
        pushButton_11->setGeometry(QRect(970, 70, 221, 41));
        pushButton_11->setStyleSheet(QLatin1String(" QPushButton\n"
"{\n"
"    border: none;\n"
"    background-color:          #ffeaea\n"
" ;\n"
"    color: black;\n"
"      font-family: Tahoma, Verdana, sans-serif;\n"
"     font-size: 17px;\n"
"    border-radius: 50px;\n"
"}\n"
"\n"
"QPushButton:hover\n"
"{\n"
"   \n"
"	background-color:       #e40b0b ;\n"
" ;\n"
"    border: 2px solid black;\n"
"}\n"
"\n"
"QPushButton:pressed\n"
"{\n"
"    background-color:   #f3cbcb ;\n"
"    border: 2px solid white;\n"
"}"));
        textEdit = new QTextEdit(groupBox);
        textEdit->setObjectName(QStringLiteral("textEdit"));
        textEdit->setGeometry(QRect(40, 140, 191, 41));
        textEdit_2 = new QTextEdit(groupBox);
        textEdit_2->setObjectName(QStringLiteral("textEdit_2"));
        textEdit_2->setGeometry(QRect(60, 310, 161, 41));
        textEdit_3 = new QTextEdit(groupBox);
        textEdit_3->setObjectName(QStringLiteral("textEdit_3"));
        textEdit_3->setGeometry(QRect(320, 140, 161, 41));
        textEdit_4 = new QTextEdit(groupBox);
        textEdit_4->setObjectName(QStringLiteral("textEdit_4"));
        textEdit_4->setGeometry(QRect(520, 140, 181, 41));
        textEdit_5 = new QTextEdit(groupBox);
        textEdit_5->setObjectName(QStringLiteral("textEdit_5"));
        textEdit_5->setGeometry(QRect(690, 140, 151, 41));
        textEdit_6 = new QTextEdit(groupBox);
        textEdit_6->setObjectName(QStringLiteral("textEdit_6"));
        textEdit_6->setGeometry(QRect(860, 140, 161, 41));
        textEdit_7 = new QTextEdit(groupBox);
        textEdit_7->setObjectName(QStringLiteral("textEdit_7"));
        textEdit_7->setGeometry(QRect(1030, 140, 151, 41));
        textEdit_8 = new QTextEdit(groupBox);
        textEdit_8->setObjectName(QStringLiteral("textEdit_8"));
        textEdit_8->setGeometry(QRect(320, 310, 171, 41));
        textEdit_9 = new QTextEdit(groupBox);
        textEdit_9->setObjectName(QStringLiteral("textEdit_9"));
        textEdit_9->setGeometry(QRect(560, 310, 161, 41));
        textEdit_10 = new QTextEdit(groupBox);
        textEdit_10->setObjectName(QStringLiteral("textEdit_10"));
        textEdit_10->setGeometry(QRect(690, 310, 151, 41));
        textEdit_11 = new QTextEdit(groupBox);
        textEdit_11->setObjectName(QStringLiteral("textEdit_11"));
        textEdit_11->setGeometry(QRect(860, 310, 161, 41));
        textEdit_12 = new QTextEdit(groupBox);
        textEdit_12->setObjectName(QStringLiteral("textEdit_12"));
        textEdit_12->setGeometry(QRect(1030, 310, 151, 41));
        pushButton_36 = new QPushButton(groupBox);
        pushButton_36->setObjectName(QStringLiteral("pushButton_36"));
        pushButton_36->setGeometry(QRect(1020, 20, 161, 31));
        pushButton_36->setCursor(QCursor(Qt::PointingHandCursor));
        pushButton_36->setStyleSheet(QLatin1String(" QPushButton\n"
"{\n"
"    border: none;\n"
"    background-color:          #ffeaea\n"
" ;\n"
"    color: black;\n"
"      font-family: Tahoma, Verdana, sans-serif;\n"
"     font-size: 17px;\n"
"    border-radius: 50px;\n"
"}\n"
"\n"
"QPushButton:hover\n"
"{\n"
"   \n"
"	background-color:       #e40b0b ;\n"
" ;\n"
"    border: 2px solid black;\n"
"}\n"
"\n"
"QPushButton:pressed\n"
"{\n"
"    background-color:   #f3cbcb ;\n"
"    border: 2px solid white;\n"
"}"));
        lineEdit = new QLineEdit(groupBox);
        lineEdit->setObjectName(QStringLiteral("lineEdit"));
        lineEdit->setGeometry(QRect(0, 180, 291, 41));
        lineEdit->setStyleSheet(QLatin1String("    background-color:   #f3cbcb ;\n"
""));
        lineEdit_2 = new QLineEdit(groupBox);
        lineEdit_2->setObjectName(QStringLiteral("lineEdit_2"));
        lineEdit_2->setGeometry(QRect(0, 220, 291, 41));
        lineEdit_2->setStyleSheet(QLatin1String("    background-color:   #f3cbcb ;\n"
""));
        lineEdit_5 = new QLineEdit(groupBox);
        lineEdit_5->setObjectName(QStringLiteral("lineEdit_5"));
        lineEdit_5->setGeometry(QRect(290, 180, 221, 41));
        lineEdit_5->setStyleSheet(QLatin1String("    background-color:   #f3cbcb ;\n"
""));
        lineEdit_4 = new QLineEdit(groupBox);
        lineEdit_4->setObjectName(QStringLiteral("lineEdit_4"));
        lineEdit_4->setGeometry(QRect(290, 220, 221, 41));
        lineEdit_4->setStyleSheet(QLatin1String("    background-color:   #f3cbcb ;\n"
""));
        lineEdit_3 = new QLineEdit(groupBox);
        lineEdit_3->setObjectName(QStringLiteral("lineEdit_3"));
        lineEdit_3->setGeometry(QRect(510, 180, 221, 41));
        lineEdit_3->setStyleSheet(QLatin1String("    background-color:   #f3cbcb ;\n"
""));
        lineEdit_6 = new QLineEdit(groupBox);
        lineEdit_6->setObjectName(QStringLiteral("lineEdit_6"));
        lineEdit_6->setGeometry(QRect(510, 220, 221, 41));
        lineEdit_6->setStyleSheet(QLatin1String("    background-color:   #f3cbcb ;\n"
""));
        lineEdit_10 = new QLineEdit(groupBox);
        lineEdit_10->setObjectName(QStringLiteral("lineEdit_10"));
        lineEdit_10->setGeometry(QRect(730, 180, 151, 41));
        lineEdit_10->setStyleSheet(QLatin1String("    background-color:   #f3cbcb ;\n"
""));
        lineEdit_9 = new QLineEdit(groupBox);
        lineEdit_9->setObjectName(QStringLiteral("lineEdit_9"));
        lineEdit_9->setGeometry(QRect(730, 220, 151, 41));
        lineEdit_9->setStyleSheet(QLatin1String("    background-color:   #f3cbcb ;\n"
""));
        lineEdit_8 = new QLineEdit(groupBox);
        lineEdit_8->setObjectName(QStringLiteral("lineEdit_8"));
        lineEdit_8->setGeometry(QRect(880, 180, 171, 41));
        lineEdit_8->setStyleSheet(QLatin1String("    background-color:   #f3cbcb ;\n"
""));
        lineEdit_11 = new QLineEdit(groupBox);
        lineEdit_11->setObjectName(QStringLiteral("lineEdit_11"));
        lineEdit_11->setGeometry(QRect(880, 220, 171, 41));
        lineEdit_11->setStyleSheet(QLatin1String("    background-color:   #f3cbcb ;\n"
""));
        lineEdit_12 = new QLineEdit(groupBox);
        lineEdit_12->setObjectName(QStringLiteral("lineEdit_12"));
        lineEdit_12->setGeometry(QRect(1050, 180, 141, 41));
        lineEdit_12->setStyleSheet(QLatin1String("    background-color:   #f3cbcb ;\n"
""));
        lineEdit_13 = new QLineEdit(groupBox);
        lineEdit_13->setObjectName(QStringLiteral("lineEdit_13"));
        lineEdit_13->setGeometry(QRect(1050, 220, 141, 41));
        lineEdit_13->setStyleSheet(QLatin1String("    background-color:   #f3cbcb ;\n"
""));
        lineEdit_14 = new QLineEdit(groupBox);
        lineEdit_14->setObjectName(QStringLiteral("lineEdit_14"));
        lineEdit_14->setGeometry(QRect(0, 350, 301, 41));
        lineEdit_14->setStyleSheet(QLatin1String("    background-color:   #f3cbcb ;\n"
""));
        lineEdit_15 = new QLineEdit(groupBox);
        lineEdit_15->setObjectName(QStringLiteral("lineEdit_15"));
        lineEdit_15->setGeometry(QRect(0, 390, 301, 41));
        lineEdit_15->setStyleSheet(QLatin1String("    background-color:   #f3cbcb ;\n"
""));
        lineEdit_7 = new QLineEdit(groupBox);
        lineEdit_7->setObjectName(QStringLiteral("lineEdit_7"));
        lineEdit_7->setGeometry(QRect(300, 350, 231, 41));
        lineEdit_7->setStyleSheet(QLatin1String("    background-color:   #f3cbcb ;\n"
""));
        lineEdit_16 = new QLineEdit(groupBox);
        lineEdit_16->setObjectName(QStringLiteral("lineEdit_16"));
        lineEdit_16->setGeometry(QRect(530, 350, 191, 41));
        lineEdit_16->setStyleSheet(QLatin1String("    background-color:   #f3cbcb ;\n"
""));
        lineEdit_17 = new QLineEdit(groupBox);
        lineEdit_17->setObjectName(QStringLiteral("lineEdit_17"));
        lineEdit_17->setGeometry(QRect(300, 390, 231, 41));
        lineEdit_17->setStyleSheet(QLatin1String("    background-color:   #f3cbcb ;\n"
""));
        lineEdit_18 = new QLineEdit(groupBox);
        lineEdit_18->setObjectName(QStringLiteral("lineEdit_18"));
        lineEdit_18->setGeometry(QRect(530, 390, 191, 41));
        lineEdit_18->setStyleSheet(QLatin1String("    background-color:   #f3cbcb ;\n"
""));
        lineEdit_19 = new QLineEdit(groupBox);
        lineEdit_19->setObjectName(QStringLiteral("lineEdit_19"));
        lineEdit_19->setGeometry(QRect(720, 350, 161, 41));
        lineEdit_19->setStyleSheet(QLatin1String("    background-color:   #f3cbcb ;\n"
""));
        lineEdit_20 = new QLineEdit(groupBox);
        lineEdit_20->setObjectName(QStringLiteral("lineEdit_20"));
        lineEdit_20->setGeometry(QRect(720, 390, 161, 41));
        lineEdit_20->setStyleSheet(QLatin1String("    background-color:   #f3cbcb ;\n"
""));
        lineEdit_21 = new QLineEdit(groupBox);
        lineEdit_21->setObjectName(QStringLiteral("lineEdit_21"));
        lineEdit_21->setGeometry(QRect(880, 350, 161, 41));
        lineEdit_21->setStyleSheet(QLatin1String("    background-color:   #f3cbcb ;\n"
""));
        lineEdit_22 = new QLineEdit(groupBox);
        lineEdit_22->setObjectName(QStringLiteral("lineEdit_22"));
        lineEdit_22->setGeometry(QRect(880, 390, 161, 41));
        lineEdit_22->setStyleSheet(QLatin1String("    background-color:   #f3cbcb ;\n"
""));
        lineEdit_23 = new QLineEdit(groupBox);
        lineEdit_23->setObjectName(QStringLiteral("lineEdit_23"));
        lineEdit_23->setGeometry(QRect(1040, 350, 151, 41));
        lineEdit_23->setStyleSheet(QLatin1String("    background-color:   #f3cbcb ;\n"
""));
        lineEdit_24 = new QLineEdit(groupBox);
        lineEdit_24->setObjectName(QStringLiteral("lineEdit_24"));
        lineEdit_24->setGeometry(QRect(1040, 390, 151, 41));
        lineEdit_24->setStyleSheet(QLatin1String("    background-color:   #f3cbcb ;\n"
""));
        comboBox = new QComboBox(groupBox);
        comboBox->setObjectName(QStringLiteral("comboBox"));
        comboBox->setGeometry(QRect(530, 20, 241, 41));
        stackedWidget->addWidget(page);
        page_2 = new QWidget();
        page_2->setObjectName(QStringLiteral("page_2"));
        interfacerose = new QLabel(page_2);
        interfacerose->setObjectName(QStringLiteral("interfacerose"));
        interfacerose->setGeometry(QRect(10, 0, 1241, 561));
        interfacerose->setStyleSheet(QLatin1String("    background-color:   #f3cbcb ;\n"
""));
        Prenom_2 = new QLabel(page_2);
        Prenom_2->setObjectName(QStringLiteral("Prenom_2"));
        Prenom_2->setGeometry(QRect(40, 170, 151, 61));
        QFont font;
        font.setFamily(QStringLiteral("MS Shell Dlg 2"));
        font.setPointSize(9);
        font.setBold(false);
        font.setItalic(false);
        font.setWeight(50);
        Prenom_2->setFont(font);
        Prenom_2->setStyleSheet(QLatin1String("font: 9pt \"MS Shell Dlg 2\";\n"
"font: 10pt \"MS Shell Dlg 2\";\n"
"font: 9pt \"MS Shell Dlg 2\";"));
        Nom = new QLabel(page_2);
        Nom->setObjectName(QStringLiteral("Nom"));
        Nom->setGeometry(QRect(40, 120, 141, 61));
        Nom->setFont(font);
        Nom->setStyleSheet(QLatin1String("font: 9pt \"MS Shell Dlg 2\";\n"
"font: 10pt \"MS Shell Dlg 2\";\n"
"font: 9pt \"MS Shell Dlg 2\";"));
        Datedesignature = new QLabel(page_2);
        Datedesignature->setObjectName(QStringLiteral("Datedesignature"));
        Datedesignature->setGeometry(QRect(30, 70, 121, 51));
        Datedesignature->setFont(font);
        Datedesignature->setStyleSheet(QLatin1String("font: 9pt \"MS Shell Dlg 2\";\n"
"font: 10pt \"MS Shell Dlg 2\";\n"
"font: 9pt \"MS Shell Dlg 2\";"));
        adresse = new QLabel(page_2);
        adresse->setObjectName(QStringLiteral("adresse"));
        adresse->setGeometry(QRect(40, 220, 141, 61));
        adresse->setFont(font);
        adresse->setStyleSheet(QLatin1String("font: 9pt \"MS Shell Dlg 2\";\n"
"font: 10pt \"MS Shell Dlg 2\";\n"
"font: 9pt \"MS Shell Dlg 2\";"));
        Adresse_du_destinataire = new QLabel(page_2);
        Adresse_du_destinataire->setObjectName(QStringLiteral("Adresse_du_destinataire"));
        Adresse_du_destinataire->setGeometry(QRect(20, 280, 161, 61));
        Adresse_du_destinataire->setFont(font);
        Adresse_du_destinataire->setStyleSheet(QLatin1String("font: 9pt \"MS Shell Dlg 2\";\n"
"font: 10pt \"MS Shell Dlg 2\";\n"
"font: 9pt \"MS Shell Dlg 2\";"));
        Typedassurance = new QLabel(page_2);
        Typedassurance->setObjectName(QStringLiteral("Typedassurance"));
        Typedassurance->setGeometry(QRect(30, 330, 141, 61));
        Typedassurance->setFont(font);
        Typedassurance->setStyleSheet(QLatin1String("font: 9pt \"MS Shell Dlg 2\";\n"
"font: 10pt \"MS Shell Dlg 2\";\n"
"font: 9pt \"MS Shell Dlg 2\";"));
        Prenom_1 = new QLineEdit(page_2);
        Prenom_1->setObjectName(QStringLiteral("Prenom_1"));
        Prenom_1->setGeometry(QRect(180, 130, 191, 31));
        NomC = new QLineEdit(page_2);
        NomC->setObjectName(QStringLiteral("NomC"));
        NomC->setGeometry(QRect(180, 190, 191, 31));
        adresse_2 = new QLineEdit(page_2);
        adresse_2->setObjectName(QStringLiteral("adresse_2"));
        adresse_2->setGeometry(QRect(180, 240, 191, 31));
        Add_1 = new QLineEdit(page_2);
        Add_1->setObjectName(QStringLiteral("Add_1"));
        Add_1->setGeometry(QRect(180, 290, 191, 31));
        Ajouter = new QPushButton(page_2);
        Ajouter->setObjectName(QStringLiteral("Ajouter"));
        Ajouter->setGeometry(QRect(190, 460, 171, 41));
        date_a = new QDateEdit(page_2);
        date_a->setObjectName(QStringLiteral("date_a"));
        date_a->setGeometry(QRect(180, 80, 191, 31));
        table_as = new QTableView(page_2);
        table_as->setObjectName(QStringLiteral("table_as"));
        table_as->setGeometry(QRect(430, 70, 741, 431));
        table_as->setStyleSheet(QStringLiteral("border:none;"));
        pushButton = new QPushButton(page_2);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(1080, 30, 31, 31));
        pushButton->setStyleSheet(QStringLiteral("border-image: url(:/res/pen.png);"));
        pushButton_2 = new QPushButton(page_2);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));
        pushButton_2->setGeometry(QRect(1120, 27, 41, 31));
        pushButton_2->setStyleSheet(QStringLiteral("border-image: url(:/res/trash.png);"));
        typeaa = new QComboBox(page_2);
        typeaa->setObjectName(QStringLiteral("typeaa"));
        typeaa->setGeometry(QRect(182, 351, 191, 31));
        id = new QLineEdit(page_2);
        id->setObjectName(QStringLiteral("id"));
        id->setGeometry(QRect(180, 30, 191, 31));
        Datedesignature_2 = new QLabel(page_2);
        Datedesignature_2->setObjectName(QStringLiteral("Datedesignature_2"));
        Datedesignature_2->setGeometry(QRect(30, 20, 121, 51));
        Datedesignature_2->setFont(font);
        Datedesignature_2->setStyleSheet(QLatin1String("font: 9pt \"MS Shell Dlg 2\";\n"
"font: 10pt \"MS Shell Dlg 2\";\n"
"font: 9pt \"MS Shell Dlg 2\";"));
        Recherche = new QLineEdit(page_2);
        Recherche->setObjectName(QStringLiteral("Recherche"));
        Recherche->setGeometry(QRect(430, 20, 221, 41));
        pushButton_5 = new QPushButton(page_2);
        pushButton_5->setObjectName(QStringLiteral("pushButton_5"));
        pushButton_5->setGeometry(QRect(670, 20, 171, 41));
        pushButton_15 = new QPushButton(page_2);
        pushButton_15->setObjectName(QStringLiteral("pushButton_15"));
        pushButton_15->setGeometry(QRect(870, 20, 171, 41));
        pdf = new QPushButton(page_2);
        pdf->setObjectName(QStringLiteral("pdf"));
        pdf->setGeometry(QRect(30, 460, 141, 41));
        statistiques = new QPushButton(page_2);
        statistiques->setObjectName(QStringLiteral("statistiques"));
        statistiques->setGeometry(QRect(110, 410, 171, 31));
        stackedWidget->addWidget(page_2);
        page_5 = new QWidget();
        page_5->setObjectName(QStringLiteral("page_5"));
        stackedWidget->addWidget(page_5);
        pushButton_12 = new QPushButton(centralwidget);
        pushButton_12->setObjectName(QStringLiteral("pushButton_12"));
        pushButton_12->setGeometry(QRect(10, 150, 61, 61));
        pushButton_12->setStyleSheet(QLatin1String(" QPushButton\n"
"{\n"
"    border: none;\n"
"    background-color:          #ffeaea\n"
" ;\n"
"    color: black;\n"
"      font-family: Tahoma, Verdana, sans-serif;\n"
"     font-size: 17px;\n"
"    border-radius: 50px;\n"
"}\n"
"\n"
"QPushButton:hover\n"
"{\n"
"   \n"
"	background-color:       #e40b0b ;\n"
" ;\n"
"    border: 2px solid black;\n"
"}\n"
"\n"
"QPushButton:pressed\n"
"{\n"
"    background-color:   #f3cbcb ;\n"
"    border: 2px solid white;\n"
"}"));
        pushButton_13 = new QPushButton(centralwidget);
        pushButton_13->setObjectName(QStringLiteral("pushButton_13"));
        pushButton_13->setGeometry(QRect(10, 210, 61, 51));
        pushButton_13->setStyleSheet(QLatin1String("  QPushButton\n"
"{\n"
"    border: none;\n"
"    background-color:          #ffeaea\n"
";\n"
"    color: black;\n"
"      font-family: Tahoma, Verdana, sans-serif;\n"
"     font-size: 17px;\n"
"    border-radius: 50px;\n"
"}\n"
"\n"
"QPushButton:hover\n"
"{\n"
"   \n"
"	background-color:       #e40b0b ;\n"
" ;\n"
"    border: 2px solid black;\n"
"}\n"
"\n"
"QPushButton:pressed\n"
"{\n"
"    background-color:   #f3cbcb ;\n"
"    border: 2px solid white;\n"
"}"));
        label_16 = new QLabel(centralwidget);
        label_16->setObjectName(QStringLiteral("label_16"));
        label_16->setGeometry(QRect(20, 170, 41, 31));
        label_16->setStyleSheet(QStringLiteral("image: url(:/res/home.png);"));
        label_17 = new QLabel(centralwidget);
        label_17->setObjectName(QStringLiteral("label_17"));
        label_17->setGeometry(QRect(20, 220, 41, 31));
        label_17->setStyleSheet(QStringLiteral("image: url(:/res/trousse-de-premiers-secours.png);"));
        pushButton_3 = new QPushButton(centralwidget);
        pushButton_3->setObjectName(QStringLiteral("pushButton_3"));
        pushButton_3->setGeometry(QRect(10, 260, 61, 51));
        pushButton_3->setStyleSheet(QLatin1String(" QPushButton\n"
"{\n"
"    border: none;\n"
"    background-color:          #ffeaea\n"
" ;\n"
"    color: black;\n"
"      font-family: Tahoma, Verdana, sans-serif;\n"
"     font-size: 17px;\n"
"    border-radius: 50px;\n"
"}\n"
"\n"
"QPushButton:hover\n"
"{\n"
"   \n"
"	background-color:       #e40b0b ;\n"
" ;\n"
"    border: 2px solid black;\n"
"}\n"
"\n"
"QPushButton:pressed\n"
"{\n"
"    background-color:   #f3cbcb ;\n"
"    border: 2px solid white;\n"
"}"));
        label_18 = new QLabel(centralwidget);
        label_18->setObjectName(QStringLiteral("label_18"));
        label_18->setGeometry(QRect(20, 260, 41, 41));
        label_18->setStyleSheet(QStringLiteral("image: url(:/res/client.png);"));
        pushButton_6 = new QPushButton(centralwidget);
        pushButton_6->setObjectName(QStringLiteral("pushButton_6"));
        pushButton_6->setGeometry(QRect(10, 310, 61, 61));
        pushButton_6->setStyleSheet(QLatin1String("QPushButton {\n"
"    border: none;\n"
"    background-color: #e40b0b;  \n"
"    color: white;   \n"
"    font-family: Tahoma, Verdana, sans-serif;\n"
"    font-size: 17px;\n"
"    border-radius: 50px;\n"
"}\n"
"\n"
"QPushButton:hover {\n"
"    background-color: #ffeaea; \n"
"    border: 2px solid black;\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"    background-color: #e40b0b; \n"
"    border: 2px solid white;\n"
"}"));
        label_11 = new QLabel(centralwidget);
        label_11->setObjectName(QStringLiteral("label_11"));
        label_11->setGeometry(QRect(20, 320, 41, 31));
        label_11->setStyleSheet(QStringLiteral("image: url(:/res/signe.png);"));
        pushButton_4 = new QPushButton(centralwidget);
        pushButton_4->setObjectName(QStringLiteral("pushButton_4"));
        pushButton_4->setGeometry(QRect(10, 370, 61, 61));
        pushButton_4->setStyleSheet(QLatin1String("  QPushButton\n"
"{\n"
"    border: none;\n"
"    background-color:        #ffeaea\n"
";\n"
"    color: black;\n"
"      font-family: Tahoma, Verdana, sans-serif;\n"
"     font-size: 17px;\n"
"    border-radius: 50px;\n"
"}\n"
"\n"
"QPushButton:hover\n"
"{\n"
"   \n"
"	background-color:       #e40b0b ;\n"
" ;\n"
"    border: 2px solid black;\n"
"}\n"
"\n"
"QPushButton:pressed\n"
"{\n"
"    background-color:   #f3cbcb ;\n"
"    border: 2px solid white;\n"
"}"));
        label_19 = new QLabel(centralwidget);
        label_19->setObjectName(QStringLiteral("label_19"));
        label_19->setGeometry(QRect(20, 380, 41, 41));
        label_19->setStyleSheet(QStringLiteral("image: url(:/res/employe-de-bureau.png);"));
        pushButton_14 = new QPushButton(centralwidget);
        pushButton_14->setObjectName(QStringLiteral("pushButton_14"));
        pushButton_14->setGeometry(QRect(10, 430, 61, 61));
        pushButton_14->setStyleSheet(QLatin1String("  QPushButton\n"
"{\n"
"    border: none;\n"
"    background-color:         #ffeaea\n"
" ;\n"
"    color: black;\n"
"      font-family: Tahoma, Verdana, sans-serif;\n"
"     font-size: 17px;\n"
"    border-radius: 50px;\n"
"}\n"
"\n"
"QPushButton:hover\n"
"{\n"
"   \n"
"	background-color:       #e40b0b ;\n"
" ;\n"
"    border: 2px solid black;\n"
"}\n"
"\n"
"QPushButton:pressed\n"
"{\n"
"    background-color:   #f3cbcb ;\n"
"    border: 2px solid white;\n"
"}"));
        label_20 = new QLabel(centralwidget);
        label_20->setObjectName(QStringLiteral("label_20"));
        label_20->setGeometry(QRect(20, 440, 41, 31));
        label_20->setStyleSheet(QStringLiteral("image: url(:/res/editer.png);"));
        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QStringLiteral("menubar"));
        menubar->setGeometry(QRect(0, 0, 1339, 26));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName(QStringLiteral("statusbar"));
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        stackedWidget->setCurrentIndex(1);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", Q_NULLPTR));
        label->setText(QString());
        label_4->setText(QString());
        label_6->setText(QString());
        label_7->setText(QString());
        label_8->setText(QString());
        label_10->setText(QString());
        groupBox->setTitle(QApplication::translate("MainWindow", "       AssurePlus", Q_NULLPTR));
        label_15->setText(QString());
        pushButton_7->setText(QApplication::translate("MainWindow", "Par d\303\251faut ", Q_NULLPTR));
        pushButton_8->setText(QApplication::translate("MainWindow", "Statistiques", Q_NULLPTR));
        pushButton_9->setText(QApplication::translate("MainWindow", "Tri", Q_NULLPTR));
        pushButton_10->setText(QApplication::translate("MainWindow", "Traduire", Q_NULLPTR));
        pushButton_11->setText(QApplication::translate("MainWindow", "Exportation PDF", Q_NULLPTR));
        textEdit->setHtml(QApplication::translate("MainWindow", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'Yu Gothic UI Light'; font-size:26pt; font-weight:24; font-style:normal;\">\n"
"<p align=\"center\" style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:14pt;\">Contrats en cours</span></p></body></html>", Q_NULLPTR));
        textEdit_2->setHtml(QApplication::translate("MainWindow", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'Yu Gothic UI Light'; font-size:26pt; font-weight:24; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:14pt;\">Contrats sign\303\251s</span></p></body></html>", Q_NULLPTR));
        textEdit_3->setHtml(QApplication::translate("MainWindow", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'Yu Gothic UI Light'; font-size:26pt; font-weight:24; font-style:normal;\">\n"
"<p align=\"center\" style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:14pt;\">Admin</span></p></body></html>", Q_NULLPTR));
        textEdit_4->setHtml(QApplication::translate("MainWindow", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'Yu Gothic UI Light'; font-size:26pt; font-weight:24; font-style:normal;\">\n"
"<p align=\"center\" style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:14pt;\">Contact</span></p></body></html>", Q_NULLPTR));
        textEdit_5->setHtml(QApplication::translate("MainWindow", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'Yu Gothic UI Light'; font-size:26pt; font-weight:24; font-style:normal;\">\n"
"<p align=\"center\" style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:14pt;\">Etape</span></p></body></html>", Q_NULLPTR));
        textEdit_6->setHtml(QApplication::translate("MainWindow", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'Yu Gothic UI Light'; font-size:26pt; font-weight:24; font-style:normal;\">\n"
"<p align=\"center\" style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:14pt;\">Avancement</span></p></body></html>", Q_NULLPTR));
        textEdit_7->setHtml(QApplication::translate("MainWindow", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'Yu Gothic UI Light'; font-size:26pt; font-weight:24; font-style:normal;\">\n"
"<p align=\"center\" style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:14pt;\">Montant</span></p></body></html>", Q_NULLPTR));
        textEdit_8->setHtml(QApplication::translate("MainWindow", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'Yu Gothic UI Light'; font-size:26pt; font-weight:24; font-style:normal;\">\n"
"<p align=\"center\" style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:14pt;\">Admin</span></p></body></html>", Q_NULLPTR));
        textEdit_9->setHtml(QApplication::translate("MainWindow", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'Yu Gothic UI Light'; font-size:26pt; font-weight:24; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:14pt;\">R\303\251pertoire</span></p></body></html>", Q_NULLPTR));
        textEdit_10->setHtml(QApplication::translate("MainWindow", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'Yu Gothic UI Light'; font-size:26pt; font-weight:24; font-style:normal;\">\n"
"<p align=\"center\" style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:14pt;\">Etape</span></p></body></html>", Q_NULLPTR));
        textEdit_11->setHtml(QApplication::translate("MainWindow", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'Yu Gothic UI Light'; font-size:26pt; font-weight:24; font-style:normal;\">\n"
"<p align=\"center\" style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:14pt;\">Avancement</span></p></body></html>", Q_NULLPTR));
        textEdit_12->setHtml(QApplication::translate("MainWindow", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'Yu Gothic UI Light'; font-size:26pt; font-weight:24; font-style:normal;\">\n"
"<p align=\"center\" style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:14pt;\">Montant</span></p></body></html>", Q_NULLPTR));
        pushButton_36->setText(QApplication::translate("MainWindow", "Crud", Q_NULLPTR));
        interfacerose->setText(QString());
        Prenom_2->setText(QApplication::translate("MainWindow", "Pr\303\251nom", Q_NULLPTR));
        Nom->setText(QApplication::translate("MainWindow", "Nom", Q_NULLPTR));
        Datedesignature->setText(QApplication::translate("MainWindow", "Date de signature", Q_NULLPTR));
        adresse->setText(QApplication::translate("MainWindow", "Adresse", Q_NULLPTR));
        Adresse_du_destinataire->setText(QApplication::translate("MainWindow", "Adresse du destinataire", Q_NULLPTR));
        Typedassurance->setText(QApplication::translate("MainWindow", "Type d'assurance", Q_NULLPTR));
        Ajouter->setText(QApplication::translate("MainWindow", "Ajouter", Q_NULLPTR));
        pushButton->setText(QString());
        pushButton_2->setText(QString());
        typeaa->clear();
        typeaa->insertItems(0, QStringList()
         << QApplication::translate("MainWindow", "sante", Q_NULLPTR)
         << QApplication::translate("MainWindow", "famille", Q_NULLPTR)
         << QApplication::translate("MainWindow", "voiture", Q_NULLPTR)
        );
        Datedesignature_2->setText(QApplication::translate("MainWindow", "ID", Q_NULLPTR));
        Recherche->setText(QString());
        Recherche->setPlaceholderText(QApplication::translate("MainWindow", "Rechercher un contrat dans la liste", Q_NULLPTR));
        pushButton_5->setText(QApplication::translate("MainWindow", "Tri de date ascendant", Q_NULLPTR));
        pushButton_15->setText(QApplication::translate("MainWindow", "Tri de date descendant", Q_NULLPTR));
        pdf->setText(QApplication::translate("MainWindow", "Exporter en PDF", Q_NULLPTR));
        statistiques->setText(QApplication::translate("MainWindow", "Statistiques", Q_NULLPTR));
        pushButton_12->setText(QString());
        pushButton_13->setText(QString());
        label_16->setText(QString());
        label_17->setText(QString());
        pushButton_3->setText(QString());
        label_18->setText(QString());
        pushButton_6->setText(QString());
        label_11->setText(QString());
        pushButton_4->setText(QString());
        label_19->setText(QString());
        pushButton_14->setText(QString());
        label_20->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
