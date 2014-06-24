#include "defaultdestructor.h"


TryDefaultDestructor::TryDefaultDestructor()
{
    //if this definition is commented out, but declared in header
    //compiler should still give error and default constructor should
    //not be used
}

TryDefaultDestructor::~TryDefaultDestructor()
{
    //if this definition is commented out, but declared in header
    //compiler should still give error and default donstructor should
    //not be used
}

