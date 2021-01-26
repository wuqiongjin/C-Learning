#include <stdio.h>


//字符指针相关概念

//int main()
//{
//	//char arr[] = "abcdef";
//	//char *p = arr;
//	//printf("%s\n", p);
//	//printf("%s\n", arr);
//	//printf("%c\n", *p);
////--------------------------
//	//char* p = "abcdef";
//	//printf("%c\n", *p);
//	//printf("%s\n", p);
//	return 0;
//}

//

//int main()
//{
//	char str1[] = "hello bit.";
//	char str2[] = "hello bit.";
//	char *str3 = "hello bit.";
//	char *str4 = "hello bit.";
//	if (str1 == str2)
//		printf("str1 and str2 are same\n");
//	else
//		printf("str1 and str2 are not same\n");
//
//	if (str3 == str4)
//		printf("str3 and str4 are same\n");
//	else
//		printf("str3 and str4 are not same\n");
//
//	return 0;
//}

//数组指针

//int main(void)
//{
//	//char* arr[10];
//	//char* (*pa)[10] = &arr;
//	//-----------------------------------------
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int* p = arr;
//	int i = 0;
//	for (i = 0;i < 10;i++)
//	{
//		//printf("%d ", *(p + i));
//		printf("%d ", *(arr + i));
//	}
//	return 0;
//}

//二维数组传参

//void test(int* arr[][5])
//{}
//void test1(int* (*p)[5])
//{}
//void test3(int Arr[][5])
//{}
//void test4(int (*p)[5])
//{}
//int main()
//{
//	int Arr[3][5] = { 0 };
//	int* arr[3][5] = { 0 };
//	test3(Arr);
//	test(arr);
//	test4(Arr);
//	test1(arr);
//	return 0;
//}

//函数指针数组

//char* my_strcpy(char* dest, const char* src)
//{}
//int main()
//{
//	//1.函数指针pf指向my_strcpy
//	char*(*pf)(char*, const char*) = my_strcpy;
//	//2.函数指针数组pfArr存放my_strcpy
//	char*(*pfArr[4])(char*, const char*) = { my_strcpy,my_strcpy, my_strcpy, my_strcpy};
//	return 0;
//}

//回调函数练习（实现通用性冒泡排序）

////void Swap(void* e1, void* e2, int width)
//void Swap(char* e1,char* e2,int width)
//{
//	int i = 0;
//	for (i = 0;i < width;i++)
//	{
////三种写法都可以 
////
//		//注意！！！！！！！！！！！！！！！！！！！！！！交换2个指针的值，是“值”，不能是“地址”，所以需要*解引用
//		//
//		//char tmp = *((char*)e1+i);
//		//*((char*)e1+i) = *((char*)e2+i);
//		//*((char*)e2+i) = tmp;
////
////
//		//char tmp = *(char*)e1;
//		//*(char*)e1 = *(char*)e2;
//		//*(char*)e2 = tmp;
//		//((char*)e1)++;
//		//((char*)e2)++;
////
////
//		char tmp = *e1;
//		*e1 = *e2;
//		*e2 = tmp;
//		e1++;
//		e2++;
//	}
//
//}
//
//int cmp_int(const void* e1,const void* e2)
//{
//	return *(int*)e1 - *(int*)e2;
//}
//
//void bubble_sort(void* arr, int sz, int width, int(*cmp)(void* e1, void* e2))
//{
//	int i = 0;
//	int j = 0;
//	for (i = 0;i < sz - 1;i++)
//	{
//		for (j = 0;j < sz - i - 1;j++)
//		{
//			if ( cmp((char*)arr+j*width, (char*)arr+(j+1)*width) > 0)
//			{
//				Swap((char*)arr + j * width, (char*)arr + (j + 1)*width, width);
//			}
//
//		}
//	}
//}
//
//int main()
//{
//	int arr[] = { 5,4,3,2,1 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	bubble_sort(arr, sz, sizeof(arr[0]), cmp_int);
//	int i = 0;
//	for (i = 0;i < sz;i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	return 0;
//}

//笔试题1

//int main()
//{
//	int a[5] = { 1, 2, 3, 4, 5 };
//	int *ptr = (int *)(&a + 1);
//	printf("%d,%d", *(a + 1), *(ptr - 1));//*(a + 1) = 2; *(ptr - 1) = 5;
//	return 0;
//}

//笔试题2

////由于还没学习结构体，这里告知结构体的大小是20个字节
//struct Test
//{
//	int Num;
//	char *pcName;
//	short sDate;
//	char cha[2];
//	short sBa[4];
//}*p;
////假设p 的值为0x100000。 如下表表达式的值分别为多少？
//int main()
//{
//	printf("%p\n", p + 0x1);//0x100020（✖）（我是傻逼）--->0x100014    14转换成10进制就是1*16+4=20
//	printf("%p\n", (unsigned long)p + 0x1);//0x100001
//	printf("%p\n", (unsigned int*)p + 0x1);//0x100004
//	return 0;
//}

//笔试题3

