#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
//翻转比特位
unsigned int reverse_bit(unsigned int value)
{
	int ret = 0;
	int tmp = 0;
	int i = 0;
	for (i = 0; i < 32; i++)
	{
		if (((value >> i) & 1) == 1)
			tmp = 1;
		else
		{
			tmp = 0;
		}
			ret = ret | (tmp << (31 - i));
		
	}
	return  ret;
}
int main()
{
    unsigned int value = 0;
	scanf("%d", &value);
	int ret = reverse_bit(value);
	printf("%u\n", ret);
	//system("pause");
	return 0;
}
