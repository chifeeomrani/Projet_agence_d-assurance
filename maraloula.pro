QT       += core gui sql
greaterThan(QT_MAJOR_VERSION, 4): QT += widgets
TARGET = maraloula
TEMPLATE = app

CONFIG += c++11

DEFINES += QT_DEPRECATED_WARNINGS


SOURCES += \
    connection.cpp \
    main.cpp \
    mainwindow.cpp \
    reclamation.cpp

HEADERS += \
    connection.h \
    mainwindow.h \
    reclamation.h

FORMS += \
    mainwindow.ui

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target

RESOURCES += \
    image.qrc \
    image.qrc

DISTFILES +=
