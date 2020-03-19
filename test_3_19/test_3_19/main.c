#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//创建一个书的类型
struct Book
{
	char name[30];//书名
	double price;//定价
	char id[30];//书号
};
//引用
//1.结构体变量.成员名
//2.结构体指针->成员名
int main()
{
	//定义一本书
	struct Book b1 = { "射雕英雄传", 55.62, "ISBN-1389025" };
	//定义一个结构体指针
	struct Book *ps = &b1;
	struct Book b2 = { "C语言程序设计", 32.34,"ISBN-214254"};
	printf("书名：%s\n", b1.name);
	printf("书名：%s\n", (*ps).name);
	printf("书名：%s\n", ps->name);

	printf("定价：%0.2lf\n", b1.price);
	printf("书号：%s\n", b1.id);
	system("pause");
	return 0;
}




