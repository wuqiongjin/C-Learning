//#include <stdio.h>
//
//char* my_strncat(char* dest, const char* src, size_t num)
//{
//	//assert(dest && src);
//	char* end = dest;
//	while (*end)
//	{
//		end++;
//	}
//	//追加num个字节到dest上
//	while (num--)
//	{
//		if (*src)
//			*end++ = *src++;
//		else
//			*end++ = '\0';
//	}
//	*end = '\0';
//	return dest;
//}
//
////strncat的模拟实现
//int main()
//{
//	char str1[10] = "123";
//	char str2[] = "456";
//	char* ret = my_strncat(str1, str2, 2);
//	printf("%s", ret);
//	return 0;
//}