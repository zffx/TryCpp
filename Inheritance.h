#ifndef INHERITANCE_H
#define INHERITANCE_H

namespace CaseInheritance
{

class Ancestor
{
public:
    Ancestor();
    //the destrctor of a base class is usually virtual
    virtual ~Ancestor();
    virtual void pureVirtualFunctionA() = 0;

    //static mamber can be inherited, but note it is shared among super class
    //and derived classes!
    static double staticDoubleValue;
};

//The only good place to initialize a static member variable
//is out of the class declarition in the .cpp file
//double Base::staticDoubleValue = 5.0;

class SecondGeneration : public Ancestor
{
public:
    SecondGeneration();
    SecondGeneration(int n);    

    //No matter if there is a virtual keyword in front
    //it is virtual anyway from inheritance
    /*virtual*/ void pureVirtualFunctionA();

    virtual void virtualFunctionB();
    int hiddenMemberFunction();
    int getPrivateValueC();

    int mPublicValueB;
private:
    int mPrivateValueC;
};

class ThirdGeneration : public SecondGeneration
{
public:
    ThirdGeneration();
    ThirdGeneration(int n);

    //NOTE the different between override and hide

    //Declare the following virtual functions again in derived class only when
    //you need to override them
    //void pureVirtualFunctionA();

    //this function override SecondGeneration::virtualFunctionB()
    //override only happens when function is virtual
    void virtualFunctionB();

    //this function hides void hiddenMemberFunction(); from its base class
    int hiddenMemberFunction(int i);

    //this function is declared only in ThirdGeneration, can be some specific
    //feature that only owned by ThirdGeneration
    void derivedSpecificFunction();

    int mPublicValueB; //ThirdGeneration has its own valueB
private:

};

void inheritance();

}
#endif // INHERITANCE_H
