QT += core gui  sql charts

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++17

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    academic.cpp \
    assignment.cpp \
    budget.cpp \
    dashboard.cpp \
    database.cpp \
    expence_details.cpp \
    expences.cpp \
    financial.cpp \
    income_details.cpp \
    income_expence_dash.cpp \
    incomes.cpp \
    main.cpp \
    mainwindow.cpp \
    registration.cpp \
    reports.cpp

HEADERS += \
    academic.h \
    assignment.h \
    budget.h \
    dashboard.h \
    database.h \
    expence_details.h \
    expences.h \
    financial.h \
    income_details.h \
    income_expence_dash.h \
    incomes.h \
    mainwindow.h \
    registration.h \
    reports.h

FORMS += \
    academic.ui \
    assignment.ui \
    budget.ui \
    dashboard.ui \
    expence_details.ui \
    expences.ui \
    financial.ui \
    income_details.ui \
    income_expence_dash.ui \
    incomes.ui \
    mainwindow.ui \
    registration.ui \
    reports.ui

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target

RESOURCES += \
    images.qrc
