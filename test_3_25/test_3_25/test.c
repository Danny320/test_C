#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//�����ݹ�,�Լ������Լ�����������ջ���
//1.���������������������������������ʱ�򣬵ݹ�㲻�ټ���
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





//void reverse_string(char*string)
//{
//	int len = strlen(string);
//	int tmp = *string;
//	*string = *(string + len - 1);
//	*(string + len - 1) = '\0';
//	if (strlen(string + 1) >= 2)
//		reverse_string(string + 1);
//	*(string + len - 1) = tmp;
//
//}
//int main()
//{
//	char arr[20] = "abcdef";
//	reverse_string(arr);
//	printf("%s\n", arr);
//	return 0;
//}




//дһ���ݹ麯��DigitSum(n)������һ���Ǹ����������������������֮��
//���磬����DigitSum(1729)����Ӧ�÷���1 + 7 + 2 + 9�����ĺ���19
//���룺1729�������19

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