//int main()
//{
//	int a[4] = { 1, 2, 3, 4 };
//	int *ptr1 = (int *)(&a + 1);
//	int *ptr2 = (int *)((int)a + 1);
//	printf("%x,%x", ptr1[-1], *ptr2);//ptr1[-1] = *(ptr1-1) -> 4
//									 //*ptr2=0x20 00 00 00
//
//	return 0;
//}

//笔试题4

//int main()
//{
//	int a[3][2] = { (0, 1), (2, 3), (4, 5) };//{ 1, 3, 5}逗号表达式
//	int *p;
//	p = a[0];//int *p = a[0];
//	printf("%d", p[0]);//p[0] = *p = 1
//	return 0;
//}

//笔试题5

//int main()
//{
//	int a[5][5];
//	int(*p)[4];
//	p = a;
//	printf("%p,%d\n", &p[4][2] - &a[4][2], &p[4][2] - &a[4][2]);// FFFFFC, -4
//	return 0;
//}

//笔试题6

//int main()
//{
//	int aa[2][5] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
//	int *ptr1 = (int *)(&aa + 1);
//	int *ptr2 = (int *)(*(aa + 1));
//	printf("%d,%d", *(ptr1 - 1), *(ptr2 - 1));//10 5
//	return 0;
//}

//笔试题7

//int main()
//{
//	char *a[] = { "work","at","alibaba" };
//	char**pa = a;
//	pa++;	
//	printf("%s\n", *pa);// at
//	return 0;
//}

//笔试题8

//int main()
//{
//	char *c[] = { "ENTER","NEW","POINT","FIRST" };
//	char**cp[] = { c + 3,c + 2,c + 1,c };
//	char***cpp = cp;
//	printf("%s\n", **++cpp);
//	printf("%s\n", *--*++cpp + 3);
//	printf("%s\n", *cpp[-2] + 3);
//	printf("%s\n", cpp[-1][-1] + 1);
//	return 0;
//}




//指针博客上传内容

//指针数组概念

//int main()
//{
//	int arr1[] = { 1,2,3 };
//	int arr2[] = { 4,5,6 };
//	int* parr[] = { arr1,arr2 };//这里将arr1和arr2的首元素地址存放到指针数组parr中（因为parr中的元素是指针，指针可以存放地址）
//	int i = 0;
//	int j = 0;
//	//通过指针数组去访问指针所指向的数组
//	for (i = 0;i < 2;i++)
//	{
//		for (j = 0;j < 3;j++)
//		{
//			printf("%d ", *(parr[i] + j));//parr[i]是确定parr这里的第几个元素的，然后parr[i]+j就是对数组名+某个数j，即可以得到该数组中的下标为j的元素的地址
//										  //然后再对地址进行解引用，就可以打印出来指针数组中的指针所指向的数组了
//		}
//	}
//	return 0;
//}

//数组指针

//int main()
//{
//	int arr[5] = { 1,2,3,4,5 };
//	int(*p)[5] = &arr;//这里的&arr是代表整个数组的地址，而不是首元素的地址
//	int i = 0;
//	for (i = 0;i < 5;i++)
//	{
//		printf("%d ", *(*p + i));//这里的*p是先对数组的地址进行解引用，解引用后的就是数组首元素的地址了，在首元素的地址上加上i再进行解引用就可以访问第i个元素了
//	}
//}

//int main()
//{
//	int arr[3][3] = { 1,2,3,4,5,6,7,8,9 };
//	int(*p)[3] = arr;//这里的arr是第一行的地址（此时将二维数组想象成一维数组，每一行就是一个元素）
//	int i = 0;
//	int j = 0;
//	for (i = 0;i < 3;i++)
//	{
//		for (j = 0;j < 3;j++)
//		{
//			printf("%d ", *(*(p+i)+j));//p+i是确定访问第i行的，*(p+i)+j是确定访问第i行的第j个元素的【这里的写法有很多】
//		}
//	}
//	return 0;
//}

//函数指针的概念

//int FindMax(int x, int y)
//{
//	if (x > y)
//		return x;
//	else
//		return y;
//}
//
//int main()
//{
//	int a = 10;
//	int b = 20;
//	FindMax(a, b);
//	int(*pf)(int, int) = FindMax;//定义一个函数指针指向FindMax函数
//	printf("%d\n", (*pf)(1, 2)); //通过函数指针去调用函数
//	printf("%d\n", pf(1, 2));	 //*其实可以省略（可以直接将pf当做函数名使用）
//	return 0;
//}

//函数指针数组

//int Add(int x, int y)
//{
//	return x + y;
//}
//int Sub(int x, int y)
//{
//	return x - y;
//}
//int Mul(int x, int y)
//{
//	return x * y;
//}
//int Div(int x, int y)
//{
//	return x / y;
//}
//
//int main()
//{
//	int(*pfarr[4])(int, int) = { Add, Sub, Mul, Div };//将每个函数的地址放到函数指针数组中
//	//计算2x3
//	printf("%d\n", (*pfarr[2])(2, 3));//pfarr[2]说明他是数组中的第三个元素，然后通过函数指针调用乘法Mul函数
//	//计算10/5
//	printf("%d\n", pfarr[3](10, 5));
//	return 0;
//}