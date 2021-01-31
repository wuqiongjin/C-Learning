#include <stdio.h>
#include <string.h>
#include <assert.h>

//strlen三种实现方式
//长度不受限制的字符串函数
//strcpy
//strcat
//strcmp

//字符串查找函数
//strstr

//内存操作函数
//memcpy
//memmove




//strlen的三种实现方式

//1.计数器count

//int my_strlen(const char* str)
//{
//	int count = 0;
//	assert(str);//断言指针的有效性
//	while (*str++)//当str不为'\0'执行
//		count++;
//	return count;
//}

//2.递归（不创建临时变量）

////abcd
////1+bcd
////1+1+cd
////1+1+1+d
////1+1+1+1
//int my_strlen(const char* str)
//{
//	if (*str)
//		return 1 + my_strlen(str + 1);
//	return 0;
//}

//3.指针-指针

//int my_strlen(const char* str)
//{
//	char* end = (char*)str;
//	while (*end++);
//	return (int)(--end - str);
//}

//int main()
//{
//	char arr[] = "abcdef";
//	int ret = my_strlen(arr);
//	printf("%d\n", ret);
//	return 0;
//}




//strcpy的模拟实现

//char* my_strcpy(char* dest, const char* src)
//{
//	char* ret = dest;
//	assert(dest && src);//断言指针的有效性
//	while (*dest++ = *src++);//将*src赋值给*dest后，判断这个值是否为0，然后再src++,dest++
//	return ret;
//}
//
//int main()
//{
//	char str1[20] = "abcdef";
//	char str2[] = "Hello World";
//	//将str2拷贝到str1中
//	char* ret = my_strcpy(str1, str2);
//	printf("%s\n", ret);
//	return 0;
//}



//strcat的模拟实现

//char* my_strcat(char* dest, const char* src)
//{
//	char* ret = dest;
//	assert(dest && src);//断言指针的有效性
//	while (*dest)//找到dest中的'\0'
//		dest++;
//	while (*dest++ = *src++);//将src中的内容赋给dest（包括'\0'）
//	return ret;
//}
//
//int main()
//{
//	char str1[20] = "Hello";
//	char str2[] = "World!";
//	//将字符串str2追加到str1的后面
//	char* ret = my_strcat(str1, str2);
//	printf("%s\n", ret);
//	return 0;
//}



//strcmp的模拟实现

//int my_strcmp(const char* str1, const char* str2)
//{
//	assert(str1 && str2);//断言指针的有效性
//
//	while (*str1 == *str2)//*str1和*str2相等进入循环，否则直接return
//	{
//		if (!*str1)//如果*str1和*str2都指向了'\0'，那么它们就相等了
//			return 0;
//		str1++;
//		str2++;
//	}
//	return *str1 - *str2;
//}
//
//int main()
//{
//	char str1[] = "abcde";
//	char str2[] = "abcdf";
//	//比较str1和str2的大小
//	int ret = my_strcmp(str1, str2);
//	printf("%d\n", ret);
//	return 0;
//}



//strstr的模拟实现

//char* my_strstr(const char* str1, const char* str2)
//{
//	assert(str1 && str2);//断言指针的有效性
//	char* s1 = (char*)str1;//移动s1和s2指针来进行比较
//	char* s2 = (char*)str2;
//	char* cur = s1;//cur指针是记录当前从哪个字符开始比较的
//	while (*cur)
//	{
//		while (*s1 == *s2)
//		{
//			s1++;
//			s2++;
//		}
//		if (!*s2)//s2如果访问到了'\0'，那么说明已经找到了子串了
//			return cur;//返回记录这一子串的首地址
//		cur++;
//		s1 = cur;
//		s2 = (char*)str2;//重置s2
//	}
//	return NULL;//如果找不到，返回NULL
//}
//
//int main()
//{
//	char str1[] = "ABBCDEF";
//	char str2[] = "BCD";
//	//从str1中找str2
//	char* ret = my_strstr(str1, str2);
//	printf("%s\n", ret);
//	return 0;
//}



//memcpy的模拟实现

//void* my_memcpy(void* dest, const void* src, size_t n)
//{
//	void* ret = dest;
//	assert(dest && src);//断言指针的有效性
//	while (n--)//记录拷贝了多少个字节
//	{
//		*(char*)dest = *(char*)src;//以char为单位，因为char是1个字节
//		++(char*)dest;
//		++(char*)src;
//	}
//	return ret;
//}
//
//int main()
//{
//	int arr1[] = { 1,3,5,7,9};
//	int arr2[] = { 2,4,6 };
//	//将arr1中的前12个字节设置为arr2前12个字节的内容
//	my_memcpy(arr1, arr2, 12);
//	int i = 0;
//	for (i = 0;i < 5;i++)
//		printf("%d ", arr1[i]);
//	return 0;
//}



//memmove的模拟实现

//void* memmove(void* dest, const void* src, size_t n)
//{
//	void* ret = dest;
//	assert(dest && src);//断言指针的有效性
//	if (dest > src)
//	{
//		while (n--)//从后--->前 拷贝
//		{
//			*((char*)dest + n) = *((char*)src + n);//从后向前每个字节每个字节的拷贝
//		}
//	}
//	else//dest < src
//	{
//		while (n--)//从前--->后 拷贝
//		{
//			*(char*)dest = *(char*)src;
//			++(char*)dest;
//			++(char*)src;
//		}
//	}
//	return ret;
//}
//
//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	//将从arr开始的前20个字节拷贝到arr+2开始的前20个字节中
//	memmove(arr + 2, arr, 20);
//	int i = 0;
//	for (i = 0;i < 10;i++)
//		printf("%d ", arr[i]);
//	return 0;
//}

//测试字符指针存放scanf内容

int main()
{
	char a = 'a';
	//char* s = NULL;
	char* s = &a;
	scanf("%s", s);
	printf(s);
}
