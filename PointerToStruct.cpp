#include "Declarations.h"
#include <iostream>
#include <stdio.h>

using namespace std;

namespace PointerToStruct
{
    void pointerToStruct()
    {
        //Pointer to Sturct, where would it crash?
        //==================================================
        cout<<"line24"<<endl;
        struct foo f = {0};
        cout<<"a: "<< f.a <<endl;
        //cout<<"a->s: "<< f.a->s <<endl;
        if(f.a->s){
            cout<<"line28"<<endl;
            printf(f.a->s);
            cout<<"line30"<<endl;
        }
        //==================================================
    }
}
