#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//����һ���������
struct Book
{
	char name[30];//����
	double price;//����
	char id[30];//���
};
//����
//1.�ṹ�����.��Ա��
//2.�ṹ��ָ��->��Ա��
int main()
{
	//����һ����
	struct Book b1 = { "���Ӣ�۴�", 55.62, "ISBN-1389025" };
	//����һ���ṹ��ָ��
	struct Book *ps = &b1;
	struct Book b2 = { "C���Գ������", 32.34,"ISBN-214254"};
	printf("������%s\n", b1.name);
	printf("������%s\n", (*ps).name);
	printf("������%s\n", ps->name);

	printf("���ۣ�%0.2lf\n", b1.price);
	printf("��ţ�%s\n", b1.id);
	system("pause");
	return 0;
}




