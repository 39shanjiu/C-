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
//#include <stdio.h>
//int main()
//{
	/*int num = 0;
	scanf_s("%d", &num);
	int ret = num % 10;*/
//	if (num < 10 && num > -10)
//	{
//		printf("%d", num);
//	}
//	if (num < 100 && num > -100)
//	{
//		int ret = num / 10;
//		num = (num % 10) * 10 +  ret;
//		printf("%d", num);
//	}
//	if (num < 1000 && num > -1000)
//	{
//		int ret = num / 10;
//		num = (num % 10) * 10 + ret;
//		printf("%d", num);
//	}
//	return 0;
//}
//#include <stdio.h>
////#include <math.h>
//int My_pow(int y)
//{
//	int i = 0;
//	int num = 1;
//		for (i = 0; i < y; i++)
//		{
//			num *= 10;
//		}
//		return num;
//}
//int main()
//{
//	int num = 0;
//	scanf_s("%d", &num);
//	int i = 0;
//	int count = 0;
//	int num4 = num;
//	while (num4)
//	{
//		num4 /=  10;
//		count++;
//	}
//	int num3 = 0;
//	//printf("%d", count);
//	for (i = 1; i <= count; i++)
//	{
//		int s1 = num % My_pow(i);
//		int num1 = s1 / My_pow(i - 1);
//		int s2 = num / My_pow(count - 1);
//		int num2 = s2 % 10;
//		if (i != count)
//		{
//			num3 += num1 * My_pow(count - 1);
//			num3 += num2 * My_pow(i - 1);
//		}
//		else
//			num3 += num1 * My_pow(count - 1);
//		count--;
//	}
//	printf("%d", num3);
//	return 0;

//}*/
//#include <stdio.h>
//void Fbnq(int a,int n,int m,int x,int num)
//{
//	if (num < n)
//	{
//
//	}
//}
//#include <stdio.h>
//int main()
//{
//	int num = 1;
//	int a, n, m, x;
//	
//	scanf_s("%d%d%d%d", &a, &n, &m, &x);
//	int i, count = 1;
//	int num1, num2, num3, num4;
//	for (i = 0; i < n; i++)
//	{
//
//	}
//	return 0;
//}
//#include <stdio.h>
//#include <math.h>
//int main()
//{
//	int N, C;
//	scanf_s("%d%d", &N, &C);
//	int i = 0;
//	int arr[200000] = { 0 };
//	for (i = 0; i < N; i++)
//	{
//		int k = 0;
//		scanf_s("%d", &k);
//		arr[i] = k;
//	}
//	int k = 0;
//	int count = 0;
//	for (i = 0; i < N - 1; i++)
//	{
//		for (k = i+1; k < N; k++)
//		{
//			int ret = arr[i] - arr[k];
//			if (abs(ret) == C)
//			{
//				count++;
//			}			
//		}
//	}
//	printf("%d", count);
//	return 0;
//}
//#include <stdio.h>
//int main()
//{
//int* twoSum(int* nums, int numsSize, int target, int* returnSize) 
//	int i, j;
//	int* ret = NULL;
//	for (i = 0; i < numsSize; i++)
//	{
//		for (j = i + 1; j < numsSize; j++)
//		{
//			if (nums[i] + nums[j] == target)
//			{
//				ret = (int*)malloc(sizeof(int) * 2);
//				ret[0] = i;
//				ret[1] = j;
//				*returnSize = 2;
//				return ret;
//
//			}
//		}
//	}
//	*returnSize = 0;
//	return NULL;
//}
//#include <stdio.h>
//#include <math.h>
//int My_pow(int y)
//{
//	int i = 0;
//	int num = 1;
//	for (i = 0; i < y; i++)
//	{
//		num *= 10;
//	}
//	return num;
//}
//int main()
//{
//	int x;
//	scanf_s("%d", &x);
//	if (x < 0)
//	{
//		printf("false") ;
//	}
//	if (x >= 0 && x < 10)
//	{
//		printf("true");
//	}
//	int arr[10] = { 0 };
//	int count = 0;
//	if (x >= 10)
//	{
//
//		int x0 = x;
//		while (x0)
//		{
//			x0 /= 10;
//			count++;
//		}
//		int snum = count;
//		int i, k;
//		int ret = 0;
//		for (i = 0; i < count; i++)
//		{
//			int num1 = x / My_pow(count - 1);
//			arr[i] = num1 % 10;
//			int num2 = x % My_pow(i + 1);
//			arr[count - 1] = num2 / My_pow(i);
//			count--;
//			if (arr[i] == arr[count] && i != count)
//			{
//				ret++;
//			}
//		}
//		if (ret == snum / 2)
//		{
//			printf("true");
//		}
//	}
//	return 0;
//}
//#include <stdio.h>
//int main()
//{
//	int x = 0;
//	scanf_s("%d", &x);
//	int num = x, i, count = 0;
//	while (num) {
//		num /= 10;
//		count++;
//	}
//	int arr[10] = { 0 };
//	for (i = 0; i < count; i++) {
//		arr[i] = x % 10;
//		x /= 10;
//	}
//	for (i = 0; i < count; i++) {
//		if (arr[i] != arr[count - 1])
//		{
//			printf("false");
//		}
//		count--;
//	}
//
//      return 0;
//
//}
//#include <stdio.h>
//int main()
//{
//	int i = 0;
//	int k = 0;
//	for (i = 0; i < 10; i++)
//	{
//		for (k = 0; k < 10; k++)
//		{
//			break;
//		}
//	}
//	return 0;
	/*char* arr[] = { "flight","flow","flower" };
	char**p = arr;
	int i = 0;
	int sz = sizeof(arr) / sizeof(arr[0]);
	char arr1[10] = { 0 };
	for (i = 0; i < sz; i++)
	{
		if (*(p[i] + i) == *(p[i] + i + 1) && *(p[i] + i + 1) == *(p[i] + i + 2))
		{
			
			arr1[i] = p[i] + i;
		}
	}
	printf("%s\n", arr1);
	return 0;*/
