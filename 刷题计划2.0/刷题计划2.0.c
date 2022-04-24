//int main()
//{
//	int i, c = 0, num = 0, count = 0;
//	for (i = 6; i <= 10; i++)
//	{
//		int ret = i;
//		while (ret)
//		{
//			if (ret % 2 == 1)
//				c++;
//			ret /= 2;
//		}
//		if (c == 3 || c == 2 || c == 5 || c == 7 || c == 11 || c == 13 ||
//			c == 17 || c == 19 || c == 23 || c == 29 || c == 31)
//			count++;
//	}
//	printf("%d ", count);
//	return 0;
//}

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
//
//int comp(const void* e1,const void* e2)
//{
//	return (*(int*)e1 - *(int*)e2);
//}
//int main()
//{
//	int num[] = { 2,5,9,6,31,4,8,2,35,6 };
//	qsort(num,10,4,comp);
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d ", num[i]);
//	}
//
//	return 0;
//}


//遍历啥方法都不是。
//int main()
//{
   /* int ages[] = { 81,14,3,8,15,14,2,8,7,97 };
    int agesSize = 10;
    int i, count = 0;
    qsort(ages, agesSize, 4, comp);
    int ret = 0;*/
   /* for (i = agesSize - 1; i > 0; i--)
    {
        if (i != agesSize - 1 && ages[i] == ages[i + 1])
        {
            count += ret;
            continue;
        }
        else*/
//            ret = 0;
//        int right = i;
//        int left = 0;
//        int mid = (right + left) / 2;
//        int num = (ages[i] * 0.5 + 7);
//        if (ages[0] > num)
//        {
//            ret = i;
//            count += ret;
//            continue;
//        }
//        if (num < 14)
//            break;
//        while (left < right)
//        {
//            mid = (right + left) / 2;
//            if (ages[0] > num)
//            {
//                ret = i;
//                count += ret;
//                break;
//            }
//            else if (mid == 0)
//                break;
//            else if (ages[mid] > num && ages[mid - 1] <= num)
//            {
//                ret = i - mid;
//                count += (i - mid);
//                break;
//            }
//            else if (ages[mid] > num)
//                right = mid;
//            else if (ages[mid] <= num)
//                left = mid + 1;
//        }
//        
//    }
//    if (ages[0] == ages[1])
//        count += ret;
//	return 0;
//}



//双指针解法。

