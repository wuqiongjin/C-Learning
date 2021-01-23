#include <stdio.h>
#include <string.h>



//BC111 进制转换，10进制换为6进制

//int main()
//{
//	int n;
//	int arr[20] = { 0 };
//	int index = 0;
//	scanf("%d", &n);
//	while (n >= 6)
//	{
//		arr[index++] = n % 6;
//		n /= 6;
//	}
//	arr[index] = n;
//	while (index >= 0)
//		printf("%d", arr[index--]);
//	return 0;
//}

//

//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int i = 0;
//	long long sum = 0;
//	for (i = 1;i <= n;i++)
//	{
//		sum += i;
//	}
//	printf("%lld", sum);
//	return 0;
//}

//BC116 改数字问题，将每一位改0或1（小丑竟是我自己！！）

//#include <math.h>
//int main()
//{
//	long n;
//	scanf("%ld", &n);
//	int i = 0;
//	int sum = 0;
//	while (n)
//	{
//		if ((n % 10) % 2)
//		{
//			sum += 1 * pow(10, i);
//		}
//		else
//			sum += 0 * pow(10, i);
//		i++;
//		n /= 10;
//	}
//	printf("%d", sum);
//	return 0;
//}

//BC117 下台阶问题【服了，找规律，多写几个】

//非递归

//int main()
//{
//	int n;
//	int a[32] = { 0 };
//	int i = 0;
//	scanf("%d", &n);
//	if (n < 4)
//	{
//		printf("%d", ++i);
//	}
//	else
//	{
//		a[2] = 2;
//		a[3] = 3;
//		for (i = 4;i <= n;i++)
//		{
//			a[i] = a[i - 1] + a[i - 2];
//		}
//		printf("%d", a[n]);
//	}
//	return 0;
//}

//递归（效率低）  本题类似斐波那切数列

//int Fib(int n)
//{
//	if (n < 2)
//		return n;
//	else
//		return Fib(n - 1) + Fib(n - 2);
//}
//int main()
//{
//	int n;
//	scanf("%d", &n);
//	int ret = Fib(n);
//	printf("%d", ret);
//	return 0;
//}