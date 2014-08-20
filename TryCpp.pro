TEMPLATE = app
CONFIG += console
CONFIG -= qt

SOURCES += main.cpp \
    PointerToStruct.cpp \
    CharArrayAndPointer.cpp \
    DefaultDestructor.cpp \
    AssignValueWithPointer.cpp \
    WildPointer.cpp \
    TryAssert.cpp \
    Inheritance.cpp \
    Explorereference.cpp

HEADERS += \
    Declarations.h \
    CopyConstructorVsAssignmentOperator.h \
    DefaultDestructor.h \
    WildPointer.h \
    VirtualDestructor.h \
    Inheritance.h \
    Explorereference.h

