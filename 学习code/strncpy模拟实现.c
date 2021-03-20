//#include <stdio.h>
//
//char* my_strncpy(char* dest, const char* src, size_t n)
//{
//	char* ret = dest;
//	while (n && *src)
//	{
//		n--;
//		*dest++ = *src++;
//	}
//	while (n)
//	{
//		n--;
//		*dest++ = '\0';
//	}
//	return ret;
//}
//
//int main()
//{
//	char str[10] = { 0 };
//	char s[5] = "12345";
//	char* ret = my_strncpy(str, s, 4);
//	printf("%s", ret);
//	return 0;
//}