#ifndef DomLogNode_h
#define DomLogNode_h

#include <string>
using std::string;

class DomLogNode
{
public:
	// constructor
	DomLogNode();

	// methods
	void setNode(string name, int count);
	int increaseCount();
	bool compareName(string nameToCompare);
	int getCount();
	string getName();

private:
	// properties
	string functionName;
	int count;
};

#endif