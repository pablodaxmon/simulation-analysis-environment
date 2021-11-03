QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++11

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    calculator.cpp \
    controlactions.cpp \
    coresimulator.cpp \
    dialogtypeenvironment.cpp \
    environment.cpp \
    main.cpp \
    mainprogram.cpp \
    maintoolbar.cpp \
    mainwindow.cpp \
    objectlist.cpp \
    objectstate.cpp \
    simpleobject.cpp \
    splittermain.cpp \
    viewactions.cpp \
    viewcontrol.cpp \
    viewproperties.cpp \
    viewsimulation.cpp \
    viewtoolbar.cpp

HEADERS += \
    calculator.h \
    controlactions.h \
    coresimulator.h \
    dialogtypeenvironment.h \
    environment.h \
    mainprogram.h \
    maintoolbar.h \
    mainwindow.h \
    objectlist.h \
    objectstate.h \
    simpleobject.h \
    splittermain.h \
    viewactions.h \
    viewcontrol.h \
    viewproperties.h \
    viewsimulation.h \
    viewtoolbar.h

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target

RESOURCES += \
    resources.qrc
