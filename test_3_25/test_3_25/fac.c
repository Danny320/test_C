#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//递归和非递归分别实现求n的阶乘（不考虑溢出的问题）
//非递归
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int i = 0;
//	int num = 1;
//	for (i = 1; i <= n; i++)
//	{
//		num *= i;
//	}
//	printf("%d\n", num);
//	return 0;
//}



//递归
//int factorial(int n)
//{
//	if (n > 1)
//		return  factorial(n - 1)*n;
//	else
//		return 1;
//}
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int ret = factorial(n);
//	printf("%d\n", ret);
//	return 0;
//}