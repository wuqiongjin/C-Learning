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

//1. ���������ȼ����⡾��+=���ȡ�,�����ȼ�Ҫ�ߣ�����

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

//2. ��2������2���Ʊ���У��ж���λ��ͬ

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

//3. *************ͳ��1������2������1�ĸ���************

//����1��ʹ��%��/���㣩

//int count_bit_one(unsigned int num, int count)//���յ�ʱ������ת��Ϊunsigned int�������Ϳ��Դ�������
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
//	unsigned int num = n;)//���յ�ʱ������ת��Ϊunsigned int�������Ϳ��Դ������ˡ��ܹؼ���������
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

//����2��ʹ�ð�λ��&����λ����>>��

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

//����3������n&n-1���м���1�����㼸�Σ�

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

//4. �ֱ��ӡ1�����Ķ����Ƶ�����λ��ż��λ

//int main()
//{
//	int num;
//	scanf("%d", &num);
//	//��ӡ����λ
//	int i = 0;
//	for (i = 30;i >= 0;i -= 2)//ע�⣡�����ӵ�31λ�ƶ�����1λ��Ҫ�ƶ�30��������31����
//	{
//		printf("%d ", ((num >> i) & 1));
//	}
//	printf("\n");
//	//��ӡż��λ
//	for (i = 31;i >= 0;i -= 2)//ע�⣡�����ӵ�32λ�ƶ�����1λ��Ҫ�ƶ�31��������32����
//	{
//		printf("%d ", ((num >> i) & 1));
//	}
//	return 0;
//}

//5. �˷��ھ���

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

//6. ��ӡһ������ÿһλ���ݹ鷽ʽʵ�֣�--------����Ե��ԣ����������ݹ飡!!!!!!!!!!!

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

//7. n�Ľ׳ˣ��ݹ鷽ʽʵ�֣�------���ݹ鷽ʽʵ�֣�--------����Ե��ԣ����������ݹ飡!!!!!!!!!!!

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

//8. strlenģ��ʵ��

//�ǵݹ�

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

//�ݹ�ʵ�֡���ʦ�������ˡ�

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

//9. �ַ�����������

//�ǵݹ�

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

//�ݹ�
//a,b,c,d,e,f
//��.a��f����
//��.ʣ�²��֣�b,c,d,e����

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

//10. ��һ������ÿλ�úͣ��ݹ�ʵ�֣�

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

//11. ʵ��n��k�η����ݹ�ʵ�֣�

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