//int main()
//{
//    int ret = 0;
//    int ages[] = { 14,14,15,15,18,18 };
//    int agesSize = 6;
//    int left = 0, right = 0;
//    int i, count = 0;
//    qsort(ages, agesSize, 4, comp);
//    while (right < agesSize)
//    {
//        if (ages[right] < 15)
//        {
//            right++;
//            continue;
//        }
//        if (right != 0 && ages[right - 1] == ages[right])
//        {
//            ret += 2;
//            count += ret;
//            right++;
//            continue;
//        }
//        else
//            ret = 0;
//        while (left < right && ages[left] <= (0.5 * ages[right] + 7))
//            left++;
//        ret = right - left;
//        count += ret;
//        right++;
//
//    }
//	return 0;
//}
// 
// 
// 
// 桶排序yyds  O（n）
//
//int main()
//{
//    int ages[] = { 59,103,66,86,40,33,40,95};
//    int agesSize = sizeof(ages) / sizeof(ages[0]);
//    int i = 0, count = 0, sum = 0;
//    int arr[125] = { 0 };
//    for (i = 0; i < agesSize; i++)
//        arr[ages[i]]++;
//    for (i = 15; i < 125; i++)
//    {
//        if (arr[i] == 0)
//            continue;
//        count += (arr[i] * (
//
//struct ListNode
//{
//    int val;
//    struct ListNode* next;
//};
//
//
//
////
////结构体指针和普通指针真不一样
////因为结构体指针可以l -> val
//
//struct ListNode* mergeTwoLists(struct ListNode* l1, struct ListNode* l2) {
//    struct ListNode* head = (struct ListNode*)malloc(sizeof(struct ListNode)), *t = head;//这里很怪，看不懂
//    //*t是个结构体指针，它存放了结构体head的地址，但是head的指针域放的谁？
//    //*t本是一个指针，但是它可以解引用t->（->有解引用的作用）这样t通过地址找到了head
//    while (l1 && l2)//
//    {
//        if (l1->val > l2->val)
//        {
//            t->next = l2;//在这里t->next是t解引用找到了head，所以这里相当于head.next.
//            //这也就是为什么最后返回的是head。
//            l2 = l2->next;//l2本身也是个指针，这里相当于l2(指针) = l2.next.
//        }
//        else
//        {
//            t->next = l1;
//            l1 = l1->next;
//        }
//        t = t->next;
//    }
//    if (l1 == NULL)
//        t->next = l2;
//    else
//        t->next = l1;
//    return head->next;
//    //为什么这里返回的是head->next
//    //即为什么head->next表示的是表头
//    //结构体指针是什么，结构体指针就和int指针一样，它只是这些类型的指针而已
//    //本质存放的还是地址，只不过结构体指针找寻地址的方法不一样。
//    //所以在这t自始至终都是存放的地址。
//    //这里主要的问题是head本身也是个指针
//    //t在移动，每次移动它的t->next都会改变当前节点的指针域。
//}
//
//
//int main()
//{
//    struct ListNode* l1;
//    struct ListNode* l2;
//
//    mergeTwoLists(l1, l2);
//    return 0;
//}
//
//int main()
//{
//    char arr1[] = "abcd";
//    char arr2[] = "efg";
//    strcpy_s(arr2,3,arr2);
//    int n = 0;
//
//    return 0;
//}
//
//int main()
//{
//    char arr[201] = { '\0' };
//    char goal[] = "bbbacddceeb";
//    char s[] = "ceebbbbacdd";
//    int s1 = strlen(s);
//    int s2 = strlen(goal);
//    if (s1 != s2)
//        printf("false");
//    strcpy_s(arr, 32,goal);
//    strcpy_s(arr + s2,32, goal);
//    int i, k = 0;
//    for (i = 0; i <= 2 * s2; i++)
//    {
//        if (arr[i] == s[k])
//            k++;
//        else
//            k = 0;
//        if (k + 1 == s2)
//            printf("true");
//    }
//    return 0;
//}
//
//void Get_Next(char* s, char* next, int sz)
//{
//    int i = 0;
//    int k = 0;
//    next[0] = 0;
//    next[1] = 1;
//    for (i = 2; i < sz; i++)
//    {
//        if (k == 0 && s[k] != s[i - 1])
//        {
//            k++;
//            next[i] = 1;
//        }
//        else if (s[i - 1] == s[k])
//        {
//            k++;
//            next[i] = k + 1;
//        }
//        else
//        {
//            k = 0;
//            i--;
//        }
//    }
//}
//int rotateString(char* s, char* goal) {
//    int s1 = strlen(s);
//    int s2 = strlen(goal);
//    /*if (s1 != s2)
//        return 0;*/
//    char arr[24] = { '\0' };
//    strcpy_s(arr,12, goal);
//    strcpy_s(arr + s2,12, goal);
//    char next[11] = { '\0' };
//    //Get_Next(s, next, s1);
//    int i = 0;
//    int k = 0;
//    next[0] = 0;
//    next[1] = 1;
//    for (i = 2; i < s1; i++)
//    {
//        if (k == 0 && s[i - 1] != s[k])
//        {
//            next[i] = 1;
//        }
//        else if (s[i - 1] == s[k])
//        {
//            k++;
//            next[i] = k + 1;
//        }
//        else
//        {
//            k = 0;
//            i--;
//        }
//    }
//    //Get_Nextval(next,s,s1);
//    k = 0;
//    for (i = 0; i < (2*s2); i++)
//    {
//        if (k == 0 || arr[i] == s[k])
//        {
//            k++;
//        }
//        else 
//        {
//            k = next[k - 1];
//            i--;
//        }
//        if (k == s2)
//            return 1;
//    }
//    return 0;
//}
//int main()
//{
//    char goal[] = "bbbacddceeb";
//    char s[] = "ceebbbbacdd";
//    int k = rotateString(s, goal);
//    return 0;
//}


