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
int comp(const void* e1,const void* e2)
{
	return (*(int*)e1 - *(int*)e2);
}
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

struct ListNode
{
    int val;
    struct ListNode* next;
};



//
//�ṹ��ָ�����ָͨ���治һ��
//��Ϊ�ṹ��ָ�����l -> val

struct ListNode* mergeTwoLists(struct ListNode* l1, struct ListNode* l2) {
    struct ListNode* head = (struct ListNode*)malloc(sizeof(struct ListNode)), *t = head;//����ܹ֣�������
    //*t�Ǹ��ṹ��ָ�룬������˽ṹ��head�ĵ�ַ������head��ָ����ŵ�˭��
    //*t����һ��ָ�룬���������Խ�����t->��->�н����õ����ã�����tͨ����ַ�ҵ���head
    while (l1 && l2)//
    {
        if (l1->val > l2->val)
        {
            t->next = l2;//������t->next��t�������ҵ���head�����������൱��head.next.
            //��Ҳ����Ϊʲô��󷵻ص���head��
            l2 = l2->next;//l2����Ҳ�Ǹ�ָ�룬�����൱��l2(ָ��) = l2.next.
        }
        else
        {
            t->next = l1;
            l1 = l1->next;
        }
        t = t->next;
    }
    if (l1 == NULL)
        t->next = l2;
    else
        t->next = l1;
    return head->next;
    //Ϊʲô���ﷵ�ص���head->next
    //��Ϊʲôhead->next��ʾ���Ǳ�ͷ
    //�ṹ��ָ����ʲô���ṹ��ָ��ͺ�intָ��һ������ֻ����Щ���͵�ָ�����
    //���ʴ�ŵĻ��ǵ�ַ��ֻ�����ṹ��ָ����Ѱ��ַ�ķ�����һ����
    //��������t��ʼ���ն��Ǵ�ŵĵ�ַ��
    //������Ҫ��������head����Ҳ�Ǹ�ָ��
    //t���ƶ���ÿ���ƶ�����t->next����ı䵱ǰ�ڵ��ָ����
}


int main()
{
    struct ListNode* l1;
    struct ListNode* l2;

    mergeTwoLists(l1, l2);
    return 0;
}