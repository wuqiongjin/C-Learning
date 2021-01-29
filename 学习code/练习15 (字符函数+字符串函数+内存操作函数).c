#include <stdio.h>
#include <assert.h>


//-3
//10000000 00000000 00000000 00000011
//11111100
//11111111 11111111 11111111 11111101
//11111111111111111111111111111101
//
//int main()
//{
//	unsigned int a = -3;
//	printf("%u ", a);
//}

//strlen的模拟实现

//1. 计数器

//int my_strlen(const char* str)
//{
//	assert(str);
//	int count = 0;
//	while (*str)
//	{
//		str++;
//		count++;
//	}
//	return count;
//}
//
//int main()
//{
//	char str[] = "abcde";
//	int len = my_strlen(str);
//	printf("%d\n", len);
//	return 0;
//}

//2. 递归实现（不创建临时变量）

//int my_strlen(const char* str)
//{
//	assert(str);
//	if (*str)
//		return (1 + my_strlen(str + 1));
//	else
//		return 0;
//}
//
//int main()
//{
//	char str[] = "abcde";
//	int len = my_strlen(str);
//	printf("%d\n", len);
//	return 0;
//}

//3.指针-指针

//int my_strlen(const char* str)
//{
//	assert(str);
//	char* end = str;
//	while (*++end);//这里必须是++end，因为++end是先让end的值++然后再进行判断的。
//				   //如果是end++，那么在最后一次判断的时候，end为\0，条件不满足出去，但是此时end会再++！！！！这样数组会越界访问的（虽然程序不error）
//	//所以这里的其实就可以写 while(*end){end++;} 【注意这三种写法 条件判断 以及 ++ 执行的次数！！！！！！】
//	return (int)(end - str);
//}
//
//int main()
//{
//	char str[] = "abcde";
//	int len = my_strlen(str);
//	printf("%d\n", len);
//	return 0;
//}

//strcpy的模拟实现

//char* my_strcpy(char* str1, const char* str2)
//{
//	assert(str1 && str2);
//	char* p = str1;
//	while (*str1++ = *str2++);
//
//	return p;
//}
//
//int main()
//{
//	char str1[20] = "abcde";
//	char str2[] = "Hello";
//	my_strcpy(str1, str2);
//	printf("%s\n", str1);
//	return 0;
//}

//strcat模拟实现

//char* my_strcat(char* dest, const char* src)
//{
//	assert(dest && src);
//	char* p = dest;
//	//1.找到'\0'的位置
//	while (*++dest);		//写法1
//	//while(*dest != '\0')	//写法2：与上面的作用相同
//	//{
//	//	dest++;
//	//}
//
//	//2.开始追加src内容
//	//开始在\0位置处往后追加str2的内容到str2中的\0处（\0也加进去）【追加的时候和strcpy相同】
//	while (*dest++ = *src++)	//写法1
//	{
//		;
//	}	
//	//while(*dest++ = *src++);	//写法2
//	return p;
//}
//
//int main()
//{
//
//	char str1[20] = "Hello\0xxxxxxxxxxx";
//	char str2[] = "world";
//	my_strcat(str1, str2);
//	printf("%s\n", str1);
//	return 0;
//}

//strcmp模拟实现

//int my_strcmp(const char* str1, const char* str2)
//{
//	assert(str1 && str2);
//	while (*str1 || *str2)
//	{
//		if (*str1 > *str2)
//		{
//			return 1;
//		}
//		else if (*str1 < *str2)
//		{
//			return -1;
//		}
//		str1++;
//		str2++;
//	}
//	if (*str1 > *str2)
//	{
//		return 1;
//	}
//	else if (*str1 < *str2)
//	{
//		return -1;
//	}
//	else
//	{
//		return 0;
//	}
//	
//}

//标准版~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~

//int my_strcmp(char* str1, char* str2)
//{
//	assert(str1 && str2);
//	while (*str1 == *str2)
//	{
//		if (*str1 == '\0')
//		{
//			return 0;
//		}
//		str1++;
//		str2++;
//	}
//	if (*str1 > *str2)
//	{
//		return 1;
//	}
//	else
//	{
//		return -1;
//	}
//}
//
//int main()
//{
//	char str1[] = "abcde";
//	char str2[] = "abcde";
//	int ret = my_strcmp(str1, str2);
//	printf("%d\n", ret);
//	return 0;
//}