//
//void Get_comp(struct TreeNode* p, int num1, struct TreeNode* q, int num2, int* num)
//{
//    if (p == NULL && q != NULL)
//    {
//        *num = 0;
//        return;
//    }
//    if (p != NULL && q == NULL)
//    {
//        *num = 0;
//        return;
//    }
//    if (num1 != num2)
//    {
//        *num = 0;
//        return;
//    }
//    if (p == NULL && q == NULL)
//        return;
//    Get_comp(p->left, p->val, q->right, q->val, num);
//    Get_comp(p->right, p->val, q->left, q->val, num);
//}
//bool isSymmetric(struct TreeNode* root) {
//
//    int num = 1;
//    struct TreeNode* p = root->left;
//    struct TreeNode* q = root->right;
//
//    if (p == NULL && q != NULL)
//    {
//        return 0;
//    }
//    if (p != NULL && q == NULL)
//    {
//        return 0;
//    }
//    if (p == NULL && q == NULL)
//    {
//        return 1;
//    }
//    Get_comp(p, p->val, q, q->val, &num);
//    return num;
//
//}
//
//
//
//void Get_val(struct TreeNode* node, int num, int* count, int* sum)
//{
//    if (node)
//        (*count)++;
//    else
//        return;
//    if (num == node->val)
//        (*sum)++;
//    Get_val(node->left, num, count, sum);
//    Get_val(node->right, num, count, sum);
//}
//
//bool isUnivalTree(struct TreeNode* root) {
//    int count = 0, sum = 0;
//    Get_val(root, root->val, &count, &sum);
//    return count == sum;
//}








/*
ksjnch hkas*/ 
//
//int ForUnom(int n, int count)
//{
//    count = 0;
//    if (n >= 2)
//    {
//        int num = n;
//        count = 9;
//        int sum = 9;
//        while (num > 1)
//        {
//            count *= sum;
//            sum--;
//            num--;
//        }
//        count += ForUnom(n - 1, count);
//    }
//    return count;
//}

//int main()
//{
//    int n = 4;
//    int i = 0;
//    int count = 0;
//    count = ForUnom(n, count);
//    count += 10;
//    printf("%d ", count);
//    return 0;
//}
//
//int ForUnom(int n, int count)
//{
//    count = 0;
//    if (n >= 2)
//    {
//        int num = n;
//        count = 9;
//        int sum = 9;
//        while (num > 1)
//        {
//            count *= sum;
//            sum--;
//            num--;
//        }
//        count += ForUnom(n - 1, count);
//    }
//    return count;
//}
//
//int BP(int tm, int su)
//{
//    int count = 0;
//    if (tm > 1)
//    {
//        count = 9;
//        while (--su)
//        {
//            int sum = 8;
//            count *= sum;
//            sum--;
//        }
//        count *= (tm - 1);
//        return (count += ForUnom(su, count));
//    }  
//}
//
//
//int main()
//{
//    int n = 9999;
//    int nn = n;
//    int num = nn;
//    int tm;
//    int su = 0;
//    while (num)
//    {
//        tm = num % 10;
//        num /= 10;
//        su++;
//    }
//    int count = 0;
//    int i = 0;
//    for (i = 1; i <= tm; i++)
//    {
//        if (i == 1)
//            count += ForUnom(su + 1, count);
//        else
 /*           count += BP(i, su);
    }
    return 0;
}*/
//
//
//int main()
//{
//    int n = 9999;
//    int nn = n;
//    int sum = 0;//记录是第几次递推。
//    while (nn)//每次递推首位
//    {
//        int nnnn = nn;//用做判断递推时前面与后面的关系
//        int nnn = nn;//nnn每次用作数据处理
//        int tm;//记录最高位
//        int su = 0;//记录tm是10的几次方。 
//        //实现部分
//        while (nnn)
//        {
//            tm = nnn % 10;
//            nnn /= 10;
//            su++;
//        }
//        if (sum != 0)
//        {
//            int sumx = sum;
//            while()
//
//        }
//
//        //实现nn的递推。 
//
//
//
//    }
//    return 0;
//}

