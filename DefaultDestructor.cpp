#include "defaultdestructor.h"
#include <iostream>


namespace DefaultDestructor{
//if this definition is commented out, but declared in header,
//compiler should still give error and default constructor should
//not be used
DefaultDestructor::DefaultDestructor()
{
    std::cout << "DefaultDestructor::DefaultDestructor() \n";
}


//if this definition is commented out, but declared in header
//compiler should still give error and default destructor should
//not be used
DefaultDestructor::~DefaultDestructor()
{
    std::cout << "DefaultDestructor::~DefaultDestructor() \n";
}

void defaultDestructor()
{
    //Default Destructor
    std::cout<<std::endl;
    std::cout<<"===Default Destructor==="<<std::endl;

    DefaultDestructor* td = new DefaultDestructor;
    delete td;
}

}
