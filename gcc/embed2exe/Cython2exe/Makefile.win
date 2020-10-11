
PYTHONPATH = D:/py38
INC = $(PYTHONPATH)/include
LIBS = $(PYTHONPATH)/libs
LIB = python38

.PHONY: target
target: hello.exe cydemo.pyd

# exe main 打包主函数时不需要动态链接库pyd/dll
hello.exe: hello.o
	gcc -o hello.exe hello.o -L $(LIBS) -l $(LIB)

hello.o: hello.c
	gcc -DMS_WIN64 -Dwmain=main -o hello.o -c hello.c -I $(INC)

hello.c: hello.py
	cython --embed -3 hello.py -o hello.c

# cydemo 动态链接库打包
cydemo.pyd: cydemo.o
	gcc -shared -o cydemo.pyd cydemo.o -L $(LIBS) -l $(LIB)

cydemo.o: cydemo.c
	gcc -DMS_WIN64 -o cydemo.o -c cydemo.c -I $(INC)

cydemo.c: cydemo.pyx
	cython -3 cydemo.pyx -o cydemo.c

.PHONY: clean
clean:
	rm -rf *.exe *.o *.pyd *.c
