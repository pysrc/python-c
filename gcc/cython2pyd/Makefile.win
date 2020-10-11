
# PYTHONPATH = D:/py38
PYTHONPATH = D:/python
INC = $(PYTHONPATH)/include
LIBS = $(PYTHONPATH)/libs
LIB = python38

hello.pyd: hello.o
	gcc -shared -o hello.pyd hello.o -L $(LIBS) -l $(LIB)

hello.o: hello.c
	gcc -DMS_WIN64 -o hello.o -c hello.c -I $(INC)

hello.c: hello.pyx
	cython -3 hello.pyx -o hello.c

.PHONY: clean
clean:
	rm -rf *.pyd *.o *.c

