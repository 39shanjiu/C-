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
//#include <stdio.h>


/////符号匹配问题
//标准的入栈出栈问题
//有两种情况错误
//1.相对应的括号不匹配
//2.左右括号多余
//int main()
//{
//	bool isValid(char* s) {
//		int i;
//		if (strlen(s) == 1)//
//			return false;
//		int sz = strlen(s);
//		char* arr = malloc(sizeof(char*) * sz);//像内存申请char* sz的内存
//		if (sz % 2 == 1)//奇数肯定错
//			return false;
//		int count = 0;//标准的出栈入栈
//		for (i = 0; i < sz; i++)
//		{
//			if (s[i] == '(')//如果是左括号，则入对应的右括号（便于后面右括号匹配）
//			{
//				arr[count++] = ')';
//			}
//			else if (s[i] == '{')//注意count是后置--
//			{
//				arr[count++] = '}';
//			}
//			else if (s[i] == '[')
//			{
//				arr[count++] = ']';
//			}
//			else if (count == 0 || arr[count - 1] != s[i])
//				//如果是右括号，则与栈顶的左括号匹配（之前存右括号作用体现在这）
//				//这里解决情况1
//			{
//				return false;
//			}
//			else
//				count--;
//		}
//		if (count != 0)//如果count不为0，则表示左右括号溢出
//			//（count> 0，左括号溢出。count < 0，右括号溢出，不过右括号溢出会在上面判断时处理）
//			return false;
//		return true;
//
//	}
//}



////经典的双指针（快慢指针）题目
////题目是给了一个升序数组，要你去除重复的数字后再打印出来
////注意一旦有一个重复的数字去除后，后面的数字要到前面来
////这里用快慢指针
////一开始慢指针指向第一个元素，快指针指向第二个元素
////原理
////慢指针要遇到与快指针不同的数后才走
////这样保证慢指针经过的元素不会重复
//int removeDuplicates(int* nums, int numsSize) {
//	int i = 1;
//	int count = 0;
//	int k = 0;
//	while (i < numsSize) {
//		if (nums[k] == nums[i])//如果相等，就是有重复元素
//			//快指针走，且计数加一；
//		{
//			i++;
//			count++;
//		}
//		else//不相等，快慢指针都走
//		{
//			nums[k + 1] = nums[i];//将快指针的内容给慢指针
//			k++;
//			i++;
//		}
//	}
//
//	return numsSize - count;
//
//
//}
//#include <stdio.h>
//int main()
//{
//	int n;
//	scanf_s("%d", &n);
//	int arr[100] = { 0 };
//	int s = n;
//	while (s)
//	{
//		int N;
//		scanf_s("%d", &N);
//		s--;
//		arr[s] = N;
//	}
//	int i = 0;
//	int k = 1;
//	for (i = 0; i < n; i++)
//	{
//		for (k = 1; k < n; k++)
//		{
//			if (arr[k-1] > arr[k])
//			{
//				int ret = arr[k-1];
//				arr[k-1] = arr[k];
//				arr[k] = ret;
//			}
//		}
//	}
//	 i = 0;
//	 k = 1;
//	int count = 0;
//	while (k < n)
//	{
//		if (arr[i] == arr[k])
//		{	
//			k++;
//		count++;
//		}
//		else
//		{
//			arr[i + 1] = arr[k];
//			i++;
//			k++;
//		}
//	}
//	 n =n - count;
//	 printf("%d\n", n);
//	 for (i = 0; i < n; i++)
//	 {
//		 printf("%d ", arr[i]);
//	 }
//	 
//
//	return 0;
//}
//#include <stdio.h>
//int main()
//{
//	int prices[] = { 7,1,5,3,6,4 };
//	int len = sizeof(prices) / sizeof(prices[0]);
//	int i, k;
//	int max = 0;
//	int s1,s2;
//	for (i = len - 1; i >= 0; i--)
//	{
//		if (i != len - 1)
//		{
//			if (prices[s1] > prices[i])
//				continue;
//			else
//			{
//				if (i > s2)
//				{
//					max = prices[i] - prices[s2];
//				}
//			}
//		}
//		for (k = 0; k < i; k++)
//		{
//			int num = prices[i] - prices[k];
//			if (num > max)
//			{
//				max = num;
//				s2 = k;
//			}
//			s1 = i;
//
//		}
//	}
//	printf("%d", max);
//	return 0;
//}
#include <stdio.h>
//int main()
//{
//	int prices[] = {1,2};
//	int i = 0, k = 1;//
//	int max = 0;
//	int len = sizeof(prices) / sizeof(prices[0]);
//	while (k < len)
//	{
//		if(i < k)
//		{
//			if (prices[k] - prices[i] > max)
//			{
//				max = prices[k] - prices[i];
//
//			}
//			else if (prices[k] < prices[i])
//			{
//				i = k;
//	
//			}
//		}
//		k++;
//	}
//	printf("%d", max);
//	return 0;
//}
//int main()
//{
//	int arr[] = { 0,0,0,0,0,0,0,0,0 };
//	int n = 1;
//	int i = 0;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int count = 0;
//	int num = 0;
//	if (arr[0] == arr[1] && arr[0] == 0)
//	{
//		arr[0] = 1;
//		count++;
//	}
//	if (arr[sz-1] == arr[sz-2] && arr[sz-1] == 0)
//	{
//		arr[sz-1] = 1;
//		count++;
//	}
//	for (i = 0; i < sz; i++)
//	{
//		if (arr[i] == 0)
//			num++;
//		else {
//			num = 0;
//		}
//		if (num == 3)
//		{
//			num = 0;
//			count++;
//			i--;
//		}
//	}
//	printf("%d", count);
//	return 0;
//}
//int i = 0;
//int sz = sizeof(flowerbed) / sizeof(flowerbed[0]);
//int count = 0;
//if (flowerbed[0] == 0 && flowerbed[1] == 0 && sz <= 3)
//{
//	if (sz = 3) {
//		if (flowerbed[2] == 0)
//		{
//			return (2 >= n);
//		}
//	}
//	else {
//		return (1 >= n);
//	}
//
//}
//else if (flowerbed[0] == 0 && flowerbed[1] == 0)
//{
//	flowerbed[0] = 1;
//	count++;
//}
//for (i = 1; i < sz - 1; i++)
//{
//	if (flowerbed[i - 1] == 0 && flowerbed[i + 1] == 0 && flowerbed[i] != 1)
//	{
//		count++;
//		flowerbed[i] = 1;
//	}
//}
//if (count >= n)
//return true;
//else
//return false;
//}
//if (flowerbed[0] == flowerbed[1] && flowerbed[0] == 0)
//{
//	flowerbed[0] = 1;
//	count++;
//}
//if (flowerbed[flowerbedSize - 1] == flowerbed[flowerbedSize - 2] && flowerbed[flowerbedSize - 1] == 0)
//{
//	flowerbed[flowerbedSize - 1] = 1;
//	count++;
//}
//int num = 0;
//for (i = 0; i < flowerbedSize; i++)
//{
//	if (flowerbed[i] == 0)
//		num++;
//	else if (flowerbed[i] == 1)
//		num = 0;
//	if (num == 3)
//	{
//		count++;
//		num = 0;
//	}
//
//}



