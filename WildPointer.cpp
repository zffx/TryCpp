#include <iostream>
#include "WildPointer.h"

using namespace std;
namespace CaseWildPointer
{

WildPointer::WildPointer(): mValue(-1)
{
	cout <<"WildPointer::WildPointer()" << endl;
}

WildPointer::WildPointer(int i): mValue(i)
{
	cout <<"WildPointer::WildPointer(int i)" << endl;
}

int WildPointer::getValue()
{
	return mValue;
}

void wildPointer()
{
    //new and delete
    //wild pointer
    //==================================================
    cout<<"===New and Delete & Wild Pointer==="<<endl;

    WildPointer* q = new WildPointer(5);
    cout << "I new WildPointer and assign it to q. (*q).getValue() = "
    	 << (*q).getValue() << endl;

    delete q;
    cout << "I deleted q." << endl;

    if (q != 0)
    {
        cout << "is q null? No, q = " << q << endl;
    };
    cout << "I am not derefering the pointer q yet. q = " << q << endl;

    //These 2 lines are commented out to make q a wild pointer
    /*
    q = 0;
    cout << "I assign null to q now. q = " << q << endl;
    */

    //Just some dummy code to use some heap memeory
    int * i = new int[4];
    cout << "i[3] = " << i[3] << endl;
    WildPointer* p = new WildPointer[3];
    //

    cout << "you should never see this output. "
    		"I am calling a member of WildPointer with (*q).getValue(): "
         << (*q).getValue() << endl;
    cout << "Seems I have some misunderstanding on wild pointer" << endl;

    delete[] p;
    delete[] i;
}

}