//
//int main()
//{
//    int n = 9999;
//    int i = 0;
//    int su = 10;
//    for (i = n; i > 0; i--)
//    {
//        if (i % su == 0)
//        {
//
//        }
//    }
//    return 0;
//}
//
//
//int ForUnom(int n, int count)
//{
//    count = 0;
//    if (n >= 2)
//    {
//        int num = n;
//        count = 9;
//        int sum = 9;
//        while (num > 1)
//        {
//            count *= sum;
//            sum--;
//            num--;
//        }
//        count += ForUnom(n - 1, count);
//    }
//    return count;
//}
//
//int BPOneself(int num)
//{
//    int count = 0;
//    while (num > 10)
//    {
//        int s1 = num % 10;
//        int s2 = num / 10;
//        while (s2)
//        {
//            int s3 = s2 % 10;
//            if (s1 == s3)
//                count = 1;
//            s2 /= 10;
//        }
//        num /= 10;
//    }
//    return count;
//}
//
//
//
//int Suoha(int n,int su,int suuu)
//{
//    n /= su;
//    int count = 1;
//    if (n > 1)
//    {       
//        int sum = 9;
//        int suu = su;
//        while (suu > 1)
//        {
//            count *= sum--;
//            suu /= 10;
//
//        }
//        if (n != 1)
//            count *= (n - 1);
//        n = 1;       
//    }  
//    if (n == 1)
//    {
//        count += ForUnom(suuu, count);
//    }
//    return count;
//}
//
//int main()
//{
//    int n = 949000000;
//    int i = 0;
//    int count = 0;
//    int su = 1;
//    int nn = n / 10;
//    int suu = 0;
//    while (nn)
//    {
//        nn /= 10;
//        su *= 10;
//        suu++;
//    }
//    if (n > 100000000)
//    {
//        while(n > 100000000)
//        {
//            if (n % 10000000 == 0)//8
//            {
//                int num = n / 10000000;//7
//                num %= 10;
//                int num2 = n / 100000000;//8
//                int sum = 0;
//                if (num <= num2 && num != 1)
//                {
//                    sum = (num - 1) * 8 * 7 * 6 * 5 * 4 * 3 * 2;
//                }
//                else if (num > num2 && num > 2)
//                    sum = (num - 2) * 8 * 7 * 6 * 5 * 4 * 3 * 2;
//                else if (num > num2)
//                    sum = 0;
//                count += (((num - 1) * 10000000) - sum);
//               n -= (num - 1) * 10000000;
//                break;
//            }
//
//            int flag = BPOneself(i);
//            if (flag == 1)
//                count++;
//            n--;
//        }
//    }
//    for (i = n; i > 10; i--)
//    {
//        if (i > 100000000 && i % 10000000 == 0)//8
//        {
//            int num = i / 10000000;//7
//            num %= 10;
//            int num2 = i / 100000000;//8
//            int sum = 0;
//            if (num <= num2 && num != 1)
//            {
//                sum = (num - 1) * 8 * 7 * 6 * 5 * 4 * 3 * 2;
//            }
//            else if (num > num2 && num > 2)
//                sum = (num - 2) * 8 * 7 * 6 * 5 * 4 * 3 * 2;
//            else if (num > num2)
//                sum = 0;
//            count += (((num - 1) * 10000000) - sum);
//            i -= (num - 1) * 10000000;
//        }
//        if (i % su == 0 && i > 100)
//        {
//           int b = Suoha(i,su,suu);
//           count += (i - b) -9;
//           if (i == su)
//               count++;
//           break;
//        }
//        else
//        {
//            int flag = BPOneself(i);
//            if (flag == 1)
//                count++;
//        }
//    }
//    printf("%d ", count);
//    return 0;
//}


//int main()
//{
//    int M, S, T;
//    scanf_s("%d%d%d", &M, &S, &T);
//    int t = T;
//    int s = S;
//    while (M >= 2 && T > 0 && S > 34)
//    {
//        if (S <= 51 && M <= 6)
//        {
//            break;
//        }
//        if (M >= 10)
//        {
//            T--;
//            S -= 60;
//            M -= 10;
//        }
//        else
//        {
//            T--;
//            M += 4;
//        }
//    }
//    if (T > 0 && S > 0)
//    {
//        int count = 0;
//        for (T; T > 0; T--)
//        {
//            if (S > 0)
//            {
//                S -= 17;
//                count++;
//                if (count == 7)
//                {
//                    S -= 1;
//                    count = 0;
//                }
//            }
//            else
//                break;
//       }
//    }
//    if (T >= 0 && S <= 0)
//    {
//        printf("Yes\n%d", t - T);
//    }
//    else if (S > 0)
//    {
//        printf("No\n%d", s - S);
//    }
//    
//
//
//    return 0;
   /* while (T && S)
    {
        if (M >= 10)
        {
            S -= 60;
            T--;
        }
        else if (M < 2 && S >= 120)
        {
            T -= 7;
            S -= 120;
        }
        else if (S >= 51 && M >= 2 && M < 6)
        {
            T -= 3;
            S -= 60;
            M -= 2;
        }
        else if (S > 34 && M >= 6)
        {
            T -= 2;
            S -= 60;
            M -= 6;
        }
    }*/
    
 /*
int main()
{
    int N;
    scanf_s("%d", &N);
    int i = 0;
    int num = 1;
    for (i = 1; i <= N; i++)
    {
        if (i % 10 == 0)
            continue;
        num *= (i % 10);
        if (num % 10 == 0)
            num /= 10;
        num %= 100000000;
    }
    printf("%d", num % 10);
    return 0;
    }*/


