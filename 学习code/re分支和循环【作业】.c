#include <stdio.h>

//���ˣ�����if�ж������ˣ����������

//�߼����ң����߰���ġ�

//int main()
//{
//	int a, b, c;
//	scanf("%d%d%d", &a, &b, &c);
//	int max, mid, min;
//	if (a > b)
//	{
//		if (a > c)
//		{
//			max = a;
//			if (b > c)
//			{
//				mid = b;
//				min = c;
//			}
//			else
//			{
//				mid = c;
//				min = b;
//			}
//		}
//		else
//		{
//			max = c;
//			mid = a;
//			min = b;
//		}
//	}
//	else if (b > c)
//	{
//		max = b;
//		if (c > a)
//		{
//			mid = c;
//			min = a;
//		}
//		else
//		{
//			mid = a;
//			min = c;
//		}
//	}
//	else
//	{
//		max = c;
//		mid = b;
//		min = a;
//	}
//	printf("%d %d %d", max, mid, min);
//	return 0;
//}


//����3����--------------------��

//int main()
//{
//	int a, b, c;
//	scanf("%d%d%d", &a, &b, &c);
//	if (a < b)
//	{
//		int tmp = a;
//		a = b;
//		b = tmp;
//	}
//	if (a < c)
//	{
//		int tmp = a;
//		a = c;
//		c = tmp;
//	}
//	if (b < c)
//	{
//		int tmp = b;
//		b = c;
//		c = tmp;
//	}
//	printf("%d %d %d", a, b, c);
//	return 0;
//}

//��ӡ1~100��3�ı���

//int main()
//{
//	int i = 0;
//	for (i = 3;i <= 100;i+=3)
//	{
//		printf("%d ", i);
//	}
//	return 0;
//}

//��2���������Լ����շת�������

//int main()
//{
//	int a, b;
//	scanf("%d%d", &a, &b);
//	int ret = 0;
//	while (a%b)//
//	{
//		ret = a;
//		a = b;
//		b = ret % b;
//	}
//	printf("%d ", b);
//	return 0;
//}

//��ӡ1000~2000��������

//int main()
//{
//	int i = 0;
//	for (i = 1000;i <= 2000;i++)
//	{
//		if (i % 4 == 0 && i % 100 != 0)
//		{
//			printf("%d ", i);
//		}
//		else if (i % 400 == 0)
//		{
//			printf("%d ", i);
//		}
//	}
//	return 0;
//}

//��ӡ100~200�������

//#include <math.h>
//int main()
//{
//	int i = 0;
//	for (i = 101;i <= 200;i+=2)
//	{
//		int j = 0;
//		for (j = 2;j <= sqrt(i);j++)
//		{
//			if (i%j == 0)
//				break;
//		}
//		if (j > sqrt(i))
//			printf("%d ", i);
//	}
//	return 0;
//}

//ͳ�ƴ�1~100֮���������9�����ĸ���-------------�Ұ��ˣ��������ж��ٸ�9�������ж��ٸ������Ǻ�9�ġ�������

//int main()
//{
//	int i = 0;
//	int num = 0;
//	int count = 0;
//	for (i = 1;i <= 100;i++)
//	{
//		num = i;
//		while (num)
//		{
//			if (num % 10 == 9)
//			{
//				count++;
//				break;
//			}
//			num /= 10;
//		}
//	}
//	printf("%d", count);
//	return 0;
//}

//�ģ�������������������������������������������

//int main()
//{
//	int i = 0;
//	int num = 0;
//	int count = 0;
//	for (i = 1;i <= 100;i++)
//	{
//		num = i;
//		while (num)
//		{
//			if (num % 10 == 9)
//				count++;
//			num /= 10;
//		}
//	}
//	printf("%d", count);
//	return 0;
//}


//����1/1- 1/2 + 1/3 - 1/4 +......- 1/100

//int main()
//{
//	int i = 0;
//	double sum = 0.0;
//	int flag = -1;
//	for (i = 1;i <= 100;i++)
//	{
//		flag *= (-1);
//		sum +=  1.0 * flag / i;
//	}
//	printf("%lf", sum);
//	return 0;
//}

//��10�������е����ֵ

//int main()
//{
//	int num = 0;
//	int i = 0;
//	scanf("%d", &num);
//	int max = num;
//	for (i = 1;i < 10;i++)
//	{
//		scanf("%d", &num);
//		if (num > max)
//			max = num;
//	}
//	printf("%d", max);
//	return 0;
//}

//���9x9�˷��ھ���

//int main()
//{
//	int i = 0;
//	int j = 0;
//	for (i = 1;i <= 9;i++)
//	{
//		for (j = 1;j <= i;j++)
//		{
//			printf("%d*%d=%-2d ", i, j, i*j);
//		}
//		printf("\n");
//	}
//	return 0;
//}

//���ֲ���/�۰����

