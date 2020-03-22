#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
//int main()
//{
//	int money = 20;
//	int total = money;
//	int empty = money;
//	while (empty > 1)
//	{
//		total += empty/2;
//		empty = empty/2 + empty % 2;
//	}
//	printf("%d\n", total);
//	system("pause");
//	return 0;
//}




//void test()
//{
//	test();
//}
//int main()
//{
//	test();
//	return 0;
//}//栈溢出
//********************
//1234
//1 2 3 4
//void print_num(int num)//递归调用
//{
//	if (num > 9)
//	{
//		print_num(num / 10);//每调用一次保存一次num
//	}
//	printf("%d ", num % 10);
//}
//int main()
//{
//	int num = 1234;
//	print_num(num);
//	system("pause");
//	return 0;
//}



//int my_strlen(const char *str)
//{
//	/*int count = 0;
//	while (*str)
//	{
//		count++;
//		str++;
//	}
//	return count;*/
//	if (*str != 0)
//	{
//		return 1 + my_strlen(str + 1);
//	}
//	else return 0;
//}
//int main()
//{
//	char *p = "abcdef";
//	int ret = my_strlen(p);
//	printf("%d\n", ret);
//	system("pause");
//	return 0;
//}



//int fac(int n)
//{
//	if (n <= 0)
//		return 1;
//	else
//		return n*fac(n - 1);
//}
//int main()
//{
//	int n = 5;
//	int ret = fac(n);
//	printf("ret=%d\n", ret);
//	system("pause");
//	return 0;
//}



//int fac(int n)
//{
//	int ret = 1;
//	if (n <= 0)
//		return 1;
//	else
//	{
//		int i = 0;
//		for (i = 1; i <= n; i++)
//		{
//			ret = ret*i;
//		}
//		return ret;
//	}
//}
//int main()
//{
//	int ret = fac(5);
//	printf("ret=%d\n", ret);
//	system("pause");
//	return 0;
//}