#define MAX(a,b) (a > b ? a : b)


//
//int main()
//{
//    char s[] = "";
//    int b = strlen(s);
//    int i = 0;
//    int count = 0;
//    int max = 0;
//    int arr[26] = { 0 };
//    for (i = 0; i < strlen(s); i++)
//    {
//        arr[s[i] - 'a']++;
//        if (arr[s[i] - 'a'] != 1)
//        {
//            i -= count;
//            count = 0;
//            memset(arr, 0, sizeof(arr));
//        }
//        else
//            count++;
//        max = MAX(max, count);
//        if (max == 26)
//            break;
//    }
//    return 0;
//}
//
//int main()
//{
//    char s[] = "dvdf";
//    int count = 0;
//    int arr[128] = { 0 };
//
//    int sz = strlen(s);
//    int left = 0, right = 0;    int max = 0;
//    while (right < strlen(s))
//    {
//        arr[s[right]]++;
//        if (arr[s[right]] != 2)
//        {
//            right++;
//            count++;
//        }
//        else
//        {
//            while (arr[s[right]] == 2)
//            {
//                arr[s[left]]--;
//                count--;
//                left++;
//            }
//            if (left == right)
//                count = 1;
//            right++;
//        }
//        max = MAX(max, count);
//    }
//    if (arr[s[right - 1]] == 1)
//        count++;
//    max = MAX(max, count);
//    printf("%d ", max);
//    return 0;
//}
//
//int main()
//{
//    int a = 2;
//    int b = 3;
//    float c = (float)(a + b) / 2;2116161651631
//    printf("%f", c);
//    return 0;
//}

