#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
#include<math.h>
//#define ESP 0.0000000000001
//int main()
//{
//	int i = 1;
//	int count = 0;
//	for (i = 1; i <= 100; i += 2)
//	{
//		printf("%d ", i);
//		count++;
//	}
//	printf("\ncount=%d\n", count);
//	system("pause");
//	return 0;
//}
//***********************************************
//int main()
//{
//	int i = 0;
//	int arr1[] = { 1, 3, 5, 7, 9 };
//	int arr2[] = { 2, 4, 6, 8, 0 };
//	int sz1 = sizeof(arr1) / sizeof(arr1[0]);
//	int sz2 = sizeof(arr2) / sizeof(arr2[0]);
//	for (i = 0; i < sz1; i++)
//	{
//		int j = 0;
//		for (j = 0; j < sz2; j++)
//		{
//			if (arr1[i] == arr2[j])
//			{
//				printf("yes\n");
//				return 0;
//			}
//		}
//	}
//	printf("no\n");
//	system("pause");
//	return 0;
//}
//********************���ax^2+bx+c=0���̵Ľ�*****************************************
//int main()
//{
//	float a = 0.0;
//	float b = 0.0;
//	float c = 0.0;
//	printf("������abc��");
//	scanf("%f%f%f", &a, &b, &c);
//	if ((a >-ESP)&&(a<ESP))
//	{
//		printf("���Ƕ��η���!\n");
//	}
//	else
//	{
//		float d = b*b - 4 * a*c;
//		if ((d>-ESP) && (d<ESP))
//		{
//			printf("��������ȵ�ʵ����Ϊ��%f\n", (-b) / (2 * a));
//		}
//		else if (d>0)
//		{
//			printf("����������ȵ�ʵ��:%f%f\n",
//				((-b) + sqrt(d)) / (2 * a),
//				((-b) - sqrt(d)) / (2 * a));
//		}
//		else
//		{
//			printf("�����������");
//		}
//	}
//	system("pause");
//	return 0;
//}