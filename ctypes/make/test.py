import ctypes
import time
import platform

dll = None
if platform.system() == "Windows":
    dll = ctypes.CDLL('./pydll.dll')
elif platform.system() == "Linux":
    dll = ctypes.CDLL('./pydll.so')


dll.isme.argtypes = (ctypes.c_long, )
dll.isme.restype = ctypes.c_int

dll.run.argtypes = (ctypes.c_long, )

print("isme", dll.isme(28))

s = time.time()
dll.run(10000)
print(time.time() - s)
