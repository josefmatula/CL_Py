#pragma once
#include <string>

using namespace std;

class CL_PythonController;

class CL_PythonInterfaceFactory
{
public:
	CL_PythonInterfaceFactory();
	virtual ~CL_PythonInterfaceFactory();
	static CL_PythonController* CreateController(const string pythonModuleName, const string pythonClassName);
};

