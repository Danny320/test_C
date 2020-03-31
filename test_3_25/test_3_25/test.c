#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>
//函数递归,自己调用自己，常见错误：栈溢出
//1.存在限制条件，当满足这个限制条件的时候，递归便不再继续
//void Print(int n)
//{
//	if (n > 9)
//	{
//		Print(n/10);
//	}
//	printf("%d ", n % 10);
//}
//int main()
//{
//	unsigned int num = 0;
//	scanf("%d", num);
//	Print(num);
//	return 0;
//}




//递归
//void reverse_string(char*str)
//{
//	int tmp = str[0];
//	int len = strlen(str);
//	str[0] = str[len-1];
//	str[len-1] = '\0';
//	if (strlen(str + 1) >= 2)
//		reverse_string(str + 1);
//	*(str + len - 1) = tmp;
//}
//
//int main()
//{
//	char arr[20] = "hello bit";
//	reverse_string(arr);
//	printf("%s\n", arr);
//	return 0;
//}
//非递归
//void reverse_string(char *str)
//{
//	int sz = strlen(str);
//	int left = 0;
//	int right = sz-1;
//	while (left < right)
//	{
//		char tmp = str[left];
//		str[left] = str[right];
//		str[right] = tmp;
//		left++;
//		right--;
//	}
//}
//int main()
//{
//	char arr[] = "hello bit";
//	reverse_string(arr);
//	printf("%s\n", arr);
//	return 0;
//}




//写一个递归函数DigitSum(n)，输入一个非负整数，返回组成它的数字之和
//例如，调用DigitSum(1729)，则应该返回1 + 7 + 2 + 9，它的和是19
//输入：1729，输出：19

//int DigitSum(int n)
//{
//	if (n >= 10)
//	{
//		return n % 10 + DigitSum(n / 10);
//	}
//	else
//		return n;
//
//}
//int main()
//{
//	unsigned int n = 0;
//	scanf("%d", &n);
//	int ret = DigitSum(n);
//	printf("%d\n", ret);
//	return 0;
//}