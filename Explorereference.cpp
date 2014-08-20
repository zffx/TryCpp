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
    cout << "ExploreReference::setRef()" << endl;
    mRef = ref;
}

std::string& ExploreReference::getRef()
{
    cout << "ExploreReference::getRef()" << endl;
    return mRef;
}

std::string& ExploreReference::getValue()
{
    //cout << "ExploreReference::getValue()" << endl;
    return mValue;
}

const std::string& ExploreReference::getValueConst() const
{
    //cout << "ExploreReference::getValueConst()" << endl;
    return mValue;
}

void ExploreReference::setValue(const std::string &value)
{
    //cout << "ExploreReference::setValue()" << endl;
    mValue = value;
}



void reference()
{
    ExploreReference instance;

    // Try with mRef
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

    instance.setRef("Fifth Ref");
    cout << "instance.setRef(\"Fifth Ref\")" << endl ;
    cout << "CaseReference::ref = " << CaseReference::ref << endl;

    cout <<"=====================================================\n\n" << endl;

    //Try with mValue
    cout << "\n";
    std::string value = instance.getValue();
    value = "ChangedValue";
    cout << "value changed to ChangedValue" << endl;
    /*instance.value will not change
    if the returned reference is received by a normal string*/
    cout << "instance.getValue()= " << instance.getValue() << endl;


    std::string &valueRef = instance.getValue();
    valueRef = "ChangedValue";
    cout << "\nvalueRef changed to ChangedValue" << endl;
    cout << "instance.getValue()= " << instance.getValue() << endl;

    instance.getValue().clear();
    cout << "\ninstance.getValue().clear();" << endl;
    cout << "instance.getValue()= " << instance.getValue() << endl;
    cout << "valueRef = " << valueRef <<endl;
    cout << "value = " << value <<endl;

    cout << "\n";
    /*instance.getValueConst().clear();*/ /*This is not allowed
    if we are returning a const reference*/
    valueRef = instance.getValueConst(); /*This is OK,
    it doesn't stop you passing a const reference to a normal reference
    and later if the normal reference changes,
    the value of member variable changes too.
    */
    valueRef = "2ndChangedValue";
    cout << "valueRef changed to 2ndChangedValue" << endl;
    //instance.value will be changed
    cout << "instance.getValue()= " << instance.getValue() << endl;

    cout << "\n";
    instance.setValue("3rdChangedValue");
    cout << "instance.setValue(\"3rdChangedValue\");" << endl;
    cout << "valueRef = " << valueRef << endl;
}

}
