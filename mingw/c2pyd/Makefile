
PYTHONPATH = D:/py38
INC = $(PYTHONPATH)/include
LIBS = $(PYTHONPATH)/libs
LIB = python38

calc.pyd: calc.o
	gcc -shared -o calc.pyd calc.o -L $(LIBS) -l $(LIB)

calc.o: calc.c
	gcc -o calc.o -c calc.c -I $(INC)


.PHONY: clean
clean:
	rm -rf *.pyd *.o
