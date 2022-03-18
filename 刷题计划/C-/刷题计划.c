#include <stdio.h>
void judy(int n, int k)
{
	int i = 0;
	for (n = 10000; n <= 30000; n++)
	{
		int sub1 = n / 100;
		int sub2 = (n / 10) % 1000;
		int sub3 = n % 1000;
		int a1 = sub1 % k;
		int a2 = sub2 % k;
		int a3 = sub3 % k;
	
		if (a1 == a2 && a2 == a3 && a3 == 0)
		{
			i++;
			printf("%d\n", n);
		}
		
	}
	if (i == 0)
	{
		printf("%s\n", "No");
	}
}
int main()
{
	int k = 0;
	do
	{
		scanf_s("%d", &k);

	} while (k > 0 && k < 1000 ? 0 : 1);
	int n = 10000;
	judy(n, k);
	return 0;
}