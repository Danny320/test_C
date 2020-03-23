#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
//int main()
//{
//	int a[5][5] = { 0 };
//	int(*p)[4] = NULL;
//	p = (int(*)[4])a;
//	printf("%p,%d\n", &p[4][2] - &a[4][2],&p[4][2] - &a[4][2]);
//	system("pause");
//	return 0;
//}
//********************************************************************
//int main()
//{
//	int aa[2][5] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
//	int *ptr1 = (int *)(&aa + 1);
//	int *ptr2 = (int *)(*(aa + 1));
//	printf("%d,%d", *(ptr1 - 1), *(ptr2 - 1));
//	system("pause");
//	return 0;
//}
//*******************************************************************
//void GetMemory(char *p, int num)
//{
//	p = (char *)malloc(num*sizeof(char));
//}
//int main()
//{
//	char *str = NULL;
//	GetMemory(str, 10);
//	strcpy(str, "hello");
//	free(str);
//	return 0;
//}
//******************************************************************
//void fun(int arr[][])//no
//void fun(int arr[][3])//yes
//void fun(int (*arr)[3])//yes
//void fun(int **arr)//no
//void fun(int arr[2][3])
//{
//
//}
//int main()
//{
//	int arr[2][3];
//	fun(arr);//传二维数组会发生降级
//	return 0;
//
//}
//******************************函数指针的数组******************************************
//enum OP//枚举
//{
//	EXIT,
//	ADD,
//	SUB,
//	MUL,
//	DIV
//};
//void menu()
//{
//	printf("1.add    2.sub   \n");
//	printf("3.mul    4.div   \n");
//	printf("0.exit           \n");
//}
//int Add(int num1, int num2)
//{
//	return num1 + num2;
//}
//int Sub(int num1, int num2)
//{
//	return num1 - num2;
//}
//int Mul(int num1, int num2)
//{
//	return num1*num2;
//}
//                                           
//	printf("请输入两个操作数>:");
//	scanf("%d%d", &num1,num2);
//	return pfun(num1, num2);
//}
////转移表
//int(*arr[5])(int, int) = { 0, Add, Sub, Mul, Div };
//int main()
//{
//    int input = 1;
//	while (input)
//	{
//		int ret = 0;
//		menu();
//		printf("请选择>:");
//		scanf("%d", &input);
//		if (input >= 1 && input <= 4)
//		{
//			ret = Operate(arr[input]);
//			printf("ret=%d\n", ret);
//		}
//		else if (input == 0)
//		{
//			return 0;
//		}
//		else
//		{
//			printf("选择错误\n");
//		}
//	}
//}
//*******************************************************************
//int Add(int a, int b)
//{
//
//}
//int(*pfun[5])(int, int);//函数指针的数组
//int(*(*ppfun)[5])(int, int);//指向存放函数指针的数组的指针
