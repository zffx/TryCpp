#include <iostream>


#include "Declarations.h"

#include "CopyConstructorVsAssignmentOperator.h"
#include "DefaultDestructor.h"
#include "VirtualDestructor.h"
#include "WildPointer.h"

using namespace std;

int main(int argc, char** argv) {

    cout << "Input the number to run:" <<endl
         << "1. Pointer to Sturct, where would it crash." << endl
         << "2. Virtual Destructor." << endl
         << "3. Copy Constructor vs Assignment Operator." << endl
         << "4. TryAssert." << endl
         << "5. Default Destructor." << endl
         << "6. Char[] and Char*" << endl
         << "7. New and Delete, wild pointer" << endl;
    unsigned int choice = 0;
    cin >> choice ;
    switch(choice)
    {
    case 1:
        PointerToStruct::pointerToStruct();
        break;
    case 2:
        VirtualDestructor::virtualDestructor();
        break;
    case 3:
        CopyConstructorVsAssignmentOperator::
                copyConstructorVsAssignmentOperator();
        break;
    case 4:
        TryAssert::tryAssert();
        break;
    case 5:
        DefaultDestructor::defaultDestructor();
        break;
    case 6:
        CharArrayAndPointer::charArrayAndPointer();
        break;
    case 7:
        WildPointer::wildPointer();
    default:
        break;
    }

//    //new and delete
//    //wild pointer
//    //==================================================
//    cout<<endl;
//    cout<<"===New and Delete & Wild Pointer==="<<endl;

//    TryDefaultDestructor* q = new TryDefaultDestructor(5);
//    cout << "I new TryDefaultDestructor and assign it to q. *q.mInt = " << (*q).mInt << endl;

//    delete q;
//    cout << "I deleted q." << endl;

//    if (q != 0)
//    {
//        cout << "is q null? No, q = " << q << endl;
//    };
//    cout << "I am not derefering the pointer q yet. q = " << q << endl;

//    //q = 0;
//    //cout << "I assign null to q now. q = " << q << endl;

//    cout << "you should never see this output. I am calling a member of TryDefaultDestructor with q->mInt: "
//         << q->mInt << endl;
//    cout << "Seems I have some misunderstanding on wild pointer" << endl;


//    int* p_i;
//    int i = 6;
//    p_i = &i;
//    i = 10;
//    *p_i =7;

//    //==================================================
}

///*
//  virtual function table
//  */

//class Base
//{
//public:
//    virtual void fun1()
//    {
//        std::cout<<"Base::fun1"<<std::endl;
//    }
//    virtual void fun2(int i)
//    {
//        std::cout<<"Base::fun2"<<std::endl;
//        std::cout<<"i =" << i <<std::endl;
//    }
//    virtual void fun3()
//    {
//        std::cout<<"Base::fun3"<<std::endl;
//    }
//private:
//    int num1;
//    int num2;
//};

//typedef void (*Fun)(void);

//int main()
//{

//}


/*
  inheritance
  */

//==================================================
//class Base
//{
//public:
//    Base();
//    Base(int n);
//    virtual void fcA() = 0;
//    //void fcA();
//    //virtual void fcB();
//    void f();
//    int a;
//    int b;
//    static int s;
//private:
//    //int b;
//};

//int Base::s = 5;

//Base::Base()
//{
//    b = 1;
//    cout << "Constructor Base()" << endl;
//}

//Base::Base(int n): a(n)
//{
//    cout << "Constructor Base(int n)" << endl;
//}
///*
//void Base::fcA()
//{
//    cout << "Base\'s fcA() called" << endl;
//}
//*/
///*
//void Base::fcB()
//{
//    cout << "Base\'s fcB() called" << endl;
//}
//*/

//void Base::f()
//{
//    cout << "Base\'s f() called" << endl;
//}




//class Derive1 : public Base
//{
//public:
//    Derive1();
//    Derive1(int n);
//    void fcB();
//    virtual void fcA();
//    void f();
//    int b;
//    int c;
//};

//Derive1::Derive1()
//{
//    b = 2;
//    cout << "Constructor Derive1()" << endl;
//}

//Derive1::Derive1(int n)
//{
//    b = n = 2 ;
//    cout << "Constructor Derive1(int n)" << endl;
//}

//void Derive1::fcA()
//{
//    cout << "Derive1\'s fcA() called" << endl;
//}

//void Derive1::fcB()
//{
//    cout << this->Base::b << endl;
//    s++;
//    cout << sizeof(Base::s)<< "\t s value: " <<s <<endl;
//    cout << "Derive1\'s fcB() called" << endl;
//}


//void Derive1::f()
//{
//    cout << "Derive1\'s f() called" << endl;
//}



////static int s;
//int main()
//{
//    //Base* instance = new Derive1();
//    Derive1* instance = new Derive1(5);
//    //Derive1* instance = new Base(5);
//    //cout << sizeof(s)<< "\t s value: " <<s <<endl;
//    instance->fcB();
//    Base* instance_base = instance;
//    cout << sizeof(*instance_base)<<endl;
//    cout << sizeof(*instance)<<endl;
//    instance->fcA();
//    cout << sizeof(Base::s)<< "\t s value: " << Derive1::s <<endl;
//    cout << instance->b << instance->Base::b << endl;
//    delete instance;
//    instance=NULL;
//}
//==================================================

/*
  const pointer
*/
//==================================================
//int main(int argc, char *argv[])
//{
//    int a=3;
//    int b;

//    /*����ָ��const��ָ�루ָ��ָ������ݲ��ܱ��޸ģ�*/
//    const int* p1;


//    /*����constָ��(����ָ�뱾���ֵ���ܸı����Ա���ó�ʼ����*/
//    int* const p3=&a;

//    /*ָ�뱾�����ָ������ݶ��ǲ��ܱ��ı������Ҳ�ó�ʼ��*/
//    const int* const p4=&a;
//    int const* const p5=&b;

//    p1=&a; //��ȷ
//    cout << *p1 << a << endl;
//    a=4;
//    cout << *p1 << a << endl;
//    //*p1=8; //����ȷ��ָ��ָ������ݲ��ܱ��޸ģ�
//    cout << *p1 << a << endl;

//    *p3=5; //��ȷ
//    //p3=p1; //����ȷ��ָ�뱾���ֵ���ܸı䣩

//    //p4=p5;//����ȷ ��ָ�뱾�����ָ������ݶ��ǲ��ܱ��ı䣩
//    //*p4=*p5=4; //����ȷ��ָ�뱾�����ָ������ݶ��ǲ��ܱ��ı䣩

//    return 0;
//}
//==================================================




