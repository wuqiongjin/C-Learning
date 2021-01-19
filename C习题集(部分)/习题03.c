#include <stdio.h>
#include <string.h>


//BC60 打印三角形                *

//int main()
//{
//	int row = 0;
//	while (scanf("%d", &row) != EOF)
//	{
//		int a, b , rest = row;
//		for (a = 1;a <= row;a=rest+1)
//		{
//			rest = a;
//			for (b=row;b - a > 0;b--)
//			{
//				printf("  ");
//			}
//			for (a=rest;a > 0;a--)
//			{
//				printf("* ");
//			}
//			printf("\n");
//		}
//	}
//	return 0;
//}

//优化

//int main()
//{
//	int a, b, row;
//	while (scanf("%d", &row) != EOF)
//	{
//		for (a = 1;a <= row;a++)
//		{
//			for (b = 0;b < row - a;b++)
//				printf("  ");
//			for (b = 0;b < a;b++)
//				printf("* ");
//			printf("\n");
//		}
//	}
//	return 0;
//}

//BC68 X形图案

//int main()
//{
//	int n = 0;
//	while (scanf("%d", &n) != EOF)
//	{
//		int i, j = 0;
//		//int count = 0;
//		for (i = 0;i < n / 2 + n % 2;i++)
//		{
//			for (j = 0;j < i;j++)
//			{
//				printf(" ");
//				//count++;
//			}
//			printf("*");
//			if (i != n / 2 + n % 2 - 1)
//			{
//				for (j = 0;j < n - 2 - 2 * i;j++)
//				{
//					printf(" ");
//				}
//				printf("*");
//			}
//			else
//			{
//				if (n % 2 == 0)
//					printf("*");
//			}
//			for (j = 0;j < i;j++)
//			{
//				printf(" ");
//			}
//			printf("\n");
//		}
//		for (i = 0;i < n / 2+n % 2 ;i++)
//		{
//			if (i != 0 || n % 2 == 0)
//			{
//				for (j = 0;j < n / 2 + n % 2 - 1 - i;j++)
//				{
//					printf(" ");
//				}
//				printf("*");
//				for (j = 0;j < 2 * i + (n + 1) % 2 - 1;j++)
//				{
//					printf(" ");
//				}
//				if (i != 0)
//				{
//					printf("*");
//				}
//				if (i == 0 && n % 2 == 0)
//					printf("*");
//				for (j = 0;j < n / 2 + n % 2 - 1;j++)
//				{
//					printf(" ");
//				}
//				printf("\n");
//				//             for(j=0;j<2*i+1+(n-1)%2;j++)
//				//             {
//				//                 printf(" ");
//				//             }
//				//             if(i!=0)
//				//             {
//				//                 printf("")
//				//             }
//			}
//			}				
//	}
//	return 0;
//}

//优化--------【找规律】（不要一味的按照套路硬做）

//int main()
//{
//	int n, i, j;
//	while (scanf("%d", &n) != EOF)
//	{
//		for (i = 0;i < n;i++)
//		{
//			for (j = 0;j < n;j++)
//				if (j == i || j + i == n - 1)
//					printf("*");
//				else
//					printf(" ");
//			printf("\n");
//		}
//	}
//}

//BC70 空心三角形 【分析透彻规律！！】

//int main()
//{
//	int n = 0;
//	while (scanf("%d", &n) != EOF)
//	{
//		int i, j = 0;
//		for (i = 0;i < n;i++)
//		{
//			for (j = 0;j < n;j++)
//			{
//				if (0 == j || j == i || i == n - 1)
//					printf("* ");
//				else
//					printf("  ");
//			}
//			//             for(j=2*i+1;j<2*n;j++)
//			//             {
//			//                 printf(" ");
//			//             }
//			printf("\n");
//		}
//	}
//	return 0;
//}