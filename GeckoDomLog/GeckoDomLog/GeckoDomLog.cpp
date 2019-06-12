// GeckoDomLog.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using std::cout;
using std::endl;

#include "DomLog.h"

int main()
{
    cout << "Hello World!\n";

	//DomLog domLog;

	domLog.recordLog("GetElementById");
	domLog.recordLog("GetElementById");
	domLog.recordLog("GetElementById");
	domLog.recordLog("GetElementById");

	cout << __func__ << endl;

	domLog.recordLog("GetElementById");
	domLog.recordLog("GetElementById");

	domLog.getDomLogs();
}