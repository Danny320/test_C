#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
////喝汽水，1瓶汽水1元，2个空瓶可以换一瓶汽水，给20元，可以多少汽水（编程实现）
////方法一：
int main()
{
	int money = 0;
	int tatal = 0;
	int empty = 0;
	scanf("%d", &money);
	int empty = money;
	int tatal = money;
	while (empty>1)
	{
		tatal = tatal +empty / 2;
		empty = empty / 2+empty%2;

	}
	printf("%d\n", tatal);
	return 0;
}

//方法二:等差数列
//int main()
//{
//	int money = 0;
//	int tatal = 0;
//	int empty = 0;
//	scanf("%d", &money);
//	if (money == 0)
//	{
//		tatal = 0;
//	}
//	else
//	{
//		tatal = money * 2 - 1;
//	}
//	printf("%d\n", tatal);
//	return 0;
//}