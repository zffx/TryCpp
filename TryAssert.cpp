#include <iostream>
#include <assert.h>
#include "Declarations.h"

using namespace std;

namespace TryAssert
{
void tryAssert()
{

    //assert(false) will exit the program
    //assert(true) will continue

    cout<<endl;
    cout<<"===Assert==="<<endl;

    bool IloveYou = true;
    assert(IloveYou);
    cout << "HelloWorld! I love you == true! \n \n";

    IloveYou = false;
    assert(IloveYou);
    cout << "HelloWorld! I love you == false! \n";
}
}
