import ctypes
import platform

dll = None
if platform.system() == "Windows":
    dll = ctypes.CDLL("./array.dll")
elif platform.system() == "Linux":
    dll = ctypes.CDLL("./array.so")
dll.sum.argtypes = (ctypes.POINTER(ctypes.c_int), ctypes.c_int)
dll.sum.restype = ctypes.c_int


def dllsum(x):
    args = (ctypes.c_int * len(x))()
    for i in range(len(x)):
        args[i] = x[i]
    return dll.sum(args, len(x))


x = [i + 1 for i in range(100)]
print(dllsum(x))
print(sum(x))
