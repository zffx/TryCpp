TEMPLATE = app
CONFIG += console
CONFIG -= qt

SOURCES += main.cpp \
    PointerToStruct.cpp \
    TryDefaultDestructor.cpp \
    TryAssert.cpp

HEADERS += \
    Declarations.h \
    CopyConstructorVsAssignmentOperator.h \
    DefaultDestructor.h \
    VirtualDestructor.h

