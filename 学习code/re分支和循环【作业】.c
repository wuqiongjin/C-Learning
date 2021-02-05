#include <stdio.h>

//服了，各种if判断无语了，最好用排序

//逻辑混乱，乱七八糟的。

//int main()
//{
//	int a, b, c;
//	scanf("%d%d%d", &a, &b, &c);
//	int max, mid, min;
//	if (a > b)
//	{
//		if (a > c)
//		{
//			max = a;
//			if (b > c)
//			{
//				mid = b;
//				min = c;
//			}
//			else
//			{
//				mid = c;
//				min = b;
//			}
//		}
//		else
//		{
//			max = c;
//			mid = a;
//			min = b;
//		}
//	}
//	else if (b > c)
//	{
//		max = b;
//		if (c > a)
//		{
//			mid = c;
//			min = a;
//		}
//		else
//		{
//			mid = a;
//			min = c;
//		}
//	}
//	else
//	{
//		max = c;
//		mid = b;
//		min = a;
//	}
//	printf("%d %d %d", max, mid, min);
//	return 0;
//}


//排序3个数--------------------改

//int main()
//{
//	int a, b, c;
//	scanf("%d%d%d", &a, &b, &c);
//	if (a < b)
//	{
//		int tmp = a;
//		a = b;
//		b = tmp;
//	}
//	if (a < c)
//	{
//		int tmp = a;
//		a = c;
//		c = tmp;
//	}
//	if (b < c)
//	{
//		int tmp = b;
//		b = c;
//		c = tmp;
//	}
//	printf("%d %d %d", a, b, c);
//	return 0;
//}

//打印1~100，3的倍数

//int main()
//{
//	int i = 0;
//	for (i = 3;i <= 100;i+=3)
//	{
//		printf("%d ", i);
//	}
//	return 0;
//}

//求2个数的最大公约数【辗转相除法】

//int main()
//{
//	int a, b;
//	scanf("%d%d", &a, &b);
//	int ret = 0;
//	while (a%b)//
//	{
//		ret = a;
//		a = b;
//		b = ret % b;
//	}
//	printf("%d ", b);
//	return 0;
//}

//打印1000~2000年间的闰年

//int main()
//{
//	int i = 0;
//	for (i = 1000;i <= 2000;i++)
//	{
//		if (i % 4 == 0 && i % 100 != 0)
//		{
//			printf("%d ", i);
//		}
//		else if (i % 400 == 0)
//		{
//			printf("%d ", i);
//		}
//	}
//	return 0;
//}

//打印100~200间的素数

//#include <math.h>
//int main()
//{
//	int i = 0;
//	for (i = 101;i <= 200;i+=2)
//	{
//		int j = 0;
//		for (j = 2;j <= sqrt(i);j++)
//		{
//			if (i%j == 0)
//				break;
//		}
//		if (j > sqrt(i))
//			printf("%d ", i);
//	}
//	return 0;
//}

//统计从1~100之间包含数字9的数的个数-------------我败了！！！是有多少个9，不是有多少个数字是含9的。。。。

//int main()
//{
//	int i = 0;
//	int num = 0;
//	int count = 0;
//	for (i = 1;i <= 100;i++)
//	{
//		num = i;
//		while (num)
//		{
//			if (num % 10 == 9)
//			{
//				count++;
//				break;
//			}
//			num /= 10;
//		}
//	}
//	printf("%d", count);
//	return 0;
//}

//改；；；；；；；；；；；；；；；；；；；；；；

//int main()
//{
//	int i = 0;
//	int num = 0;
//	int count = 0;
//	for (i = 1;i <= 100;i++)
//	{
//		num = i;
//		while (num)
//		{
//			if (num % 10 == 9)
//				count++;
//			num /= 10;
//		}
//	}
//	printf("%d", count);
//	return 0;
//}


//计算1/1- 1/2 + 1/3 - 1/4 +......- 1/100

//int main()
//{
//	int i = 0;
//	double sum = 0.0;
//	int flag = -1;
//	for (i = 1;i <= 100;i++)
//	{
//		flag *= (-1);
//		sum +=  1.0 * flag / i;
//	}
//	printf("%lf", sum);
//	return 0;
//}

//求10个整数中的最大值

//int main()
//{
//	int num = 0;
//	int i = 0;
//	scanf("%d", &num);
//	int max = num;
//	for (i = 1;i < 10;i++)
//	{
//		scanf("%d", &num);
//		if (num > max)
//			max = num;
//	}
//	printf("%d", max);
//	return 0;
//}

//输出9x9乘法口诀表

//int main()
//{
//	int i = 0;
//	int j = 0;
//	for (i = 1;i <= 9;i++)
//	{
//		for (j = 1;j <= i;j++)
//		{
//			printf("%d*%d=%-2d ", i, j, i*j);
//		}
//		printf("\n");
//	}
//	return 0;
//}

