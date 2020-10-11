
# 对外可见Python函数
def padd(x, y):
    return x + y


# 对外不可见C函数
cdef int cadd(int x, int y):
    return x + y

# 对外可见C函数
cpdef int cpadd(int x, int y):
    return x + y
