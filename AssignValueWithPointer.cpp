#include <iostream>

#include "Declarations.h"

using namespace std;

void AssignValueWithPointer::assignValueWithPointer()
{
    //Assign values with operations of pointers
    int *pointerToi;
    //this line should crash:
    cout << "*pointerToi = " << *pointerToi << endl;
    int i = 6;
    //assign value with &i
    pointerToi = &i;
    cout << "*pointerToi should be 6 now:" << endl;
    cout << "*pointerToi = " << *pointerToi << endl;
    i = 10;
    cout << "*pointerToi should be 10 now:" << endl;
    cout << "*pointerToi = " << *pointerToi << endl;
    //assign value with *pointerToi
    *pointerToi =7;
    cout << "i should be 7 now:" << endl;
    cout << "i = " << i << endl;
}