//简简单单一个种花问题，搞了怎么久，；离谱。
//int i = 0;
//int count = 0;
//if (flowerbedSize == 1)//判断只有一个位置的时候
//{
//	if (flowerbed[i] == 0)
//		return (n <= 1);
//	else
//		return n == 0;
//}
//if (flowerbedSize == 3)//判断有三个位子的时候
//{
//	if (flowerbed[1] == 1)
//		return (n == 0);
//	else
//	{
//		if (flowerbed[0] == 0 && flowerbed[2] == 0)
//		{
//			return (n <= 2);
//		}
//		else if (flowerbed[0] == 1 && flowerbed[2] == 1)
//			return (n == 0);
//		else
//			return (n <= 1);
//	}
//}
//if (flowerbed[0] == flowerbed[1] && flowerbed[0] == 0)//判断左右两边[0，0]的情况
//{
//	flowerbed[0] = 1;
//	count++;
//}
//if (flowerbed[flowerbedSize - 1] == flowerbed[flowerbedSize - 2] && flowerbed[flowerbedSize - 1] == 0)
//{
//	flowerbed[flowerbedSize - 1] = 1;
//	count++;
//}
//int num = 0;//用来记录连续水坑的数量
//for (i = 0; i < flowerbedSize; i++)
//{
//	if (flowerbed[i] == 0)//有水坑num+1
//		num++;
//	//遇到花水坑连续中断，num归零
//	else if (flowerbed[i] == 1) {
//		num = 0;
//	}
//	if (num == 3)//有三个连续的水坑，可以种花
//	{
//		count++;
//		num = 1;//第三个水坑还可以再利用
//	}
//}
//return (n <= count);
//}
//int main()
//{
//	int arr[] = { 1,0,0,0 };
//	int i, count = 0;
//	int num = 1;
//	for (i = 0; i < 4; i++)
//	{
//		if (arr[i] == 0)
//		{
//			num++;
//		}
//		else
//		{
//			num = 0;
//		}
//		if (num != 3&&i == 3)
//		{
//			num++;
//		}
//		if (num == 3)
//		{
//			count++;
//			num = 1;
//		}
//	}
//	printf("%d", count);
//	return 0;
//}
//int main()
//{
//	double x = -2.0;
//	int n = 10;
//	double num = x;
//	printf("%lf ",x * 0  );
//	if (x == -1)
//	{
//		int y = n % 2;
//		printf("%lf", y*x);
//	}
//		int flag = 1;
//	if (n < 0)
//	{
//		n = -n;
//		flag = -1;
//	}
//	if (n == 0)
//		return 1;
//	while (n >= 2)//4 5  ; 4*4 4
//	{
//		if ((n % 2) == 0)
//		{
//			x *= num;
//			n /= 2;
//			num *= num;
//		}
//		else
//		{
//			x *= num;			
//			n--;
//		}
//	}
//	if (flag == -1)
//		printf("%lf",1 / x) ;
//	printf("%lf", x);
//	return 0;
//}
//int main()
//{
//	int nums[] = { 2,3,1,1,0 };
//	int numsSize = 6;
//	/*if (nums[0] == 0)
//		return false;*/
//	int arr[30050] = { 0 };
//	int i = 0;
//	int count = 0;
//	for (i = 0; i < numsSize; i++)
//	{
//		if (nums[i] == 0)
//		{
//			arr[count] = i;
//			count++;
//		}
//	}
//	int ret = count;
//	count = 0;
//	for (i = 0; i < arr[count]; i++)
//	{
//		if (count >= ret)
//		{
//			printf("win");
//			break;
//
//		}
//		if (nums[i] > (arr[count] - i))
//		{
//			i = arr[count];
//			count++;
//		}
//		if (arr[count] == 0)
//		{
//			printf("win");
//		}
//		
//	}
//	printf("false");
//	return 0;
//}





