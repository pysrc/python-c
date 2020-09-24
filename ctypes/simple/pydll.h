#include <stdio.h>

#ifndef _PYDLL_H_
#define _PYDLL_H_

#ifdef WINDOWS
#define DLLEX __declspec(dllexport)
#else
#define DLLEX
#endif

DLLEX int isme(long x);
DLLEX void run(long x);

#endif
