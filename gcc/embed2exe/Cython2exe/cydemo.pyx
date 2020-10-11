

# 定义一个累加函数
cpdef int sm(int n):
    cdef i = 0
    cdef s = 0
    n += 1
    while i < n:
        s += i
        i += 1
    return s
