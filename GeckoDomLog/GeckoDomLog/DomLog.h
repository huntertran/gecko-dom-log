#ifndef DomLog_h
#define DomLog_h

#include <string>
using std::string;

#include "DomLogNode.h"

static class DomLog
{
public:
	DomLog();
	void recordLog(string functionName);
	void getDomLogs();

private:
	const static int numberOfRecords = 50;
	DomLogNode domLogs[numberOfRecords];
} domLog;

#endif