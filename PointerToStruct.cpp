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
  ���ڵ�19�С���14�н�f.a��ֵΪ0����17��f.a->s������s���׵�ַ��
  Ҳ���ṹ����׵�ַƫ��sizeof(len)��ĵ�ַ�����ڽṹ����׵�ַf.aΪ0��
  ����32λ��64λϵͳsizeof(len)Ϊ4����f.a->sΪ0x4����ִ�е�19�С�
  ��19��f.a->s��Ϊprintf����������ڶ�ȡ������ʱ�ҵ�����0x4��ַ����Υ��)
*/
