#include "Python.h"
#include "CL_PythonController.h"


CL_PythonController::CL_PythonController(const PyObject* pythonInstance):
	pythonInstance_(pythonInstance)
{
}


CL_PythonController::~CL_PythonController()
{
	delete pythonInstance_;
	pythonInstance_ = nullptr;
}


// This method is called on each iteration
double CL_PythonController::OnIterate(double args[])
{
	return 0.0;
}


// This method is called at the end of each time step or operating point
void CL_PythonController::OnEndOfTimeStep(double args[])
{
}