//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int k = 0;
//	scanf("%d", &k);
//	int left = 0;
//	int right = sz - 1;
//	while (left <= right)
//	{
//		int mid = (left + right) / 2;
//		if (arr[mid] > k)
//		{
//			right = mid - 1;
//		}
//		else if (arr[mid] < k)
//		{
//			left = mid + 1;
//		}
//		else
//		{
//			printf("�ҵ��ˣ��±���%d", mid);
//			break;
//		}
//	}
//	if (left > right)
//	{
//		printf("�Ҳ�����");
//	}
//	return 0;
//}

// ����һ������[left, right] ����

//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int key = 3;
//	int left = 0;
//	int right = sizeof(arr) / sizeof(arr[0]) - 1; // rightλ�õ����ݿ���ȡ��
//
//	while (left <= right) // rightλ�������ݣ�����Ҫ���=��
//	{
//		int mid = left + (right - left) / 2;
//		if (arr[mid] > key) // keyС���м�λ�����ݣ�˵��key���������࣬��Ҫ�ı��ұ߽�
//		{
//			right = mid - 1; // rightλ�õ����ݿ���ȡ�������right=mid-1
//		}
//		else if (arr[mid] < key)// key�����м�λ�����ݣ�˵��key�������Ұ�࣬��Ҫ�ı���߽�
//		{
//			left = mid + 1; // leftλ�õ����ݿ���ȡ�������left=mid+1
//		}
//		else
//		{
//			printf("�ҵ��ˣ��±��ǣ�%d\n", mid);
//			break;
//		}
//	}
//
//	if (left > right)
//		printf("�Ҳ���\n");
//	return 0;
//}

// ������������[left, right) ����

//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int key = 3;
//	int left = 0;
//	int right = sizeof(arr) / sizeof(arr[0]); // rightλ�õ�����ȡ����
//
//	while (left < right) // rightλ��û�����ݣ��˴�����Ҫ���=
//	{
//		int mid = left + (right - left) / 2;
//		if (arr[mid] > key) // keyС���м�λ�����ݣ�˵��key���������࣬��Ҫ�ı��ұ߽�
//		{
//			right = mid; // rightλ�õ�����ȡ���������right=mid������Ҫ��1
//		}
//		else if (arr[mid] < key)// key�����м�λ�����ݣ�˵��key�������Ұ�࣬��Ҫ�ı���߽�
//		{
//			left = mid + 1; // leftλ�õ����ݿ���ȡ�������left=mid+1
//		}
//		else
//		{
//			printf("�ҵ��ˣ��±��ǣ�%d\n", mid);
//			break;
//		}
//	}
//
//	if (left >= right)
//		printf("�Ҳ���\n");
//	return 0;
//}


//��������Ϸ

//#include <stdio.h>
//#include <time.h>
//#include <stdlib.h>
//void Menu()
//{
//	printf("***************************\n");
//	printf("*******	1. Play	***********\n");
//	printf("*******	0. Exit ***********\n");
//	printf("***************************\n");
//}
//
//void PlayGame()
//{
//	int ret = rand() % 100 + 1;
//	int guess = 0;
//	printf("������һ������~\n");
//	while (1)
//	{
//		scanf("%d", &guess);
//		if (guess > ret)
//		{
//			printf("�´���\n");
//		}
//		else if (guess < ret)
//		{
//			printf("��С��\n");
//		}
//		else
//		{
//			printf("��ϲ��¶��ˣ�\n");
//			break;
//		}
//	}
//}
//
//int main()
//{
//	int input = 0;
//	srand((size_t)time(NULL));
//	printf("�밴�ղ˵��������룡\n");
//	do
//	{
//		Menu();
//		scanf("%d", &input);
//
//		switch (input)
//		{
//		case 0:
//			printf("�˳���Ϸ��\n");
//			break;
//		case 1:
//			PlayGame();
//			break;
//		default:
//			printf("����������������룡\n");
//			break;
//		}
//	} while (input);
//
//	return 0;
//}


//#include <math.h>
//int is_prime(int i)
//{
//	int j = 0;
//	for (j = 2;j <= sqrt(i);j++)
//	{
//		if (i % j == 0)
//			return 0;
//	}
//	return 1;
//}
//int main()
//{
//	int i = 0;
//	for (i = 100;i <= 200;i++)
//	{
//		if (is_prime(i) == 1)
//		{
//			printf("%d ", i);
//		}
//	}
//}

//int binary_search(int arr[], int k, int sz)
//{
//	int left = 0;
//	int right = sz - 1;
//	while (left <= right)
//	{
//		int mid = left + (right - left) / 2;
//		if (arr[mid] > k)
//		{
//			right = mid - 1;
//		}
//		else if (arr[mid] < k)
//		{
//			left = mid + 1;
//		}
//		else
//		{
//			return mid;
//		}
//	}
//	return 0;
//}
//
//int main()
//{
//	//�����
//	int arr[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
//	int k = 7;
//	//���ֲ��ҵ�
//	//�ҵ��ˣ������±�
//	//�Ҳ��������� -1
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int ret = binary_search(arr, k, sz);
//	if (ret == -1)
//	{
//		printf("�Ҳ���\n");
//	}
//	else
//	{
//		printf("�ҵ��ˣ��±��ǣ�%d\n", ret);
//	}
//
//	return 0;
//}
//
