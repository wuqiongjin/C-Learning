#include <stdio.h>
#include <string.h>


//
//1.数组的初始化（包括字符数组），都应该是char arr[10]={0};这里面的0必须在花括号里面。
//2.字符串应该放存在字符数组中，相应的字符可以放存在变量里
//3.字符串的比较必须使用字符串比较函数strcmp，而字符的比较则直接可以使用==进行判断
//4.strcmp的返回值，当1==2返回值为0，当1>2返回值>0，当1<2，返回值<0

//int main()
//{
//	char username[20] = { 0 };
//	char password[20] = { 0 };
//	while (scanf("%s %s", &username, &password) != EOF)
//	{
//		if (strcmp(username,"admin")==0&&strcmp(password,"admin")==0)
//				printf("Login Success!");
//		else
//				printf("Login Fail!");
//	}
//	return 0;
//}


//BC87 统计成绩（练习排序）

//int main()
//{
//	int n, i = 0;
//	scanf("%d", &n);
//	double arr[100] = { 0.0 };
//	for (i = 0;i < n;i++)
//	{
//		scanf("%lf", &arr[i]);
//	}
//	int min = 0;
//	int j = 0;
//	for (i = 0;i < n;i++)
//	{
//		min = i;
//		for (j = i + 1;j < n;j++)
//		{
//			if (arr[min] > arr[j])
//				min = j;
//		}
//		if (arr[min] < arr[i])
//		{
//			double tmp = arr[min];//不能写成int tmp=arr[min];******
//			arr[min] = arr[i];
//			arr[i] = tmp;
//		}
//	}
//	double average = 0.0;
//	for (i = 0;i < n;i++)
//	{
//		average += arr[i];
//	}
//	printf("%.2lf %.2lf %.2lf", arr[n - 1], arr[0], average / n);
//	return 0;
//}

//BC108 交换矩阵行列

//int main()
//{
//	int n, m;
//	scanf("%d%d", &n, &m);
//	int arr[10][10] = { 0 };
//	int i = 0;
//	int j = 0;
//	for (i = 0;i < n;i++)
//	{
//		for (j = 0;j < m;j++)
//		{
//			scanf("%d", &arr[i][j]);
//		}
//	}
//	int k = 0;
//	scanf("%d", &k);
//	char operation = 0;
//	int a = 0;
//	int b = 0;
//	int cir = 0;
//	for(cir=0;cir<k;cir++)
//	{
//		getchar();
//		scanf("%c%d%d", &operation, &a, &b);
//		if (operation == 'r')
//		{
//			for (j = 0;j < m;j++)
//			{
//				int tmp = arr[a-1][j];
//				arr[a-1][j] = arr[b-1][j];
//				arr[b-1][j] = tmp;
//			}
//		}
//		if (operation == 'c')
//		{
//			for (i = 0;i < n;i++)
//			{
//				int tmp = arr[i][a-1];
//				arr[i][a-1] = arr[i][b-1];
//				arr[i][b-1] = tmp;
//			}
//		}
//	}
//	for (i = 0;i < n;i++)
//	{
//		for (j = 0;j < m;j++)
//			printf("%d ", arr[i][j]);
//		printf("\n");
//	}
//	return 0;
//}

//井字棋（简单版）

//int main()
//{
//	char arr[3][3] = { 0 };
//	int i = 0;
//	int j = 0;
//	for (i = 0;i < 3;i++)
//	{
//		for (j = 0;j < 3;j++)
//		{
//			scanf("%c", &arr[i][j]);
//			getchar();
//		}	
//	}
//	for (i = 0;i < 3;i++)
//	{
//		if (arr[i][0] == arr[i][1] && arr[i][1] == arr[i][2] && arr[i][i] != 'O')
//		{
//			if (arr[i][1] == 'B')
//			{
//				printf("BoBo wins!\n");
//				return 0;
//			}
//			else
//			{
//				printf("KiKi wins!\n");
//				return 0;
//			}
//		}
//	}
//	for (j = 0;j < 3;j++)
//	{
//		if (arr[0][j] == arr[1][j] && arr[1][j] == arr[2][j] && arr[1][j] != 'O')
//		{
//			if (arr[1][j] == 'B')
//			{
//				printf("BoBo wins!\n");
//				return 0;
//			}
//			else
//			{
//				printf("KiKi wins!\n");
//				return 0;
//			}
//		}
//	}
//	if (arr[0][0] == arr[1][1] && arr[1][1] == arr[2][2] && arr[1][1] != 'O')
//	{
//		if (arr[1][j] == 'B')
//		{
//			printf("BoBo wins!\n");
//			return 0;
//		}
//		else
//		{
//			printf("KiKi wins!\n");
//			return 0;
//		}
//	}
//	if (arr[0][2] == arr[1][1] && arr[1][1] == arr[2][0] && arr[1][1] != 'O')
//	{
//		if (arr[1][j] == 'B')
//		{
//			printf("BoBo wins!\n");
//			return 0;
//		}
//		else
//		{
//			printf("KiKi wins!\n");
//			return 0;
//		}
//	}
//	printf("No winner!\n");
//	return 0;
//}