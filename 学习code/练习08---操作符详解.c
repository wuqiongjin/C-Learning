#include <stdio.h>

//sizeof������С

//int main()
//{
//	int a = 10;
//	int arr[10] = { 0 };
//	printf("%d\n", sizeof a);
//	printf("%d\n", sizeof(int));
//
//	printf("%d\n", sizeof(arr));
//	printf("%d\n", sizeof(int[3]));
//
//	char crr[10] = { 0 };
//	printf("%d\n", sizeof(crr));
//	printf("%d\n", sizeof crr);
//	return 0;
//}

//�����⣬sizeof�е����㲻����ĸı�ֵ�Ĵ�С

//int main()
//{
//	short s = 0;
//	int a = 10;
//	printf("%d\n", sizeof(s = a + 5));
//	printf("%d\n", s);
//	return 0;
//}

//��һ�������洢���ڴ��еĶ�������1�ĸ���

//int main(void)
//{
//	int n = -1;
//	int count = 0;
//	int i = 0;
//	for (i = 0;i < 32;i++)
//	{
//		if ((1&(n>>i)) == 1)
//		{
//			count++;
//		}
//	}
//	printf("��������1�ĸ��� = %d", count);
//	return 0;
//}

//�ﱤ�ˣ���ţ�Ƶ�˼·���ٴ��Ż��㷨��

//int main()
//{
//	int num = 11;
//	int i = 0;
//	int count = 0;//����
//	while (num)
//	{
//		count++;
//		num = num & (num - 1);
//	}
//	printf("��������1�ĸ��� = %d\n", count);
//	return 0;
//}
//�߼��룬�߼�����������

//int main()
//{
//	int i = 0, a = 0, b = 2, c = 3, d = 4;
//	i =  ++b && d++ && a++ ;
//	//i = a++||++b||d++;
//	printf("a = %d\n b = %d\n c = %d\nd = %d\n", a, b, c, d);
//	return 0;
//}
////��������Ľ����ʲô��

//

