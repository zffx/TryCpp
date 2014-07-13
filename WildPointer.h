#ifndef WILDPOINTER_H
#define WILDPOINTER_H

namespace WildPointer
{

class WildPointer
{
public:
	WildPointer();
	WildPointer(int i):mValue(i){};
	~WildPointer();

	int getValue();
private:
	int mValue;
};

void wildPointer();
}

#endif // WILDPOINTER_H
