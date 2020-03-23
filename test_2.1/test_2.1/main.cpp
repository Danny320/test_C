#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<assert.h>
////void move_left(char*str, int k)
////{
////	int i = 0;
////	int len = strlen(str);
////	if (len <= 1)
////		return;
////	for (i = 0; i < k; i++)
////	{
////		char tmp = *str;
////		int j = 0;
////		for (j = 0; j < len; j++)
////		{
////			*(str + j) = *(str + j + 1);
////		}
////		*(str + len - 1) = tmp;
////	}
////}
//
//void reverse(char *left, char *right)
//{
//	assert(left);
//	assert(right);
//	while (left < right)
//	{
//		char tmp = *left;
//			*left = *right;
//			*right = tmp;
//			left++;
//			right--;
//	}
//}
//void move_left(char *str, int k)
//{
//	int len = strlen(str);
//	assert(str);
//	reverse(str, str + k -1);//ÄæÐò×ó´®
//	reverse(str + k, str + len - 1);//ÄæÐòÓÒ´®
//	reverse(str, str + len - 1);//ÄæÐòÈ«²¿×Ö·û´®
//}
//int main()
//{
//	char arr[] = "AABCD";
//	int k = 2;
//	move_left(arr, k);
//	printf("%s\n", arr);
//	system("pause");
//	return 0;
//}



//int is_move(char *s1, const char*s2)
//{
//	int len1 = strlen(s1);
//	int len2 = strlen(s2);
//	if (len1 != len2)
//	{
//		return 0;
//	}
//	assert(s1);
//	assert(s2);
//	strncat(s1, s1, len1);
//	if (strstr(s1, s2))
//	{
//		return 1;
//	}
//	else
//	{
//		return 0;
//	}
//}
//int main()
//{
//	char arr[20] = "ABCDEF";
//	if (is_move(arr, "AAAAAA"))
//	{
//		printf("OK\n");
//	}
//	else
//	{
//		printf("NO\n");
//	}
//	system("pause");
//	return 0;
//}



//void fun()
//{
//	int tmp = 10;
//	int *p = (int *)(*(&tmp + 1));//Ô½½ç·ÃÎÊ
//	*(p - 1) = 20;
//}
//{
//	int a = 0;
//	fun();
//	printf("a=%d\n", a);
//	return 0;
//}



//int* fun()
//{
//	int tmp = 2016;
//	return &tmp;
//}
//int main()
//{
//	int *pret = fun();
//	printf("%d\n", *pret);
//	system("pause");
//	return 0;
//}
