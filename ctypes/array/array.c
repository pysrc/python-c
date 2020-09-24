#ifdef WINDOWS
#define DLLEX __declspec(dllexport)
#else
#define DLLEX
#endif

DLLEX int sum(int *args, int argnum)
{
	int s = 0;
	for (int i = 0; i < argnum; ++i)
	{
		s+=args[i];
	}
	return s;
}
