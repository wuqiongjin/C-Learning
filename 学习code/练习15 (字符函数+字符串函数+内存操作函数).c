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

//strlen��ģ��ʵ��

//1. ������

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

//2. �ݹ�ʵ�֣���������ʱ������

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

//3.ָ��-ָ��

//int my_strlen(const char* str)
//{
//	assert(str);
//	char* end = str;
//	while (*++end);//���������++end����Ϊ++end������end��ֵ++Ȼ���ٽ����жϵġ�
//				   //�����end++����ô�����һ���жϵ�ʱ��endΪ\0�������������ȥ�����Ǵ�ʱend����++�����������������Խ����ʵģ���Ȼ����error��
//	//�����������ʵ�Ϳ���д while(*end){end++;} ��ע��������д�� �����ж� �Լ� ++ ִ�еĴ�����������������
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

//strcpy��ģ��ʵ��

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

//strcatģ��ʵ��

//char* my_strcat(char* dest, const char* src)
//{
//	assert(dest && src);
//	char* p = dest;
//	//1.�ҵ�'\0'��λ��
//	while (*++dest);		//д��1
//	//while(*dest != '\0')	//д��2���������������ͬ
//	//{
//	//	dest++;
//	//}
//
//	//2.��ʼ׷��src����
//	//��ʼ��\0λ�ô�����׷��str2�����ݵ�str2�е�\0����\0Ҳ�ӽ�ȥ����׷�ӵ�ʱ���strcpy��ͬ��
//	while (*dest++ = *src++)	//д��1
//	{
//		;
//	}	
//	//while(*dest++ = *src++);	//д��2
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

//strcmpģ��ʵ��

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

//��׼��~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~

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

//strncpyģ��ʵ��
//ע�⣺1.���numС��src�ĳ��ȣ���ôֻ����num���ȵ�src�������Զ������һλ����һλ���'\0'
//	   2.���num����src�ĳ��ȣ�����src�Ѿ�ȫ��������ȥ�ˣ���ônum��Ĳ���ȫ��������'\0'


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

//С�Ż���~~~~~~~~~~~~~~

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

//��׼�桤������������������������������������������������������������������������������������������������������������������

//char* my_strncpy(char * dest, const char *src, size_t n)
//{
//	char *ret = dest;
//	assert(dest);
//	assert(src);
//	while (n && *src)	//��Դ�ַ���û������ȥ���ҿ���������Ϊ0ʱ
//	{
//		*dest++ = *src++;//�ȼ���*dest = *src; dest++; src++;
//		 n--;
//	}
//	while (n)	//������n����Դ�ַ����ĳ��ȵ�ʱ�򣬶���Ĳ���ȫ������'\0'
//	{
//		*dest++ = 0;//�ȼ���*dest = 0; dest++;
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

//strncatģ��ʵ��

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

//strncmpģ��ʵ��

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

//˼·������---------------------------------------------

//int my_strncmp(const char* str1, const char* str2, size_t num)
//{
//	assert(str1 && str2);
//	num--;							       	//num������-1����Ϊ�����-1�������ж�whileѭ�������Ĵ�����num--�Ĵ�����1��
//	while (*str1 == *str2)					//�����Ļ�������Ƚ�ǰ3λ��ǰ��λ��һ����������λ��һ������ôҲ�ᱨ��һ������Ϊ��num��û����0��ʱ��*str1���Ѿ�������*str2�ˣ�
//	{
//		if ( (num == 0) || (*str1 == 0))	//num == 0�ж���num���ַ���str1��str2�Ƿ���ȡ� 
//			return 0;						//*str1 == 0�ж������ַ������Ƚϵ���\0��λ�ã����һ�����ȣ���û�б�Ҫ��num�ˣ�
//		num--;
//		str1++;
//		str2++;
//	}
//	//�����ܽ��е�whileѭ������ı�Ȼ���ǲ���ȵ�
//	if (*str1 > *str2)
//	{
//		return 1;
//	}
//	else if (*str1 < *str2)
//	{
//		return -1;
//	}
//}

//return ֵ��*str1 - *str2

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


//strstrģ��ʵ��
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
//	char* s1 = (char*)p1;//�����s1��s2�������ƶ��Ƚϵ�ָ�롣p1��p2�������洢��ʼ��¼���ָ��
//	char* s2 = (char*)p2;
//	char* cur = (char*)p1;//cur��������¼�ӵ�ǰ�ַ���ʼ�Ƿ������ִ��ıȽϣ���������㣬��cur++������һ���ַ����бȽϡ��ܹؼ�
//
//	while (*cur)
//	{
//		s1 = cur;//cur��������һ���ַ���s1��cur��ָ���ַ��ٿ�ʼ�Ƚ�
//		s2 = (char*) p2;//s2��ص��ִ�����ʼ����бȽ�
//		while ((*s1 == *s2) && *s1 && *s2)	//ֻ�е�s1��s2����ȣ���s1,s2����ΪNULL����ͬʱ++���бȽ�
//		{
//			s1++;
//			s2++;
//		}
//		if (!*s2)//��s2==NULLʱ��ֱ�ӷ���cur����¼�ĵ�ַ���Ӹõ�ַ��ʼ�ͻ���ֵ�һ��������ִ�
//			return cur;
//		if (!*s1)//���s1���Ƚϵ������,����s2Ҳû�е�\0��λ�ã���ô����ַ����϶�û�и������ִ���ֱ��return NULL
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

//memcpyģ��ʵ��

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
//	struct stu s1[2] = { {"����",18},{"����",19} };
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

//memmoveģ��ʵ��
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

//��׼��~~~~~~~~~~~~~~~~~~~~~~~~~~~~

//void* my_memmove(void* dest, void* src, size_t n)
//{
//	void* ret = dest;
//	assert(dest && src);
//	//src����destʱ���Ǵ�ǰ--->���滻
//	//srcС��destʱ���ǴӺ�--->ǰ�滻
//	if (dest < src)//��ǰ---->��
//	{
//		while (n--)
//		{
//			*(char*)dest = *(char*)src;
//			++(char*)dest;
//			++(char*)src;
//		}
//	}
//	else//�Ӻ�---->ǰ
//	{
//		while (n--)
//		{
//			*((char*)dest + n) = *((char*)src + n);//��һ��n=19����Ϊn--�ˣ���dest+19��������һ���ֽڵ�λ�ã�
//												   //Ȼ��ÿ�ζ�����Ϊn--����ǰŲ��1���ֽڣ����ȫ���ƶ���
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