//int main()
//{
//    int N = 0;
//    scanf_s("%d", &N);
//    int arr1[5005] = { 0 };
//    int i = 0;
//    while (i < N)
//    {
//        int k = 0;
//        scanf_s("%d", &k);
//        arr1[i++] = k;
//    }
//    int k = N;
//    while (k)
//    {
//        int arr2[5005] = { 0 };
//        for (i = 0; i < N; i++)
//        {
//            arr2[arr1[i] % k]++;
//            if (arr2[arr1[i] % k] == 2)
//                break;
//        }
//        if (i == N)
//            break;
//        memset(arr2, 0, sizeof(arr2));
//        k++;
//       
//    }
//    printf("%d", k);
//    return 0;
//}
#include <math.h>
//
//char* judy(int num)
//{
//    int flag = 1;
//    if (num < 0)
//    {
//        flag = 0;
//        num = -num;
//    }
//    int ret = 1;
//    int num2 = num;
//    while (num2)
//    {
//        num2 /= 7;
//        ret++;
//    }
//    char* sum = (char*)malloc(sizeof(char) * ret);
//    if (sum == NULL)
//    {
//        return;
//    }
//    while (num)
//    {
//        int a = num % 7;
//       sum[ret - 1] = a + '0';
//        ret--;
//        num /= 7;
//    }
//    if (flag == 0)
//    {
//        sum[0] = '-';
//        return sum;
//    }
//    else
//        return sum + 1;
//}
//
//int main()
//{
//
//    int num = -49;
//    char* sum = 0;
//    sum = judy(num);
//    return 0;
//}
//
//int main()
//{
//    int nums[7] = {3,3,7,7,10,11,11};
//    int numsSize = 7;
//    if (numsSize == 1)
//        return nums[0];
//    int right = numsSize - 1;
//    int left = 0;
//    int mid = 0;
//    while (left < right)
//    {
//        mid = (left + right) / 2;
//        if (mid % 2 == 1)
//        {
//            if (nums[mid] == nums[mid - 1])
//                left = mid;
//            else if (nums[mid] == nums[mid + 1])
//                right = mid;
//            else
//                break;
//        }
//        else if (mid % 2 == 0)
//        {
//            if (nums[mid] == nums[mid + 1])
//
//                left = mid;
//            else if (nums[mid] == nums[mid - 1])
//                right = mid;
//            else
//                break;
//        }
//    }
//    printf("%d ", nums[mid]);
//    return 0;
//}
//
//int main()
//{
//    int i;//
//    int j;//
//    int n;//
//    scanf_s("")
//} 
//
//
//#define MIN(a,b) ((a) > (b) ? b : a)
//
//int main()
//{
//    char s[] = "loveleetcode";
//    char c = 'e';
//    int arr[10] = { 0 };
//    int i = 0;
//    int rear = 0;
//    int ans[20] = { 0 };
//    for (i = 0; i < strlen(s); i++)
//    {
//        if (s[i] == c)
//        arr[rear++] = i;
//    }
//    int front = 0;
//    for (i = 0; i <= arr[front]; i++)
//    {
//        arr[i] = arr[front] - i;
//    }
//    front++;
//    for (i; i < strlen(s); i++)
//    {
//        if (i < arr[front])
//        {
//            int a = i - arr[front - 1];
//            int b = arr[front] - i;
//            int c = MIN(a, b);
//            ans[i] = c;
//        }
//        else
//        {
//            ans[i] = 0;
//            front++;
//        }
//    }
//    return 0;
//}
//
//int countCollisions(char* directions) {
//    int sz = strlen(directions);
//    if (sz <= 1)
//        return 0;
//    int count = 0;
//    int i = 0;
//    for (i = 1; i < sz; i++)
//    {
//        if ((directions[i - 1] == 'R' && directions[i] == 'L'))
//        {
//            count += 2;
//            directions[i] = 'S';
//        }
//        else if ((directions[i - 1] == 'R' && directions[i] == 'S') || (directions[i] == 'L' && directions[i - 1] == 'S'))
//            count += 1;
//    }
//    return count;
//}
//
//int main()
////{
//    char s[] = "RLRSLL";
//    int a = countCollisions(s);
//    printf("%d", a);
//    return 0;
//}
//int countCollisions(char* directions) {
//    int sz = strlen(directions);
//    if (sz <= 1)
//        return 0;
//    int count = 0;
//    int i = 0;
//    for (i = 1; i < sz; i++)
//    {
//        if ((directions[i - 1] == 'R' && directions[i] == 'L'))
//        {
//            count += 2;
//            directions[i] = 'S';
//            directions[i - 1] = 'S';
//        }
//        else if (directions[i - 1] == 'R' && directions[i] == 'S')
//        {
//            count += 1;
//            directions[i - 1] = 'S';
//        }
//        else if (directions[i] == 'L' && directions[i - 1] == 'S')
//        {
//            count += 1;
//            directions[i] = 'S';
//        }
//    }
//    for (i = sz - 2; i >= 0; i--)
//    {
//        if (directions[i] == 'R' && directions[i + 1] == 'S')
//        {
//            count += 1;
//            directions[i] = 'S';
//        }
//        else if (directions[i + 1] == 'L' && directions[i] == 'S')
//        {
//            count += 1;
//            directions[i + 1] = 'S';
//        }
//    }
//    return count;
//}
//int maximumCandies(int* candies, int candiesSize, long long k) {
//    long long count = 0;
//    long long sum = 0;
//    int i = 0;
//    for (i = 0; i < candiesSize; i++)
//    {
//        sum += (long long)candies[i];
//    }
//    if (sum < k)
//        return 0;
//    if (sum == k)
//        return 1;
//    count = sum / k;
//    long long left = 1;
//    long long right = count;
//    long long mid = left + (right - left) / 2;
//    long long max = mid;
//    while (left < right)
//    {
//        count = 0;
//        mid = left + (right - left) / 2;
//        for (i = 0; i < candiesSize; i++)
//        {
//            count += (long long)candies[i] / mid;
//        }
//        if (count <= k)
//            right = mid;
//        else
//        {
//            left = mid + 1;
//        }
//    }
//    return left - 1;
//}
//
//#define intLength 3
//
//int main()
//{
//    int queries[6] = { 1,2,3,4,5,90 };
//    int queriesSize = sizeof(queries) / sizeof(queries[0]);
//    long long num = 1;
//    int len = intLength / 2;
//    while (len)
//    {
//        num *= 10;
//        len--;
//    }
//    if (intLength % 2 != 1)
//        num /= 10;
//    int i = 0;
//    long long snum = num * 9;
//    long long* ans = (long long*)malloc(sizeof(long long) * queriesSize);
//    for (i = 0; i < queriesSize; i++)
//    {
//        if (queries[i] > snum)
//            ans[i] = -1;
//        else
//          ans[i] = num + queries[i] - 1;
//        if (ans[i] != -1)
//        {
//            int qx = 1;
//            long long sum = 0;
//            long long ssnum = ans[i];
//            if (intLength % 2 == 1)
//                ssnum /= 10;
//            while (ssnum)
//            {
//                int a = ssnum % 10;
//                sum += a;
//                sum *= 10;
//                qx *= 10;
//                ssnum /= 10;
//            }
//            sum /= 10;
//            ans[i] *= qx;
//            ans[i] += sum;
//        }
//    }
//    for (i = 0; i < 6; i++)
//    {
//        printf("%d ", ans[i]);
//    }
//    return 0;
//}
//
//long long numberOfWays(char* s) {
//    long long count0 = 0;
//    long long count1 = 0;
//    long long scount0 = 0;
//    long long scount1 = 0;
//    long long n0 = 0;
//    long long n1 = 0;
//    int i = 0;
//    int sz = strlen(s);
//    long long arr[100005] = { 0 };
//    int rear = 0;
//    arr[rear]++;
//    for (i = 1; i < sz; i++)
//    {
//        if (s[i - 1] == s[i])
//            arr[rear]++;
//        else
//            arr[++rear]++;
//    }
//    if (rear < 2)
//        return 0;
//    n0 = arr[0];
//    n1 = arr[1];
//    for (i = 2; i <= rear; i++)
//    {
//        if (i % 2 == 0)
//        {
//            count0 += (n0 * arr[i - 1] + scount0) * arr[i];
//            scount0 += n0 * arr[i - 1];
//            n0 += arr[i];
//        }
//        else
//        {
//            count1 += (n1 * arr[i - 1] + scount1) * arr[i];
//            scount1 += n1 * arr[i - 1];
//            n1 += arr[i];
//        }
//    }
//    return count1 + count0;
//},