//写了这么多，别人两三行解决，你明明也想到了那个点，但还是再复杂的道路上越走越远。
//bool canJump(int* nums, int numsSize) {
//	if (numsSize == 1)
//		return true;
//	if (nums[0] == 0)
//		return false;
//	int arr[30050] = { 0 };
//	int i = 0;
//	int count = 0;
//	if (nums[numsSize - 1] == 0)
//		nums[numsSize - 1] = 1;
//	for (i = 0; i < numsSize; i++)
//	{
//		if (nums[i] == 0)
//		{
//			arr[count] = i;
//			count++;
//		}
//	}
//	if (count == 0)
//		return true;
//	int ret = count;
//	count = 0;
//	for (i = 0; i < arr[count]; i++)
//	{
//		if (count >= ret)
//		{
//			return true;
//		}
//		if (nums[i] > (arr[count] - i))//2 > 1
//		{
//			int k = i;
//			for (k = i; k <= (i + nums[i]); k++)//k = 0
//			{
//				if (nums[k] >= (numsSize - 1 - k))//2+5-1-0>5    -- 2 > 5-1-0
//					return true;
//				else if (nums[k] > nums[i])
//				{
//					i = k;
//				}
//			}
//			while (ret - count)
//			{
//				if (nums[i] > (arr[count] - i))
//					count++;
//				else
//					break;
//			}
//			i = arr[count - 1];
//		}
//		if (arr[count] == 0)
//		{
//			return true;
//		}
//	}
//	return false;
//}
#include <stdio.h>
#include <string.h>
// 懂不懂一遍过的含金量啊（后仰）；
//int main()
//{
//	int nums[] = { 0,2,2,1,2,0,0,1 };
//	int numsSize = 8;
//	int l = 0;
//	int r = 7;
//	int i = 0;
//	int ret;
//	for (i = 0; i <= r; i++)
//	{
//		if (nums[i] == 0)
//		{
//			ret = nums[i];
//			nums[i] = nums[l];
//			nums[l] = ret;
//			l++;
//		}
//		if (nums[i] == 2)
//		{
//			ret = nums[i];
//			nums[i] = nums[r];
//			nums[r] = ret;
//			i--;
//			r--;
//		}
//	}
//	return 0;
//
//}
//int main()
//{
//	int divisor = 1;
//	int dividend = 1;
//	int flag = 1;
//	if (divisor < 0)
//	{
//		flag *= -1;
//		divisor = -divisor;
//	}
//	int i = 0;
//	if (dividend < 0)
//	{
//		dividend = -dividend;
//		flag *= -1;
//	}
//	int count = 0;
//	for (i = 1; i <= dividend; i++)
//	{
//		count = 0;
//		int num = 0;
//		int ret = divisor;
//		while (ret)
//		{
//			num += i;
//			ret--;
//		}
//		if (num <= dividend && (num + divisor) > dividend)
//		{
//			count = i;
//			break;
//		}
//	}
//	if (flag == -1)
//	return 0;
//}
//int divide(int dividend, int divisor) {
//	if (dividend == -2147483648 && divisor == -1)
//		return 2147483647;
//	if (dividend == -2147483648 && divisor == -2147483648)
//		return 1;
//	if (divisor == -2147483648)
//		return 0;
//	if (divisor == 1)
//		return dividend;
//	int flag = 1;
//	if (divisor < 0)
//	{
//		flag *= -1;
//		divisor = -divisor;
//	}
//	int i = dividend;
//	int num = divisor;
//	if (dividend < 0)
//	{
//		if (dividend == -2147483648)
//		{
//			dividend++;
//		}
//		dividend = -dividend;
//		flag *= -1;
//	}
//	int count = 0;
//	int ret = 1;
//	while (dividend >= divisor)
//	{
//		while (dividend - num > num)
//		{
//			num += num;
//			ret += ret;
//		}
//		dividend -= num;
//		count += ret;
//		ret = 1;
//		num = divisor;
//	}
//	if (i == -2147483648 && dividend + 1 == divisor)
//	{
//		count++;
//	}
//	if (flag == -1)
//		return (flag * count);
//	else
//		return count;
//
//}
//bool hasAlternatingBits(int n) {
//	int count = 0;
//	if (n % 2 == 1)
//	{
//		n /= 2;
//	}
//	while (n)
//	{
//		if (n % 2 != 0)
//			return false;
		/*else
			n /= 2;
		if (n % 2 != 1)
			return false;
		else
			n /= 2;
	}
	return true;
}*/
//int main()
//{
//	char ans[] = "TTTFFTFFT";
//	int lenth = strlen(ans);
//	int num[50000] = { 0 };
//	int i = 0;
//	int count = 1;
//	int k = 3;
//	int n = 0;
//	for (i = 1; i <= lenth; i++)
//	{
//		if (ans[i - 1] == ans[i])
//		{
//			count++;
//		}
//		else
//		{
//			num[n] = count;
//			n++;
//			count = 1;
//		}
//	}
//	 int j;
//	 int max1 = 0;
//	 for (i = 0; i < n; i++)//j代表的数是被消除的数
//	 {
//		 int max = 0;
//		 count = 0;//计入累计数与k相比
//		 for (j = i + 1; j + 1< n; j += 2)
//		 {
//			 if (k - count >= num[j])
//			 {
//				 max += num[j - 1] + num[j];
//				 count += num[j];
//			 }
//			 else
//			 {
//				 max += num[j - 1] + k - count;
//				 break;
//			 }
//		 }
//		 if (j == n)
//		 {
//			 max += num[j - 1] + k - count;
//		 }
//
//		 if (max1 < max)
//			 max1 = max;
//	 }
//	 printf("%d", max1);
	//int max2 = 0;
	//for (i = 1; i < n; i += 2)//j代表的数是被消除的数
	//{
	//	int max = 0;
	//	count = 0;//计入累计数与k相比
	//	for (j = i - 1; j + 1 < n; j += 2)
	//	{
	//		if (k - count > num[j])
	//		{
	//			max += num[j] + num[j + 1];
	//			count += num[j];
	//		}
	//		else
	//		{
	//			max += k - count;
	//			break;
	//		}
	//	}
	//	if (j == n)
	//	{
	//		max += num[j - 1];
	//	}
	//	if (max2 < max)
	//		max2 = max;
	//}
		//return 0;
//移动窗口问题
int main() {
#define MAX(a, b) ((a) > (b) ? (a) : (b))
	int judy(const char* answerKey, int k, char ch)
	{
		int n = strlen(answerKey);
		int right = 0;
		int left = 0;
		int sum = 0;
		int count = 0;
		for (right = 0; right < n; right++)
		{
			if (answerKey[right] != ch)
			{
				count++;
			}
			while (count > k)
			{
				if (answerKey[left] != ch)
				{
					count--;
				}
				left++;
			}
			sum = MAX(sum, right - left + 1);
		}
		return sum;
	}
	int maxConsecutiveAnswers(char* answerKey, int k) {
		int num1 = judy(answerKey, k, 'T');
		int num2 = judy(answerKey, k, 'F');
		return MAX(num1, num2);
	}
}