#include <stdio.h>

//sizeof测量大小

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

//陷阱题，sizeof中的运算不会真的改变值的大小

//int main()
//{
//	short s = 0;
//	int a = 10;
//	printf("%d\n", sizeof(s = a + 5));
//	printf("%d\n", s);
//	return 0;
//}

//求一个整数存储在内存中的二进制中1的个数

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
//	printf("二进制中1的个数 = %d", count);
//	return 0;
//}

//碉堡了，超牛逼的思路【再次优化算法】

//int main()
//{
//	int num = 11;
//	int i = 0;
//	int count = 0;//计数
//	while (num)
//	{
//		count++;
//		num = num & (num - 1);
//	}
//	printf("二进制中1的个数 = %d\n", count);
//	return 0;
//}
//逻辑与，逻辑或的灵活运用

//int main()
//{
//	int i = 0, a = 0, b = 2, c = 3, d = 4;
//	i =  ++b && d++ && a++ ;
//	//i = a++||++b||d++;
//	printf("a = %d\n b = %d\n c = %d\nd = %d\n", a, b, c, d);
//	return 0;
//}
////程序输出的结果是什么？

//

