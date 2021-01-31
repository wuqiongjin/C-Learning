#include <stdio.h>
#include <string.h>
#include <assert.h>

//strlen����ʵ�ַ�ʽ
//���Ȳ������Ƶ��ַ�������
//strcpy
//strcat
//strcmp

//�ַ������Һ���
//strstr

//�ڴ��������
//memcpy
//memmove




//strlen������ʵ�ַ�ʽ

//1.������count

//int my_strlen(const char* str)
//{
//	int count = 0;
//	assert(str);//����ָ�����Ч��
//	while (*str++)//��str��Ϊ'\0'ִ��
//		count++;
//	return count;
//}

//2.�ݹ飨��������ʱ������

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

//3.ָ��-ָ��

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




//strcpy��ģ��ʵ��

//char* my_strcpy(char* dest, const char* src)
//{
//	char* ret = dest;
//	assert(dest && src);//����ָ�����Ч��
//	while (*dest++ = *src++);//��*src��ֵ��*dest���ж����ֵ�Ƿ�Ϊ0��Ȼ����src++,dest++
//	return ret;
//}
//
//int main()
//{
//	char str1[20] = "abcdef";
//	char str2[] = "Hello World";
//	//��str2������str1��
//	char* ret = my_strcpy(str1, str2);
//	printf("%s\n", ret);
//	return 0;
//}



//strcat��ģ��ʵ��

//char* my_strcat(char* dest, const char* src)
//{
//	char* ret = dest;
//	assert(dest && src);//����ָ�����Ч��
//	while (*dest)//�ҵ�dest�е�'\0'
//		dest++;
//	while (*dest++ = *src++);//��src�е����ݸ���dest������'\0'��
//	return ret;
//}
//
//int main()
//{
//	char str1[20] = "Hello";
//	char str2[] = "World!";
//	//���ַ���str2׷�ӵ�str1�ĺ���
//	char* ret = my_strcat(str1, str2);
//	printf("%s\n", ret);
//	return 0;
//}



//strcmp��ģ��ʵ��

//int my_strcmp(const char* str1, const char* str2)
//{
//	assert(str1 && str2);//����ָ�����Ч��
//
//	while (*str1 == *str2)//*str1��*str2��Ƚ���ѭ��������ֱ��return
//	{
//		if (!*str1)//���*str1��*str2��ָ����'\0'����ô���Ǿ������
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
//	//�Ƚ�str1��str2�Ĵ�С
//	int ret = my_strcmp(str1, str2);
//	printf("%d\n", ret);
//	return 0;
//}



//strstr��ģ��ʵ��

//char* my_strstr(const char* str1, const char* str2)
//{
//	assert(str1 && str2);//����ָ�����Ч��
//	char* s1 = (char*)str1;//�ƶ�s1��s2ָ�������бȽ�
//	char* s2 = (char*)str2;
//	char* cur = s1;//curָ���Ǽ�¼��ǰ���ĸ��ַ���ʼ�Ƚϵ�
//	while (*cur)
//	{
//		while (*s1 == *s2)
//		{
//			s1++;
//			s2++;
//		}
//		if (!*s2)//s2������ʵ���'\0'����ô˵���Ѿ��ҵ����Ӵ���
//			return cur;//���ؼ�¼��һ�Ӵ����׵�ַ
//		cur++;
//		s1 = cur;
//		s2 = (char*)str2;//����s2
//	}
//	return NULL;//����Ҳ���������NULL
//}
//
//int main()
//{
//	char str1[] = "ABBCDEF";
//	char str2[] = "BCD";
//	//��str1����str2
//	char* ret = my_strstr(str1, str2);
//	printf("%s\n", ret);
//	return 0;
//}



//memcpy��ģ��ʵ��

//void* my_memcpy(void* dest, const void* src, size_t n)
//{
//	void* ret = dest;
//	assert(dest && src);//����ָ�����Ч��
//	while (n--)//��¼�����˶��ٸ��ֽ�
//	{
//		*(char*)dest = *(char*)src;//��charΪ��λ����Ϊchar��1���ֽ�
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
//	//��arr1�е�ǰ12���ֽ�����Ϊarr2ǰ12���ֽڵ�����
//	my_memcpy(arr1, arr2, 12);
//	int i = 0;
//	for (i = 0;i < 5;i++)
//		printf("%d ", arr1[i]);
//	return 0;
//}



//memmove��ģ��ʵ��

//void* memmove(void* dest, const void* src, size_t n)
//{
//	void* ret = dest;
//	assert(dest && src);//����ָ�����Ч��
//	if (dest > src)
//	{
//		while (n--)//�Ӻ�--->ǰ ����
//		{
//			*((char*)dest + n) = *((char*)src + n);//�Ӻ���ǰÿ���ֽ�ÿ���ֽڵĿ���
//		}
//	}
//	else//dest < src
//	{
//		while (n--)//��ǰ--->�� ����
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
//	//����arr��ʼ��ǰ20���ֽڿ�����arr+2��ʼ��ǰ20���ֽ���
//	memmove(arr + 2, arr, 20);
//	int i = 0;
//	for (i = 0;i < 10;i++)
//		printf("%d ", arr[i]);
//	return 0;
//}

int main()
{
	char a = 'a';
	//char* s = NULL;
	char* s = &a;
	scanf("%s", s);
	printf(s);
}