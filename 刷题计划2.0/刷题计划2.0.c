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


//����ɶ���������ǡ�
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



//˫ָ��ⷨ��

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
// Ͱ����yyds  O��n��
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
////�ṹ��ָ�����ָͨ���治һ��
////��Ϊ�ṹ��ָ�����l -> val
//
//struct ListNode* mergeTwoLists(struct ListNode* l1, struct ListNode* l2) {
//    struct ListNode* head = (struct ListNode*)malloc(sizeof(struct ListNode)), *t = head;//����ܹ֣�������
//    //*t�Ǹ��ṹ��ָ�룬������˽ṹ��head�ĵ�ַ������head��ָ����ŵ�˭��
//    //*t����һ��ָ�룬���������Խ�����t->��->�н����õ����ã�����tͨ����ַ�ҵ���head
//    while (l1 && l2)//
//    {
//        if (l1->val > l2->val)
//        {
//            t->next = l2;//������t->next��t�������ҵ���head�����������൱��head.next.
//            //��Ҳ����Ϊʲô��󷵻ص���head��
//            l2 = l2->next;//l2����Ҳ�Ǹ�ָ�룬�����൱��l2(ָ��) = l2.next.
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
//    //Ϊʲô���ﷵ�ص���head->next
//    //��Ϊʲôhead->next��ʾ���Ǳ�ͷ
//    //�ṹ��ָ����ʲô���ṹ��ָ��ͺ�intָ��һ������ֻ����Щ���͵�ָ�����
//    //���ʴ�ŵĻ��ǵ�ַ��ֻ�����ṹ��ָ����Ѱ��ַ�ķ�����һ����
//    //��������t��ʼ���ն��Ǵ�ŵĵ�ַ��
//    //������Ҫ��������head����Ҳ�Ǹ�ָ��
//    //t���ƶ���ÿ���ƶ�����t->next����ı䵱ǰ�ڵ��ָ����
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