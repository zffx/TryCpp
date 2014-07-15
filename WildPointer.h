#ifndef WILDPOINTER_H
#define WILDPOINTER_H

namespace CaseWildPointer
{

class WildPointer
{
public:
	WildPointer();
	WildPointer(int i);
	int getValue();

private:
	int mValue;
};

void wildPointer();
}

#endif // WILDPOINTER_H
