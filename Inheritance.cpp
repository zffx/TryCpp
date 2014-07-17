#include <iostream>
#include "Inheritance.h"

using namespace std;

namespace CaseInheritance
{

/* ===================Begin of Implementation of Base =====================*/

double Ancestor::staticDoubleValue = 5.0;

Ancestor::Ancestor()
{
    cout << "Constructor Ancestor()" << endl;
}

Ancestor::~Ancestor()
{
    cout << "Destructor ~Ancestor()" << endl;
}

/* ============ Begin of Implementation of SecondGeneration ==============*/
SecondGeneration::SecondGeneration() : mPublicValueB(2), mPrivateValueC(2)
{
    cout << "Constructor SecondGeneration()" << endl;
}

SecondGeneration::SecondGeneration(int n) : mPublicValueB(n)
{
    cout << "Constructor SecondGeneration(int n)" << endl;
}

void SecondGeneration::pureVirtualFunctionA()
{
    cout << "SecondGeneration\'s pureVirtualFunctionA() called" << endl;
}

void SecondGeneration::virtualFunctionB()
{
    staticDoubleValue = staticDoubleValue + 1.0;
    cout << "staticDoubleValue\'s value: " << staticDoubleValue <<endl;
    cout << "SecondGeneration\'s virtualFunctionB() called" << endl;
}

int SecondGeneration::hiddenMemberFunction()
{
    cout << "SecondGeneration\'s hiddenMemberFunction() called" << endl;
    return mPrivateValueC;
}

int SecondGeneration::getPrivateValueC()
{
    cout << "SecondGeneration\'s getPrivateValueC() called" << endl;
    return mPrivateValueC;
}


/* ============= Begin of Implementation of ThirdGeneration ===============*/
ThirdGeneration::ThirdGeneration() : mPublicValueB(3)
{
    cout << "Constructor ThirdGeneration()" << endl;
}

ThirdGeneration::ThirdGeneration(int n) :
    SecondGeneration::SecondGeneration(n),
    mPublicValueB(3)
{
    cout << "Constructor ThirdGeneration(n)" << endl;
}

void ThirdGeneration::virtualFunctionB()
{
    staticDoubleValue = staticDoubleValue + 10.0;
    cout << "staticDoubleValue\'s value: " << staticDoubleValue <<endl;
    cout << "ThirdGeneration's virtualFunctionB() called" << endl;
}

int ThirdGeneration::hiddenMemberFunction(int i)
{
    cout << "ThirdGeneration's hiddenMemberFunction(int i) called" << endl;
    cout << "SecondGeneration's hiddenMemberFunction() is hidden" << endl;
    cout << "i :" << i << endl;

    /*
    The next line won't work as ThirdGeneration doesn't inherit
    SecondGeneration's mPrivateValueC
    */
    //return mPrivateValueC;

    /*
    The next line would return ThirdGeneration::mPublicValueB instead
    of SecondGeneration::mPublicValueB
    */
    //return mPublicValueB;

    /*
    to return SecondGeneration::mPublicValueB, it should be:
    */
    //return SecondGeneration::mPublicValueB;

    /*
    Though mPrivateValueC is not inherited and cannot be accessed
    directly, the memory of an instance of ThirdGeneration still has
    SecondGeneration::mPrivateValueC
    */
    return getPrivateValueC();
}

void ThirdGeneration::derivedSpecificFunction()
{
    cout << "ThirdGeneration's drivedSpecificFunction() called" << endl;
}

/* ============= Begin of Implementation of Test Code ===============*/

void inheritance()
{
    /*
    You cannot instantiate a abstract class directly with constructor,
    The following line gives a compiling error:
    cannot allocate an object of abstract type 'CaseInheritance::Base'
    */
    //Ancestor* instanceAncestor = new Ancestor();

    //Show how function is hidden in derived class
    ThirdGeneration *instanceThirdGeneration = new ThirdGeneration();
    instanceThirdGeneration->hiddenMemberFunction(4);
    cout << "\n\n\n";

    //Show normal polymorphism with virtual function
    SecondGeneration *instanceSecondGeneration = new SecondGeneration();
    instanceSecondGeneration->virtualFunctionB();
    delete instanceSecondGeneration;
    instanceSecondGeneration = new ThirdGeneration();
    instanceSecondGeneration->virtualFunctionB();
    delete instanceSecondGeneration;
    instanceSecondGeneration = NULL;
    cout << "\n\n\n";

    //Show downcast pointer to call specific funtions in derived class
    instanceSecondGeneration = new ThirdGeneration();
    /*
    The following line wont work, it will have a compiling error:
    'class CaseInheritance::SecondGeneration' has no member named
    'derivedSpecificFunction'
    */
    //instanceSecondGeneration->derivedSpecificFunction();
    static_cast<ThirdGeneration*>(instanceSecondGeneration)
            ->derivedSpecificFunction();
    delete instanceSecondGeneration;
    instanceSecondGeneration = NULL;
    cout << "\n\n\n";

    //Check the size of each class:
    instanceSecondGeneration = new SecondGeneration();
    cout << "sizeof(SecondGeneration): "
         << sizeof(*instanceSecondGeneration)<< endl;
    delete instanceSecondGeneration;
    instanceSecondGeneration = NULL;

    instanceThirdGeneration = new ThirdGeneration();
    cout << "sizeof(ThirdGeneration): "
         << sizeof(*instanceThirdGeneration)<< endl;
    delete instanceThirdGeneration;
    instanceThirdGeneration = NULL;
    cout << "\n\n\n";

    //Show the static member member is shared by all of super and derived classes

    cout << "Ancestor::staticDoubleValue: "
         << Ancestor::staticDoubleValue <<endl;
    Ancestor::staticDoubleValue++;

    cout << "SecondGeneration::staticDoubleValue: "
         << SecondGeneration::staticDoubleValue <<endl;
    SecondGeneration::staticDoubleValue++;

    cout << "ThirdGeneration::staticDoubleValue: "
         << ThirdGeneration::staticDoubleValue <<endl;
}

}
