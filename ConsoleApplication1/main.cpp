#include "CL_Python.h"
#include "CL_PythonInterfaceFactory.h"
#include "CL_PythonController.h"


CL_Python* python;
int main(int argc, char* argv[])
{
	python = new CL_Python();
	CL_PythonController* controller = CL_PythonInterfaceFactory::CreateController("mymodule", "TestController");
	controller->OnEndOfTimeStep();

}

//#ifdef _DEBUG
//#undef _DEBUG
//#include <python.h>
//#define _DEBUG
//#else
//#include <python.h>
//#endif
//#include "CL_Python.h"
//
//
//CL_Python* python;
//
//int main(int argc, char* argv[])
//{
//	python = new CL_Python();
//	PyObject *pName, *pModule, *pMymathClass;
//	PyObject *pArgs, *pValue;
//	int i;
//
//	//if (argc < 3)
//	//{
//	//	fprintf(stderr, "Usage: call pythonfile funcname [args]\n");
//	//	return 1;
//	//}
//
//	Py_Initialize();
//	PyObject* pathObj = PySys_GetObject("path");
//	PyObject* scriptPathObj = PyUnicode_FromString("C:\\Users\\Thomas Naderhirn\\Documents\\Visual Studio 2017\\Projects\\ConsoleApplication1\\ConsoleApplication1\\");
//	int result = PyList_Append(pathObj, scriptPathObj);
//
//	Py_DECREF(scriptPathObj);
//
//	pModule = PyImport_ImportModule("myscript");
//
//
//	//pModule = PyImport_Import(pName);
//	//Py_DECREF(pName);
//
//	if (pModule != NULL)
//	{
//		pMymathClass = PyObject_GetAttrString(pModule, "Mymath");
//
//		if (pMymathClass != nullptr)
//		{
//			PyObject* myMath = PyObject_CallObject(pMymathClass, NULL);
//			if (myMath != nullptr)
//			{
//				PyObject* pAddResult = PyObject_CallMethod(myMath, "add", "(ii)", 2, 3);
//				if (pAddResult != nullptr)
//				{
//					printf("%ld", PyLong_AsLong(pAddResult));
//				}
//				else
//				{
//					if (PyErr_Occurred())
//					{
//						PyErr_Print();
//					}
//					fprintf(stderr, "Error calling add method\n");
//				}
//				Py_DECREF(myMath);
//			}
//			else
//			{
//				if (PyErr_Occurred())
//				{
//					PyErr_Print();
//				}
//				fprintf(stderr, "Cannot create instance of type\"Mymath\"\n");
//			}
//		}
//		else
//		{
//			if (PyErr_Occurred())
//			{
//				PyErr_Print();
//			}
//			fprintf(stderr, "Cannot find class\"Mymath\"\n");
//		}
//		Py_DECREF(pModule);
//
//		//if (pMymathClass && PyCallable_Check(pFunc))
//		//{
//		//	pArgs = PyTuple_New(argc - 3);
//		//	for (i = 0; i < argc - 3; i++)
//		//	{
//		//		pValue = PyLong_FromLong(atoi(argv[i + 3]));
//		//		if (!pValue)
//		//		{
//		//			Py_DECREF(pArgs);
//		//			Py_DECREF(pModule);
//		//			fprintf(stderr, "Cannot convert argument\n");
//		//			return 1;
//		//		}
//
//		//		PyTuple_SetItem(pArgs, i, pValue);
//		//	}
//		//	pValue = PyObject_CallObject(pFunc, pArgs);
//		//	Py_DECREF(pArgs);
//		//	if (pValue != NULL)
//		//	{
//		//		printf("Result of call: %ld\n", PyLong_AsLong(pValue));
//		//		Py_DECREF(pValue);
//		//	}
//		//	else
//		//	{
//		//		Py_DECREF(pFunc);
//		//		Py_DECREF(pModule);
//		//		PyErr_Print();
//		//		fprintf(stderr, "Call failed\n");
//		//		return 1;
//		//	}
//		//}
//		//else
//		//{
//		//	if (PyErr_Occurred())
//		//	{
//		//		PyErr_Print();
//		//	}
//		//	fprintf(stderr, "Cannot find function\"%s\"\n", argv[2]);
//		//}
//		//Py_XDECREF(pFunc);
//		//Py_DECREF(pModule);
//	}
//	else
//	{
//		PyErr_Print();
//		fprintf(stderr, "Failed to load \"%s\"\n", argv[1]);
//		return 1;
//	}
//	Py_Finalize();
//	return 0;
//}