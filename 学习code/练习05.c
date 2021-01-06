#include <stdio.h>
#include <string.h>
#include <math.h>
#include <time.h>
#include <stdlib.h>
#include <Windows.h>

//分支和循环练习题1

//int main(void)
//{
//	int ch;
//	ch = 'bit';
//	printf("%c ", ch);
//	return 0;
//}

//计算n的阶乘

//int main(void)
//{
//		int n=5;
//		int ret=1;
//		for (n=5;n > 1;n--)
//		{
//			ret =ret*n;
//		}
//		printf("ret=%d ", ret);
//	//int ret = 1;
//	//int n = 1;
//	//for (ret = 1;n<5;n++)
//	//{
//	//	ret = ret * n;
//	//}
//	//printf("%d ", ret);
//	return 0;
//} 

//计算1!+2!+3!+4!+...+10!

//我是傻逼
//int main(void)
//{
//	int i = 1;
//	int ret = 0;
//	for (i = 1;i < 11;i++)
//	{
//		int j = 1;
//		int n = 1;
//		for (j = 1;j < i+1;j++)
//		{
//			n = n * j;
//			ret = ret + j * n;
//		}
//	}
//	printf("ret=%d ", ret);
//	return 0;
//}

//正确算法
//
//int main(void)
//{
//	int i = 1;
//	int sum = 0;
//	for (i = 1;i <= 3;i++)
//	{
//		int j = 1;
//		int ret = 1;
//		for (j = 1;j <= i;j++)
//		{
//			ret = ret * j;
//		}
//		sum += ret;
//	}
//	printf("sum=%d ", sum);
//	return 0;
//}

//阶乘的优化算法

//int main(void)
//{
//	int i = 1;
//	int sum = 0;
//	int j = 1;
//	int ret = 1;
//	for (i = 1;i <= 5;i++)
//	{
//		j = i;
//		while (j <= i)
//		{
//			ret *= j;
//			j++;
//		}
//		/*for (j = i;j<=i;j++)
//		{
//			ret = ret * j;
//		}*/
//	sum += ret;
//	}
//	printf("sum=%d ", sum);
//	return 0;
//}

//再次优化阶乘算法（小优化）

//int main(void)
//{
//	int i = 1;
//	int sum = 0;
//	int ret = 1;
//	for (i = 1;i <= 5;i++)
//	{
//		ret = ret * i;
//		sum += ret;
//	}
//	printf("sum=%d ", sum);
//	return 0;
//}

//查找数组中的元素//二分查找法###############################################

//int main(void)
//{
//	int arr[] = { 1,2,3,4,5,6,8,9,10,11 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int k = 7;
//	int left = 0;
//	int right = sz-1;
//	while (left<=right)
//	{
//	int mid = (left + right) / 2;
//	if (arr[mid] > k)
//	{
//		right = mid - 1;
//	}
//	else if (arr[mid] < k)
//	{
//		left = mid + 1;
//	}
//	else
//	{
//		printf("你要找的元素的下标为%d\n", mid);
//		break;
//	}
//	}
//	if (left > right)
//	{
//		printf("找不到\n");
//	}
//	return 0;
//}


////////二次练习🐴OKOK

//int main(void)
//{
//	int arr[] = { 4,3,7,1,9,2,12,34,15,35,75 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int left = 0;
//	int right = sz - 1;
//	int k = 35;
//	while (left <= right)
//	{
//	int mid = (left + right) / 2;
//	if (k > arr[mid])
//	{
//		left = mid + 1;
//	}
//	else if (k < arr[mid])
//	{
//		right = mid - 1;
//	}
//	else
//	{
//		printf("找到了，下标识%d\n", k);
//		break;
//	}
//	}
//	if (left > right)
//		printf("找不到该元素\n");
//	return 0;
//}

//打印字符，从两端往中间出现  *****待完成####################################

