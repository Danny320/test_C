#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//void BubbleSort(int arr[],int sz)
//{
//	int i = 0;
//	int flag = 1;
//	for (i = 0; i < sz - 1; i++)
//	{
//		int j = 0;
//		for (j = 0; j < sz - 1 - i;j++)
//		{
//			if (arr[j] < arr[j + 1])
//			{
//				int tmp = arr[j];
//				arr[j] = arr[j + 1];
//				arr[j + 1] = tmp;
//				flag = 1;
//			}
//		}
//		if (flag == 0)
//		{
//			break;
//		}
//
//	}
//
//}
//void PrintArr(int*arr, int sz)
//{
//	int i = 0;
//	for(i = 0; i < sz; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	printf("\n");
//}
//int main()
//{
//	int arr[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	PrintArr(arr, sz);
//	BubbleSort(arr,sz);
//	PrintArr(arr, sz);
//	return 0;
//}
