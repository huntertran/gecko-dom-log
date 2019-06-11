#ifndef DomLog_h
#define DomLog_h

#include "DomLogNode.h"

class DomLog
{
public:
	DomLog();
	void initDomLogs();
	void getDomLogs();

private:
	const static int numberOfRecords = 50;
	DomLogNode domLogs[numberOfRecords];
};

#endif