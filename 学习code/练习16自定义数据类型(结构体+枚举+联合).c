#include <stdio.h>

//找出单身狗-----【分组异或的方法更好】

//int main()
//{
//	int arr[] = { 1,2,3,3,5,7,5,1,8,8 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int cur = 0;
//	int i = 0;
//	for (cur = 0;cur < sz;cur++)
//	{
//		int flag = 0;
//		for (i = cur + 1;i < sz;i++)
//		{
//			if (arr[cur] == arr[i])
//			{
//				flag = 1;
//				arr[i] = arr[--sz];
//				break;
//			}
//		}
//		if (!flag)
//			printf("%d ", arr[cur]);
//	}
//	return 0;
//}