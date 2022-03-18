#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <stdio.h>
//void judy(int n, int k)
//{
//	int i = 0;
//	for (n = 10000; n <= 30000; n++)
//	{
//		int sub1 = n / 100;
//		int sub2 = (n / 10) % 1000;
//		int sub3 = n % 1000;
//		int a1 = sub1 % k;
//		int a2 = sub2 % k;
//		int a3 = sub3 % k;
//
//		if (a1 == a2 && a2 == a3 && a3 == 0)
//		{
//			i++;
//			printf("%d\n", n);
//		}
//
//	}
//	if (i == 0)
//	{
//		printf("%s\n", "No");
//	}
//}
//int main()
//{
//	int k = 0;
//	do
//	{
//		scanf_s("%d", &k);
//
//	} while (k > 0 && k < 1000 ? 0 : 1);
//	int n = 10000;
//	judy(n, k);
//	return 0;
//}
//void judy(int arr[], int N)
//{
	/*int i = 0;
	int k = 0;
	for (k = 0; k < N; k++)
	{
		for (i = 0; i < N - 1; i++)
		{
			if (arr[i] > arr[i + 1])
			{
				int ret = arr[i];
				arr[i] = arr[i + 1];
				arr[i + 1] = ret;
			}
		}*/
	//}
//
//}
//void My(int arr[], int N)
//{
//	int i = 0;
//	for (i = 0; i < N; i++)
//	{
//		arr[i] = rand() % 1000 + 1;
//		printf("%d ", arr[i]);
//	}
//}
//int main()
//{
//	int N = 0;
//
//	srand((unsigned int)time(NULL));
//	do
//	{
//		scanf_s("%d", &N);
//	} while (N >= 1 && N <= 100 ? 0 : 1);
//	int arr[N] = { 0 };
//	My(arr, N);
//	int i = 0;
//	for (i = 0; i < N; i++)
//	{
//		int k = 0;
//		for (k = i + 1; k < N; k++);
//		{
//			if (arr[i] == arr[k])
//			{
//				arr[i] = 0;
//			}
//		}
//	}
//	for (i = 0; i < N; i++)
//	{
//		if (arr[i] == 0)
//		{
//			arr[i] = arr[N - 1];
//			N--;
//		}
//	}
//	judy(arr, N);
//	return 0;
//}
//void Paixu(int arr[], int N)
//{
//	int i = 0;
//	int k = 0;
//	for (k = N-1; k >= 0; k--)
//	{
//		for (i = N - 2; i >= 0; i--)
//		{
//			if (arr[i] > arr[i + 1])
//			{
//				int ret = arr[i];
//				arr[i] = arr[i + 1];
//				arr[i + 1] = ret;
//			}
//		}
//	}
//	printf("\n");
//	int num = 0;
//	for (i = 0; i < N; i++)
//	{
//		if (arr[i] != 0)
//		{
//			num++;
//		}
//	}
//	printf("%d\n", num);
//	for (i = 0; i < N; i++)
//	{
//		if (arr[i] != 0)
//		{
//			printf("%d ", arr[i]);
//		}
//	}
//}
//void Chachong(int arr[], int N)
//{
//	int i = 0;
//	for (i = 0; i < N; i++)
//	{
//				int k = 0;
//	    for (k = i + 1; k < N; k++);
//		{
//			if (arr[i] == arr[k])
//			{
//			  arr[i] = 0;
//		    }
//		}
//	}
//}
//int main()
//{
//	int N = 0;
//	scanf_s("%d",&N);
//	int i = 0;
//	int arr[100] = { 0 };
//	/*for (i = 0; i < N; i++)
//	{
//		int a = 0;
//		scanf_s("%d ", &a);
//		arr[i] = a;
//	}*/
//	srand((unsigned int)time(NULL));
//	for (i = 0; i < N; i++)
//	{
//		int a = 0;
//		a = rand() % 1000 + 1;
//		printf("%d ", a);
//		arr[i] = a;
//	}
//	Chachong(arr, N);
//	Paixu(arr, N);
//	return 0;
//}

int main()
{
	int x = 0;
	int n = 0;
	do
	{
		scanf_s("%d %d", &x, &n);
	} while (x > 0 && x < 8 && n > 0 && n < 1000000 ? 0 : 1);
	long int ret = 0;
	int num1 = n / 7;
	ret = 250 * 5 * num1;
	int num2 = n % 7;
	int i = 0;
	for (i = x; i < x + num2 - 1; i++)
	{
		if (i != 6 && i != 7 && i != 13)
		{
			ret += 250;
		}
	}
	printf("%d", ret);
	return 0;
}
	/*if ((x - 1 + num2) <= 5)
	{
		ret += 250 * ( num2 - x + 1);
	}
	else if(x - 1 + num2 == 6)
	{
		ret += 250 * 5;
	}
	else if (x - 1 + num2 == 7)
	{
		ret += 250 * (4 - x + num2);
	}
	else if(x - 1 + num2 == 13)
	{
		ret += 250 * 5;
	}
	else if(x < 6 && x + num2 > 7 && x + num2 < 13)
	{
		ret += (8 - x + num2 - 2);
	}
	else if (x = 6 && x + num2 > 7 && x + num2 < 13)
	{
		ret += num2 * 250 - 500;
	}
	else if (x = 7 && x + num2 > 7 && x + num2 < 13)
	{
		ret += num2 * 250-250;
	}*/
	/*for (i = x; i <= n; i++)
	{
		if (x <= 5)
		{
			ret += 250;
			x++;
		}
		if (x == 6)
		{
			x++;
		}
		if (x == 7)
		{
			x = 1;
		}*///2222222222222222222
	//}2222222222222222