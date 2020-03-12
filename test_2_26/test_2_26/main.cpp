#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
//*****************************打印1000-2000年之间的闰年*******************************
//int main()
//{
//	int year = 1000;
//	for (year= 1000; year <= 2000; year++)
//	{
//		if (year % 4 == 0 && year % 100 != 0 || year % 400 == 0)
//		{
//			printf("%d  ", year);
//		}
//	}
//
//	system("pause");
//	return 0;
//}
//*******************************打印100-200之间的素数***************************************
//int main()
//{
//	int i = 0;
//	int count = 0;
//	for (i = 100; i <= 200; i++)
//	{
//		int j = 0;
//		for (j = 2; j < i; j++)
//		{
//			if (i%j == 0)
//			{
//				break;
//			}
//		}
//		if (j == i)
//		{
//			count++;
//			printf("%d ", i);
//		}
//	}
//	printf("\n%d\n", count);
//	system("pause");
//	return 0;
//}
//**************************打印乘法口诀表****************************************
int main()
{
	int i = 0;
	int j = 0;
	for (i = 1; i < 10; i++)
	{
		for (j = 1; j <= i; j++)
		{
			printf("%d*%d=%-3d", j, i, j*i);
		}
		printf("\n");
	}
	system("pause");
	return 0;
}
//C语言关键字：auto(自动变量)，breask, case, char, const, continue, default, do, double
//                             else, enum, extern(声明), float, for, goto, if, int, long, register（寄存器变量）
//                             return, short, signed, sizeof, static, struct, switch, typedef（类型重命名）
//                               union（共用体联合体）, unsigned, void, volatile（）, while   
							   

