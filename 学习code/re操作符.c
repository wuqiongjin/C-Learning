#include <stdio.h>

//һ��С��
//a = 6;7;8;9
//c = 6;7;8;
//b = 7
//b = 8+8+7=23

//int main()
//{
//	int a, b, c;
//	a = 5;
//	c = ++a;
//	b = ++c, c++, ++a, a++;
//	b += a++ + c;
//	printf("a = %d b = %d c = %d\n:", a, b, c);
//	return 0;
//}


//����������������������ʱ������

//int main()
//{
//	int a = 10;
//	int b = 20;
//	a = a ^ b;
//	b = a ^ b;
//	a = a ^ b;
//	printf("%d %d\n", a, b);
//
//	return 0;
//}

//a 00000101
//b 00001011
//a^b = 00001110
//a= a^b = 00001110
//b= a^b = 00000101
//a= a^b = 00001011

//��ȡһ���������������������е�ż��λ������λ���ֱ��ӡ������������

//int main()
//{
//	int a;
//	scanf("%d", &a);
//	int i = 0;
//	for (i = 31;i >= 0;i -= 2)
//	{
//		printf("%d ", (a >> i) & 1);
//	//	printf("%d ", (1 << i) & a);
//	}
//	printf("\n");
//	for (i = 30;i >= 0;i -= 2)
//	{
//		printf("%d ", (a >> i) & 1);
//	//	printf("%d ", (1 << i) & a);
//	}
//	return 0;
//}

//ͳ�ƶ�������1�ĸ���

//int main()
//{
//	int a;
//	scanf("%d", &a);
//	int i = 0;
//	int count = 0;
//	while (a)
//	{
//		if (a & (1 << i))
//		{
//			count++;
//			a &= (~(1 << i));
//		}
//		i++;
//
//	}
//	printf("%d\n", count);
//	return 0;
//}

//�Ż��㷨�����������м���1���ͽ��м������㡣

//int Count_bit(int num)
//{
//	int count = 0;
//	while (num)
//	{
//		num &= num - 1;
//		count++;
//	}
//	return count;
//}
//
//int main()
//{
//	int num;
//	int count;
//	scanf("%d", &num);
//	count = Count_bit(num);
//	printf("%d ", count);
//	return 0;
//}

//��������

//1. ��λ��������

//int main()
//{
//	int num = -1;
//	int count = 0;
//	int i = 0;
//	for (i = 0;i < 32;i++)
//	{
//		if ((num >> i) & 1)
//			count++;
//	}
//	printf("%d\n", count);
//	return 0;
//}

//int main()
//{
//	int num = -1;
//	int count = 0;
//	while (num)
//	{
//		num = num & (num - 1);
//		count++;
//	}
//	printf("%d\n", count);
//	return 0;
//}

//�߼�������

//int main()
//{
//	
//	int a = 0;
//	int b = 1;
//	int c = 2;
//	int d = 3;
//	int i = a++ && b++ && ++c && d++;
//	printf("i=%d a=%d b=%d c=%d d=%d", i, a, b, c, d);
//	return 0;
//}

//����������

//int main()
//{
//	int a = 10;
//	int b = 20;
//	int Max = (a > b) ? (a) : (b);
//	printf("%d\n", Max);
//	return 0;
//}