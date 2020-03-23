#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
////static
//static int m;
//void fun1()
//{
//	static int n = 0;
//	n++;
//	printf("n=%d\n", n);
//}
//void fun2()
//{
//	m = 0;
//	m++;
//	printf("m=%d\n", m);
//}
//int main()
//{
//	int i;
//	for (i = 0; i < 10; i++)
//	{ 
//		//fun1();
//		fun2();
//	}
//	system("pause");
//	return 0;
//}




//int main()
//{
//	unsigned int a = -10;
//	unsigned int b = -1;
//	printf("%d\n", a + b);
//	system("pause");
//	return 0;
//}




////找数
//int *find_num(int arr[], int key ,int sz)
//{
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		if (arr[i] == key)
//		{
//			return &arr[i];
//		}
//	}
//	return NULL;
//}
//int main()
//{
//	int arr[] = { 1,2,4,5,6,7,8,9};
//	int key = 0;
//	int *pret = NULL;
//	scanf("%d", &key);
//	pret = find_num(arr, key,sizeof(arr)/sizeof(arr[0]));
//	if (pret != NULL)
//	{
//		printf("%d\n", *pret);
//	}
//	else
//	{
//		printf("not exist\n");
//	}
//	system("pause");
//	return 0;
//}




////函数求两数和
//void add(int *psum, int x, int y) 
//{
//	*psum = x + y;
//}
//int main()
//{
//	int c = 0;
//	int a = 10;
//	int b = 20;
//	add(&c, a, b);
//	printf("%d\n", c);
//	system("pause");
//	return 0;
//}




//#define LINE_MAX 1000
//#include<string.h>
////int getline(char line[],int limit )
////{
////	int ch = 0;
////	int i = 0;
////	while ((--limit)&&((ch = getchar()) != EOF) && (ch != '\n'))
////	{
////		line[i++] = ch;
////
////
////	}
////	if (ch=='\n')
////    	line[i++] = ch;
////	line [i] = '\0';
////		return i;
////}
////另一种方法
//char*mathed(const char*str, const char*substr)
//{
//	const char*str1 = str;
//	const char*str2 = substr;
//	const char*start = NULL;
//	while (*str1)
//	{
//		start = str1;
//		while (*str1 && *str2 && *str1 == *str2)
//		{
//			str1++;
//			str2++;
//		}
//		if (*str2 == '\0')
//			return (char*)start;
//		str1 = start + 1;
//		str2 = substr;
//	}
//	return NULL;
//}
//int main()
//{
//	//char line[LINE_MAX];
//	//while (getline(line, LINE_MAX - 1))
//	//{
//	//	if (strstr(line, "ould"))//子串 
//	//		printf("%s", line);
//	//}
//	char *p = mathed("abbbcdef", "bbca");
//	if (p != NULL)
//		printf("%s\n", p);
//	system("pause");
//	return 0;
//}
