QT       += core gui sql

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++11

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    create_client.cpp \
    create_moto.cpp \
    homepage.cpp \
    main.cpp \
    loginandpass.cpp \
    optionforadmin.cpp \
    queryclientes.cpp \
    querymotos.cpp

HEADERS += \
    create_client.h \
    create_moto.h \
    homepage.h \
    loginandpass.h \
    optionforadmin.h \
    queryclientes.h \
    querymotos.h

FORMS += \
    create_client.ui \
    create_moto.ui \
    homepage.ui \
    loginandpass.ui \
    optionforadmin.ui \
    queryclientes.ui \
    querymotos.ui

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target
