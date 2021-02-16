#include <stdio.h>
#include <string.h>

//BC118 序列去重问题


//笨方法。。。让重复的数字的下一个数字覆盖到重复数字上，从而产生新的数组

//#include <stdlib.h>
//int cmp(const void* a, const void* b)
//{
//	return *(int*)a - *(int*)b;
//}
//int main()
//{
//	int n;
//	scanf("%d", &n);
//	int i = 0;
//	int arr[100] = { 0 };
//	int k = 0;
//	int count = 0;
//	for (i = 0;i < n;i++)
//	{
//		scanf("%d", &arr[i]);
//	}
//	for (i = 0;i < n-count;i++)
//	{
//		int j = 0;
//		for (j = i + 1;j < n-count;j++)
//		{
//			if (arr[i] == arr[j])
//			{
//				for (k = j;k < n - count-1;k++)
//				{
//					arr[k] = arr[k + 1];					
//				}
//				count++;
//				j--;
//			}	
//		}
//
//	}
//	qsort(arr, n - count, sizeof(arr[0]), cmp);
//	for (i = 0;i <n-count ;i++)
//		printf("%d ", arr[i]);
//	return 0;
//}

//牛逼的方法，数据录入的时候，通过下标和数据大小进行录入，从而达到去重和排序的结果 （有局限性）

//int main()
//{
//	int n;
//	scanf("%d", &n);
//	int arr[100000] = { 0 };
//	int i = 0;
//	int max = 0;
//	int index = 0;
//	for (i = 0;i < n;i++)
//	{
//		scanf("%d", &index);
//		arr[index] = index;
//		if (index > max)
//			max = index;
//	}
//	for (i = 0;i <= max;i++)
//	{
//		if (arr[i] != 0)
//			printf("%d ", arr[i]);
//	}
//	return 0;
//}

//BC119字符串CHN个数

//int main()
//{
//	char arr[8000];
//	scanf("%s", arr);
//	char* p = arr;
//	long long c = 0;
//	long long ch = 0;
//	long long chn = 0;
//	while (*p != '\0')
//	{
//		if (*p == 'C')
//			c++;
//		if (*p == 'H')
//			ch += c;
//		if (*p == 'N')
//			chn += ch;
//		p++;
//	}
//	printf("%lld", chn);
//	return 0;
//}

//BC138 单向链表创建及删除节点

//#include <stdlib.h>
//struct Node
//{
//	int data;
//	struct Node* next;
//};
//void createlist(int n,struct Node* phead)
//{
////	struct Node* pmove = NULL;
//	int data = 0;
//	int i = 0;
//	while (i<n)
//	{
//		scanf("%d", &data);
//		struct Node* node = (struct Node*)malloc(sizeof(struct Node));
//		if (i == 0)
//			phead = node;
//		node->data = data;
//		node->next = NULL;
//		i++;
//	}
//}
//void printlist(struct Node* phead)
//{
//	while (phead!=NULL)
//	{
//		printf("%d ", phead->data);
//		phead++;
//	}
//}
//int main()
//{
//	struct Node* phead=NULL;
//	int n;
//	scanf("%d", &n);
//	createlist(n,&phead);
//	printlist(phead);
//	return 0;
//}

