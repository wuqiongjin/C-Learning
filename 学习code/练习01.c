#include <stdio.h>

//int main()
//{
//	int arr[] = { 1,2,3,4,1,2,3,4,5 };
//	//int arr2 = {NULL};
//	//int index = 0;
//	//int i = sizeof(arr)/sizeof( arr[0]);
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int i = 0;
//	for (i = 0;i < sz;i++)
//	{
//		int j = 0;
//		int count = 0;
//		for (j = 0;j < sz;j++)
//		{
//			if (arr[i] == arr[j])
//			{
//				count++;
//				break;
//			}
//		}
//		if (count == 1)
//		{
//			printf("%d\n", arr[i]);
//		}
//		
//	}
//
//
//	//while (i >0)do
//	//{
//	//	arr2[index++]= arr[i];
//	//	arr[] = arr[--];
//	//	i--
//	//}
//	
//	return 0;
//}
int main(void)
{
	int arr[] = { 1,2,3,4,1,2,3,4,5 };
	int i = 0;
	int sz = sizeof(arr) / sizeof(arr[0]);
	for (i = 0;i < sz;i++)
	{
		int j = 0;
		int count = 0;
			for (j = 0;j < sz;j++)
			{
				//if (arr[i] == arr[j])
				{
					count++;
				//	break;
				}
			}
			if (count == 1)
			{
				printf("%d\n", arr[i]);
				break;
			}
	}
	return 0;
}