#ifndef DefaultDestructor_H
#define DefaultDestructor_H

namespace DefaultDestructor
{

class DefaultDestructor
{
public:
    DefaultDestructor();

    DefaultDestructor(int i):mInt(i){}

    ~DefaultDestructor();

private:
    int mInt;
};//note you need ";" at the end of a class declaration

void defaultDestructor();

}
#endif // DefaultDestructor_H
