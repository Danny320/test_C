#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
////求第n个斐波那契数
//int Fib(int n)
//{
//	int a = 1;
//	int b = 1;
//	int c = 1;
//	while (n > 2)
//	{
//		c = a + b;
//		a = b;
//		b = c;
//		n--;
//	}
//	return c;
//}
////递归
//int Fib(int n)
//{
//	if (n <= 2)
//		return 1;
//	else
//		return Fib(n - 1) + Fib(n - 2);
//}
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int ret = Fib(n);//第n个斐波那契数是不适合用递归求解的
//	//50
//	printf("%d\n", ret);
//	return 0;
//}