//int main(void)
//{
//	int arr[] = { 'w','e','l','c','o','m','e',' ','t','o',' ','b','i','t' ,'!','\0'};
//	int sz = sizeof(arr) / sizeof(arr[0]);
//
//	return 0;
//}

////再次练习🐴OKOK【汉字编码问题】

//int main(void)
//{
//	char arr1[] = { "Hello wangyingyao!!!!" };
//	char arr2[] = { "#####################" };
//	int sz = sizeof(arr1) / sizeof(arr1[0]);
//	//printf("sz=%d ", sz);
//	int left = 0;
//	int right = sz - 2;
//	while (left <= right)
//	{
//		arr2[left] = arr1[left];
//		arr2[right] = arr1[right];
//		printf("%s\n", arr2);
//		Sleep(1000);
//		system("cls");
//		left++;
//		right--;
//	}
//	printf("%s\n", arr2);
//	return 0;
//}

//求两个数的最大公约数

//int main(void)
//{
//	int x;
//	int y;
//	int ret;
//	printf("请输入2个数字来求他们的最大公约数");
//	scanf("%d %d", &x, &y);
//	while (ret=x%y)
//	{
//		//ret = x % y;			//辗转相除法
//		x = y;
//		y = ret;
//	}
//	if (x%y == 0)
//		printf("最大公约是是%d ", y);
//	return 0;
//}

//打印闰年1000~2000，并计算次数

//int main(void)
//{							//满足闰年的条件:1.能被4整除且不能被100整除
//	int i = 1000;			//				 2.能被400整除
//	int count = 0;
//	for (i = 1000;i <= 2000;i++)
//	{
//		/*if (i % 4 == 0)
//		{
//			if (i % 400 == 0)
//			{
//				printf("%d ", i);
//					count++;
//			}
//			else if (i % 100 != 0)
//			{
//				printf("%d ", i);
//					count++;
//			}
//				
//		}*/
//
//		if ((i % 4 == 0 && i % 100 != 0) || (i % 400 == 0))
//		{
//			printf("%d ", i);
//			count++;
//		}
//	}
//	printf("\n一共%d个闰年", count);
//	return 0;
//}

//打印素数100~200

//int main(void)
//{
//	int i = 100;
//	for (i = 100;i <= 200;i++)
//	{
//		int j = 0;
//		for (j = 2;j <i;j++)
//		{
//			if (i%j == 0)
//			{
//				break;
//			}
//		}
//		if (j ==i)
//			printf("%d ", i);
//	}
//	return 0;
//}

//再次优化，①sqrt（）的运用 ②素数不可能是偶数

//int main(void)
//{
//	int i = 100;
//	for (i = 101;i <= 200;i+=2)
//	{
//		int j = 0;
//		for (j = 2;j <=sqrt(i);j++)
//		{
//			if (i%j == 0 )
//			{
//				break;
//			}
//		}
//		if (j >sqrt(i))
//			printf("%d ", i);
//	}
//	return 0;
//}

//数1~100之间含9的数字

//int main(void)
//{
//	int a = 0;
//	int b = 0;
//	//int* x = (10*a+b);
//	int x = 0;
//	int count = 0;
//
//	for (a = 0;a < 10;a++)
//	{
//		for (b = 0;b <= 9;b++)
//		{
//			if (a == 9 || b == 9)
//			{
//				x = 10 * a + b;
//				count++;
//				printf("%d ", x);
//			}
//		}
//	}
//	printf("\ncount=%d ", count);
//	return 0;
//}

//2种思路，再次优化

//int main(void)
//{
//	int i = 0;
//	int count = 0;
//	for (i = 1;i < 100;i++)
//	{
//		if (i % 10 == 9)
//		{
//			printf("%d ", i);
//			count++;
//		}
//		else if (i / 10 == 9)
//		{
//			printf("%d ", i);
//			count++;
//		}
//	}
//	printf("\ncount=%d ", count);
//	return 0;
//}

