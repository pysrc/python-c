#include <Python.h>

int add(int x, int y){ // C 函数
    return x + y;
}

static PyObject *calc_add(PyObject *self, PyObject *args){

    int x, y;
    // Python传入参数
    // "ii" 表示传入参数为2个int型参数，将其解析到x, y变量中
    if(!PyArg_ParseTuple(args, "ii", &x, &y))
        return NULL;
    return PyLong_FromLong(add(x, y));
}

// 模块的方法列表
static PyMethodDef CalcMethods[] = {
     {"add", calc_add, METH_VARARGS, "函数描述"},
     {NULL, NULL, 0, NULL}
};

// 模块
static struct PyModuleDef calcmodule = {
    PyModuleDef_HEAD_INIT,
    "calc", // 模块名
    NULL, // 模块文档
    -1,       /* size of per-interpreter state of the module,
                or -1 if the module keeps state in global variables. */
    CalcMethods
};

// 初始化
PyMODINIT_FUNC PyInit_calc(void)
{
    return PyModule_Create(&calcmodule);
}