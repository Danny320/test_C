#define _CRT_SECURE_NO_WARNINGS 1
#include<stdlib.h>
#include<math.h>
//��ӡ1000-2000֮�������
int main()
{
	int i = 0;
	int count = 0;
	for (i = 1000; i <= 2000; i++)
	{
		if (((i % 4 == 0) && (i % 100 != 0)) || (i % 400 == 0))
			printf("%d ", i);
		count++;
	}
	printf("\n%d\n", count);
	system("pause");
	return 0;
}
