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

/*
  挂在第19行。第14行将f.a赋值为0，第17行f.a->s即数组s的首地址，
  也即结构体的首地址偏移sizeof(len)后的地址，由于结构体的首地址f.a为0，
  对于32位或64位系统sizeof(len)为4，则f.a->s为0x4，会执行第19行。
  第19行f.a->s作为printf函数的入参在读取其内容时挂掉（对0x4地址访问违规)
*/
