#include <stdio.h>
#include <string.h>


//BC78筛选素数

//#include <math.h>
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int i, j, count = 0;
//	int arr[100];
//	for (i = 0;i <= n;i++)
//	{
//		arr[i] = i;
//	}
//	for (i = 3;i <= n;i++)
//	{
//		for (j = 2;j <i&&j<=sqrt(n);j++)
//		{
//			if (arr[i] % j == 0&&arr[i]!=0)
//			{
//				arr[i] = 0;
//				count++;
//			}
//		}
//	}
//	for (i = 2;i <= n;i++)
//	{
//		if (arr[i] != 0)
//			printf("%d ", arr[i]);
//	}
//	printf("\n%d", count);
//	return 0;
//}

//BC79图形相似度比较【随机生成0和1组成图形】

//#include <stdlib.h>
//int main()
//{
//	int m, n = 0;
//	scanf("%d %d", &m, &n);
//	int i, j = 0;
//	srand((unsigned)time(NULL));
//	int num = 0;
//	int arr1[100][100] = { 0 };
//	int arr2[100][100] = { 0 };
//	double count = 0.0;
//	/*for (i = 0;i < m;i++)
//	{
//		for (j = 0;j < n;j++)
//		{
//			num = rand() % 2;
//			printf("%d ", num);
//		}
//		printf("\n");
//	}
//	for (i = 0;i < m;i++)
//	{
//		for (j = 0;j < n;j++)
//		{
//			num = rand() % 2;
//			printf("%d ", num);
//		}
//		printf("\n");
//	}*/
//	for (i = 0;i < m;i++)
//	{
//		for (j = 0;j < n;j++)
//		{
//			num = rand() % 2;
//			arr1[i][j] = num;
//		}
//	}
//	for (i = 0;i < m;i++)
//	{
//		for (j = 0;j < n;j++)
//		{
//			num = rand() % 2;
//			arr2[i][j] = num;
//		}
//	}
//	for (i = 0;i < m;i++)
//	{
//		for (j = 0;j < n;j++)
//		{
//			if (arr1[i][j] == arr2[i][j])
//				count++;
//		}
//	}
//	printf("%.2f", count / (m*n));
//	return 0;
//}

//求任意给定时间的时针和分针的夹角

//int main()
//{
//	int hour, minute = 0;
//	scanf("%d:%d", &hour, &minute);
//	hour %= 12;
//	double angleh,anglem,angle = 0;
//	anglem = 1.0*minute;
//	angleh = (1.0*hour * 5 + (1.0*minute/12));
//	if (anglem > angleh)
//		angle=(anglem - angleh) *6;
//	else
//		angle=(angleh - anglem) *6;
//	if (angle > 180)
//		printf("%.3lf", 360 - angle);
//	else
//		printf("%.3lf", angle);
//	return 0;
//}