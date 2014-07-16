#include <iostream>
#include "Inheritance.h"

using namespace std;

namespace CaseInheritance
{

/* ===================Begin of Implementation of Base =====================*/

double Ancestor::staticDoubleValue = 5.0;

Ancestor::Ancestor()
{
    valueB = 1;
    cout << "Constructor Base()" << endl;
}

Ancestor::Ancestor(int n): a(n)
{
    cout << "Constructor Base(int n)" << endl;
}

/*
void Base::fcA()
{
    cout << "Base\'s fcA() called" << endl;
}
*/

/*
void Base::fcB()
{
    cout << "Base\'s fcB() called" << endl;
}
*/

void Ancestor::f()
{
    cout << "Base\'s f() called" << endl;
}

/* ================= Begin of Implementation of Derive1 =====================*/
SecondGeneration::SecondGeneration()
{
    valueB = 2;
    cout << "Constructor Derive1()" << endl;
}

SecondGeneration::SecondGeneration(int n)
{
    valueB = n = 2 ;
    cout << "Constructor Derive1(int n)" << endl;
}

void SecondGeneration::pureVirtualFunctionA()
{
    cout << "Derive1\'s fcA() called" << endl;
}

void SecondGeneration::fcB()
{
    cout << this->Ancestor::valueB << endl;
    staticDoubleValue = staticDoubleValue + 1.0;
    cout << sizeof(Ancestor::staticDoubleValue)<< "\t s value: "
         <<staticDoubleValue <<endl;
    cout << "Derive1\'s fcB() called" << endl;
}

/* ================= Begin of Implementation of Derive2 =====================*/

void SecondGeneration::f()
{
    cout << "Derive1\'s f() called" << endl;
}

void inheritance()
{
    //You cannot instantiate a abstract class directly with constructor,
    //The following line gives a compiling error:
    //cannot allocate an object of abstract type 'CaseInheritance::Base'
    //Ancestor* instanceAncestor = new Ancestor();


    //Base* instance = new Derive1();
    SecondGeneration* instance = new SecondGeneration(5);
    //Derive1* instance = new Base(5);
    //cout << sizeof(s)<< "\t s value: " <<s <<endl;
    instance->fcB();
    Ancestor* instance_base = instance;
    cout << sizeof(*instance_base)<<endl;
    cout << sizeof(*instance)<<endl;
    instance->pureVirtualFunctionA();
    cout << sizeof(Ancestor::staticDoubleValue)<< "\t s value: "
         << SecondGeneration::staticDoubleValue <<endl;
    cout << instance->valueB << instance->Ancestor::valueB << endl;
    delete instance;
    instance=NULL;
}

}
