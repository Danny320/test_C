#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<assert.h>
//strcpy
//strcat  字符串追加函数

// char* my_strcpy(char* dest, const char* src)
//{
//	 char *ret = dest;
//	assert(dest != NULL);
//	assert(src != NULL);
//	while (*dest++ = *src++)
//	{
//		;
//	}
//	return ret;
//
//}
//int main()
//{
//	char dest[10];
//	char *psrc = "abcdef";
//	char *ret=my_strcpy(dest, psrc);
//	printf("%s\n",ret);
//	system("pause");
//	return 0;
//}
//int main()
//{
//	int a = 0, b = 0;
//	for (a = 1, b = 1; a <= 100; a++)
//	{
//		if (b >= 20) break;
//		if (b % 3 == 1)
//		{
//			b = b + 3;
//			continue;
//		}
//		b = b - 5;
//	}
//	printf("%d\n", a);
//	system("pause");
//	return 0;
//}


//1-100的所有整数整数中出现多少个数字9
//int main()
//{
//	int i = 1;
//	int count = 0;
//	while (i <= 100)
//	{
//		if ((i % 10 == 9)||(i/10==9))
//			count++;
//		i++;
//	}
//	printf("%d\n", count);
//	system("pause");
//	return 0;
//}


//计算1/1-1/2+1/3-1/4+1/5 …… + 1/99 - 1/100 的值，打印出结果
//int main()
//{
//	int i = 0;
//	double sum = 0;
//	double ret = 0;
//	for (i = 1; i <= 100; i++)
//	{
//		ret = 1.0 / i*(i % 2 ? 1:-1);
//		sum =sum+ret;
//	}
//	printf("%lf\n", sum);
//	system("pause");
//	return 0;
//}
//

//求10 个整数中最大值
//int main()
//{
//	int arr[10] = {0};
//	int i = 0;
//	int ret = 0;
//	int tmp=arr[0];
//	printf("请输入十个整数：");
//	for (i = 0; i < 10; i++)
//	{
//		scanf("%d", &arr[i]);
//	}
//	for (i = 1; i < 10; i++)
//	{
//		if (tmp < arr[i])
//		{
//			tmp = arr[i];
//		}
//	}
//	printf("最大整数=%d\n", tmp);
//	system("pause");
//	return 0;
//}



//在屏幕上输出9*9乘法口诀表
int main()
{
	int i = 0;
	int j = 0;
	for (i = 1; i <= 9; i++)
	{
		for (j = 1; j <= i;  j++)
		{
			printf("%d*%d=%d ", j, i, i*j);
		}
		printf("\n");
	}
	system("pause");
	return 0;
}

