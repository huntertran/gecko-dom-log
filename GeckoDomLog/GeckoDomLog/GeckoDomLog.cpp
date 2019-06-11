// GeckoDomLog.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "DomLog.h"

int main()
{
    std::cout << "Hello World!\n";

	DomLog domLog;

	domLog.recordLog("GetElementById");
	domLog.recordLog("GetElementById");
	domLog.recordLog("GetElementById");
	domLog.recordLog("GetElementById");
	domLog.recordLog("GetElementById");
	domLog.recordLog("GetElementById");

	domLog.getDomLogs();
}