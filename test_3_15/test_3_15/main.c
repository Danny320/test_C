#define _CRT_SECURE_NO_WARNINGS 1
//#include<stdio.h>
//#include<stdlib.h>
//typedef unsigned int u_int;//����������
//int main()
//{
//	u_int age;
//	register int a = 0;//����a�ᱻ����ʹ��
//	//�����a�ŵ��Ĵ�����
//	system("pause");
//	return 0;
//}
//static������
//1.���ξֲ��������ı�ֲ���������������,��������
//2.����ȫ�ֱ�����ֻ�����Լ����ڵ�.c�ļ���ʹ�ã�����������Դ�ļ���ʹ�ã��������С
//3.���κ�����ֻ�����Լ����ڵ�Դ�ļ���ʹ��
//void test()
//{
//	static int a = 1;
//	a++;
//	printf("%d ", a);
//}
//int main()
//{
//	int i = 0;
//	while (i < 10)
//	{
//		test();
//		i++;
//	}
//	system("pause");
//	return 0;
//}

//extern Add(int, int);
//int main()
//{
//	int a = 10;
//	int b = 20;
//	int sum = Add(a, b);
//	printf("%d\n", sum);
//    system("pause");
//	return 0;
//}

//*************************�����ж�����******************************
//#include<stdio.h>
//int leap_year(int y)
//{
//	if ((y % 4 == 0 && y % 100 != 0) || y % 400 == 0)
//		return 1;
//	else
//		return 0;
//}
//int main()
//{
//	int year = 0;
//	scanf("%d", &year);
//	 int ret=leap_year(year);
//	 if (ret)
//		 printf("yes");
//	 else
//		 printf("no");
//	system("pause");
//	return 0;
//}
//********************************************************************
//#include<stdio.h>
//void init(int arr[],int sz)
//{
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		arr[i] = i;
//	}
//}
//void print_arr(int arr[], int sz)
//{
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	printf("\n");
//}
//void empty(int arr[], int sz)
//{
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		arr[i] = 0;
//	}
//}
//void reverse(int arr[], int sz)
//{
//	int left = 0;
//	int right = sz - 1;
//	while (left < right)
//	{
//		int tmp = arr[left];
//		arr[left] = arr[right];
//		arr[right] = tmp;
//		left++;
//		right--;
//	}
//}
//int main()
//{
//	int arr[10] = { 0 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	init(arr,sz);
//	print_arr(arr, sz);
//	reverse(arr,sz);
//	print_arr(arr, sz);
//	empty(arr, sz);
//	print_arr(arr, sz);
//	system("pause");
//	return 0;
//}