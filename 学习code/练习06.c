#include <stdio.h>
#include <math.h>
//������ݹ������ϰ

//��ӡ����

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
//		printf("%d������ ", i);
//	else
//		printf("%d�������� ", i);
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

//printf����ʽ���ʵ��� ��printf�ķ���ֵ��

//int main(void)
//{
//	printf("%d", printf("%d",printf("%d",43)));
//	return 0;
//}

//��ϰ��01������һ�����֣������ӡ������֣��磬1234��1 2 3 4��

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

//��ϰ��02����������ʱ���������ַ������ȡ��ﵽ��strlenһ����Ч����

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

//�ݹ�˼·
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

//֤���ڵ�ַ��+1���Եõ��������һ��Ԫ��

//int main(void)
//{
//	int arr[] = { 1,2,3 };
//	int* p = &arr;
//	printf("%d\n", *p);
//	printf("%d\n", *(p + 1));
//	return 0;
//}

//��ϰ��03����n�Ľ׳ˣ��ݹ飩

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

//��n�Ľ׳ˣ��ǵݹ飩

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

//��ϰ��04��쳲��������У����n��

//�ݹ��㷨��Ч��̫�͡�

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

//ѭ���㷨���Լ�д�ġ�

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

//����׼д����ɾ��һЩ����ģ���**********************************

//int main(void)
//{
//
//
//	return 0;
//}


