#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>
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




//�ݹ�
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
//�ǵݹ�
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