#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
//*****************************不创建临时变量交换两个数*****************************
//int main()
//{
//	int a = 0;
//	int b = 0;
//	printf("请输入a和b的值：");
//	scanf("%d%d", &a, &b);
//	a = a + b;
//	b = a - b;
//	a = a - b;
//	printf("交换后a和b的值为：a=%d,b=%d\n",a,b);
//	system("pause");
//	return 0;
//}
//***************************求十个数中最大值****************************
//int main()
//{
//	int arr[10];
//	int max = 0;
//	int i = 0;
//	printf("请输入十个数：");
//	for (i = 0; i<10; i++)
//	{
//		scanf("%d", &arr[i]);
//	}
//	max = arr[0];
//	for (i = 1; i < 10; i++)
//	{
//		if (max<arr[i])
//			max = arr[i];
//	}
//	printf("max=%d\n", max);
//	system("pause");
//	return 0;
//}
//******************写一个函数返回参数二进制中1的个数*******************************
//int count_one_bits(unsigned int value)
//{
//	int count = 0;
//	while (value)
//	{
//		if (value % 2 == 1)
//			count++;
//		value /=  2;
//	}
//	return count;
//}
//int main()
//{
//	int number = 0;
//	printf("请输入：");
//		scanf("%d", &number);
//		int count = count_one_bits(number);
//		printf("%d\n", count);
//		system("pause");
//		return 0;
//}
////////////////////////////////////////////////////////
//int count_one_bits(int n)
//{
//	int count = 0;
//	int i = 0;
//	for (i = 0; i < 32; i++)
//	{
//		if ((n >> i) & 1 == 1)
//		{
//			count++;
//		}
//	}
//	return count;
//}
//int main()
//{
//	int number = 0;
//	printf("请输入：");
//	scanf("%d", &number);
//	int count = count_one_bits(number);
//	printf("count=%d\n", count);
//	system("pause");
//	return 0;
//}
/////////////////////////////////////////////////////////////
//int count_one_bits(int n)
//{
//	int count = 0;
//	while (n)
//	{
//		count++;
//		n = n&(n - 1);
//	}
//	return count;
//}
//int main()
//{
//	int num = 0;
//	printf("请输入：");
//	scanf("%d", &num);
//	int count = count_one_bits(num);
//	printf("count=%d\n", count);
//	system("pause");
//	return 0;
//}