//}





//

//
//查找，数组里字符串
//借鉴输入输出格式。
//#include <stdio.h>
//int main()
//{
//	char* longestCommonPrefix(char** strs, int strsSize) {
//		if (strsSize == 0)
//			return "";
//		int i, k;
//		int sz = strlen(strs[0]);
//		for (i = 0; i < sz; i++) {
//			for (k = 1; k < strsSize; k++) {
//				if (strs[0][i] != strs[k][i]) {
//					strs[0][i] = '\0';
//					break;
//				}
//
//			}
//			if (strs[0][i] == '\0')
//				break;
//		}
//		//END = 0;
//		return strs[0];
//
//	}
//}
//bool isValid(char* s) {
//	int i;
//	if (strlen(s) == 1)
//		return false;
//	int sz = strlen(s);
//	for (i = 1; i < sz; i++) {
//		if (s[i - 1] == '(' && s[i] != ')')
//		{
//			return false;
//			break;
//		}
//		else if (s[i - 1] == '[' && s[i] != ']')
//		{
//			return false;
//			break;
//		}
//		else if (s[i - 1] == '{' && s[i] != '}')
//		{
//			return false;
//			break;
//		}
//		else
//			i++;
//	}
//	return true;
//
//}
#include <stdio.h>


/////符号匹配问题
//标准的入栈出栈问题
//有两种情况错误
//1.相对应的括号不匹配
//2.左右括号多余
int main()
{
	bool isValid(char* s) {
		int i;
		if (strlen(s) == 1)//
			return false;
		int sz = strlen(s);
		char* arr = malloc(sizeof(char*) * sz);//像内存申请char* sz的内存
		if (sz % 2 == 1)//奇数肯定错
			return false;
		int count = 0;//标准的出栈入栈
		for (i = 0; i < sz; i++)
		{
			if (s[i] == '(')//如果是左括号，则入对应的右括号（便于后面右括号匹配）
			{
				arr[count++] = ')';
			}
			else if (s[i] == '{')//注意count是后置--
			{
				arr[count++] = '}';
			}
			else if (s[i] == '[')
			{
				arr[count++] = ']';
			}
			else if (count == 0 || arr[count - 1] != s[i])
				//如果是右括号，则与栈顶的左括号匹配（之前存右括号作用体现在这）
				//这里解决情况1
			{
				return false;
			}
			else
				count--;
		}
		if (count != 0)//如果count不为0，则表示左右括号溢出
			//（count> 0，左括号溢出。count < 0，右括号溢出，不过右括号溢出会在上面判断时处理）
			return false;
		return true;

	}
}