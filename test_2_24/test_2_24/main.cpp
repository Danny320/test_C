#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<assert.h>
//void find_num(int arr[], int sz, int*num1, int* num2)
//{
//	int ret = 0;
//	int i = 0;
//	int pos = 0;
//	int tmp = 0;
//	*num1 = 0;
//	*num2 = 0;
//	for (i = 0; i < sz; i++)
//	{
//		ret ^= arr[i];
//	}
//	tmp = ret;
//	while (ret)
//	{
//		if (ret % 2 == 1)
//		{
//			break;
//		}
//		pos++;
//		ret /= 2;
//	}
//	//pos是一个二进制为一的数
//	for (i = 0; i < sz; i++)
//	{
//		if ((arr[i] >> pos) & 1)
//		{
//			*num1 ^= arr[i];
//		}
//	}
//	*num2 = tmp^*num1;
//}
//int main()
//{
//	int arr[] = { 1, 2, 3, 4, 5, 7, 1, 2, 3, 4, 5, 8 };
//	int num1 = 0;
//	int num2 = 0;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	find_num(arr, sz, &num1, &num2);
//	printf("%d %d\n",num1, num2);
//	system("pause");
//	return 0;
//}
//*****************************************************************************
//char* my_strchr(char const*str, int ch)
//{
//	char *ptr = NULL;
//	assert(str);
//	while (*str)
//	{
//		if (*str == ch)
//			ptr = (char*)str;
//		str++;
//	}
//	return ptr;
//
//}
//int main()
//{
//	char*str = "abcdeaf";
//	char key = 'a';
//	char* ret = my_strchr(str, key);
//	printf("%s\n", ret);
//	system("pause");
//	return 0;
//}
//*******************************************************************************
//int find_first_appear_once(const char *str)
//{
//	char hash[256] = { 0 };
//	char *tmp = (char *)str;
//	assert(str);
//
//	while ('\0' != *tmp)
//	{
//		hash[*tmp]++;
//		tmp++;
//	}
//	while ('\0' != *str)
//	{
//		if (1 == hash[*str])
//		{
//			break;
//		}
//		else
//			str++;
//	}
//
//	return *str;
//}
//
//int main()
//{
//	char arr[10] = "abcedabc";
//
//	int ret = find_first_appear_once(arr);
//	printf("%c\n", ret);
//	system("pause");
//	return 0;
//}
//***************************************************
//int main()
//{
//	char *p = "qwertyuiop";
//	char *group = "aeiou";
//	char* q=strpbrk(p, group);
//	printf("%s\n", q);
//	system("pause");
//	return 0;
//}
//************************************************************
//int main()
//{
//	char str[] = "192.68.0.1";
//	char tmp[20];
//	char *ret = NULL;
//	char *sep = ".@#!";
//	 strcpy(tmp, str);
//
//	 for (ret = strtok(str, sep); ret != NULL;)
//	{
//		printf("%s\n", ret);
//		ret = strtok(NULL, ret);
//	}
//	 system("pause");
//	return 0;
//}