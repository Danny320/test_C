#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
////����ˮ��1ƿ��ˮ1Ԫ��2����ƿ���Ի�һƿ��ˮ����20Ԫ�����Զ�����ˮ�����ʵ�֣�
////����һ��
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

//������:�Ȳ�����
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