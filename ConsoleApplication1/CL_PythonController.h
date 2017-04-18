#pragma once
#include <Python.h>

class CL_PythonController
{
	friend class CL_PythonInterfaceFactory;

private:
	const PyObject* pythonInstance_;

	CL_PythonController(const PyObject* pythonInstance);

public:
	virtual ~CL_PythonController();

	double OnIterate(double args[]);
	// This method is called at the end of each time step or operating point	double OnIterate(double args[]);
	void OnEndOfTimeStep(double args[]);
};

