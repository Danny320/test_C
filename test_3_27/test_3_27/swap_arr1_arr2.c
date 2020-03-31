#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//void Swap(char* str1, char* str2, int sz)
//{
//	while (*str1)
//	{
//		char tmp = *str1;
//		*str1 = *str2;
//		*str2 = tmp;
//		str1++;
//		str2++;
//	}
//}
//int main()
//{
//	char arr1[] = "abcde";
//	char arr2[] = "fighj";
//	int sz = sizeof(arr1) / sizeof(arr1[0]);
//	printf("arr1[]=%s\narr2[]=%s\n", arr1, arr2);
//	Swap(arr1, arr2, sz);
//	printf("arr1[]=%s\narr2[]=%s\n", arr1, arr2);
//	return 0;
//}


//void Reverse(int arr1[], int arr2[])
//{
//	int i = 0;
//		for (i = 0; i<10; i++)
//		{
//			int tmp = arr1[i];
//			arr1[i] = arr2[i];
//			arr2[i] = tmp;
//		}
//}
//void Print(int arr1[], int arr2[],int sz)
//{
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", arr1[i]);
//
//	}
//	printf("\n");
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", arr2[i]);
//
//	}
//
//}
//int main()
//{
//	int arr1[10] = { 0 };
//	int arr2[10] = { 0 };
//	int i = 0;
//	int sz = sizeof(arr1) / sizeof(arr1[0]);
//	printf("请输入10个数字:>");
//	for (i = 0; i<10; i++)
//	{
//		scanf("%d", &arr1[i]);
//	}
//	printf("请输入10个数字:>");
//
//	for (i = 0; i<10; i++)
//	{
//		scanf("%d", &arr2[i]);
//	}
//	Reverse(arr1, arr2);
//	Print(arr1, arr2, sz);
//	return 0;
//}