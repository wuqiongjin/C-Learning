#include <stdio.h>
#include <string.h>
#include <assert.h>

//1. 习题：左旋字符串

//#include <string.h>
//#include <assert.h>
//void L_Rotate(char* s, int k, int sz)//思路：让相邻2个字符交换，通过让要进行左旋的字符交换到最后的位置，达成1次移动。此过程重复k次。
//{
//	assert(s);
//	int i = 0;
//	int j = 0;
//	for (i = 0;i < k;i++)
//	{
//		for (j = 0;j < sz - 1 ;j++)
//		{
//			char tmp = s[j];
//			s[j] = s[j + 1];  
//			s[j + 1] = tmp;
//		}
//	}
//}

//#include <assert.h>//思路：先让要进行左旋的第一个字符存起来，所有的字符向左移动，然后把存起来的字符赋给最后1个元素。此过程重复k次。
//void L_Rotate(char* s, int k, int sz)
//{
//	assert(s);
//	int i = 0;
//	int j = 0;
//	for (i = 0;i < k;i++)
//	{
//		char tmp = *s;
//		for (j = 0;j < sz - 1;j++)
//		{
//			*(s + j) = *(s + j + 1);
//		}
//		*(s + j) = tmp;
//	}
//}

//#include <assert.h>
////思路：ABCDE     ---移动前2个字符
////1.   BA CDE	 ---逆序前部分
////2.   BA EDC	 ---逆序后半部分
////3.   CDEAB	 ---逆序整体
//void Reverse(char* left, char* right)
//{
//	assert(left);
//	assert(right);
//
//	while (left < right)
//	{
//		char tmp = *left;
//		*left = *right;
//		*right = tmp;
//		left++;
//		right--;
//	}
//}
//
//void L_Rotate(char* s, int k, int sz)
//{
//	assert(k <= sz);
//	assert(s);
//	Reverse(s, s + k - 1);//逆序前半部分
//	Reverse(s + k, s + sz - 1);//逆序后半部分
//	Reverse(s, s + sz - 1);//逆序整体
//}
//
//int main()
//{
//
//	char s[20] = "ABCDE";
//	int lk = 0;
//	//int rk = 0;
//	scanf("%d", &lk);
//	int sz = 0;
//	sz = strlen(s);
//	L_Rotate(s,lk,sz);
////	R_Rotate(s, rk, sz);
//	printf("%s\n", s);
//	return 0;
//}

//2. 追加问题：判断1个字符串是另一个字符串左旋/右旋得到的，返回1，不是的话返回0

//int ch_Rotate(char* s1, char* s2)
//{
//	assert(s1);
//	assert(s2);
//	int i = 0;
//	int len1 = strlen(s1);
//	int len2 = strlen(s2);
//	if (len1 == len2)
//	{
//		for (i = 0;i < len1;i++)
//		{
//			if (strcmp(s1, s2) == 0)
//			{
//				return 1;
//			}
//			L_Rotate(s2, 1, len2);
//		}
//	}
//	return 0;//return 0的两种情况，1.长度不一样，直接return 0 
//			 //					  2. 全部都旋转过了，还不一样，return 0
//}
//
//int main()
//{
//	char s1[] = "ABCDE";
//	char s2[] = "BCDEA";
//	if (ch_Rotate(s1, s2))
//	{
//		printf("1");
//		return 1;
//	}
//	else
//	{
//		printf("0");
//		return 0;
//	}
//}

////另一种思路：判断s2是否为s1为旋转字符串。（通过将s1进行追加）
////s1:ABCDE	----> ABCDEABCDE		AABCDAABCD
////S2:BCDEA							ABCDA
////只要判断s2是否为s1追加后的字串即可
//int Is_Rotate(char* s1, char* s2)
//{
//	int len1 = strlen(s1);
//	int len2 = strlen(s2);
//	if (len1 == len2)
//	{
//		int i = 0;
//		for (i = len1;i < 2 * len1;i++)
//		{
//			*(s1 + i) = *(s1 + i - len1);
//		}
//		*(s1 + i) = '\0';
//
//		int j = 0;
//		for (i = 0;i < len1;i++)
//		{
//			if (*(s1 + i) == *s2)
//			{
//				for (j = 0;j < len1;j++)
//				{
//					if (*(s1 + i + j) == *(s2 + j))
//					{
//						continue;
//					}
//					break;
//				}
//				if (j == len1)
//					return 1;
//				else
//					return 0;
//			}
//		}
//		return 0;
//		//printf("%s", s1);
//	}
//	else
//	{
//		return 0;
//	}
//}
//
//
////使用了库函数strncat和strstr
////strncat(s1,s2,count) 将s2的count个元素连结刀s1后面。
////strstr(s1,s2) 判断s1中是否有s2（判断s2是否为s1的字串），返回类型为指针。如果没有的话返回NULL
//int Is_Rotate(char* s1, char* s2)
//{
//	int len1 = strlen(s1);
//	int len2 = strlen(s2);
//	if (len1 == len2)
//	{
//		strncat(s1, s1, len1);
//		if (strstr(s1, s2))
//		{
//			return 1;
//		}
//		else
//		{
//			return 0;
//		}
//	}
//	else
//	{
//		return 0;
//	}
//}
//
//int main()
//{
//	char s1[30] = "ABCDE";
//	char s2[] = "CDEAB";
//	if (Is_Rotate(s1, s2))
//		printf("YES\n");
//	else
//		printf("NO\n");
//	return 0;
//}


//3. 习题：杨氏矩阵

//int Search(int arr[3][3], int n, int *px, int* py)
//{
//	int x = 0;
//	int y = *py - 1;
//
//	while (x <= *px - 1 && y >= 0)
//	{
//		if (arr[x][y] > n)
//		{
//			y--;
//		}
//		else if (arr[x][y] < n)
//		{
//			x++;
//		}
//		else
//		{
//			*px = x;
//			*py = y;
//			return 1;
//		}
//	}
//	//找不到
//	return 0;
//}
//
//int main()
//{
//	int arr[3][3] = { {1,2,3},{2,3,4},{3,4,5} };
//	int n = 0;
//	int x = 3;
//	int y = 3;
//	scanf("%d", &n);
//	int ret = Search(arr, n, &x, &y);
//	if (ret)
//	{
//		printf("存在\n");
//		printf("下标是%d %d\n", x, y);
//
//	}
//	else
//	{
//			printf("不存在\n");
//	}
//	return 0;
//}

//杨氏矩阵：查找多组数据（粗糙代码）

//int Search(int arr[3][3],int n,int *px,int* py)
//{
//	int x = 0;
//	int y = *py;
//	
//	while (x <= 3 && y >= 0)
//	{
//		if (arr[x][y] > n)
//		{
//			y--;
//		}
//		else if (arr[x][y] < n)
//		{
//			x++;
//		}
//		else
//		{
//			*px = x;
//			*py = y;
//			return 1;
//		}
//	}
//	//找不到
//	return 0;
//}
//
//int main()
//{
//	int arr[3][3] = { {1,2,3},{2,3,4},{3,4,5} };
//	int n = 0;
//	int x = 2;
//	int y = 2;
//	scanf("%d", &n);
//	int flag = 0;
//	while (x <= 3 && y >= 0)
//	{
//		int ret = Search(arr, n, &x, &y);
//		if (ret)
//		{
//			printf("存在\n");
//			printf("下标是%d %d\n", x, y);
//			x++;
//			y--;
//			flag = 1;
//		}
//		else
//		{
//			if(flag==0)
//			printf("不存在\n");
//		}
//	}
//	
//	return 0;
//}
