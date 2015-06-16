#include "Declarations.h"
#include <iostream>

namespace CharArrayAndPointer
{
void charArrayAndPointer(){
    //char* and char[]
    std::cout<<std::endl;
    std::cout<<"===  char[]  ==="<<std::endl;


    char q[] = "abcd";
    std::cout<< q[0] << q[1] << q[2] << q[3] <<std::endl;
    std::cout<< q << "\t" << *q << std::endl;

    *q = 'x';
    /*++q;*/ /*This wont compile!*/
    std::cout<< q[0] << *(q+1)  << ++(*q)
             << q[2] << q[3] <<std::endl;
    std::cout<< q[0] << q[1] << q[2] << q[3] <<std::endl;
    std::cout<< q << "\t" << *q << std::endl;

    std::cout<<"===  char*  ==="<<std::endl;

    char* p = "abcd";
    std::cout<< p[0] << p[2] << p[3] << ++p <<std::endl;
    std::cout<< p << "\t" << *p << std::endl;

    char* p2 = "bcd";
    char* p3 = "abcd";
    ++p3;
    std::cout << (p == p2) <<  std::endl;
    std::cout << (p == p3) <<  std::endl;


    *p = 'x';//would crash here!
    std::cout<< p[0] << p[1] << p[2] << p[3] <<std::endl;
    std::cout<< p << "\t" << *p << std::endl;

}

}
