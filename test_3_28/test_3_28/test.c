#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
//���������������в�ͬλ�ĸ���
//int  Find_diff_bit(int m, int n)
//{
//	int count = 0;
//	int tmp = m^n;
//	int i = 0;
//	for (i = 0; i < 32; i++)
//	{
//		if (((tmp >> i) & 1) == 1)
//			count++;
//	}
//	return count;
//}
//int main()
//{
//	int m = 0;
//	int n = 0;
//	printf("������������:\n");
//	scanf("%d%d", &m, &n);
//	int ret = Find_diff_bit(m, n);
//	printf("%d\n", ret);
//	return 0;
//}



//��ӡ���������Ƶ�����λ��ż��λ
//void Printbit(int n)
//{
//	int i = 0;
//	for (i = 31; i>=1; i-=2)
//		{
//		printf("%d ", (n >> i) & 1);
//		}
//	printf("\n");
//	for (i = 30; i >= 0; i -= 2)
//	{
//		printf("%d ", (n >> i) & 1);
//	}
//	printf("\n");
//}
//int main()
//{
//	int n = 0;
//	rintf("������һ������");
//	scanf("%d", &n);
//	Printbit(n);
//	return 0;
//}



////int count_one_bit(int num)
////{
////	int count = 0;
////	int i = 0;
////	for (i = 0; i < 32; i++)
////	{
////		if (((num >> i) & 1) == 1)
////			count++;
////	}
////	return count;
////}
//int count_one_bit(int n)
//{
//	int count = 0;
//	while (n)
//	{
//		if (n % 2 == 1)
//			count++;
//		n = n / 2;
//	}
//	return count;
//}
//int main()
//{
//	int n = 0;
//	printf("�����룺");
//	scanf("%d", &n);
//	int ret = count_one_bit(n);
//	printf("%d\n", ret);
//	return 0;
//}


//����������������������ʱ������
//int main()
//{
//	int a = 20;
//	int b = 30;
//	printf("����ǰ��a=%d,b=%d\n", a, b);
//	a = a^b;
//	b = a^b;
//	a = a^b;
//	printf("������a=%d,b=%d\n", a, b);
//	return 0;
//}