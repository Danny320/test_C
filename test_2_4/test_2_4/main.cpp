#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
#include<assert.h>
#include<string.h>
//*****************不受限制的字符串拷贝****************************
//char* strcpy(char*dest, const char*src)
//{
//	char*pret = dest;
//	assert(dest);
//	assert(src);
//	while (*dest++ = *src++)
//	{
//		;
//	}
//	return pret;
//}//不受限制的字符串拷贝
//////****************受限制的字符串拷贝********************
//char* strncpy(char*dest, const char*src, size_t n)
//{
//	char*pret = dest;
//	assert(dest);
//	assert(src);
//	while (n--)
//	{
//		*dest++ = *src++;
//	}
//	*dest = '\0';
//	return pret;
//}//受限制的字符串拷贝
//////*******************************************
//char *strncat(char *dest, const char *src, size_t n)
//{
//	char *pret = dest;
//	assert(dest);
//	assert(src);
//	while (*dest)
//	{
//		dest++;
//	}
//	while (n--)
//	{
//		*dest++ = *src++;
//	}
//	*dest = '\0';
//	return pret;
//
//}
//int main()
//{
//	const char arr[20]= "abcdef";
//	char arr1[20] = {};
//	int sz = strlen(arr);
//	char* ret = strcpy(arr1, arr);
//	printf("parr=%s\n", ret);
//	system("pause");
//	return 0;
//}
//

//***************************************************
//int main()
//{
//	char ch = 'a';
//	char *cp = &ch;
//	++cp = NULL;
//	cp++ = NULL;//前置加加后置加加都不能作为左值
//	*++cp=
//	return 0;
//}
//*********************求字符串长度*********************************
//int my_strlen(char*str)
//{
//	const char *start = str;
//	while (*str)
//	{
//		str++;
//	}
//	return str - start;
//}
//int main()
//{
//	//int arr[10] = { 0 };
//	//int n = &arr[10] - &arr[0];
//	//printf("%d\n", n);
//	//system("pause");
//	//return 0;//指针减指针为两个指针间元素的个数
//	char*str = "abcdef";
//	printf("%d\n", my_strlen(str));
//	system("pause");
//	return 0;
//
//}//字节对齐
//*************************面试题***********************************
//int main()
//{
//    int a = 0x12345678;
//    char c = (char)a;
//    short s = (short)a;
//    printf("%x %x %x\n", c[0], c[1], c[2]);
//    printf("%x %x %x\n", (int)c[0],(int) c[1],(int) c[2]);
//    printf("%x %x %x\n", (int)s[0],(int) s[1],(int) s[2]);
//    system("pause");
//    return 0;
//}
//**********************数字逆序**************************
//void reverse_int(int arr[], int sz)
//{
//	int *left = &arr[0];
//	int *right = &arr[sz - 1];
//	while (left < right)
//	{
//		int tmp = *left;
//		*left = *right;
//		*right = tmp;
//		left++;
//		right--;
//	}
//
//}
//int main()
//{
//	int arr[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 0 };
//	int i = 0;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	reverse_int(arr, sz);
//
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	system("pause");
//	return 0;
//}
//************冒泡排序*****************
//void bubble_sort(int arr[], int sz)
//{
//	int flag = 1;
//	int i = 0;
//	for (i = 0; i < sz - 1; i++)
//	{
//		flag = 1;
//		int j = 0;
//		for (j = 0; j < sz - 1 - i; j++)
//		{
//			if (arr[j]>arr[j + 1])
//			{
//				int tmp = arr[j];
//				arr[j] = arr[j + 1];
//				arr[j + 1] = tmp;
//				flag = 0;
//			}
//		}
//		if (flag == 1)
//			break;
//
//	}
//}
//int main()
//{
//	int arr[] = { 9, 8, 7, 6, 5, 4, 3, 2, 1 };
//	int i = 0;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	bubble_sort(arr, sz);
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	system("pause");
//	return 0;
//}
//*****************字符串子串************************
//int main()
//{
//	char arr[] = "abcdef";
//	char arr1[] = "abcd";
//	if (strstr(arr, arr1))
//	{
//		printf("yes");
//	}
//	else
//	{
//		printf("no");
//	}
//	system("pause");
//	return 0;
//}
//******************字符串比较*************
//int main()
//{
//	char *str1 = "abcdef";
//	char *str2 = "aacdef";
//	int ret = strcmp(str1, str2);
//	if (ret == 0)
//	{
//		printf("str1==str2");
//	}
//	else if (ret >0)
//		printf("str1>str2");
//	else 
//		printf("str1<str2");
//	system("pause");
//	return 0;
//}
//*****************************************