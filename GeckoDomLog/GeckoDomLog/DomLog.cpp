#include <iostream>

using std::cout;
using std::endl;
using std::cerr;
using std::ios;

#include <fstream>
using std::ofstream;

#include "DomLog.h"

void DomLog::recordLog(string functionName)
{
	const int size = domLogs.size();

	bool isNewName = true;

	for (int i=0;i<size;i++)
	{
		DomLogNode *currentNode = &domLogs.at(i);

		if((*currentNode).compareIndexChar(functionName[0]))
		{
			if ((*currentNode).compareName(functionName))
			{
				(*currentNode).increaseCount();
				isNewName = false;
				break;
			}
		}
	}

	if(isNewName)
	{
		// name not existed in list
		pushNewName(functionName, 1);
	}
}

void DomLog::pushNewName(string functionName, int initialCount)
{
	DomLogNode node;
	node.setNode(functionName, initialCount);

	domLogs.push_back(node);
}

void DomLog::getDomLogs()
{
	int size = domLogs.size();

	for (int i=0;i<size;i++)
	{
		cout << domLogs.at(i).getName() << ": " << domLogs.at(i).getCount() << endl;
	}
}

void DomLog::exportFile(string pathWithName)
{
	ofstream fileStream(pathWithName, ios::out);

	if(!fileStream)
	{
		cerr << "File could not be opened" << endl;
	}
	else
	{
		int size = domLogs.size();

		for (int i = 0; i < size; i++)
		{
			fileStream << domLogs.at(i).getName() << "," << domLogs.at(i).getCount() << endl;
		}
	}
}
