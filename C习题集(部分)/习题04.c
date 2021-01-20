#include <stdio.h>
#include <string.h>

//逆序打印一组数

//int main()
//{
//	int arr[10] = { 0 };
//	int i = 0;
//	while (i<10)
//	{
//		scanf("%d ", &arr[i++]);
//	}
//	for (i = 9;i >= 0;i--)
//		printf("%d ", arr[i]);
//	return 0;
//}

//测试%和/的运算规律

//int main()
//{
//	int i = 0;
//	for (i = 10000;i <= 99999;i++)
//	{
//		if (i == (i % 10) * (i / 10 )+( i % 100) *( i / 100) + (i % 1000) * (i / 1000) + (i % 10000 )* (i / 10000))
//			printf("%d ", i);
//	}
//	return 0;
//}

//int main()
//{
//	int i = 655;
//	int a = i % 10*(i/10)+i%100*(i/100);//327+360=687
//	int b = (i % 10)* (i / 10) + (i % 100)*(i / 100);
//	printf("a+b=%d,c=%d", a, b);
//	return 0;
//}



//int main()
//{
//	long long int age = 20;
//	printf("%lld\n", (long long int)31560000*age);
//	printf("%lld\n", (long long int)age * 3.156e7);
//	return 0;
//}

//lld？？？？？

//#include <stdio.h>
//int main() {
//	long long int age;
//	scanf("%lld", &age);
//	printf("%lld\n", 31560000 * age);
//	return 0;
//}

//int main()
//{
//
//	int age;
//	long int b;
//	scanf("%d", &age);
//	b = age * 3.156e7;
//	printf("%ld", b);
//
//	return 0;
//}

//选择排序

//void Select_sort(int arr[], int sz)
//{
//	int i, j = 0;
//	for (i = 0;i < sz;i++)
//	{
//		int min = i;
//		for (j = i+1;j < sz;j++)
//		{
//			if (arr[j] < arr[min])
//				min = j;
//		}
//		if (arr[i] > arr[min])
//		{
//			int tmp = arr[i];
//			arr[i] = arr[min];
//			arr[min] = tmp;
//		}
//	}
//}
//int main()
//{
//	int arr[] = { 10,9,8,7,6,5,4,3,2,1 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	Select_sort(arr,sz);
//	int i = 0;
//	for (i = 0;i < sz;i++)
//		printf("%d ", arr[i]);
//	return 0;
//}

//向一个升序数列中添加一个数，让这个数也能成功的融入到升序之中【亟待s优化】

//int main()
//{
//	int n = 0;
//	int arr[50] = { 0 };
//	scanf("%d", &n);
//	int i = 0;
//	/*for (i = 0;i < n;i++)
//	{
//		scanf("%d", &arr[i]);
//	}*/
//	for (i = 0;i < n;i++)
//	{
//		scanf("%d", &arr[i]);
//	}
//	int insert = 0;
//	scanf("%d", &insert);
//	arr[i] = insert;
//	//选择排序
//	int min = 0;
//	int j = 0;
//	for (i = 0;i < n + 1;i++)
//	{
//		int min = i;
//		for (j = i + 1;j < n + 1;j++)
//		{
//			if (arr[j] < arr[min])
//				min = j;
//		}
//		if (arr[min] < arr[i])
//		{
//			int tmp = arr[min];
//			arr[min] = arr[i];
//			arr[i] = tmp;
//		}
//	}
//	for (i = 0;i < n+1;i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	return 0;
//}