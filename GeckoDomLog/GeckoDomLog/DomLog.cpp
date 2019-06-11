#include <iostream>

using std::cout;
using std::endl;

#include "DomLog.h"

DomLog::DomLog()
{
	const string loggedNames[] = { "GetElementById","GetElementsByTagName" };

	const int loggedNamesSize = sizeof(loggedNames) / sizeof(*loggedNames);

	for (int i=0;i< numberOfRecords;i++)
	{
		if(loggedNamesSize >= (i+1))
		{
			domLogs[i].setNode(loggedNames[i], 0);
		}
		else
		{
			break;
		}
	}
}

void DomLog::recordLog(string functionName)
{
	for (int i=0;i<numberOfRecords;i++)
	{
		if(domLogs[i].compareName(functionName))
		{
			domLogs[i].increaseCount();
			break;
		}
	}
}

void DomLog::getDomLogs()
{
	for (int i=0;i< numberOfRecords;i++)
	{
		cout << domLogs[i].getName() << ": " << domLogs[i].getCount() << endl;
	}
}
