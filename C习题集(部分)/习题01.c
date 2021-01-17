#include <stdio.h>
#include <string.h>

//BC14

//int main(void)
//{
//	int x, y, z = 0;
//	scanf("%4d%2d%2d", &x, &y, &z);
//	printf("year=%d\n", x);
//	printf("month=%02d\n", y);
//	printf("day=%02d\n", z);
//	return 0;
//}

//BC12 金字塔输出

//int main(void)
//{
//	char ret;
//	scanf("%c", &ret);
//	int i = 0;
//	int j = 5;
//	for (j = 5;j >= 1;j--)
//	{
//		for (i = 1;i <= j;i++)
//		{
//			if (i == 1 && j == 1)
//			{
//				printf("%c %c %c %c %c\n",ret, ret, ret, ret, ret);
//				break;
//			}
//			if (i == 2 && j == 2)
//			{
//				printf("%c %c %c %c\n", ret, ret, ret,ret);
//				break;
//			}
//			if (i == 3 && j == 3)
//			{
//				printf("%c %c %c\n", ret, ret,ret);
//				break;
//			}
//			if (i == 4 && j == 4)
//			{
//				printf("%c %c\n", ret,ret);
//				break;
//			}
//			if (i == 5)
//			{
//				printf("%c\n", ret);
//				break;
//			}
//			printf(" ");
//		}
//		
//	}
//	
//	return 0;
//}

//int main(void)
//{
//	char a;
//	scanf("%c", &a);
//	int i = 5;
//	int j = 1;
//	int m = 0;
//	for (i = 5;i > 0;i--)
//	{
//		for (j = 1;j < i;j++)
//			printf(" ");
//		for (m = 1;m <=6-i;m++)
//			printf("%c ",a);
//		printf("\n");
//	}
//}

//金字塔型输出【意义明确的标准答案】

//int main()
//{
//	char a;//定义一个字符串
//	scanf("%c", &a);
//	for (int i = 1; i <= 5; i++)//第一层for循环，可见循环5次，即这个金字塔有5层
//	{
//		for (int j = 5 - i; j > 0; j--)//第二层打印字符前的空格，第一行4个空，第二行3个逐行递减。
//			printf(" ");
//		for (int m = 1; m <= i; m++)//打印字符，第一行1个，第二行2个，逐行递增。
//			printf("%c ", a);
//		printf("\n");
//	}
//	return 0;
//}
//

//BC24

//int main(void)
//{
//	int weight, height = 0;
//	double BMI;
//	scanf("%d %d", &weight, &height);
//	BMI = weight / (height / 100.0*height / 100.0);
//	printf("%.2f", BMI);
//	return 0;
//}

//大写字母-->小写 BC28

//int main(void)
//{
//	char ch;
//	while ((scanf("%c", &ch)) != EOF)
//	{
//		getchar();
//		printf("%c\n", ch + 32);
//	}
//	return 0;
//}

//利用tolower函数

//#include <ctype.h>
//int main(void)
//{
//	char ch;
//	while ((scanf("%c", &ch)) != EOF)
//	{
//		getchar();
//		printf("%c\n", tolower(ch));
//	}
//	return 0;
//}

//int main(void)
//{
//	int n, h, m = 0;
//	scanf("%d %d %d", &n, &h, &m);
//	printf("%d", n - (m / h +m % h));
//	return 0;
//}

 //int main(void)
 //{
 //    int n,h,m=0;
 //    scanf("%d %d %d",&n,&h,&m);
 //    if(m%h!=0)
 //        printf("%d",n-(m/h)-1);
 //    else
 //        printf("%d",n-m/h);
 //    return 0;
 //}

//判断是否为字母  BC35

//int main()
//{
//	int ch = 0;
//	while ((ch = getchar()) != EOF)
//	{
//		getchar();
//		//printf("\n");
//		if ((ch >= 'A' && ch <= 'Z')||(ch >= 'a' && ch <= 'z'))
//			printf("YES\n");
//		else
//			printf("NO\n");
//	}
//	return 0;
//}

//网购 BC37

//int main()
//{
//	float price = 0;
//	int month, date, a = 0;
//	scanf("%f %d %d %d", &price, &month, &date, &a);
//	if (month == 11 && date == 11)
//	{
//		if (a)
//		{
//			if ((price*0.7 - 50) < 0)
//				printf("%.2f", 0.00);
//			else
//			printf("%.2f", price*0.7 - 50);
//		}
//		else
//			printf("%.2f", price*0.7);
//	}
//	else if (month == 12 && date == 12)
//	{
//		if (a)
//		{
//			if ((price*0.7 - 50) < 0)
//				printf("%.2f", 0.00);
//			printf("%.2f", price*0.8 - 50);
//		}
//			
//		else
//			printf("%.2f", price*0.8);
//	}
//	else
//		printf("%.2f", price);
//	return 0;
//}

//判断Lily number  BC38

//int main()
//{
//	int i = 0;
//	for (i = 10000;i <= 99999;i++)
//	{
//		int a, b, c, d = 0;
//		a = i / 10000 * (i % 10000);
//		b = i / 1000 * (i % 1000);
//		c = i / 100 * (i % 100);
//		d = i / 10 * (i % 10);
//		if (a + b + c + d == i)
//			printf("%d ", i);
//	}
//	return 0;
//}