#ifndef COPYCONSTRUCTORVSASSIGNMENTOPERATOR_H
#define COPYCONSTRUCTORVSASSIGNMENTOPERATOR_H
#include <iostream>

namespace CopyConstructorVsAssignmentOperator
{
class CopyVSAssign
{
public:
    CopyVSAssign() : data(0)
    {
        std::cout << "Default Constructor" << std::endl;
        std::cout << std::endl;
    }

    CopyVSAssign(int i):data(i)
    {
        std::cout << "Parameter Constructor with" << i << std::endl;
    }

    ~CopyVSAssign()
    {
        std::cout << "Destructor" << std::endl;
    }

    CopyVSAssign(const CopyVSAssign& b)
    {
        data = b.data;
        std::cout << "Copy Constructor" << std::endl;
    }

    CopyVSAssign& operator= (const CopyVSAssign& b)
    {
        data = b.data;
        std::cout << "Assignment Operator" << std::endl;
        std::cout << std::endl;
        return *this;
    }

private:
    int data;
};

void copyConstructorVsAssignmentOperator()
{
    //Copy Constructor & Assignment Operator
    std::cout << std::endl;
    std::cout << "===Copy Constructor & Assignment Operator===" << std::endl;

    std::cout << "CopyVSAssign ctr;" << std::endl;
    CopyVSAssign ctr; //Constructor
    std::cout << std::endl;

    std::cout << "CopyVSAssign cctr = str;" << std::endl;
    CopyVSAssign cctr = ctr; //Copy Constructor
    std::cout << std::endl;

    std::cout << "CopyVSAssign ass;" << std::endl << "ass = cctr" << std::endl;
    CopyVSAssign ass;
    ass = cctr; //Assignemnt
    std::cout << std::endl;
}

}
#endif // COPYCONSTRUCTORVSASSIGNMENTOPERATOR_H
