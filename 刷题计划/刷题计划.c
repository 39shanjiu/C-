//#include <stdio.h>
//#include <stdlib.h>
//#include <time.h>
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

//int main()
//{
//	int x = 0;
//	int n = 0;
//	do
//	{
//		scanf_s("%d %d", &x, &n);
//	} while (x > 0 && x < 8 && n > 0 && n < 1000000 ? 0 : 1);
//	long int ret = 0;
//	int num1 = n / 7;
//	ret = 250 * 5 * num1;
//	int num2 = n % 7;
//	int i = 0;
//	for (i = x; i < x + num2 - 1; i++)
//	{
//		if (i != 6 && i != 7 && i != 13)
//		{
//			ret += 250;
//		}
//	}
//	printf("%d", ret);
//	return 0;
//}
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
// void Paixu(int arr[], int N)
//{
//	int i = 0;
	/*int k = 0;
	for (k = N - 1; k >= 0; k--)
	{
		for (i = N - 2; i >= 0; i--)
		{
			if (arr[i] > arr[i + 1])
			{
				int ret = arr[i];
				arr[i] = arr[i + 1];
				arr[i + 1] = ret;
			}
		}
	}
	printf("\n");
	int num = 0;
	for (i = 0; i < N; i++)
	{
		if (arr[i] != 0)
		{
			num++;
		}
	}
	printf("%d\n", num);
	for (i = 0; i < N; i++)
	{
		if (arr[i] != 0)
		{
			printf("%d ", arr[i]);
		}
	}
}*/
//void Chachong(int arr[], int N)
//{
//	int i = 0;
	/*for (i = 0; i < N; i++)
	{
		int k = 0;
		for (k = i + 1; k < N; k++);
		{
			if (arr[i] == arr[k])
			{
				arr[i] = 0;
			}
		}
	}*/
	//}
	//#include <stdio.h>
	//int main()
	//{
	//	int N = 0;
	//	scanf("%d", &N);
	//	int i = 0;
	//	int arr[100] = { 0 };
	//	for (i = 0; i < N; i++)
//	{
//		int a = 0;
//		scanf("%d", &a);
//		arr[i] = a;
//	}
//	for (i = 0; i < N - 1; i++)
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
//	int k = 0;
//	for (k = N - 1; k >= 0; k--)
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
//	return 0;

//int Judy(int n, int k,int ret)
//{
//	if (n < k)
//	{
//		ret += n;
//		int i = 0;
//		ret += n / k;
//		i = n / k;
//		int num = n % k;
//		n = i + num;
//		Judy(n, k, ret);
//	}
//	return ret;
//}
//#include <stdio.h>
//int main()
//{
//	int n = 0;
//	int k = 0;
//	scanf_s("%d %d", &n, &k);
//	int ret = 0;
//	ret = n + (n - 1) / (k - 1);
//	//int i = 0;
//	//do
//	//{
//	//	ret += n;//每次循环先加		
//	//	n = (n + i) / k;//再用n表示兑换后获得的烟。
//	//	 i = n % k;//i表示兑换后剩余的烟头
//	//} while (n < k ? 0 : 1);
//	//ret++;
//	printf("%d", ret);
//	return 0;
//}#return
//#include <stdio.h>
//
//int main()
//{
//	int n = 0;
//	scanf_s("%d", &n);
//	int i = 0;
//	int ret = 1;
//	int sum = 0;
//	for (i = 1; i <= n; i++)
//	{
//		ret = ret * i;
//		sum = sum + ret;
//	}
//	printf("%d", sum);
//	return 0;
//}
//#include <stdio.h>
//int main()
//{
//	int n = 0;
//	scanf_s("%d", &n);
//	int i = 0;
//	int N = 0;
//	for (i = 1; i <= 7; i++)
//	{
//		scanf_s("%d ", &N);
//	}
//	int k = 0;
//	for (i = 0; i < n; i++)
//	{
//		for (k = 0; k <= 8; k++)
//		{
//			scanf_s("%d ", &N);
//		}
//		printf("\n");
//	}
//
//	return 0;
//}
//#include <stdio.h>
//int main()
//{
//	int H = 0;
//	int M = 0;
//	scanf_s("%d%d", &H, &M);
//	M = M - 45;
//	if (M < 0)
//	{
//		H--;
//		M += 60;
//	}
//	if (H < 0)
//	{
//		H = 24 + H;
//	}
//	printf("%d %d", H, M);
//	return 0;
//}
//#include <stdio.h>
//int main()
//{
//	double n = 0;
//	scanf_s("%lf", &n);
//	double k = 2;
//	int num = 0;
//	do
//	{
//		n = n - k;
//		k = k * 0.98;
//		num++;
//	} while (n > 0);
//	printf("%d", num);
//	return 0;
//}