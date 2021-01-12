#include <stdio.h>
#include <string.h>

//int main()
//{
//	int arr1[3] = { 1,3,5 };
//	int arr2[3] = { 2,4,6 };
//	int tmp = 0;
//	int i = 0;
//	for (i = 0;i < 3;i++)
//	{
//		tmp = arr1[i];
//		arr1[i] = arr2[i];
//		arr2[i] = tmp;
//	}
//	for (i = 0;i < 3;i++)
//		printf("%d ", arr1[i]);
//	printf("\n");
//	for (i = 0;i < 3;i++)
//		printf("%d ", arr2[i]);
//	return 0;
//}

//1. 操作符优先级问题【“+=”比“,”优先级要高！！】

//int main()
//{
//	int a, b, c;
//	a = 5;
//	c = ++a;
//	b = ++c, c++, ++a, ++a;
//	b += a++ + c;
//	printf("a=%d b=%d c=%d", a, b, c);
//	return 0;
//}

//2. 求2个数在2进制表达中，有多少位不同

//int main()
//{
//	int n, m;
//	scanf("%d %d", &n, &m);
//	/*int a = 0;
//	a = a | n;
//	a = a ^ m;*/
//	int a = n ^ m;
//	int count = 0;
//	while (a)
//	{
//		a = a & (a - 1);
//		count++;
//	}
//	printf("%d", count);
//	return 0;
//}

//3. *************统计1个数在2进制下1的个数************

//方法1（使用%和/运算）

//int count_bit_one(unsigned int num, int count)//接收的时候将数据转化为unsigned int，这样就可以处理负数了
//{
//	while (num)
//	{
//		if (num % 2 == 1)
//			count++;
//		num /= 2;
//	}
//	return count;
//}
//int main()
//{
//	int n;
//	scanf("%d", &n);
//	unsigned int num = n;)//接收的时候将数据转化为unsigned int，这样就可以处理负数了【很关键！！！】
//	int count = 0;
//	//count = count_bit_one(num, count);
//	while (num)
//	{
//		if (num % 2 == 1)
//			count++;
//		num /= 2;
//	}
//	printf("count=%d", count);
//	return 0;
//}

//方法2（使用按位与&和移位操作>>）

//int main()
//{
//	int num;
//	int count = 0;
//	scanf("%d", &num);
//	int i = 0;
//	for(i=0;i<32;i++)
//	{
//		/*if (num & 1)
//			count++;
//		num >>=1;*/
//		if (((num >> i) & 1) == 1)
//			count++;
//	}
//	printf("count=%d\n", count);
//	return 0;
//}

//方法3（利用n&n-1，有几个1就运算几次）

//int main()
//{
//	int num;
//	scanf("%d", &num);
//	int count = 0;
//	while (num)
//	{
//		num = num & (num - 1);
//		count++;
//	}
//	printf("count=%d", count);
//	return 0;
//}

//4. 分别打印1个数的二进制的奇数位和偶数位

//int main()
//{
//	int num;
//	scanf("%d", &num);
//	//打印奇数位
//	int i = 0;
//	for (i = 30;i >= 0;i -= 2)//注意！！！从第31位移动到第1位需要移动30个，不是31个。
//	{
//		printf("%d ", ((num >> i) & 1));
//	}
//	printf("\n");
//	//打印偶数位
//	for (i = 31;i >= 0;i -= 2)//注意！！！从第32位移动到第1位需要移动31个，不是32个。
//	{
//		printf("%d ", ((num >> i) & 1));
//	}
//	return 0;
//}

//5. 乘法口诀表

//int main()
//{
//	int n;
//	scanf("%d", &n);
//	int i = 0;
//	int j = 0;
//	for (i = 1;i <= n;i++)
//	{
//		for (j = i;j <= n;j++)
//		{
//			printf("%2d*%-2d=%-3d ",i,j,i*j);
//		}
//		printf("\n");
//	}
//	return 0;
//}

