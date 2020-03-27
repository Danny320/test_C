#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//编写函数不允许创建临时变量，求字符串长度
int my_strlen(char* str)
{
	if (*str != '\0')
		return 1 + my_strlen(str + 1);
	else
		return 0;
}
int main()
{
	char arr[] = "bit";//数组名是首元素地址--char的地址char*
	int len = my_strlen(arr);
	printf("%d\n", len);
	return 0;
}



//int my_strlen(char* str)
//{
//	int count = 0;
//	while (*str!='\0')
//	{
//		count++;
//		str++;
//	}
//	return count;
//}
//int main()
//{
//	char arr[] = "bit";//数组名是首元素地址--char的地址char*
//	int len=my_strlen(arr);
//	printf("%d\n", len);
//	return 0;
//}