#include "Python.h"

int main()
{
    Py_Initialize();
    PyRun_SimpleString("print('hello world!')");
    Py_Finalize();
    return 0;
}