/*int comp(const void* e1, const void* e2)
{
    if (((int*)e1)[0] < ((int*)e2)[0])
        return -1;
    else if (((int*)e1)[0] == ((int*)e2)[0])
    {
        return (((int*)e1)[1] - ((int*)e2)[1]);
    }
    else
        return 1;
}

int main()
{
    int arr[4][2] = { {2,4},{3,2},{1,6} ,{2,5} };
    qsort(arr, 4, sizeof(int) * 2, comp);
    int a = 0;

    */

#define MAX(a,b) (a > b ? a : b)
//int main()
//{
//    char s[] = "()(()()()()()(()()(((()()))((((((((((((((((((((((((((()))))()()((()()()()()()()()()()()()()()()())((((((((())))))))(((((((()()()()()(()((()(()()(()()()((((((((((((((((()))(())(()())()(()()()()()()()()";
//    int sz = strlen(s);
//    int i = 0;
//    int max = 0;
//    int count = 0;
//    if (sz <= 1)
//        return 0;
//    int stk = 0;
//    int num = 0;
//    int scount = 0;
//    for (i = 0; i < sz; i++)
//    {
//        if (s[i] == '(')
//            stk++;
//        else
//        {
//            if (stk != 0)
//            {
//                stk--;
//                count += 2;
//                if (stk == 0)
//                {
//                    scount += count;
//                    count = 0;
//                }
//            }
//            else
//            {
//                scount = 0;
//                count = 0;
//            }
//        }
//        max = MAX(max, scount);
//    }
//    max = MAX(max, count);
//    return 0;
//}

