#include <stdio.h>
#include <string.h>
#include <assert.h>

//1. ϰ�⣺�����ַ���

//#include <string.h>
//#include <assert.h>
//void L_Rotate(char* s, int k, int sz)//˼·��������2���ַ�������ͨ����Ҫ�����������ַ�����������λ�ã����1���ƶ����˹����ظ�k�Ρ�
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

//#include <assert.h>//˼·������Ҫ���������ĵ�һ���ַ������������е��ַ������ƶ���Ȼ��Ѵ��������ַ��������1��Ԫ�ء��˹����ظ�k�Ρ�
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
////˼·��ABCDE     ---�ƶ�ǰ2���ַ�
////1.   BA CDE	 ---����ǰ����
////2.   BA EDC	 ---�����벿��
////3.   CDEAB	 ---��������
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
//	Reverse(s, s + k - 1);//����ǰ�벿��
//	Reverse(s + k, s + sz - 1);//�����벿��
//	Reverse(s, s + sz - 1);//��������
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

//2. ׷�����⣺�ж�1���ַ�������һ���ַ�������/�����õ��ģ�����1�����ǵĻ�����0

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
//	return 0;//return 0�����������1.���Ȳ�һ����ֱ��return 0 
//			 //					  2. ȫ������ת���ˣ�����һ����return 0
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

////��һ��˼·���ж�s2�Ƿ�Ϊs1Ϊ��ת�ַ�������ͨ����s1����׷�ӣ�
////s1:ABCDE	----> ABCDEABCDE		AABCDAABCD
////S2:BCDEA							ABCDA
////ֻҪ�ж�s2�Ƿ�Ϊs1׷�Ӻ���ִ�����
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
////ʹ���˿⺯��strncat��strstr
////strncat(s1,s2,count) ��s2��count��Ԫ�����ᵶs1���档
////strstr(s1,s2) �ж�s1���Ƿ���s2���ж�s2�Ƿ�Ϊs1���ִ�������������Ϊָ�롣���û�еĻ�����NULL
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


//3. ϰ�⣺���Ͼ���

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
//	//�Ҳ���
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
//		printf("����\n");
//		printf("�±���%d %d\n", x, y);
//
//	}
//	else
//	{
//			printf("������\n");
//	}
//	return 0;
//}

//���Ͼ��󣺲��Ҷ������ݣ��ֲڴ��룩

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
//	//�Ҳ���
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
//			printf("����\n");
//			printf("�±���%d %d\n", x, y);
//			x++;
//			y--;
//			flag = 1;
//		}
//		else
//		{
//			if(flag==0)
//			printf("������\n");
//		}
//	}
//	
//	return 0;
//}
