#include "Explorereference.h"

#include <string>
#include <iostream>

using std::endl;
using std::cout;

namespace CaseReference
{
std::string ref = "Default Ref";

ExploreReference::ExploreReference() : mRef(ref), mValue("DefaultValue")
{
    cout<< "ExploreReference::ExploreReference()" << endl;
}

void ExploreReference::setRef(const std::string &ref)
{
    cout << "ExploreReference::setName(const std::string &name)" << endl;
    mRef = ref;
}

std::string& ExploreReference::getRef() const
{
    cout << "ExploreReference::getName()" << endl;
    return mRef;
}

void reference()
{
    ExploreReference instance;

    CaseReference::ref = "First Ref";
    instance.setRef(ref);
    cout << "instance.getRef():" << instance.getRef() << endl;

    CaseReference::ref =  "Second Ref";
    cout << "\nstd::string ref changed to Second Ref" << endl;
    std::string &tmpRef = instance.getRef();

    cout << "instance.getRef():" << tmpRef << endl;
    tmpRef = "Third Ref";
    cout << "\nstd::string &tmpRef changed to Third Ref" << endl;
    cout << "instance.getRef():" << instance.getRef() << endl;

    std::string tmpString = instance.getRef();
    tmpString = "Fourth Ref";
    cout << "\nstd::string tmpString changed to Fourth Ref" << endl;
    cout << "instance.getRef():" << instance.getRef() << endl;
}

}