//分数求和，计算1-1/2+1/3-1/4+1/5+.....-1/100

//int main(void)
//{
//	int x = 1;
//	double sum = 0;
//	for (x = 1;x <= 100;x++)
//	{
//		double y = pow(-1, x + 1)*pow(x, -1);
//		sum += y;
//	}
//	printf("sum=%lf ", sum);
//	return 0;
//}

//不使用pow乘方函数的算法   //设置一个flag，让每次循环flag=-flag

//int main(void)
//{
//	int x = 0;
//	int flag = 1;
//	double sum = 0;
//	for (x = 1;x <= 100;x++)
//	{
//		sum += flag*1.0 / x;
//		flag = -flag;
//	}
//	printf("sum=%lf ", sum);
//	return 0;
//}

//再次练习🐴OKOK

//int main(void)
//{
//	int x = 1;
//	double sum = 0;
//	int flag = 1;
//	for (x = 1;x <= 100;x++)
//	{
//		sum = sum + flag*1.0 / x;
//		flag = -flag;
//	}
//	printf("sum=%lf\n", sum);
//	return 0;
//}

//求10个整数的最大值

//一次成功！！
//int main(void)
//{
//	int arr[] = { 1,5,4,10,22,13,24,45,2,57 };
//	int max;
//	max = arr[0];
//	int index = 0;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	for (index = 1;index <sz;index++)
//	{
//		if (arr[index] > arr[index - 1])
//		{
//			max = arr[index];
//		}
//	}
//	printf("Max=%d ", max);
//	return 0;
//}

//在屏幕上输入9*9乘法口诀表 【%2d和%-2d】          ##############################

//int main(void)
//{
//	int x = 1;
//	int y = 1;
//	int pro;
//	for (x = 1;x <= 9;x++)
//	{
//		for (y = x;y <= 9;y++)
//		{
//			pro = x * y;
//			if (pro >= 10)
//				printf("%d*%d %d ", x, y, pro);
//			else
//				printf("%d*%d得%d ", x, y, pro);
//		}
//		printf("\n");
//	}
//	return 0;
//}

////再次练习🐴OKOK

//int main(void)
//{
//	int x=1;
//	int y=1;
//	for (x = 1;x <= 9;x++)
//	{
//		for (y = 1;y <= x;y++)
//		{
//			int pro = x * y;
//			printf("%d*%d=%-2d ", x, y, pro);
//		}
//		printf("\n");
//	}
//	return 0;
//}

//猜数字游戏		(rand)			  ################################

//int main(void)
//{
//	srand((unsigned int)time(NULL));
//	while (1)
//	{
//		int ret = rand() % 100 + 1;
//		printf("%d ", ret);
//		system("pause");
//	}
//	return 0;
//}

////再次练习🐴OKOK

//void Menu()
//{
//	printf("###########################\n");
//	printf("##1.开始游戏	 0.退出游戏\n");
//	printf("###########################\n");
//}
//void game(int guess)
//{
//	int ret=rand() % 100 + 1;
//	printf("请输入你要输入的数字，你要猜的数字在1~100之间喲\n");
//	while (1)
//	{
//		scanf("%d", &guess);
//		if (guess > ret)
//		{
//			printf("猜大了\n");
//		}
//		else if (guess < ret)
//		{
//			printf("猜小了\n");
//		}
//		else
//		{
//			printf("恭喜你猜对了！\n");
//			break;
//		}
//	}
//}
//int main(void)
//{
//	int keydown=1;
//	int guess=0;
//	while (keydown)
//	{
//		Menu();
//		printf("请输入1或0来执行命令\n");
//		scanf("%d", &keydown);
//		srand((unsigned)time(NULL));
//		switch(keydown)
//		{
//		case 1:
//			game(guess);
//			break;
//		default:
//			break;
//		}
//		system("pause");
//		system("cls");
//	}
//	return 0;
//}

