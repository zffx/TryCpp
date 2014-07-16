#ifndef INHERITANCE_H
#define INHERITANCE_H

namespace CaseInheritance
{

class Ancestor
{
public:
    Ancestor();
    Ancestor(int n);
    virtual void pureVirtualFunctionA() = 0;
    //void fcA();
    //virtual void fcB();
    void f();

    int a;
    int valueB;
    static double staticDoubleValue;
private:
    //int b;
};

//The only good place to initialize a static member variable
//is out of the class declarition in the .cpp file
//double Base::s = 5.0;

class SecondGeneration : public Ancestor
{
public:
    SecondGeneration();
    SecondGeneration(int n);
    void fcB();
    //No matter if there is a virtual keyword in front
    //it is virtual anyway from inheritance
    /*virtual*/ void pureVirtualFunctionA();
    void f();
    int valueB; //Derive1 has its own valueB
    int c;
};

class ThirdGeneration : public SecondGeneration
{
public:
    ThirdGeneration();
    ThirdGeneration(int n);
    void fcB();
    //No matter if there is a virtual keyword in front
    //it is virtual anyway from inheritance
    /*virtual*/ void pureVirtualFunctionA();
    void f();
    int valueB; //Derive1 has its own valueB
    int c;
};

void inheritance();

}
#endif // INHERITANCE_H