//strncpy模拟实现
//注意：1.如果num小于src的长度，那么只拷贝num长度的src，不会自动把最后一位的下一位变成'\0'
//	   2.如果num大于src的长度，即，src已经全部拷贝上去了，那么num多的部分全部拷贝成'\0'


//char* my_strncpy(char* dest, char* src, int num)
//{
//	int i = 0;
//	char* p = dest;
//	for (i = 0;i < num;i++)
//	{
//		if (*src == 0)
//		{
//			*dest = 0;
//			 dest++;
//		}
//		if (*src)
//		{
//			*dest = *src;
//			 dest++;
//			 src++;
//		}
//	}
//	return p;
//}

//小优化版~~~~~~~~~~~~~~

//char* my_strncpy(char* dest, const char* src, size_t num)
//{
//	int i = 0;
//	char* p = dest;
//	for (i = 0;i < num;i++)
//	{
//		*dest = *src;
//		dest++;
//		if (*src != 0)
//			src++;
//	}
//	return p;
//}

//标准版··························································

//char* my_strncpy(char * dest, const char *src, size_t n)
//{
//	char *ret = dest;
//	assert(dest);
//	assert(src);
//	while (n && *src)	//当源字符串没拷贝过去完且拷贝的数不为0时
//	{
//		*dest++ = *src++;//等价于*dest = *src; dest++; src++;
//		 n--;
//	}
//	while (n)	//当给的n大于源字符串的长度的时候，多出的部分全部换成'\0'
//	{
//		*dest++ = 0;//等价于*dest = 0; dest++;
//		 n--;
//	}
//	return ret;
//}
//
//int main()
//{
//	char str1[20] = "abcd\0xxxxxxxx";
//	char str2[] = "Hello";
//	int num = 0;
//	scanf("%d", &num);
//	//strncpy(str1, str2, num);
//	my_strncpy(str1, str2 , num);
//	printf("%s", str1);
//	return 0;
//}

//strncat模拟实现

//char* my_strncat(char* dest, const char* src, size_t num)
//{
//	char* ret = dest;
//	assert(dest && src);
//	while (*dest)
//	{
//		dest++;
//	}
//	while (num && *src)
//	{
//		*dest = *src;
//		dest++;
//		src++;
//		num--;
//	}
//	while (num)
//	{
//		*dest = 0;
//		dest++;
//		num--;
//	}
//	return ret;
//}
//
//int main()
//{
//	char str1[20] = "hello";
//	char str2[] = "world";
//	int num = 0;
//	scanf("%d", &num);
//	my_strncat(str1, str2, num);
//	//puts(str1);
//	printf("%s\n", str1);
//	return 0;
//}

//strncmp模拟实现

//int my_strncmp(const char* str1, const char* str2, size_t num)
//{
//	assert(str1 && str2);
//
//	while (num && (*str1 == *str2))
//	{
//		num--;
//		str1++;
//		str2++;
//	}
//	if (num == 0)
//	{
//		return 0;
//	}
//	if (*str1 > *str2)
//	{
//		return 1;
//	}
//	else if (*str1 < *str2)
//	{
//		return -1;
//	}
//}

//思路清晰版---------------------------------------------

//int my_strncmp(const char* str1, const char* str2, size_t num)
//{
//	assert(str1 && str2);
//	num--;							       	//num必须先-1，因为如果不-1，就是判断while循环条件的次数比num--的次数多1，
//	while (*str1 == *str2)					//这样的话，如果比较前3位（前三位都一样），第四位不一样，那么也会报不一样（因为在num还没减到0的时候，*str1就已经不等于*str2了）
//	{
//		if ( (num == 0) || (*str1 == 0))	//num == 0判断在num个字符内str1与str2是否相等。 
//			return 0;						//*str1 == 0判断两个字符串都比较到了\0的位置，并且还都相等（就没有必要管num了）
//		num--;
//		str1++;
//		str2++;
//	}
//	//凡是能进行到while循环外面的必然都是不相等的
//	if (*str1 > *str2)
//	{
//		return 1;
//	}
//	else if (*str1 < *str2)
//	{
//		return -1;
//	}
//}

//return 值是*str1 - *str2

//int my_strncmp(const char* str1, const char* str2, size_t num)
//{
//	assert(str1 && str2);
//	while (*str1 && *str2 && (*str1 == *str2) && (--num))
//	{
//		str1++;
//		str2++;
//	}
//	return *str1 - *str2;
//}
//
//int main()
//{
//	char str1[] = "abcd";
//	char str2[] = "abce";
//	int num = 0;
//	scanf("%d", &num);
//	int ret = my_strncmp(str1, str2, num);
//	printf("%d\n", ret);
//	return 0;
//}


