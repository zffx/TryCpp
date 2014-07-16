#include <iostream>

#include "Declarations.h"
#include "CopyConstructorVsAssignmentOperator.h"
#include "DefaultDestructor.h"
#include "VirtualDestructor.h"
#include "WildPointer.h"
#include "Inheritance.h"

using namespace std;

int main(int argc, char** argv) {

    cout << "Input the number to run:" <<endl
         << "1. Pointer to Sturct, where would it crash." << endl
         << "2. Virtual Destructor." << endl
         << "3. Copy Constructor vs Assignment Operator." << endl
         << "4. TryAssert." << endl
         << "5. Default Destructor." << endl
         << "6. Char[] and Char*" << endl
         << "7. New and Delete, wild pointer" << endl
         << "8. Assign value with operation of pointer" << endl
         << "9. Inheritance" << endl;

    unsigned int choice = 0;
    cin >> choice;

    switch(choice)
    {
    case 1:
        PointerToStruct::pointerToStruct();
        break;
    case 2:
        VirtualDestructor::virtualDestructor();
        break;
    case 3:
        CopyConstructorVsAssignmentOperator::
                copyConstructorVsAssignmentOperator();
        break;
    case 4:
        TryAssert::tryAssert();
        break;
    case 5:
        DefaultDestructor::defaultDestructor();
        break;
    case 6:
        CharArrayAndPointer::charArrayAndPointer();
        break;
    case 7:
    	CaseWildPointer::wildPointer();
    	break;
    case 8:
        AssignValueWithPointer::assignValueWithPointer();
        break;
    case 9:
        CaseInheritance::inheritance();
        break;
    default:
        break;
    }
}
