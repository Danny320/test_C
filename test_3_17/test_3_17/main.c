#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
#include<math.h>
//int main()
//{
//	int i = 0;
//	for (i = 0; i<10; i++)
//	{
//		if (i = 5)
//			printf("%d ", i);
//	}
//	system("pause");
//	return 0;
//}
//将三个数从大到小输出
//int main()
//{
//	int a = 10;
//	int b = 20;
//	int c = 30;
//	if (a < b)
//	{
//		int tmp = a;
//		a = b;
//		b = tmp;
//	}
//	if (a < c)
//	{
//		int tmp = a;
//		 a = c;
//		 c = tmp;
//	}
//	if (b < c)
//	{
//		int tmp = b;
//		b = c;
//		c = tmp;
//	}
//	printf("%d %d %d\n", a, b, c);
//	system("pause");
//	return 0;
//}


//d打印1-100之间3的倍数
//int main()
//{
//	int i = 3;
//	while (i<=100)
//	{
//		printf("%d ", i);
//		i+=3;
//	}
//	system("pause");
//	return 0;
//}


//给定两个数求最大公约数
//辗转相除法
//int fun(int a, int b)
//{
//	if (a%b == 0)
//		return b;
//	else
//		 fun(b, a%b);
//}
//int main()
//{
//	int a = 0;
//	int b = 0;
//	scanf("%d%d", &a, &b);
//	if (a < b)
//	{
//		int tmp = a;
//		a = b;
//		b = tmp;
//	}
//	int ret=fun(a, b);
//	printf("%d\n", ret);
//	system("pause");
//	return 0;
//}


//枚举法
//int main()
//{
//	int a = 0;
//	int b = 0;
//	int i = 0;
//	scanf("%d%d", &a, &b);
//	if (a < b)
//	{
//		int tmp = a;
//		a = b;
//		b = tmp;
//	}
//	for (i = b; i>0; i--)
//	{
//		if ((a%i == 0) && (b%i == 0))
//			break;
//	}
//	printf("%d\n", i);
//	system("pause");
//	return 0;
//}
//


//打印1000-2000之间的闰年
//int main()
//{
//	int i = 0;
//	int count = 0;
//	for (i = 1000; i <= 2000; i++)
//	{
//		if (((i % 4 == 0) && (i % 100 != 0)) || (i % 400 == 0))
//			printf("%d ", i);
//		count++;
//	}
//	printf("\n%d\n", count);
//	system("pause");
//	return 0;
//}


//打印100-200之间的素数
//int main()
//{
//	int i = 0;
//	int j = 0;
//	
//	for (i = 101; i <=200; i+=2)
//	{
//		for (j = 2; j < sqrt(i); j++)
//		{
//			if (i%j == 0)
//				break;
//		}
//		if (j >sqrt(i))
//		{
//			printf("%d ", i);
//		}
//
//	}
//	system("pause");
//	return 0;
//}