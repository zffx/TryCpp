#ifndef VIRTUALDESTRUCTOR_H
#define VIRTUALDESTRUCTOR_H

#include <iostream>

namespace VirtualDestructor
{
class BaseNoneVirtualDesturctor {
public:
    ~BaseNoneVirtualDesturctor() { std::cout << "~BaseNoneVirtualDesturctor()\n"; }
};

class DerivedNoneVirtualDesturctor : public BaseNoneVirtualDesturctor {
public:
    ~DerivedNoneVirtualDesturctor() { std::cout << "~DerivedNoneVirtualDesturctor()\n"; }
};


class BaseWithVirtualDesturctor {
public:
    virtual ~BaseWithVirtualDesturctor() { std::cout << "~BaseWithVirtualDesturctor()\n"; } //virtual destructor
};

class DerivedWithVirtualDesturctor : public BaseWithVirtualDesturctor {
public:
    ~DerivedWithVirtualDesturctor() { std::cout << "~DerivedWithVirtualDesturctor()\n"; }
};

void virtualDestructor(){
    //How virtual destructor is called and works
    //==================================================
    std::cout<<"===Virtual Destructor==="<<std::endl;

    BaseNoneVirtualDesturctor* bp = new DerivedNoneVirtualDesturctor;// Upcast
    delete bp;

    BaseWithVirtualDesturctor* b2p = new DerivedWithVirtualDesturctor; // Upcast
    delete b2p;
    //==================================================
}
}
#endif // VIRTUALDESTRUCTOR_H
