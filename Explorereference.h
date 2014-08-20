#ifndef EXPLOREREFERENCE_H
#define EXPLOREREFERENCE_H

#include <string>

namespace CaseReference
{

class ExploreReference
{
public:
    ExploreReference();

    std::string& getRef();
    void setRef(const std::string &ref);

    std::string& getValue();
    const std::string& getValueConst() const;
    void setValue(const std::string &value);

private:
    std::string& mRef;
    std::string mValue;
};

void reference();

}
#endif // EXPLOREREFERENCE_H
