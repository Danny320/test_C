#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
//int main()
//{
//	int ch = 0;
//	int count = 0;
//	while ((ch = getchar()) != EOF)
//	{
//		if ((ch == '}') && (count == 0))
//		{
//			printf("not matched\n");
//			return 0;
//		}
//		else if (ch == '{')
//		{
//			count++;
//		}
//		else if (ch == '}')
//		{
//			count--;
//		}
//	}
//	if (count == 0)
//	{
//		printf("matched\n");
//	}
//	else
//	{
//		printf("not matched\n");
//	}
//
//	return 0;
//}
//*********************************************************
//int main()
//{
//	int arr[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
//	int *pa = arr;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		*(pa + i) = 10 - i;
//	}
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	return 0;
//}
//****************************************************
//int main()
//{
//	int arr[3][4];
//	int sz = sizeof(arr) / sizeof(arr[0][0]);
//	int i = 0;
//	int *pa = &arr[0][0];
//	for (i = 0; i < sz; i++)
//	{
//		*(pa + i) = i + 1;
//	}
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", *(pa + i));
//	}
//	return 0;
//}
//*********************************************************
//#define LINE 50
//#define MAX 100
//int main()
//{
//	char arr[LINE][MAX];
//	int i = 0;
//	for (i = 0; i < LINE; i++)
//	{
//		gets(&arr[i][0]);
//		if (arr[i][0] == '\0')
//			break;
//	}
//	for (i = 0; arr[i][0]; i++)
//	{
//		puts(arr[i]);
//	}
//	system("pause");
//	return 0;
//}