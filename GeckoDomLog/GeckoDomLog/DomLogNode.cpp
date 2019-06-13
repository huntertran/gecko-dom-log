#include <string>

using std::string;

#include "DomLogNode.h"

DomLogNode::DomLogNode()
{
	functionName = "";
	count = 0;
}

void DomLogNode::setNode(string name, int initialCount)
{
	functionName = name;
	indexChar = name[0];
	count = initialCount;
}

int DomLogNode::increaseCount()
{
	return count++;
}

bool DomLogNode::compareName(string nameToCompare)
{
	return nameToCompare == functionName;
}

bool DomLogNode::compareIndexChar(char charToCompare)
{
	return charToCompare == indexChar;
}

int DomLogNode::getCount()
{
	return count;
}

string DomLogNode::getName()
{
	return functionName;
}
