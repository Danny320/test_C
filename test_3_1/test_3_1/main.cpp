#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<windows.h>
#include<time.h>
//int main()
//{
//	int arr1[] = { 1, 2, 3, 4, 5 };
//	int arr2[] = { 6, 7, 8, 9, 0 };
//	int i = 0;
//	for (i = 0; i < 5; i++)
//	{
//		int tmp = arr1[i];
//		arr1[i] = arr2[i];
//		arr2[i] = tmp;
//	}
//	for (i = 0; i < 5; i++)
//	{
//		printf("arr1[%d]=%d\n", i,arr1[i]);
//	}
//	for (i = 0; i < 5; i++)
//	{
//		printf("arr2[%d]=%d\n",i,arr2[i]);
//	}
//
//	system("pause");
//	return 0;
//}
//*************************************************************************
//int main()
//{
//	int num = 0;
//	printf("请输入一个数：");
//	scanf("%d", &num);
//	int i = 0;
//	for (i = 31; i >0; i -=2)
//	{
//		if (((num >> i) & 1) == 1)
//		{
//			printf("1 ");
//		}
//		else
//			printf("0 ");
//	}
//	printf("\n");
//	for (i = 30; i >=0; i -= 2)
//	{
//		if (((num >> i) & 1) == 1)
//		{
//			printf("1 ");
//		}
//		else
//			printf("0 ");
//	}
//	system("pause");
//	return 0;
//}
//**************************************************************************
//void swap(int* x,int* y)
//{
//	int tmp = *x;
//	*x = *y;
//	*y = tmp;
//
//}
//int main()
//{
//	int a = 0;
//	int b = 0;
//	int c = 0;
//	printf("请输入三个数：");
//	scanf("%d%d%d", &a,&b,&c);
//	if (a<b)
//	{
//		swap(&a, &b);
//	}
//	if (a<c)
//	{
//		swap(&a, &c);
//	}
//	if (b<c)
//	{
//		swap(&b, &c);
//	}
//	printf("a=%d b=%d c=%d\n", a,b,c);
//	system("pause");
//	return 0;
//}
//*************************************************************************
//int main()
//{
//	int a = 0;
//	int b = 0;
//	int i = 0;
//	int max = 0;
//	printf("请输入两个数：");
//	scanf("%d%d", &a, &b);
//	for (i = 1; i <= a&&i <= b; i++)
//	{
//		if (a%i == 0 && b%i == 0)
//			max = i;
//	}
//	printf("%d\n", max);
//	system("pause");
//	return 0;
//}
//int main()
//{
//	char arr1[] = "welcome to bit!!!";
//	char arr2[] = "#################";
//	int len = strlen(arr1);
//	int left = 0;
//	int right = len - 1;
//	printf("%s\n", arr2);
//	while (left<=right)
//	{
//		Sleep(1000);
//		arr2[left] = arr1[left];
//		arr2[right] = arr1[right];
//		printf("%s\n", arr2);
//		left++;
//		right--;
//	}
//
//	system("pause");
//	return 0;
//}
//************************************************************
//int main()
//{
//	char input[7];
//	int i = 0;
//	for (i = 0; i<3; i++)
//	{
//		printf("请输入密码：>");
//		scanf("%s", &input);
//		if ((strcmp(input, "123456")) == 0)
//		{
//			break;
//		}
//	}
//	if (i == 3)
//	{
//		printf("忘记密码了吧！");
//		exit(0);
//	}
//	else
//	{
//		printf("密码正确!!");
//	}
//	/*int num = 0;
//	printf("请输入密码：");
//	scanf("%d", &num);
//	int i = 3;
//	for (i = 3; i > 0; i--)
//	{
//		if (num == 123456)
//		{
//			printf("密码正确\n");
//			break;
//		}
//		else
//		{
//			printf("密码错误，请重新输入：\n");
//			scanf("%d", &num);
//		}
//		
//	}
//*/
//	system("pause");
//	return 0;
//}
//*************************************************************
//int main()
//{
//	int n = 0;
//	/*printf("请输入：>");
//	scanf("%d", &n);*/
//	int i = 0;
//	int ret = 1;
//	int sum = 0;
//	for (i = 1; i <= 10; i++)
//	{
//		ret = ret*i;
//		sum = sum + ret;
//	}
//	printf("%d\n", sum);
//	system("pause");
//	return 0;
//}
//**********************折半查找*********************************************
//int main()
//{
//	int arr[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, };
//	int left=0;
//	int x = 1;
//	int right = sizeof(arr) / sizeof(arr[0]);
//	while (left <= right)
//	{
//		int mid = (left + right) / 2;
//		if (x>arr[mid])
//		{
//			left = mid+1;
//		}
//		else if (x < arr[mid])
//		{
//			right = mid - 1;
//		}
//		else
//		{
//			printf("%d\n", mid);
//			break;
//		}
//
//	}
//	system("pause");
//	return 0;
//}
//**************************猜数字游戏************************************************
