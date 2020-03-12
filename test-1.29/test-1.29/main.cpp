#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
//#include<stdarg.h>
//void print(const char *format, ...)
//{
//	va_list arg;
//	va_start(arg, format);
//	while (*format)
//	{
//		switch (*format)
//		{
//		case 'c':
//		{
//					char tmp = va_arg(arg, char);
//					putchar(tmp);
//		}
//			break;
//		case's':
//		{
//				   char*str = va_arg(arg, char*);
//				   while (*str)
//				   {
//					   putchar(*str);
//					   str++;
//				   }
//		}
//			break;
//		default:
//			putchar(*format);
//			break;
//		
//		}
//		format++;
//	}
//	va_end(arg);
//}
//int main()
//{
//	printf("s ccc.\n", "hello", 'b', 'i', 't');
//	system("pause");
//	return 0£»
//int power(int n, int k)
//{
//	if (k == 0)
//		return 1;
//	else
//	{
//		return n*power(n, k - 1);
//	}
//}
//int main()
//
//{
//	int ret = power(3, 4);
//	printf("%d\n", ret);
//	system("pause");
//	return 0;
//}
//int digitsum(unsigned int num)
//{
//	if (num < 10)
//		return num;
//	else
//		return num % 10 + digitsum(num / 10);
//}
//int main()
//{
//	int ret = digitsum(-2);
//	printf("%d\n", ret);
//	system("pause");
//	return 0;
//}
int strlen(const char *str)
{
	int count = 0;
	while (*str++)
	{
		count++;
	}
	return count;
}
void reverse_string(char*str)
{
	int len = strlen(str);
	if (len > 1)
	{
		char tmp = str[0];
		str[0] = str[len - 1];
		str[len - 1] = '\0';
		reverse_string(str + 1);
		str[len - 1] = tmp;
	}
}
int main()
{
	char arr[20] = "abcdef";
	reverse_string(arr);
	printf("%s\n", arr);
	system("pause");
	return 0;
}