//strstr模拟实现
//s1
//ABCDEF
//
//DEF
//s2

//char* my_strstr(const char* p1, const char* p2)
//{
//	assert(p1 && p2);
//	if (!*p2)
//		return (char*)p1;
//	char* s1 = (char*)p1;//这里的s1和s2是用来移动比较的指针。p1和p2是用来存储初始记录点的指针
//	char* s2 = (char*)p2;
//	char* cur = (char*)p1;//cur是用来记录从当前字符开始是否满足字串的比较，如果不满足，则cur++跳到下一个字符进行比较。很关键
//
//	while (*cur)
//	{
//		s1 = cur;//cur跳到了下一个字符，s1从cur所指的字符再开始比较
//		s2 = (char*) p2;//s2则回到字串的起始点进行比较
//		while ((*s1 == *s2) && *s1 && *s2)	//只有当s1和s2都相等，且s1,s2都不为NULL才能同时++进行比较
//		{
//			s1++;
//			s2++;
//		}
//		if (!*s2)//当s2==NULL时候，直接返回cur所记录的地址，从该地址开始就会出现第一个满足的字串
//			return cur;
//		if (!*s1)//如果s1都比较到了最后,并且s2也没有到\0的位置，那么这个字符串肯定没有给定的字串，直接return NULL
//			return NULL;
//		cur++;
//	}
//	return NULL;
//	
//}
//
//int main()
//{
//	char str[] = "AFE";
//	char cp[] = "FED";
//	char* ret = my_strstr(str, cp);
//	printf("%s\n", ret);
//	return 0;
//}

//memcpy模拟实现

//struct stu
//{
//	char name[20];
//	int age;
//};
//
//void* my_memcpy(void* dest, const void* src, size_t n)
//{
//	assert(dest && src);
//	void* ret = dest;
//	while (n)
//	{
//		*(char*)dest = *(char*)src;
//		++(char*)dest;
//		++(char*)src;
//		n--;
//	}
//	return ret;
//}
//
//int main()
//{
//	int arr1[] = { 1,2,3,4,5 };
//	int arr2[5] = { 0 };
//	struct stu s1[2] = { {"张三",18},{"李四",19} };
//	struct stu s2[2] = { 0 };
//	
//	my_memcpy(arr2, arr1, sizeof(arr1));
//	my_memcpy(s2, s1, sizeof(s1));
//	int i = 0;
//	for (i = 0;i < 5;i++)
//	{
//		printf("%d ", arr2[i]);
//	}
//	return 0;
//}

//memmove模拟实现
//1,2,3,4,5
//3,4,5,6,7

//void* my_memmove(void* dest, const void* src, size_t n)
//{
//	assert(dest && src);
//	void* ret = dest;
//	size_t cp = n;
//	if (dest < src)
//	{
//		while (cp)
//		{
//			*(char*)dest = *(char*)src;
//			++(char*)dest;
//			++(char*)src;
//			cp--;
//		}
//	}
//	if (dest > src)
//	{
//		cp = n;
//		while (cp)
//		{
//			++(char*)dest;
//			++(char*)src;
//			cp--;
//		}
//		--(char*)dest;
//		--(char*)src;
//		cp = n;
//		while (cp)
//		{
//			*(char*)dest = *(char*)src;
//			--(char*)dest;
//			--(char*)src;
//			cp--;
//		}
//	}
//	return ret;
//}

//标准版~~~~~~~~~~~~~~~~~~~~~~~~~~~~

//void* my_memmove(void* dest, void* src, size_t n)
//{
//	void* ret = dest;
//	assert(dest && src);
//	//src大于dest时候，是从前--->后替换
//	//src小于dest时候，是从后--->前替换
//	if (dest < src)//从前---->后
//	{
//		while (n--)
//		{
//			*(char*)dest = *(char*)src;
//			++(char*)dest;
//			++(char*)src;
//		}
//	}
//	else//从后---->前
//	{
//		while (n--)
//		{
//			*((char*)dest + n) = *((char*)src + n);//第一次n=19（因为n--了），dest+19后就是最后一个字节的位置，
//												   //然后每次都会因为n--而往前挪动1个字节，最后全部移动完
//		}		
//	}
//	return ret;
//}
//
//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	
//	my_memmove(arr + 2, arr, 20);
//	int i = 0;
//	for (i = 0;i < 10;i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	return 0;
//}

