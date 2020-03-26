#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
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



//编写函数不允许创建临时变量，求字符串长度
//int my_strlen(char* str)
//{
//	if (*str != '\0')
//		return 1 + my_strlen(str + 1);
//	else
//		return 0;
//}
//int main()
//{
//	char arr[] = "bit";//数组名是首元素地址--char的地址char*
//	int len = my_strlen(arr);
//	printf("%d\n", len);
//	return 0;
//}



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



//递归和非递归分别实现求n的阶乘（不考虑溢出的问题）
//非递归
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int i = 0;
//	int num = 1;
//	for (i = 1; i <= n; i++)
//	{
//		num *= i;
//	}
//	printf("%d\n", num);
//	return 0;
//}



//递归
//int factorial(int n)
//{
//	if (n > 1)
//		return  factorial(n - 1)*n;
//	else
//		return 1;
//}
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int ret = factorial(n);
//	printf("%d\n", ret);
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


////求第n个斐波那契数
//int Fib(int n)
//{
//	int a = 1;
//	int b = 1;
//	int c = 1;
//	while (n > 2)
//	{
//		c = a + b;
//		a = b;
//		b = c;
//		n--;
//	}
//	return c;
//}
////递归
//int Fib(int n)
//{
//	if (n <= 2)
//		return 1;
//	else
//		return Fib(n - 1) + Fib(n - 2);
//}
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int ret = Fib(n);//第n个斐波那契数是不适合用递归求解的
//	//50
//	printf("%d\n", ret);
//	return 0;
//}



//编写一个函数，递归实现n的k次方
//int k_power(int n, int k)
//{
//	if (k = 0)
//		return 0;
//	else if (k > 1)
//	{
//		return n*k_power(n, k - 1);
//	}
//	return n;
//}
//int main()
//{
//	int n = 0;
//	int k = 0;
//	scanf("%d%d", &n, &k);
//	int ret = k_power(n, k);
//	printf("%d\n", ret);
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