#ifndef DomLogNode_h
#define DomLogNode_h

#include <string>
using std::string;

class DomLogNode
{
public:
	DomLogNode();

	void setNode(string name, int count);
	int increaseCount();
	bool compareName(string nameToCompare);
	int getCount();
	string getName();

private:
	string functionName;
	int count;
};

#endif