//int main()
//{
//    int nums[7] = { 5,3,2,2,4,0,6 };
//    int numsSize = 7;
//    int k = 4;
//    int i = 0;
//    int rear = 0;
//    int max = 0;
//    if (numsSize == 1 && k % 2 == 1)
//        return -1;
//    for (i = 0; i < k; i++)
//    {
//        if (rear < numsSize - 1)
//            max = MAX(max, nums[rear++]);
//        else
//            break;
//    }
//    return 0;
//}


void DFSpluse(char grid[3][3], int l, int i, int j, char c)
{
    if (grid[i][j] != c)
        return;
    grid[i][j] = '6';
    int sz2 = sizeof(grid[i]);
    if (i > 0)
    {
        int sz1 = sizeof(grid[i - 1]);
        if (j < sz1)
            DFSpluse(grid, l, i - 1, j, c);
    }
    if (i + 1 < l)
    {
        int sz1 = sizeof(grid[i + 1]);
        if (j < sz1)
            DFSpluse(grid, l, i + 1, j, c);
    }
    if (j > 0)
        DFSpluse(grid, l, i, j - 1, c);
    if (j + 1 < sz2)
        DFSpluse(grid, l, i, j + 1, c);

}


void DFS(char grid[3][3], int l, int i, int j, int* count, char c)
{
    if (grid[i][j] != c)
        return;
    *count += 1;
    grid[i][j] = '6';
    int sz2 = sizeof(grid[i]);
    if (i > 0)
    {
        int sz1 = sizeof(grid[i - 1]);
        if (j < sz1)
            DFS(grid, l, i - 1, j, count, c);
    }
    if (i + 1 < l)
    {
        int sz1 = sizeof(grid[i + 1]);
        if (j < sz1)
            DFS(grid, l, i + 1, j, count, c);
    }
    if (j > 0)
        DFS(grid, l, i, j - 1, count, c);
    if (j + 1 < sz2)
        DFS(grid, l, i, j + 1, count, c);
}


int largestArea(char grid[3][3], int gridSize) {
    int i = 0;
    int j = 0;
    for (i = 0; i < gridSize; i++)
    {
        int sz = sizeof(grid[i]);
        for (j = 0; j < sz; j++)
        {
            if (grid[i][j] == '6')
                continue;
            if (i == 0 || j == 0 || i + 1 == gridSize || j + 1 == sz)
            {
                if (grid[i][j] != '0')
                {
                    char c = grid[i][j];
                    DFSpluse(grid, gridSize, i, j, c);
                }
            }
            if (grid[i][j] == '0')
            {
                if (i > 0)
                {
                    int sz1 = sizeof(grid[i - 1]);
                    if (j < sz1 && grid[i - 1][j] != '0' && grid[i - 1][j] != '6')
                    {
                        char c = grid[i - 1][j];
                        DFSpluse(grid, gridSize, i - 1, j, c);
                    }
                }
                if (i + 1 < gridSize)
                {
                    int sz1 = sizeof(grid[i + 1]);
                    if (j < sz1 && grid[i + 1][j] != '0' && grid[i + 1][j] != '6')
                    {
                        char c = grid[i + 1][j];
                        DFSpluse(grid, gridSize, i + 1, j, c);
                    }
                }
                if (j > 0 && grid[i][j - 1] != '0' && grid[i][j - 1] != '6')
                {
                    char c = grid[i][j - 1];
                    DFSpluse(grid, gridSize, i, j - 1, c);
                }
                if (j + 1 < sz && grid[i][j + 1] != '0' && grid[i][j + 1] != '6')
                {
                    char c = grid[i][j + 1];
                    DFSpluse(grid, gridSize, i, j + 1, c);
                }
            }
        }
    }
    int count = 0;
    int max = 0;
    for (i = 0; i < gridSize; i++)
    {
        int sz = sizeof(grid[i]);
        for (j = 0; j < sz; j++)
        {
            if (grid[i][j] != '0' && grid[i][j] != '6')
            {
                char c = grid[i][j];
                DFS(grid, gridSize, i, j, &count, c);
                if (count > max)
                max = count;
                count = 0;
            }
        }
    }
    return max;
}


int main()
{
    char grid[][8] = { "110","231","221" };
    int gridSize = 3;
    int a = largestArea(grid, gridSize);
    printf("%d", a);
    return 0;
}