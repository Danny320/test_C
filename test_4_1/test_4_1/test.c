#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>
//使用指针打印数组内容
//void Print_arr(int *str,int sz)
//{
//	int *start = str;
//	while (start<=(str+sz-1))
//	{
//		printf("%d ", *start);
//		start++;
//	}
//}
//int main()
//{
//	int arr[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 0 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	Print_arr(arr,sz);
//	return 0;
//}



//写一个函数，可以逆序一个字符串的内容。
//void reverse_arr(char *str,int len)
//{
//	char* left = str;
//	char* right = str+len - 1;
//	while (left < right)
//	{
//		char tmp = *left;
//		*left = *right;
//		*right = tmp;
//		left++;
//		right--;
//	}
//}
//int main()
//{
//	char arr[30] = {0};
//	gets(arr);
//	int len = strlen(arr);
//	reverse_arr(arr,len);
//	puts(arr);
//	return 0;
//}



//求Sn = a + aa + aaa + aaaa + aaaaa的前5项之和，其中a是一个数字，
//例如：2 + 22 + 222 + 2222 + 22222
//int Add(int a)
//{
//	int i = 0;
//	int num = 0;
//	for (i = 0; i < 5; i++)
//	{
//		num = num + a;
//		a = a * 10 + a;
//	}
//	return num;
//}
//int main()
//{
//	int a = 0;
//	scanf("%d", &a);
//	int num=Add(a);
//	printf("%d\n", num);
//	return 0;
//}


//
////打印水仙花数
//#include<math.h>
//int main()
//{
//	int i = 0;
//	for (i = 0; i <= 100000; i++)
//	{
//		int count = 1;
//		int tmp = i;
//		int sum = 0;
//		//计算位数
//		while (tmp / 10)
//		{
//			count++;
//			tmp /= 10;
//		}
//		//计算每位次方和
//		tmp = i;
//		while (tmp)
//		{
//			sum += pow(tmp % 10, count);
//			tmp /= 10;
//		}
//		//判断
//		if (sum == i)
//			printf("%d ", i);
//	}
//	return 0;
//}



//打印菱形
//void Print_diamond()
//{
//	int i = 0;
//	int line = 0;
//	scanf("%d", &line);
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
//	for (i = 0; i < line-1; i++)
//	{
//		int j = 0;
//		for (j = 0; j < 1 + i; j++)
//		{
//			printf(" ");
//		}
//		for (j = 0; j < 2 * (line-1-i)-1; j++)
//		{
//			printf("*");
//		}
//		printf("\n");
//	}
//}
//int main()
//{
//	Print_diamond();
//	return 0;
//}


