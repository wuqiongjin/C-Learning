#include <stdio.h>

//整形数组冒泡排序

//void Bubble_sort(int* arr, int sz)
//{
//	int i = 0;
//	int j = 0;
//	for (i = 0;i < sz - 1;i++)
//	{
//		int flag = 1;
//		for (j = 0;j < sz - 1 - i;j++)
//		{
//			if (arr[j] > arr[j + 1])
//			{
//				int tmp = arr[j];
//				arr[j] = arr[j + 1];
//				arr[j + 1] = tmp;
//				flag = 0;
//			}
//		}
//		if (flag)
//			break;
//	}
//}
//
//int main()
//{
//	int arr[] = { 1,5,7,3,8,9,10,2,4,6 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	Bubble_sort(arr, sz);
//	int i = 0;
//	for (i = 0;i < sz;i++)
//		printf("%d ", arr[i]);
//	return 0;
//}

//设计一个数组的init(),print(),reverse()

//void init(int* arr, int sz)
//{
//	int i = 0;
//	for (i = 0;i < sz;i++)
//		arr[i] = 0;
//}
//
//void reverse(int* arr, int sz)
//{
//	int left = 0;
//	int right = sz - 1;
//	while (left < right)
//	{
//		int tmp = arr[left];
//		arr[left] = arr[right];
//		arr[right] = tmp;
//		left++;
//		right--;
//	}
//}
//
//void print(int* arr, int sz)
//{
//	int i = 0;
//	for (i = 0;i < sz;i++)
//		printf("%d ", arr[i]);
//}
//
//int main()
//{
//	int arr[10];
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	init(arr, sz);
//	reverse(arr, sz);
//	print(arr, sz);
//	return 0;
//}

//交换数组A和B中的内容

//void exchange(void* arr1, void* arr2, size_t n)
//{
//	while (n--)
//	{
//		char tmp = *(char*)arr1;
//		*(char*)arr1 = *(char*)arr2;
//		*(char*)arr2 = tmp;
//		++(char*)arr1;
//		++(char*)arr2;
//	}
//}
//
//int main()
//{
//	int arrA[] = { 1,3,5,7,9 };
//	int arrB[] = { 2,4,6,8,10 };
//	int count = sizeof(arrA);
//	exchange(arrA, arrB, count);
//	int i = 0;
//	for (i = 0;i < 5;i++)
//		printf("%d ", arrA[i]);
//	printf("\n");
//	for (i = 0;i < 5;i++)
//		printf("%d ", arrB[i]);
//	return 0;
//}