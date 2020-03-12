#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
//***********************************************************************************
//1,使用main函数的参数，实现一个整数计算器，程序可以接受三个参数，第一个参数“-a”选项执行加法，“-s”
//选项执行减法，“-m”选项执行乘法，“-d”选项执行除法，后面两个参数为操作数。
//例如：输入test.ext -a 1 2
 //     执行1+2输出3
//int main(int argc, char *argv[])
//{
//	int ret = 0;
//	if (argc != 4)
//	{
//		printf("参数错误\n");
//	}
//	else
//	{
//		int num1 = atoi(argv[2]);
//		int num2 = atoi(argv[3]);
//		if (argv[1][0] == '-')
//		{
//			switch (argv[1][1])
//			{
//			case'a':
//				ret = num1 + num2;
//				break;
//			case's':
//				ret = num1 - num2;
//				break;
//			case'm':
//				ret = num1 * num2;
//				break;
//			case'd':
//				ret = num1 / num2;
//				break;
//			}
//		}
//	}
//	printf("%d\n", ret);
//	system("pause");
//	return 0;
//}
//argv[0]-->"test.exe"
//argv[1]-->"-a"
//argv[2]-->"1"
//argv[3]-->"2"
//****************************字符串排序(冒泡排序)*********************************************
//void sort_str(char *arr[], int sz)
//{
//	int i = 0;
//	int j = 0;
//	for (i = 0; i < sz - 1; i++)
//	{
//		for (j = 0; j < sz - 1 - i; j++)
//		{
//			if (strcmp(arr[j], arr[j + 1])>0)
//			{
//				char*tmp = arr[j];
//				arr[j] = arr[j + 1];
//				arr[j + 1] = tmp;
//			}
//		}
//	}
//}
//int main()
//{
//	int i = 0;
//	char*arr[4] = { "aaaaaa", "ddddd", "ccccc", "bbbb" };
//	sort_str(arr, sizeof(arr) / sizeof(char *));
//	for (i = 0; i < sizeof(arr) / sizeof(char *); i++)
//	{
//		printf("%s\n", arr[i]);
//	}
//	system("pause");
//	return 0;
//}
//****************************************************************************
//int main()
//{
	//char*p = "abcdef";
	//*(p + 2);//不可做左值，为右值时为c；
	//p[2];//不可做左值；
	//int arr[10] = { 1, 2, 3, 4, 5, 6 };
	//arr[6] = 7;
	//*(arr + 6) = 7;
//	return 0;
//}
//********************************读程序***********************************************
//int main()
//{
//	int a[5] = { 1, 2, 3, 4, 5 };
//	int *ptr = (int*)(&a + 1);
//	printf("%d,%d", *(a + 1), *(ptr - 1));
//	system("pause");
//	return 0;
//}
//**************************************************************************************
//extern int val;
//extern char arr[];
//int main()
//{
//	printf("%s\n", arr);
//	system("pause");
//	return 0;
//}
//*******************************************************************
//int main()
//{
//	char a[] = { 'A', 'B', 'C', 'D' };
//	char(*p3)[4] = &a;
//	char(*p4)[5] = a;
//	system("pause");
//	return 0;
//}
//**********************************************************************
//struct Test
//{
//	int Num;
//	char *pcName;
//	short sDate;
//	char cha[2];
//	short sBa[4];`
//}*p;
////p=0x100000
////20
//int main()
//{
//	struct Test t;
//	p = &t;
//	printf("*p\n", p);
//	printf("%p\n", p + 0x1);//0x100014
//	printf("%p\n",(unsigned long)p + 0x1);//0x100001
//	printf("%p\n", (unsigned int*)p + 0x1);//0x100004
//	system("pause");
//	return 0;
//
//}
//*******************************************************************************
//int main()
//{
//	int a[4] = { 1, 2, 3, 4 };
//	int *ptr1 = (int *)(&a + 1);
//	int *ptr2 = (int *)((int)a + 1);
//	printf("%x,%x", ptr1[-1], *ptr2);
//	system("pause");
//	return 0;
//}
//********************判断是大端还是小端存储***************************************
//int check_sys()
//{
//	int a = 1;
//	char *pc = (char *)&a;
//	if (*pc == 1)
//	{
//		return 0;//小端
//	}
//	else
//	{
//		return 1;//大端
//	}
//}
//int main()
//{
//	int ret = check_sys();
//	while (ret)
//	{
//		printf("大端\n");
//	}
//	printf("小端\n");
//	system("pause");
//	return 0;
//}
//****************************************************************************
//int main()
//{
//	int a[3][2] = { (0, 1), (2, 3), (4, 5) };
//	int *p;
//	p = a[0];
//	printf("%d\n", p[0]);
//	system("pause");
//	return 0;
//}