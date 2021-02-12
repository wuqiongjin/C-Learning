#include <stdio.h>
#include <string.h>

//左旋字符串问题----C语言实现

//ABCDEF
//2
//CDEFAB
//依次旋转A,B...
//BCDEF+A
//CDEFA+B

//拼接2个字符串---根据长度确定旋转后的字符串
//ABCDEF+ABCDEF
//CDEFAB

//char* Rotate_left(char* str, int k,int len)
//{
//	strncpy(str + len, str, len);
//	*(str + len + k) = '\0';
//	return str + k;
//}
//
//int main()
//{
//	char str[20] = "ABCDEF";
//	int k = 0;
//	int len = strlen(str);
//	scanf("%d", &k);
//	char* ret = Rotate_left(str, k % len, len);
//	printf("%s\n", ret);
//	return 0;
//}


//判断2个字符串是否互为旋转后的

//int Is_Rotate(char* str1, char* str2, int len)
//{
//	strncpy(str1 + len, str1, len);
//	if (strstr(str1, str2))
//		return 1;
//	else
//		return 0;
//}
//
//int main()
//{
//	char str1[20] = "ABCDEF";
//	char str2[20] = "BCDEFA";
//	int len1 = strlen(str1);
//	int len2 = strlen(str2);
//	if (len1 == len2)
//	{
//		if (Is_Rotate(str1, str2, len1))
//			return 1;
//	}
//	return 0;
//}


//杨氏矩阵
//1 2 3 4 5
//2 3 4 5 6
//3 4 5 6 7
//4 5 6 7 8

int main()
{

	return 0;
}