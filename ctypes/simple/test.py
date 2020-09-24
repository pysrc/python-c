import ctypes
import platform
import time
dll = None

if platform.system() == "Windows":
    dll = ctypes.CDLL('./pydll.dll')
else:
    dll = ctypes.CDLL('./pydll.so')


dll.isme.argtypes = (ctypes.c_long, )
dll.isme.restype = ctypes.c_int

dll.run.argtypes = (ctypes.c_long, )

print("isme", dll.isme(28))

s = time.time()
dll.run(10000)
print(time.time() - s)
