#include <stdio.h>
#include <string.h>

//BC118 ����ȥ������

//���������������ظ������ֵ���һ�����ָ��ǵ��ظ������ϣ��Ӷ������µ�����

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

//ţ�Ƶķ���������¼���ʱ��ͨ���±�����ݴ�С����¼�룬�Ӷ��ﵽȥ�غ�����Ľ�� ���о����ԣ�

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

//BC119�ַ���CHN����

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

//BC138 ������������ɾ���ڵ�

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

