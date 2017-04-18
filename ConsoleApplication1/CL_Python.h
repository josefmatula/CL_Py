#pragma once

#include <string>
#include <Python.h>

using namespace std;

/// Connects to the python development environment
/// Does all the initializaton stuff, finalizing
class CL_Python
{
public:
	CL_Python();
	virtual ~CL_Python();

	bool DoesModuleExists(const string moduleName);
	bool DoesClassExist(const string className);
	PyObject* GetInstance(const string moduleName, const string className);
};

