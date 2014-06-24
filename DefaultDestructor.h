#ifndef TRYDEFAULTDESTRUCTOR_H
#define TRYDEFAULTDESTRUCTOR_H

class TryDefaultDestructor
{
public:
    TryDefaultDestructor();

    TryDefaultDestructor(int i):mInt(i){}

    ~TryDefaultDestructor();
    int mInt;
};

#endif // TRYDEFAULTDESTRUCTOR_H
