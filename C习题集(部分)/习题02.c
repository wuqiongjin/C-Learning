#include <stdio.h>
#include <string.h>

//争前5名  BC39

//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int arr[40] = { 0 };
//	int i = 0;
//	for (;n > 0;n--, i++)
//	{
//		scanf("%d", &arr[i]);
//	}
//	int x, y = 0;
//	for (x = 0;x <= i;x++)
//	{
//		for (y = 0;y < i - x;y++)
//		{
//			if (arr[y] < arr[y + 1])
//			{
//				int tmp = 0;
//				tmp = arr[y];
//				arr[y] = arr[y+1];
//				arr[y+1] = tmp;
//			}
//		}
//	}
//	for (i = 0;i < 5;i++)
//		printf("%d ", arr[i]);
//	return 0;
//}

//BC40 竞选社长【通过用户输入的A和B的数量来进行判断，结束输入前需输入0】

//int main()
//{
//	char arr[1000];
//	int countA = 0;
//	int countB = 0;
//	int i = 0;
//	int ch = 0;
//	int count = 0;
//	while ((ch = getchar()) != '0')
//	{
//		//arr[i++] = ch;
//		if (ch == 'A')
//			countA++;
//		else if (ch == 'B')
//			countB++;
//		//count++;
//	}
//	/*for (i = 0;i<count;i++)
//	{
//		if (arr[i] == 'A')
//			countA++;
//		else
//			countB++;
//	}*/
//	if (countA > countB)
//		printf("%c", 'A');
//	else if (countB > countA)
//		printf("%c", 'B');
//	else
//		printf("%c", 'E');
//	return 0;
//}

//改【不需要引入数组，不然会StackOverflow】

//int main()
//{
//	int countA = 0;
//	int countB = 0;
//	int i = 0;
//	int ch = 0;
//	while ((ch = getchar()) != '0')
//	{
//		if (ch == 'A')
//			countA++;
//		if (ch == 'B')
//			countB++;
//	}
//	if (countA > countB)
//		printf("%c", 'A');
//	else if (countB > countA)
//		printf("%c", 'B');
//	else
//		printf("%c", 'E');
//	return 0;
//}

//字符串!EOF

//int main()
//{
//	int n = 0;
//	while (scanf("%d", &n) != EOF)
//	{
//		if (n >= 140)
//			printf("Genius\n");
//	}
//	return 0;
//}

//计算一元二次方程 BC53

//#include <math.h>
//int main()
//{
//	double a, b, c = 0;
//	while (scanf("%lf %lf %lf", &a, &b, &c) != EOF)
//	{
//		if (a != 0)
//		{
//			int derta = pow(b, 2) - 4 * a*c;
//			if (derta > 0)
//				printf("x1=%.2lf;x2=%.2lf", (-b - sqrt(derta)) / (2 * a),(-b + sqrt(derta)) / (2 * a));
//			else if (derta == 0)
//				printf("x1=x2=%.2lf", -b / (2 * a));
//			else
//				printf("x1=%.2lf-%.2lfi;x2=%.2lf+%.2lfi", -b / (2 * a), sqrt(-derta) / (2 * a), -b / (2 * a), sqrt(-derta) / (2 * a));
//		}
//		else
//			printf("Not quadratic equation");
//	}
//	return 0;
//}