#include <stdio.h>
#include <string.h>
#include <stdlib.h>

//��ӡ�������
//   1
//  1 1
// 1 2 1
//1 3 3 1


//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int i = 0;
//	int j = 0;
//	int arr[100][100] = { 0 };
//	for (i = 1;i <= n;i++)
//	{
//		for (j = 1;j <= i;j++)
//		{
//			if (j == 1 || i == j)
//			{
//				arr[i][j] = 1;
//				printf("%d ", arr[i][j]);
//			}
//			else
//			{
//				arr[i][j] = arr[i - 1][j - 1] + arr[i - 1][j];
//				printf("%d ", arr[i][j]);
//			}
//		}
//		printf("\n");
//	}
//
//	return 0;
//}

//�����⣬������
//˼·��Ҫȥ����ÿһ����Ա�����ֵĿ���
//����1��

//int main()
//{
////	int killer = 1;
//	int i = 0;
//	int mur[4] = { 0 };
//	for (i = 0;i < 4;i++)
//	{
//		mur[i] = 1;
//		if (((mur[0] != 1) + (mur[2] == 1) + (mur[3] == 1) + (mur[3] != 1)) == 3)
//			break;
//		mur[i] = 0;
//	}
//	printf("%c\n", i + 'A');
//
//	return 0;
//}

//����2��

//int main()
//{
//	int killer = 0;
//	for (killer = 'A';killer <= 'D';killer++)
//	{
//		if ((killer != 'A') + (killer == 'C') + (killer == 'D') + (killer != 'D') == 3)
//			printf("%c\n", killer);
//	}
//}

//�����⣺��ˮ

//int main()
//{
//	int a = 0;
//	int b = 0;
//	int c = 0;
//	int d = 0;
//	int e = 0;
//	for (a = 1;a <= 5;a++)
//	{
//		for (b = 1;b <= 5;b++)
//		{
//			for (c = 1;c <= 5;c++)
//			{
//				for (d = 1;d <= 5;d++)
//				{
//					for (e = 1;e <= 5;e++)
//					{
//						if (((b==2) + (a==3) == 1) && ((b==2) + (e==4) == 1) && ((c==1) + (d==2) == 1) && ((e==4) + (a==1) == 1))
//						{
//							if (a != b && a != c && a != d && a != e && b != c && b != d && b != e && c != d && c != e && d != e)
//								printf("A:%dB:%dC:%dD:%dE:%d\n", a, b, c, d, e);
//						}
//					}
//				}
//			}
//		}
//	}
//	return 0;
//}

//int main()
//{
//	int a = 0;
//	int b = 0;
//	int c = 0;
//	int d = 0;
//	int e = 0;
//	for (a = 1;a <= 5;a++)
//	{
//		for (b = 1;b <= 5;b++)
//		{
//			for (c = 1;c <= 5;c++)
//			{
//				for (d = 1;d <= 5;d++)
//				{
//					for (e = 1;e <= 5;e++)
//					{
//						if (((b == 2) + (a == 3) == 1) && ((b == 2) + (e == 4) == 1) && ((c == 1) + (d == 2) == 1) && ((e == 4) + (a == 1) == 1))
//						{
//							if (a*b*c*d*e == 120)
//								printf("A:%dB:%dC:%dD:%dE:%d\n", a, b, c, d, e);
//						}
//					}
//				}
//			}
//		}
//	}
//	return 0;
//}

//����ð������

//void bubble_sort(int* arr, int sz)
//{
//	int i = 0;
//	int j = 0;
//	for (i = 0;i < sz - 1;i++)
//	{
//		for (j = 0;j < sz - 1 - i;j++)
//		{
//			if (arr[j] < arr[j + 1])
//			{
//				int tmp = arr[j];
//				arr[j] = arr[j + 1];
//				arr[j + 1] = tmp;
//			}
//		}
//	}
//}
//
//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	bubble_sort(arr, sz);
//	int i = 0;
//	for (i = 0;i < sz;i++)
//		printf("%d ", arr[i]);
//}

//qsort��ϰ-��ҵ

//struct PeopInfo
//{
//	char name[20];
//	int age;
//};
//
//int cmp_by_name(const void* e1, const void* e2)
//{
//	return strcmp(((struct PeopInfo*)e1)->name, ((struct PeopInfo*)e2)->name);
//}
//
//int cmp_by_age(const void* e1, const void* e2)
//{
//	return ((struct PeopInfo*)e1)->age - ((struct PeopInfo*)e2)->age;
//}
//
//int main()
//{
//	struct PeopInfo p[5] = { {"����",18},{"����",25},{"��һ",31},{"���",27},{"����",19} };
////	qsort(p, 5, sizeof(struct PeopInfo), cmp_by_name);
//	qsort(p, 5, sizeof(struct PeopInfo), cmp_by_age);
//	return 0;
//}

//bubble_sort��������������ģ��ʵ��

//int cmp_int(const void* e1, const void* e2)
//{
//	return *(int*)e1 - *(int*)e2;
//}
//
//void _swap(char* a, char* b, int width)
//{
//	while (width)
//	{
//		char tmp = *a;
//		*a = *b;
//		*b = tmp;
//		a++;
//		b++;
//		width--;
//	}
//}
//
//void bubble_sort(void* arr, int sz, int width, int(*cmp)(const void*, const void*))
//{
//	int i = 0;
//	int j = 0;
//	for (i = 0;i < sz - 1;i++)
//	{
//		for (j = 0;j < sz - 1 - i;j++)
//		{
//			//����>0����
//			if (cmp((char*)arr + j* width,(char*)arr+(j+1)*width) > 0)
//			{
//				_swap((char*)arr + j * width, (char*)arr + (j + 1)*width, width);
//			}
//		}
//	}
//}
//
//int main()
//{
//	int arr[10] = { 1,3,5,2,4,6,7,9,0,8 };
//	bubble_sort(arr, 10, sizeof(arr[10]), cmp_int);
//	int i = 0;
//	for (i = 0;i < 10;i++)
//		printf("%d ", arr[i]);
//	return 0;
//}