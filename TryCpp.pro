TEMPLATE = app
CONFIG += console
CONFIG -= qt

SOURCES += main.cpp \
    PointerToStruct.cpp \
    CharArrayAndPointer.cpp \
    DefaultDestructor.cpp \
    TryAssert.cpp

HEADERS += \
    Declarations.h \
    CopyConstructorVsAssignmentOperator.h \
    DefaultDestructor.h \
    VirtualDestructor.h

