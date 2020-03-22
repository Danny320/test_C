#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
#include<windows.h>

//C语言中的位运算符
//1.&按位与运算符
//2.|按位或运算符
//3.^按位异或运算符
//4.~按位取反运算符
//5.>>右移
//6.<<左移
//两个int（32位）整数m和n的二进制表达中，有多少个位（bit）不同？
//int main()
//{
//	int n = 0;
//	int m = 0;
//	int num = 0;
//	int i = 0;
//	int count = 0;
//	scanf("%d%d", &n, &m);
//	num = n^m;
//	while (i < 32)
//	{
//		if (((num >> i) & 1) == 1)
//			count++;
//		i++;
//	}
//	printf("%d\n", count);
//	system("pause");
//	return 0;
//}



//
//int main()
//{
//	char arr1[] = "welcome to school!!!!!!!!";
//	char arr2[] = "#########################";
//	int sz = sizeof(arr1) / sizeof(arr1[0]);
//	int left = 0;
//	int right = sz - 2;
//	printf("%s\n", arr2);
//	while (left <= right)
//	{
//		arr2[left] = arr1[left];
//		arr2[right] = arr1[right];
//		printf("%s\n", arr2);
//		Sleep(1000);//睡眠函数
//		//system("cls");//执行系统命令-cls-清理屏幕信息
//		left++;
//		right--;
//	}
//	system("pause");
//	return 0;
//}



