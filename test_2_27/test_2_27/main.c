#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
//*****************************��������ʱ��������������*****************************
//int main()
//{
//	int a = 0;
//	int b = 0;
//	printf("������a��b��ֵ��");
//	scanf("%d%d", &a, &b);
//	a = a + b;
//	b = a - b;
//	a = a - b;
//	printf("������a��b��ֵΪ��a=%d,b=%d\n",a,b);
//	system("pause");
//	return 0;
//}
//***************************��ʮ���������ֵ****************************
//int main()
//{
//	int arr[10];
//	int max = 0;
//	int i = 0;
//	printf("������ʮ������");
//	for (i = 0; i<10; i++)
//	{
//		scanf("%d", &arr[i]);
//	}
//	max = arr[0];
//	for (i = 1; i < 10; i++)
//	{
//		if (max<arr[i])
//			max = arr[i];
//	}
//	printf("max=%d\n", max);
//	system("pause");
//	return 0;
//}
//******************дһ���������ز�����������1�ĸ���*******************************
//int count_one_bits(unsigned int value)
//{
//	int count = 0;
//	while (value)
//	{
//		if (value % 2 == 1)
//			count++;
//		value /=  2;
//	}
//	return count;
//}
//int main()
//{
//	int number = 0;
//	printf("�����룺");
//		scanf("%d", &number);
//		int count = count_one_bits(number);
//		printf("%d\n", count);
//		system("pause");
//		return 0;
//}
////////////////////////////////////////////////////////
//int count_one_bits(int n)
//{
//	int count = 0;
//	int i = 0;
//	for (i = 0; i < 32; i++)
//	{
//		if ((n >> i) & 1 == 1)
//		{
//			count++;
//		}
//	}
//	return count;
//}
//int main()
//{
//	int number = 0;
//	printf("�����룺");
//	scanf("%d", &number);
//	int count = count_one_bits(number);
//	printf("count=%d\n", count);
//	system("pause");
//	return 0;
//}
/////////////////////////////////////////////////////////////
//int count_one_bits(int n)
//{
//	int count = 0;
//	while (n)
//	{
//		count++;
//		n = n&(n - 1);
//	}
//	return count;
//}
//int main()
//{
//	int num = 0;
//	printf("�����룺");
//	scanf("%d", &num);
//	int count = count_one_bits(num);
//	printf("count=%d\n", count);
//	system("pause");
//	return 0;
//}