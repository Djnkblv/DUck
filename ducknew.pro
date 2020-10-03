QT -= gui

CONFIG += c++11 console
CONFIG -= app_bundle

# The following define makes your compiler emit warnings if you use
# any feature of Qt which as been marked deprecated (the exact warnings
# depend on your compiler). Please consult the documentation of the
# deprecated API in order to know how to port your code away from it.
DEFINES += QT_DEPRECATED_WARNINGS

# You can also make your code fail to compile if you use deprecated APIs.
# In order to do so, uncomment the following line.
# You can also select to disable deprecated APIs only up to a certain version of Qt.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
        main.cpp \
    duck.cpp \
    redheadduck.cpp \
    mallardduck.cpp \
    decoyduck.cpp \
    rubberduck.cpp \
    flybehavior.cpp \
    flynoway.cpp \
    flywithwings.cpp \
    mutequack.cpp \
    quack.cpp \
    quackbehavior.cpp \
    squeak.cpp \
    modelduck.cpp \
    flyrocketpowered.cpp

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target

HEADERS += \
    duck.h \
    redheadduck.h \
    mallardduck.h \
    decoyduck.h \
    rubberduck.h \
    flybehavior.h \
    flynoway.h \
    flywithwings.h \
    mutequack.h \
    quack.h \
    quackbehavior.h \
    squeak.h \
    modelduck.h \
    flyrocketpowered.h
