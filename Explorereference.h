#ifndef EXPLOREREFERENCE_H
#define EXPLOREREFERENCE_H

#include <string>

namespace CaseReference
{

class ExploreReference
{
public:
    ExploreReference();

    std::string& getRef() const;
    void setRef(const std::string &ref);

private:
    std::string& mRef;
    std::string mValue;
};

void reference();

}
#endif // EXPLOREREFERENCE_H
