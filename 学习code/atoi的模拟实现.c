#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

//int my_atoi(char* str)
//{
//	int num = 0;
//	//�����ո�
//	while (*str == ' ')
//	{
//		str++;
//	}
//	//�������Ž����ж�
//	int flag = 1;
//	if (*str == '-' || *str == '+')
//	{
//		if (*str == '-')
//			flag = -1;
//		str++;
//	}
//
//	//���ݵĻ�ԭ
//	while (*str >= '0' && *str <= '9')
//	{
//		num = num * 10 + flag * (*str - '0');
//		str++;
//	}
//
//	return num;
//}

////��׼��
//int my_atoi(char* str)
//{
//	long long num = 0;
//	//�����ո�
//	while (isspace(*str))
//	{
//		str++;
//	}
//	//�������Ž����ж�
//	int flag = 1;
//	if (*str == '-' || *str == '+')
//	{
//		if (*str == '-')
//			flag = -1;
//		str++;
//	}
//
//	//���ݵĻ�ԭ
//	while (isdigit(*str))
//	{
//		num = num * 10 + flag * (*str - '0');
//		if (num > INT_MAX || num < INT_MIN)
//		{
//			return 0;
//		}
//		str++;
//	}
//
//	return (int)num;
//}
//
//
//int main()
//{
//	char a[] = "200";
//	char b[] = "-100";
//
//
//	int i = my_atoi(a) + my_atoi(b);
//	printf("%d ", i);
//	return 0;
//}