#include <stdio.h>

void Min_Squret(int* m, int* n)
{
	if (*m % *n != 0 && *n % *m != 0)
	{
		if (*m > *n)
		{
			while (*m > *n)
			{
				*m -= *n;
			}
			Min_Squret(&(*n), &(*m));
		}
	}
	//return n;
}

int main()
{
	int m = 1680, n = 640;
	Min_Squret(&m, &n);
	printf("%d", n);
	return 0;
}
