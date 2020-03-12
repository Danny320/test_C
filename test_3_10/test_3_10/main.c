#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
#include<math.h>
//int main()
//{
//	int line = 0;
//	scanf("%d", &line);
//	int i = 0;
//	for (i = 0; i < line; i++)
//	{
//		int j = 0;
//		for (j = 0; j < line - 1 - i; j++)
//		{
//			printf(" ");
//		}
//		for (j = 0; j < 2 * i + 1; j++)
//		{
//			printf("*");
//		}
//		printf("\n");
//	}
//	for (i = 0; i < line - 1; i++)
//	{
//		int j = 0;
//		for (j = 0; j <= i; j++)
//		{
//			printf(" ");
//		}
//		for (j = 0; j <2 * (line -2- i) + 1; j++)
//		{
//			printf("*");
//		}
//		printf("\n");
//	}
//	system("pause");
//	return 0;
//}
//********************************************************************
//int main()
//{
//	int i = 0;
//	for (i = 100; i < 1000; i++)
//	{
//		int count = 0;
//		double sum = 0;
//		int tmp = i;
//		while (tmp)
//		{
//			count++;
//			tmp = tmp / 10;
//		}
//		tmp = i;
//		while (tmp)
//		{
//			sum += pow(tmp % 10, count);
//			tmp = tmp / 10;
//		}
//		if (sum == i)
//		{
//			printf("%d\n", i);
//		}
//	}
//	system("pause");
//	return 0;
//}
//***********************************************
int main()
{
	int n = 0;
	int m = 0;
	int i = 0;
	int sum = 0;
	int next = 0;
	scanf("%d%d", &n, &m);
	//next = n;
	for (i = 0; i < m; i++)
	{
		sum = sum * 10 + n;
		//sum += next;
		//next = next * 10 + n;
	}
	printf("%d\n", sum);
	system("pause");
	return 0;
}