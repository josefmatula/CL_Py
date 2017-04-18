#include "CL_Python.h"

CL_Python::CL_Python()
{
}

CL_Python::~CL_Python()
{
}

bool CL_Python::DoesModuleExists(const string moduleName)
{
	return false;
}
bool CL_Python::DoesClassExist(const string className)
{
	return false;
}

PyObject* CL_Python::GetInstance(const string moduleName, const string className)
{
	return nullptr;
}

