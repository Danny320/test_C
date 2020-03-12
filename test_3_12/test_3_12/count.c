#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
int main()
{
	int i, sum, count = 2;
	for (i = 0, sum = 0; i < count; i += 2, count++)
	{
		static int count = 4;
		count++;
		if (i % 2 == 0)
		{
		/*	extern int count;*/
			count++;
			sum += count;
		}
		sum += count;
	}
	printf("%d %d\n", count, sum);
	system("pause");
	return 0;
}