#ifndef DECLARATIONS_H
#define DECLARATIONS_H

namespace PointerToStruct
{

struct str{
    int len;
    char s[1];
};

struct foo{
    struct str* a;
};

void pointerToStruct();
}


namespace TryAssert
{
void tryAssert();
}

#endif // DECLARATIONS_H
