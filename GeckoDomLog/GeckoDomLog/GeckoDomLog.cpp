#include <iostream>
using std::cout;
using std::endl;

#include "DomLog.h"

int main()
{
	domLog.recordLog("GetElementById");
	domLog.recordLog("GetElementById");
	domLog.recordLog("GetElementById");
	domLog.recordLog("GetElementById");

	cout << __func__ << endl;

	domLog.recordLog("GetElementById");
	domLog.recordLog("GetElementById");

	domLog.recordLog("Test New Function");

	domLog.getDomLogs();
}