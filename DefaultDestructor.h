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

    int mInt;
};
}
#endif // DefaultDestructor_H
