#include <stdio.h>

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

//判断闰年	-----------简化写法

//int is_leap_year(int year)
//{
//	return ((year % 4 == 0) && (year % 100 != 0) || (year % 400 == 0));
//}
//
//int main()
//{
//	int year = 0;
//	scanf("%d", &year);
//	
//	int ret = is_leap_year(year);
//	if (ret)
//	{
//		printf("%d是闰年", year);
//	}
//	else
//	{
//		printf("%d不是闰年", year);
//	}
//	return 0;
//}

//交换2个数

//swap(int* x, int* y)
//{
//	int tmp = *x;
//	*x = *y;
//	*y = tmp;
//}
//
//int main()
//{
//	int a, b;
//	scanf("%d%d", &a, &b);
//	swap(&a, &b);
//	printf("%d %d\n", a, b);
//	return 0;
//}

//乘法口诀表（行列不定）

//void Mul_table(int n)
//{
//	int i = 0;
//	int j = 0;
//	for (i = 1;i <= n;i++)
//	{
//		for (j = 1;j <= i;j++)
//		{
//			printf("%d*%d=%-3d ", i, j, i*j);
//		}
//		printf("\n");
//	}
//}
//
//int main()
//{
//	int n;
//	scanf("%d", &n);
//	Mul_table(n);
//	return 0;
//}

//打印1个数的每一位（递归实现）
//1234
//123 4
//12 3 4
//1 2 3 4

//void Print(int n)
//{
//	if (n/10)
//		Print(n / 10);
//	printf("%d ", n % 10);
//}
//
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	Print(n);
//	return 0;
//}

//求阶乘

//int Fac(int n)//非递归
//{
//	int i = 0;
//	int sum = 1;
//	for (i = 1;i <= n;i++)
//	{
//		sum *= i;
//	}
//	return sum;
//}
//
//int Recursion_Fac(int n)//递归
//{
//	if (n > 1)
//		return n * Recursion_Fac(n - 1);
//	else
//		return 1;
//}
//
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	printf("%d\n",Fac(n));
//	printf("%d\n", Recursion_Fac(n));
//	return 0;
//}

//strlen模拟实现

//非递归

//int my_strlen(char* str)//非递归
//{
//	int count = 0;
//	while (*str++)
//		count++;
//	return count;
//}
//
//int Recursion_my_strlen(char* str)//递归
//{
//	if (*str)
//		return 1 + Recursion_my_strlen(str + 1);
//	else
//		return 0;
//}
//
//int main()
//{
//	char str[] = "abcdef";
//	printf("%d\n", my_strlen(str));
//	printf("%d\n", Recursion_my_strlen(str));
//	return 0;
//}

//字符串逆序（递归实现）
//ABCDE
//EA+BCD
//DB+C
//C
//ABCD
//AD+BC
//CB

//void reverse_string(char* str)
//{
//	char ret = *str;
//	char* end = str;
//	while (*end)
//		end++;
//	end--;
//	if (str < end)
//	{
//		*str = *end;
//		*end = '\0';
//		reverse_string(str + 1);
//		*end = ret;
//	}
//}
//
//int main()
//{
//	char str[] = "ABCDE";
//	reverse_string(str);
//	printf("%s\n", str);
//	return 0;
//}

//计算一个数的每位之和（递归）

//int Digitsum(int n)
//{
//	if (n / 10)
//		return (n % 10 + Digitsum(n / 10));
//	else
//		return n;
//}
//
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	printf("%d\n",Digitsum(n));
//	return 0;
//}

//实现n的k次方（递归）

//int my_pow(int n, int k)
//{
//	if (k)
//		return n * my_pow(n, k - 1);
//	else
//		return 1; 
//}
//
//int main()
//{
//	int n, k;
//	scanf("%d%d", &n, &k);
//	printf("%d\n", my_pow(n, k));
//	return 0;
//}

//实现n的k次方···················接收负数

//double my_pow(int n, int k)
//{
//	if (k > 0)
//		return n * my_pow(n, k - 1);
//	else if (k == 0)
//		return 1;
//	else 
//	return 1.0 / my_pow(n, -k);
//}
//
//int main()
//{
//	int n, k;
//	scanf("%d%d", &n, &k);
//	printf("%lf\n", my_pow(n, k));
//	return 0;
//}

//斐波那切数列（递归与非递归）

//int Fib(int n)
//{
//	int i = 0;
//	int a = 1;
//	int b = 1;
//	int c = 0;
//	if (n >= 3)
//		for (i = 0;i < n - 2;i++)
//		{
//			c = a + b;
//			a = b;
//			b = c;
//		}
//	else
//		return 1;
//	return c;
//}
//
//int Recursion_Fib(int n)
//{
//	if (n > 2)
//		return Recursion_Fib(n - 1) + Recursion_Fib(n - 2);
//	else
//		return 1;
//}
//
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	printf("%d\n", Fib(n));
//	printf("%d\n", Recursion_Fib(n));
//	return 0;
//}

