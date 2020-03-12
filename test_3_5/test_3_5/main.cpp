#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<math.h>
//int main()
//{
//	int ch = 0;
//	while ((ch = getchar()) != EOF)
//	{
//		if (ch >= 'A'&&ch <= 'Z')
//		{
//			putchar(ch + 32);
//		}
//		else if (ch >= 'a'&&ch <= 'z')
//		{
//			putchar(ch - 32);
//		}
//		else if (ch >= '0'&&ch <= '9')
//		{
//
//		}
//		else
//			putchar(ch);
//	}
//	system("pause");
//	return 0;
//}
//**************************************************************
//int get_word(int n)
//{
//	int i = 0;
//	printf("请猜：>");
//	scanf("%d", &i);
//	if (i > n)
//	{
//		printf("猜大了");
//		return get_word(n);
//	}
//	else if (i < n)
//	{
//		printf("猜小了");
//		return get_word(n);
//	}
//	else
//	{
//		printf("终于猜对了");
//		return i;
//
//	}
//}
//int main()
//{
//	int ret = 0;
//	srand((unsigned)time(NULL));
//	ret = rand() % 101;
//	int m = get_word(ret);
//	printf("%d\n", ret);
//	system("pause");
//	return 0;
//}
//***********************************************************************
//int main()
//{
//	int i = 0,a=1, b = 2, c = 3, d = 4;
//	i = a++&&++b&&d++;
//	printf("%d%d%d%d%d\n", a, b, c, d,i);
//	system("pause");
//	return 0;
//}
//***********************************************************************
//int main()
//{
//	int num = 1234;
//	char arr[10];
//	int i = 0;
//	while (num)
//	{
//		arr[i]=num % 10+'0';
//		num /= 10;
//		i++;
//	}
//	while (i)
//	{
//		printf("%c ", arr[i - 1]);
//		i--;
//	}
//	system("pause");
//	return 0;
//}
//***********************************************************************
//int main()
//{
//	int num = 12345;
//	int n = 0;
//	int tmp = 0;
//	int one = 0;
//	while (tmp)
//	{
//		n++;
//		tmp /= 10;
//	}
//	while (num)
//	{
//		printf("%d",one= num / pow(10, n - 1));
//		num = num - one*pow(10, n - 1);
//		n--;
//	}
//}
//*************************************************************************
//int main()
//{
//	int i = 0;
//	float sum = 0;
//	int flag = 1;
//	for (i = 1; i <= 100; i++)
//	{
//		sum +=flag* (1.0 / i);
//		flag = -flag;
//	}
//	printf("%f\n", sum);
//	system("pause");
//	return 0;
//}
//****************************************************************************
//int main()
//{
//	int i = 0;
//	int count = 0;
//	for (i = 1; i <= 100; i++)
//	{
//		if (i % 10 == 9)
//		{
//			count++;
//		}
//		if (i / 10 == 9)
//		{
//			count++;
//		}
//	}
//	printf("%d\n", count);
//	system("pause");
//	return 0;
//}
//*****************************************************************************
//int main()
//{
//	char a = 127;
//	char b = 1;
//	char c = a + b;
//	printf("%d\n", c);
//	system("pause");
//	return 0;
//}
//****************************************************************************
//int isPrimer(int n)
//{
//	int i = 0;
//	for (i = 2; i < n; i++)
//	{
//		if (n%i == 0)
//			return 0;
//	}
//	return 1;;
//}
//int main()
//{
//	int num = 0;
//	scanf("%d", &num);
//	int ret = 0;
//	ret = isPrimer(num);
//	printf("%d\n", ret);
//	system("pause");
//	return 0;
//*******************************************************************************
//void inc(int* n)
//{
//	*n = *n + 1;
//}
//int main()
//{
//	int a = 0;
//	int *p = &a;
//	inc (p);
//	inc(p);
//	inc(p);
//	printf("%d\n", a);
//	system("pause");
//	return 0;
//}
//*******************************************************************************
