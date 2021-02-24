﻿#include <stdio.h>


//测试#undef的作用范围【在此语句后面的所有都有效，在此语句之前都可以使用】

//#define MAX 100
//
//void test()
//{
//	int a = MAX;//✔
//	printf("%d ", a);
//}
//
//int main()
//{
//	int a = MAX;
//	if (a > 10)
//	{
//
//#undef MAX
//		//int b = MAX;//error
//	}
//	int c = MAX;//error
//	printf("%d ", c);
//}
//
//void print()
//{
//	int a = MAX;
//	printf("%d ", a);
//}
//
//#define MAX 100
//
//void test2()
//{
//	int a = MAX;//✔
//
//}


//条件编译的测试 ----多条语句的【都可以执行，只要最开始定义过条件编译执行的变量，所有条件编译都可以执行，删除定义的变量，则都不执行】

//#define __DEBUG__

//void test(int arr[])
//{
//	int i = 0;
//	for (i = 0;i < 10;i++)
//	{
//		arr[i] = i;
//#ifdef __DEBUG__
//		printf("%d ", arr[i]);
//#endif
//	}
//}
//
//int main()
//{
//	int arr[10] = { 0 };
//	int i = 0;
//	for (i = 0;i < 10;i++)
//	{
//		arr[i] = i;
//#ifdef __DEBUG__
//		printf("%d ", arr[i]);
//#endif
//	}
//	test(arr);
//	return 0;
//}


//offsetof宏的模拟实现
//以0作为起始地址，然后计算偏移量

//#define OFFSETOF(type,member) (int)&(((type*)0)->member)
//
//struct S
//{
//	char a;
//	int b;
//	short c;
//};
//
//int main()
//{
//	int ret = OFFSETOF(struct S, b);
//	printf("%d\n", ret);
//	return 0;
//}
