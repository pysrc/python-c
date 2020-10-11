
PYTHONPATH = D:/py38
INC = $(PYTHONPATH)/include
LIBS = $(PYTHONPATH)/libs
LIB = python38

main.exe: main.o
	gcc -o main.exe main.o -L $(LIBS) -l $(LIB)

main.o: main.c
	gcc -o main.o -c main.c -I $(INC)


.PHONY: clean
clean:
	rm -rf *.exe *.o
