
ifeq ($(SYS), WIN)
# Windows cmd-> make SYS=WIN
target = dll
def = -DWINDOWS

else ifeq ($(SYS), LINUX)
# Linux bash-> make SYS=LINUX
target = so
def = 
endif

$(target): pydll.o isme.o
	gcc $(def) pydll.o isme.o -shared -o pydll.$(target)

isme.o: isme.c isme.h mysys.h
	gcc -c isme.c -o isme.o

pydll.o: pydll.c pydll.h mysys.h
	gcc -c pydll.c -o pydll.o

.PHONY: clean
clean:
	rm -rf *.dll *.so *.o
