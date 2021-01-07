#include <stdio.h>
#include <math.h>
//函数与递归课堂练习

//打印素数

//void is_prime(int a)
//{
//	int i = 1;
//	int count = 0;
//	for (i = 1;i < a;i++)
//	{
//		if (a%i == 0)
//			count++;
//	}
//	if (count == 0)
//		printf("%d是素数 ", i);
//	else
//		printf("%d不是素数 ", i);
//}
//int main(void)
//{
//	int a = 0;
//	scanf("%d", &a);
//	is_prime(a);
//	return 0;
//}

//int is_prime(int a)
//{
//	int i = 1;
//	for (i = 2;i <= sqrt(a);i++)
//	{
//		if (a%i == 0)
//			return 0;
//	}
//	return 1;
//}
//int main(void)
//{
//	int a = 0;
//	for (a = 100;a <= 200;a++)
//	{
//		if (is_prime(a))
//			printf("%d ",a);
//	}
//	return 0;
//}

//printf的链式访问调用 【printf的返回值】

//int main(void)
//{
//	printf("%d", printf("%d",printf("%d",43)));
//	return 0;
//}

//练习题01：输入一个数字，逐个打印这个数字（如，1234，1 2 3 4）

//void print(int num)
//{
//	if (num > 9)
//	{
//		print(num / 10);
//	}
//	printf("%d ", num % 10);
//}
//int main(void)
//{
//	unsigned int num = 0;
//	scanf("%d", &num);
//	print(num);
//	return 0;
//}

//练习题02：不创建临时变量，求字符串长度【达到和strlen一样的效果】

//int my_strlen(char* str)
//{
//	int count = 0;
//	while(*str != '\0')
//	{
//		str++;
//		count++;
//	}
//	return count;
//}

//递归思路
//1+my_strlen
//1+1+my_strlen
//1+1+1+my_strlen

//return 0
//return 1+0			=1
//return 1+(1+0)		=2
//return 1+(1+(1+0))	=3

//int my_strlen(char* str)
//{
//	if (*str != '\0')
//		return 1 + my_strlen(str+1);
//	else
//		return 0;
//}
//int main(void)
//{
//	char arr[] = "bit";
//	int len = my_strlen(arr);
//	printf("len=%d", len);
//	return 0;
//}

//证明在地址上+1可以得到数组的下一个元素

//int main(void)
//{
//	int arr[] = { 1,2,3 };
//	int* p = &arr;
//	printf("%d\n", *p);
//	printf("%d\n", *(p + 1));
//	return 0;
//}

//练习题03：求n的阶乘（递归）

//int Fac(n)
//{
//	if (n <= 1)
//		return 1;
//	else
//		return n * Fac(n - 1);
//}
//int main(void)
//{
//	int n;
//	scanf("%d", &n);
//	int ret = 1;
//	ret = Fac(n);
//	printf("%d", ret);
//	return 0;
//}

//求n的阶乘（非递归）

//int main(void)
//{
//	int ret = 1;
//	int i = 0;
//	for (i = 1;i <= 5;i++)
//	{
//		ret = ret * i;
//	}
//	printf("%d\n", ret);
//	return 0;
//}

//练习题04：斐波那切数列，求第n项

//递归算法【效率太低】

//int Fib(int n)
//{
//	if (n <= 2)
//		return 1;
//	if (n > 2)
//		return Fib(n - 1) + Fib(n - 2);
//}
//int main(void)
//{
//	int n = 1;
//	int ret = 0;
//	scanf("%d", &n);
//	ret = Fib(n);
//	printf("%d\n", ret);
//	return 0;
//}

//循环算法【自己写的】

//int main(void)
//{
//	int n = 0;
//	scanf("%d", &n);
//	int x = 1;
//	int y = 1;
//	int tmp = 1;
//	int count = 3;
//	if (n >= 3)
//	{
//		for (x = 1, y = 1;count <= n;)
//		{
//			tmp = y;
//			y = x + y;
//			x = tmp;
//			count++;
//		}
//	}
//	else
//		printf("%d", 1);
//	printf("%d\n", y);
//	return 0;
//}

//【标准写法（删了一些多余的）】**********************************

//int main(void)
//{
//
//
//	return 0;
//}


