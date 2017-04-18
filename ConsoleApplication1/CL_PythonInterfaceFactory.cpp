#include "Python.h"
#include "CL_PythonInterfaceFactory.h"
#include "CL_Python.h"
#include "CL_PythonController.h"

extern CL_Python* python;

CL_PythonInterfaceFactory::CL_PythonInterfaceFactory()
{
}


CL_PythonInterfaceFactory::~CL_PythonInterfaceFactory()
{
}


CL_PythonController* CL_PythonInterfaceFactory::CreateController(const string pythonModuleName, const string pythonClassName)
{
	if (!python->DoesModuleExists(pythonModuleName))
	{
		return nullptr;
	}
	if (!python->DoesClassExist(pythonClassName))
	{
		return nullptr;
	}
	PyObject* instance = python->GetInstance(pythonModuleName, pythonClassName);
	if (instance == nullptr)
	{
		return nullptr;
	}

	return new CL_PythonController(instance);
}
