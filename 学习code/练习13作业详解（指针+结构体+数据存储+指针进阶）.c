#include <stdio.h>
#include <string.h>

//习题：字符串的逆序

//#include <assert.h>
//void Reverse(char* arr,int sz)
//{
//	assert(arr);
//	/*int left = 0;
//	int right = sz - 1;
//	while (left < right)
//	{
//		char tmp = arr[left];
//		arr[left] = arr[right];
//		arr[right] = tmp;
//		left++;
//		right--;
//	}*/
//	char* left = arr;
//	char* right = arr + sz - 1;
//	while (left < right)
//	{
//		char tmp = *left;
//		*left = *right;
//		*right = tmp;
//		left++;
//		right--;
//	}
//}
//int main()
//{
//	char arr[256] = { 0 };
//	//scanf("%s", arr);
//	gets(arr);//读取一行
//	int sz = strlen(arr);
//	Reverse(arr,sz);
//	printf("%s", arr);
//	return 0;
//}

//习题：n = a + aa + aaa 比如输入2 和 5， 输出 sum = 2 + 22 + 222 + 2222 + 22222

//#include <math.h>
//int main()
//{
//	int n = 0;
//	int a = 0;
//	scanf("%d%d", &a, &n);
//	///double sum = 0;
//	int sum = 0;
//	int ret = 0;
//	int i = 0;
//	for (i = 0;i < n;i++)
//	{
//		/*if(i!=0)
//		a += (int)(a*(pow(10, i)));
//		sum += a;*/
//		ret = ret * 10 + a;
//		sum += ret;
//	}
//	printf("%d", sum);
//	return 0;
//}

//习题：自幂数，水仙花数 153 = 1^3 + 5^3 + 3^3 ✔

//#include <math.h>
//int main()
//{
//	//int n = 0;
//	//scanf("%d", &n);
//	int i = 0;
//	for (i = 0;i <= 10000;i++)
//	{
//		//计算位数
//		int count = 0;
//		int ret = i;
//		while (ret)
//		{
//			ret /= 10;
//			count++;
//		}
//		//求和并比较
//		ret = i;
//		int sum = 0;
//		while (ret)
//		{
//			sum += (int)pow(ret % 10,count);
//			ret /= 10;
//		}
//		if (sum == i)
//			printf("%d\n", i);
//	}
//
//	return 0;
//}

//习题：打印菱形

//int main()
//{
//	int i = 0;
//	int j = 0;
//	int n = 0;
//	scanf("%d", &n);
//	for (i = 0;i < n;i++)
//	{
//		for (j = 0;j < 2*(n - i - 1);j++)
//		{
//			printf(" ");
//		}
//		for (j = 0;j < i;j++)
//		{
//			printf("* ");
//		}
//		printf("*");
//		for (j = 0;j < i;j++)
//		{
//			printf(" *");
//		}
//		for (j = 0;j < 2*(n - i - 1);j++)
//		{
//			printf(" ");
//		}
//		printf("\n");
//	}
//	for (i = 0;i < n - 1;i++)
//	{
//		for (j = 0;j < 2 * (i + 1);j++)
//		{
//			printf(" ");
//		}
//		for (j = 0;j < n - i - 2;j++)
//		{
//			printf("* ");
//		}
//		printf("*");
//		for (j = 0;j <n - i - 2;j++)
//		{
//			printf(" *");
//		}
//		for (j = 0;j < 2 * (i + 1);j++)
//		{
//			printf(" ");
//		}
//		printf("\n");
//	}
//	return 0;
//}

//习题：喝汽水问题,1瓶1元，2空瓶换1个。现有20元，能喝多少瓶

//int main()
//{
//	int money = 0;
//	scanf("%d", &money);
//	int empty = 0;
//	int dr = 0;
//
//	//while (money)
//	//{
//	//	money--;
//	//	dr++;
//	//	empty ++;
//	//}
//	//while (empty>=2)
//	//{
//	//	empty -= 2;
//	//	dr++;
//	//	empty++;
//	//}
//
//	//啊啊啊啊啊啊啊啊啊啊啊啊啊啊啊啊啊啊啊啊啊啊啊啊啊啊啊啊啊啊啊啊啊啊啊啊啊啊啊啊啊啊，为什么你没有想到，你的脑子怎么了？？？？
//	//dr = money;
//	//empty = money;
//	//while (empty >= 2)
//	//{
//	//	dr += empty / 2;
//	//	empty = empty / 2 + empty % 2;
//	//}
//
//	//2个空瓶=1瓶汽水，即1个空瓶0.5元
//	//20元的话，就是40个空瓶，那么最后肯定会剩1个空瓶，即喝了39瓶
//	if (money == 0)
//		dr = 0;
//	else
//		dr = 2 * money - 1;
//	printf("%d ", dr);
//	return 0;
//}

//习题：输入一个数组，使得这个数组中所有的奇数都位于偶数的前面

//void Odd_before(int* arr,int n)
//{
//	int i = 0;
//	int last = n - 1;
//	for (i = 0;i < last;i++)//本来判断条件我写的是i < n && i < last （但这是多余的，“i < n”，i < last肯定小于n）
//	{
//		if (arr[i] % 2 == 0)
//		{
//			int tmp = arr[i];
//			arr[i] = arr[last];
//			arr[last] = tmp;
//			i--;
//			last--;
//		}
//	}
//}
//
//void move(int arr[], int n)
//{
//	int i = 0;
//	int j = n - 1;
//
//	while (i < j)
//	{
//		for (;i < j;i++)
//		{
//			if (arr[i] % 2 == 0)
//			{
//				break;
//			}
//		}
//		for (;i < j;j--)
//		{
//			if (arr[j] % 2)
//			{
//				break;
//			}
//		}
//		if (i < j)
//		{
//			int tmp = arr[i];
//			arr[i] = arr[j];
//			arr[j] = tmp;
//			//i++;
//			//j--;
//		}	
//	}
//	
//	
//}
//
//int main()
//{
//	int arr[100] = { 0 };
//	int n;
//	scanf("%d", &n);
//	int i = 0;
//	for (i = 0;i < n;i++)
//	{
//		scanf("%d", &arr[i]);
//	}
//	//Odd_before(arr,n);
//	//move(arr, n);
//	for (i = 0;i < n;i++)
//		printf("%d ", arr[i]);
//	return 0;
//}

//习题：打印杨辉三角

//int main()
//{
//	int n;
//	scanf("%d", &n);
//	int i = 0;
//	int j = 0;
//	int arr[100][100] = { 0 };
//	for (i = 1;i <= n;i++)
//	{
//		for (j = 1;j <= 2 * i - 1;j++)
//		{
//			if (i == j || j == 1)
//			{
//				arr[i][j] = 1;
//			}
//			else
//			{
//				arr[i][j] = arr[i - 1][j] + arr[i - 1][j - 1];
//			}
//		}
//	}
//	for (i = 1;i <= n;i++)
//	{
//		for (j = 1;j <= n - i;j++)
//		{
//			printf(" ");
//		}
//
//		for (j = 1;j <= i;j++)
//		{
//			printf("%d ", arr[i][j]);
//		}
//		printf("\n");
//	}
//	return 0;
//}


//判断凶手





//判断ABCDE名次






