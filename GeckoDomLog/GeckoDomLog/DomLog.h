#ifndef DomLog_h
#define DomLog_h

#include <string>
using std::string;

#include <vector>
using std::vector;

#include "DomLogNode.h"

static class DomLog
{
public:
	void recordLog(string functionName);
	void pushNewName(string functionName, int initialCount = 1);
	void getDomLogs();

private:
	vector<DomLogNode> domLogs;
} domLog;

#endif