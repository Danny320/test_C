#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
//int main(int argc, char *argv[])
//{
//	int num1 = atoi(argv[2]);
//	int num2 = atoi(argv[3]);
//	int ret = 0;
//	if (argc != 4)
//	{
//		printf("��������\n");
//		return 1;
//	}
//	if (*(argv[1] + 0) = '-')
//	{
//		switch (*(argv[1] + 1))
//		{
//		case'a':
//		{
//				   ret = num1 + num2;
//		           printf("ret=%d\n", ret);
//		}
//			break;
//		case 's':
//		{
//					ret = num1 - num2;
//					printf("ret=%d\n", ret);
//		}
//			break;
//		case 'm':
//		{
//					ret = num1*num2;
//					printf("ret=%d\n", ret);
//		}
//			break;
//		case 'd':
//		{
//					ret = num1 / num2;
//					printf("ret=%d\n", ret);
//		}
//			break;
//		default:
//			printf("�ڶ�����������");
//			break;
//		}
//	}
//
//	system("pause");
//	return 0;
//}
//************************************************************************
//int main()
//{
//	int *(arr[10]);//ָ������
//	int* (*parr)[10];//()>[]>*����ָ��
//	int ��*pfun��(char *p)=NULL;//����ָ��
//	int (*pfunarr[10])(char *p);//����ָ������
//	
//
//	system("pause");
//	return 0;
//}
//**********************************************************************
//void bubble_sort(char* arr[], int sz)
//{
//	int i = 0;
//	for (i = 0; i < sz - 1; i++)
//	{
//		int j = 0;
//		for (j = 0; j < sz - 1 - i; j++)
//		{
//			if (strcmp(arr[j],arr[j + 1])>0)
//			{
//				char *tmp = arr[j];
//				arr[j] = arr[j + 1];
//				arr[j + 1] = tmp;
//			}
//		}
//	}
//}
//int main()
//{
//	char *arr[] = { "aaaaa", "bbbbb", "ccccc", "ddddd" };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		printf("%s\n", arr[i]);
//	}
//	bubble_sort(arr, sz);
//	for (i = 0; i < sz; i++)
//	{
//		printf("%s\n", arr[i]);
//	}
//	system("pause");
//	return 0;
//}
//**********************************************************************
//enum OP
//{
//	EXIT,
//	ADD,
//	SUB,
//	MUL,
//	DIV,
//};
//void menu()
//{
//	printf("*********************************************\n");
//	printf("***********  1.add      2.sub   *************\n");
//	printf("***********  3.mul      4.div   *************\n");
//	printf("***********       0.exit        *************\n");
//	printf("*********************************************\n");
//}
//int Add(int x, int y)
//{
//	return x + y;
//}
//int Sub(int x, int y)
//{
//	return x-y;
//}
//int Mul(int x, int y)
//{
//	return x*y;
//}
//int Div(int x, int y)
//{
//	return x / y;
//}
//void operation(int(*pfun)(int, int))//����ָ����Ϊ����
//{
//	int ret = 0;
//	int num1 = 0;
//	int num2 = 0;
//	printf("����������������:>");
//	scanf("%d%d", &num1,&num2);
//	ret = pfun(num1, num2);
//	printf("ret=%d\n", ret);
//}
////ת�Ʊ�
//int (*pfunarr[5])(int, int) = { 0, Add, Sub, Mul, Div };
//int main()
//{
//	int input = 1;
//	int num1 = 0;
//	int num2 = 2;
//	while (input)
//	{
//		menu();
//		printf("��ѡ��:>");
//		scanf("%d", &input);
//		if (input != 0)
//			operation(pfunarr[input]);
//
//		/*switch (input)
//		{
//		case ADD:
//			operation(&Add);
//			break;
//		case SUB:
//			operation(&Sub);
//			break;
//		case MUL:
//			operation(&Mul);
//			break;
//		case DIV:
//			operation(&Div);
//			break;
//		case EXIT:
//			break;
//		default:
//			printf("ѡ�����\n");
//		}*/
//	}
//}
//*****************************************************************************
//void(* signal(int, void(*)(int)))(int);
//1.signal��һ������
//2.signal�����ĵ�һ��������int�ͣ��ڶ���������һ������ָ�루ָ���ܹ�ָ��һ������Ϊint
//,����ֵ����Ϊvoid������
//3.signal�����ķ���ֵ������һ������ָ�����ͣ�ָ���ܹ�ָ��һ������Ϊint
//,����ֵ����Ϊvoid��������
//**************************************************************************
//qsort����ԭ��
//void qsort(void *base,size_t num,size_t width,int (*cmpare)(const void*, const void*))
//��������
//1.base�Ǵ�����������Ԫ�ص�ַ��
//2.num�������С��
//3.width�Ǹ�Ԫ��ռ�ÿռ�*/��С��
//4.����ָ�루�ص�������
//typedef struct Stu
//{
//	char name[10];
//	int age;
//	float score;
//}stu,*pstu;
//int Compare_int(const void *eleml, const void *elem2)
//{
//	return *(int *)eleml - *(int*)elem2;
//}
//int Compare_stu(const void*eleml, const void *elem2)
//{
//	if (((pstu)elem1->score - (())
//}
//void _swap(char *buf1, char *buf2, size_t sz)
//{
//	int i = 0;
//	for (i = 0; i < (int)sz; i++)
//	{
//		char tmp = buf1[i];
//		buf1[i] = buf2[i];
//		buf2[i] = tmp;
//	}
//}