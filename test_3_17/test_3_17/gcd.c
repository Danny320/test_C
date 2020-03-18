#define _CRT_SECURE_NO_WARNINGS 1
#include<stdlib.h>
#include<math.h>
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