//二分查找/折半查找

//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int k = 0;
//	scanf("%d", &k);
//	int left = 0;
//	int right = sz - 1;
//	while (left <= right)
//	{
//		int mid = (left + right) / 2;
//		if (arr[mid] > k)
//		{
//			right = mid - 1;
//		}
//		else if (arr[mid] < k)
//		{
//			left = mid + 1;
//		}
//		else
//		{
//			printf("找到了，下标是%d", mid);
//			break;
//		}
//	}
//	if (left > right)
//	{
//		printf("找不到！");
//	}
//	return 0;
//}

// 方法一，采用[left, right] 区间

//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int key = 3;
//	int left = 0;
//	int right = sizeof(arr) / sizeof(arr[0]) - 1; // right位置的数据可以取到
//
//	while (left <= right) // right位置有数据，必须要添加=号
//	{
//		int mid = left + (right - left) / 2;
//		if (arr[mid] > key) // key小于中间位置数据，说明key可能在左半侧，需要改变右边界
//		{
//			right = mid - 1; // right位置的数据可以取到，因此right=mid-1
//		}
//		else if (arr[mid] < key)// key大于中间位置数据，说明key可能在右半侧，需要改变左边界
//		{
//			left = mid + 1; // left位置的数据可以取到，因此left=mid+1
//		}
//		else
//		{
//			printf("找到了，下标是：%d\n", mid);
//			break;
//		}
//	}
//
//	if (left > right)
//		printf("找不到\n");
//	return 0;
//}

// 方法二，采用[left, right) 区间

//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int key = 3;
//	int left = 0;
//	int right = sizeof(arr) / sizeof(arr[0]); // right位置的数据取不到
//
//	while (left < right) // right位置没有数据，此处不需要添加=
//	{
//		int mid = left + (right - left) / 2;
//		if (arr[mid] > key) // key小于中间位置数据，说明key可能在左半侧，需要改变右边界
//		{
//			right = mid; // right位置的数据取不到，因此right=mid，不需要减1
//		}
//		else if (arr[mid] < key)// key大于中间位置数据，说明key可能在右半侧，需要改变左边界
//		{
//			left = mid + 1; // left位置的数据可以取到，因此left=mid+1
//		}
//		else
//		{
//			printf("找到了，下标是：%d\n", mid);
//			break;
//		}
//	}
//
//	if (left >= right)
//		printf("找不到\n");
//	return 0;
//}


//猜数字游戏

//#include <stdio.h>
//#include <time.h>
//#include <stdlib.h>
//void Menu()
//{
//	printf("***************************\n");
//	printf("*******	1. Play	***********\n");
//	printf("*******	0. Exit ***********\n");
//	printf("***************************\n");
//}
//
//void PlayGame()
//{
//	int ret = rand() % 100 + 1;
//	int guess = 0;
//	printf("请输入一个数字~\n");
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
//
//int main()
//{
//	int input = 0;
//	srand((size_t)time(NULL));
//	printf("请按照菜单进行输入！\n");
//	do
//	{
//		Menu();
//		scanf("%d", &input);
//
//		switch (input)
//		{
//		case 0:
//			printf("退出游戏！\n");
//			break;
//		case 1:
//			PlayGame();
//			break;
//		default:
//			printf("输入错误！请重新输入！\n");
//			break;
//		}
//	} while (input);
//
//	return 0;
//}


//#include <math.h>
//int is_prime(int i)
//{
//	int j = 0;
//	for (j = 2;j <= sqrt(i);j++)
//	{
//		if (i % j == 0)
//			return 0;
//	}
//	return 1;
//}
//int main()
//{
//	int i = 0;
//	for (i = 100;i <= 200;i++)
//	{
//		if (is_prime(i) == 1)
//		{
//			printf("%d ", i);
//		}
//	}
//}

//int binary_search(int arr[], int k, int sz)
//{
//	int left = 0;
//	int right = sz - 1;
//	while (left <= right)
//	{
//		int mid = left + (right - left) / 2;
//		if (arr[mid] > k)
//		{
//			right = mid - 1;
//		}
//		else if (arr[mid] < k)
//		{
//			left = mid + 1;
//		}
//		else
//		{
//			return mid;
//		}
//	}
//	return 0;
//}
//
//int main()
//{
//	//有序的
//	int arr[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
//	int k = 7;
//	//二分查找的
//	//找到了，返回下标
//	//找不到，返回 -1
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int ret = binary_search(arr, k, sz);
//	if (ret == -1)
//	{
//		printf("找不到\n");
//	}
//	else
//	{
//		printf("找到了，下标是：%d\n", ret);
//	}
//
//	return 0;
//}
//
