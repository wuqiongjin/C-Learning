#include <stdio.h>

//void Print(int* p, int sz)
//{
//	int i = 0;
//	for (i = 0;i < sz;i++)
//	{
//		printf("%d ", *(p + i));
//	}
//}
//
//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	Print(arr, sz);
//	return 0;
//}

//字符串逆序

//void Reverse_string(char* arr)
//{
//	char* left = arr;
//	char* right = arr;
//	while (*right++);
//	right-=2;
//
//	//while (*right)
//	//{
//	//	right++;
//	//}
//	//right--;
//
//	while (left < right)
//	{
//		char tmp = *left;
//		*left = *right;
//		*right = tmp;
//		left++;
//		right--;
//	}
//}
//
//int main()
//{
//	char arr[100];
//	gets(arr);
//	Reverse_string(arr);
//	printf("%s\n", arr);
//	return 0;
//}

//

//int main()
//{
//	int a;
//	scanf("%d", &a);
//	int sum = 0;
//	int k = 0;
//	scanf("%d", &k);
//	int i = 0;
//	for (i = 0;i < k;i++)
//	{
//		sum += a;
//		a = a + a * 10;
//	}
//	printf("%d", sum);
//	return 0;
//}

//水仙花数

//#include <math.h>
//int main()
//{
//	int i = 0;
//	for (i = 0;i <= 100000;i++)
//	{
//		int j = i;
//		int sum = 0;
//		int k = 0;
//		while (j)
//		{
//			j /= 10;
//			k++;
//		}
//		j = i;
//		while (j)
//		{
//			sum += pow(j % 10, k);
//			j /= 10;
//		}
//		if (sum == i)
//			printf("%d ", i);
//	}
//	return 0;
//}

//打印菱形

//int main()
//{
//	int n;
//	scanf("%d", &n);
//	int i = 0;
//	int j = 0;
//	for (i = 0;i < n;i++)
//	{
//		for (j = 0;j < n - i - 1;j++)
//		{
//			printf(" ");
//		}
//		for (j = 0;j < 2 * i + 1 ;j++)
//		{
//			printf("*");
//		}
//		printf("\n");
//	}
//	for (i = 0;i < n - 1;i++)
//	{
//		for (j = 0;j < i + 1;j++)
//		{
//			printf(" ");
//		}
//		for (j = 0;j < 2 * (n -1 -i) - 1 ;j++)
//		{
//			printf("*");
//		}
//		printf("\n");
//	}
//	return 0;
//}

//喝汽水问题

//int main()
//{
//	int money = 0;
//	int drinks = 0;
//	scanf("%d", &money);
//	if (0 == money)
//	{
//		printf("0\n");
//	}
//	else
//	{
//		printf("%d\n", 2 * money - 1);
//	}
//	return 0;
//}


//int main()
//{
//	int money = 0;
//	int empty = 0;
//	int drinks = 0;
//	scanf("%d", &money);
//	drinks = money;
//	empty = money;
//	while (empty >= 2)
//	{
//		//int ret = empty / 2;
//		//drinks += ret;
//		//empty %= 2;
//		//empty += ret;
//
//		drinks += empty / 2;
//		empty = empty / 2 + empty % 2;
//	}
//	printf("%d", drinks);
//	return 0;
//}
//

//int main()
//{
//	int i = 0;
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	for (i = 0; i <= 12; i++)
//	{
//		arr[i] = 0;
//		printf("hello bit\n");
//	}
//	return 0;
//}

//模拟实现strlen

//#include <assert.h>
//size_t my_strlen(const char* arr)
//{
//	assert(arr);
//	char* end = (char*)arr;
//	//将end指向\0处的下一个位置
//	while (*end++);
//	return --end - arr;//--end让end指向\0
//}
//
//int main()
//{
//	char arr[] = "abcedf";
//	printf("%d\n", my_strlen(arr));
//	return 0;
//}

//模拟实现strcpy

//#include <assert.h>
//char* my_strcpy(char* dest, const char* src)
//{
//	char* ret = dest;
//	assert(dest && src);
//	while (*dest++ = *src++);
//	return ret;
//}
//
//int main()
//{
//	char arr1[20] = "ABCD";
//	char arr2[] = "Hello bit!";
//	
//	printf("%s\n", my_strcpy(arr1, arr2));
//	return 0;
//}

//调整数组使奇数全部都位于偶数前面。

//#include <assert.h>
//void MovetoOdd(int* arr, size_t sz)
//{
//	assert(arr);
//	int* start = arr;
//	int* end = arr;
//	int i = sz - 1;
//	while (i--)
//		end++;
//
//	while (start < end)
//	{
//		while ( start < end)
//		{
//			if (!((*start) % 2))
//				break;
//			start++;
//		}
//		while (start < end)
//		{
//			if ((*end) % 2)
//				break;
//			end--;
//		}
//		if (start < end)
//		{
//			int tmp = *start;
//			*start = *end;
//			*end = tmp;
//			start++;
//			end--;
//		}
//		
//	}
//}
//
//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	MovetoOdd(arr, sz);
//	int i = 0;
//	for (i = 0;i < sz;i++)
//		printf("%d ", arr[i]);
//	return 0;
//}