#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
//int main(int argc, char *argv[])
//{
//	int num1 = atoi(argv[2]);
//	int num2 = atoi(argv[3]);
//	int ret = 0;
//	if (argc != 4)
//	{
//		printf("参数出错\n");
//		return 1;
//	}
//	if (*(argv[1] + 0) = '-')
//	{
//		switch (*(argv[1] + 1))
//		{
//		case'a':
//		{
//				   ret = num1 + num2;
//		           printf("ret=%d\n", ret);
//		}
//			break;
//		case 's':
//		{
//					ret = num1 - num2;
//					printf("ret=%d\n", ret);
//		}
//			break;
//		case 'm':
//		{
//					ret = num1*num2;
//					printf("ret=%d\n", ret);
//		}
//			break;
//		case 'd':
//		{
//					ret = num1 / num2;
//					printf("ret=%d\n", ret);
//		}
//			break;
//		default:
//			printf("第二个参数出错");
//			break;
//		}
//	}
//
//	system("pause");
//	return 0;
//}
//************************************************************************
//int main()
//{
//	int *(arr[10]);//指针数组
//	int* (*parr)[10];//()>[]>*数组指针
//	int （*pfun）(char *p)=NULL;//函数指针
//	int (*pfunarr[10])(char *p);//函数指针数组
//	
//
//	system("pause");
//	return 0;
//}
//**********************************************************************
//void bubble_sort(char* arr[], int sz)
//{
//	int i = 0;
//	for (i = 0; i < sz - 1; i++)
//	{
//		int j = 0;
//		for (j = 0; j < sz - 1 - i; j++)
//		{
//			if (strcmp(arr[j],arr[j + 1])>0)
//			{
//				char *tmp = arr[j];
//				arr[j] = arr[j + 1];
//				arr[j + 1] = tmp;
//			}
//		}
//	}
//}
//int main()
//{
//	char *arr[] = { "aaaaa", "bbbbb", "ccccc", "ddddd" };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		printf("%s\n", arr[i]);
//	}
//	bubble_sort(arr, sz);
//	for (i = 0; i < sz; i++)
//	{
//		printf("%s\n", arr[i]);
//	}
//	system("pause");
//	return 0;
//}
//**********************************************************************
//enum OP
//{
//	EXIT,
//	ADD,
//	SUB,
//	MUL,
//	DIV,
//};
//void menu()
//{
//	printf("*********************************************\n");
//	printf("***********  1.add      2.sub   *************\n");
//	printf("***********  3.mul      4.div   *************\n");
//	printf("***********       0.exit        *************\n");
//	printf("*********************************************\n");
//}
//int Add(int x, int y)
//{
//	return x + y;
//}
//int Sub(int x, int y)
//{
//	return x-y;
//}
//int Mul(int x, int y)
//{
//	return x*y;
//}
//int Div(int x, int y)
//{
//	return x / y;
//}
//void operation(int(*pfun)(int, int))//函数指针作为参数
//{
//	int ret = 0;
//	int num1 = 0;
//	int num2 = 0;
//	printf("请输入两个操作数:>");
//	scanf("%d%d", &num1,&num2);
//	ret = pfun(num1, num2);
//	printf("ret=%d\n", ret);
//}
////转移表
//int (*pfunarr[5])(int, int) = { 0, Add, Sub, Mul, Div };
//int main()
//{
//	int input = 1;
//	int num1 = 0;
//	int num2 = 2;
//	while (input)
//	{
//		menu();
//		printf("请选择:>");
//		scanf("%d", &input);
//		if (input != 0)
//			operation(pfunarr[input]);
//
//		/*switch (input)
//		{
//		case ADD:
//			operation(&Add);
//			break;
//		case SUB:
//			operation(&Sub);
//			break;
//		case MUL:
//			operation(&Mul);
//			break;
//		case DIV:
//			operation(&Div);
//			break;
//		case EXIT:
//			break;
//		default:
//			printf("选择错误\n");
//		}*/
//	}
//}
//*****************************************************************************
//void(* signal(int, void(*)(int)))(int);
//1.signal是一个函数
//2.signal函数的第一个参数是int型，第二个参数是一个函数指针（指针能够指向一个参数为int
//,返回值类型为void函数）
//3.signal函数的返回值类型是一个函数指针类型（指针能够指向一个参数为int
//,返回值类型为void函数））
//**************************************************************************
//qsort函数原型
//void qsort(void *base,size_t num,size_t width,int (*cmpare)(const void*, const void*))
//各参数：
//1.base是待排序数组首元素地址；
//2.num是数组大小；
//3.width是各元素占用空间*/大小；
//4.函数指针（回调函数）
//typedef struct Stu
//{
//	char name[10];
//	int age;
//	float score;
//}stu,*pstu;
//int Compare_int(const void *eleml, const void *elem2)
//{
//	return *(int *)eleml - *(int*)elem2;
//}
//int Compare_stu(const void*eleml, const void *elem2)
//{
//	if (((pstu)elem1->score - (())
//}
//void _swap(char *buf1, char *buf2, size_t sz)
//{
//	int i = 0;
//	for (i = 0; i < (int)sz; i++)
//	{
//		char tmp = buf1[i];
//		buf1[i] = buf2[i];
//		buf2[i] = tmp;
//	}
//}