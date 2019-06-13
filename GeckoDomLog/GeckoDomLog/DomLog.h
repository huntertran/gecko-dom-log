#ifndef DomLog_h
#define DomLog_h

#include <string>
using std::string;

#include <vector>
using std::vector;

#include <fstream>
using std::ofstream;

#include "DomLogNode.h"

static class DomLog
{
public:
	void recordLog(string functionName);
	void pushNewName(string functionName, int initialCount = 1);
	void getDomLogs();
	void exportFile(string path);

private:
	vector<DomLogNode> domLogs;
} domLog;

#endif