//6. 打印一个数的每一位（递归方式实现）--------多调试调试，有利于理解递归！!!!!!!!!!!!

//void Print_num(int num)
//{
//	if (num != 0)
//	{
//		Print_num(num / 10);
//	}
//	if(num!=0)
//	printf("%d ", num % 10); 
//}
//int main()
//{
//	int num;
//	scanf("%d", &num);
//	Print_num(num);
//	return 0;
//}

//7. n的阶乘（递归方式实现）------（递归方式实现）--------多调试调试，有利于理解递归！!!!!!!!!!!!

//int multiple(int n)
//{
//	if (n > 0)
//	{
//		return n*multiple(n-1);
//	}
//}
//int main()
//{
//	int n;
//	scanf("%d", &n);
//	int result = multiple(n);
//	printf("%d\n", result);
//	return 0;
//}

//8. strlen模拟实现

//非递归

//int main()
//{
//	char str[] = "mohumohu";
//	char* p = str;
//	int count = 0;
//	while (*p != '\0')
//	{
//		count++;
//		p += 1;
//	}
//	printf("%d", count);
//	return 0;
//}

//递归实现【大师，我悟了】

//int my_strlen(char str[], char* p)
//{
//	if (*p != '\0')
//	{
//		p += 1;
//		return (1 + my_strlen(str, p));
//	}
//	else
//		return 0;
//}
//int main()
//{
//	char str[] = "mohumohu";
//	char* p = str;
//	int count = my_strlen(str,p);
//	printf("%d\n", count);
//	return 0;
//}

//9. 字符串数组逆序

//非递归

//void reverse_string(char arr[],int sz)
//{
//	int left = 0;
//	int right = sz-1;
//	while (right>left)
//	{
//		char tmp = arr[right];
//		arr[right] = arr[left];
//		arr[left] = tmp;
//		left++;
//		right--;
//	}
////	return arr;
//}
//int main()
//{
//	char arr[] = "mohumohu";
//	int sz = strlen(arr);
//	reverse_string(arr,sz);
//		printf("%s\n", arr);
//}

//递归
//a,b,c,d,e,f
//①.a和f互换
//②.剩下部分，b,c,d,e逆序

//int my_strlen(char arr[])
//{
//	char* p = arr;
//	int count = 0;
//	while (*p != '\0')
//	{
//		p++;
//		count++;
//	}
//	return count;
//}
//void reverse_string(char arr[])
//{
//	/*int left = 0;
//	int right = my_strlen(arr) - 1;
//	char tmp = arr[left];
//	arr[left] = arr[right];
//	char* p = &arr[left];
//	while (*p != '\0')
//		*p++;
//	*(p - 1) = '\0';
//	if(my_strlen(arr)>=2)
//	reverse_string(arr+1);
//	arr[right] = tmp;*/
//
//	char tmp = arr[0];
//	int last = my_strlen(arr) - 1;
//	arr[0] = arr[last];
//	arr[last] = '\0';
//	if(my_strlen(arr+1)>=2)
//		reverse_string(arr + 1);
//	arr[last] = tmp;
//}
//int main()
//{
//	char arr[] = "mohumohu";
//	reverse_string(arr);
//	printf("%s\n", arr);
//	return 0;
//}

//10. 求一个数的每位置和（递归实现）

//int DigitSum(unsigned int n)
//{
//	//int sum = 0;
//	//sum = n % 10;
//	if (n > 0)
//		return n % 10 + DigitSum(n / 10);
//	else
//		return 0;
//}
//int main()
//{
//	int n;
//	scanf("%d", &n);
//	int sum = DigitSum(n);
//	printf("%d\n",sum);
//	return 0;
//}

//11. 实现n的k次方（递归实现）

//int multiple(int n,int k)
//{
//	if (k > 0)
//		return n * multiple(n, k - 1);
//	else
//		return 1;
//}
//int main()
//{
//	int n,k;
//	scanf("%d%d", &n,&k);
//	printf("%d\n",multiple(n,k));
//	return 0;
//}
