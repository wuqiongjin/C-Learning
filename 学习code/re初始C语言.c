#include <stdio.h>
#include <string.h>

//字符数组，\0，sizeof，strlen

//int main()
//{
//	char arr1[] = "abc";
//	char arr2[] = { 'a','b','c' };
//
//
//	printf("arr1=%d\n", sizeof(arr1));
//	printf("arr2=%d\n", sizeof(arr2));
//	printf("arr1=%d\n", strlen(arr1));
//	printf("arr2=%d\n", strlen(arr2));
//	return 0;
//}

//转义字符（字符！！！！！！！！所以打印必须用'\ddd'），/ddd 八进制【这个\ddd，是指\后面输入的1~3个数字（前提是不超过8）为8进制数字】

//int main()
//{
//	//printf("%d\n", strlen("c:\test\328\test.c")); //小丑竟是我自己》》》\328是2个字符，\32是个8进制字符，
//	//										      //由于8进制没有8，所以328后面的8算作另一个字符
//	//
//	////printf("%d", \132);//errrrr ---->字符！！！！！！！！所以打印必须用'\ddd'
//	//printf("%d\n", '\132');
//	//printf("%c\n", '\132');
//
//	//printf("%d\n", '\350');		//不要！！！！超出ASCII表的值的范围
//	//printf("%c\n", '\354');
//	return 0;
//}

//int FindMax(int x, int y)
//{
//	return x > y ? x : y;
//}
//int main()
//{
//	int a;
//	int b;
//	scanf("%d%d", &a, &b);
//	printf("%d\n",FindMax(a,b));
//	return 0;
//}

//enum Sex
//{
//	Male=5,
//	Female=10,
//	Secret
//};
//int main()
//{
//
//	printf("%d", Secret);//11
//	return 0;
//}

