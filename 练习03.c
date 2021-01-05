#include <stdio.h>
#include <stdlib.h>
//#define Max 100
//#define small 50
//#define FindMax(x,y) (x>y?x:y)
//int main(void)
//{
//	int a = Max;
//	int b = small;
//	printf("a=%d\n", a);
//	int max = FindMax(a, b);
//	printf("Max=%d\n", max);
//	return 0;
//}
//test();
//extern int Add(int, int);
//int main(void)
//{
//	int a = 10;
//	int b = 20;
//	int sum = Add(a, b);
//	printf("sum=%d\n", sum);
//	int i = 0;
//	for (;i < 5;i++)
//	{
//		test();
//	}
//	return 0;
//}
//test()
//{
//	static int a = 1;
//	a++;
//	printf("a=%d\n", a);
//}
///int main(void)
//{
//	int a = 3.14;
//	printf("a=%d\n", a);
//	return 0;
//}
//FindMax(int *a, int *b)
//{
//	if (a > b)
//	{
//		printf("较大值为%d\n", a);
//	}
//	else
//		printf("较大值为%d\n", b);
//}
//int main(void)
//{
//	int a = 10;
//	int b = 20;
//	FindMax(a, b);
//	return 0;
//}
//int main(void)
//{
//	int arr[] = { 1,2,3,4,5,1,2,3,4 };
//	int i = 0;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	for (i = 0;i < sz;i++)
//	{
//		int j = 0;
//		int count = 0;
//		for (j = 0;j < sz;j++)
//		{
//			if (arr[i] == arr[j])
//				count++;
//		}
//		if (count == 1)
//		{
//			printf("只出现一次的元素是%d\n", arr[i]);
//			break;
//		}
//	}
//	return 0;
//}

//int main(void)
//{
//	int i = 0;
//	while (i <= 100)
//	{
//		if (1 == i % 2 )
//		{
//			printf("%d\n", i);
//		}
//		i++;
//	}
//	return 0;
//}

//int main(void)
//{
//	int i = 0;
//	for (i = 0;i <= 100;i++)
//	{
//		if (1 == i % 2)
//		{
//			printf("%d\n", i);
//		}
//	}
//	return 0;
//}
//int main(void)
//{
//	int day = 0;
//	scanf("%d", &day);
//	switch (day)
//	{
//		case 1:
//	
//		case 2:
//			
//		case 3:
//			printf("leileleile");
//			break;
//		case 4:
//			printf("wow");
//			break;
//		default:
//			printf("输入错误！\n");
//	}
//	return 0;
//}
//int main(void)
//{
//	/*int i = 0;
//	while (i < 10)
//	{
//		++i;
//		if (i == 5)
//			continue;
//		printf("%d ",i);
//
//	}*/
//	char ch;
//	while ((ch = getchar()) != EOF)
//	{
//		putchar(ch);
//	}
//	return 0;
//}
//

//getchar和putchar的使用 //getchar的缺陷。很憨批
void clearN(int ch)
{
	while ((getchar()) != '\n')
	{
		;
	}
}
int main(void)
{
	int ch = 0;
	int ret;
begin:
	printf("请输入Y/N\n");
	ch = getchar();
	if (ch != 'Y')
	{
		clearN(ch);
		goto begin;
	}
	clearN(ch);
again:
	printf("请再次确认1/2");
	ch = getchar();
	if (ch != '1')
	{
		clearN(ch);
		goto again;
	}
	return 0;
}