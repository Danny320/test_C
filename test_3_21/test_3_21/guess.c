#define _CRT_SECURE_NO_WARNINGS 1
#include<time.h>
#include<stdio.h>
#include<stdlib.h>
#include<windows.h>
void menu()
{
	printf("********************************************\n");
	printf("*********      1.play      0.exit    *******\n");
	printf("********************************************\n");
}
void game()
{
	int guess = 0;
	int ret = rand() % 100 + 1;
	while (1)
	{
		printf("������֣�>");
		scanf("%d", &guess);
		if (guess > ret)
		{
			printf("�´���\n");
		}
		else if (guess < ret)
		{
			printf("��С��\n");
		}
		else
		{
			printf("��ϲ�㣬�¶���\n");
			break;
		}
	}
}

int main()
{
	int input = 0;
	srand((unsigned int)time(NULL));
	do
	{
		menu();
		printf("��ѡ��>");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			game();
			break;
		case 0:
			printf("�˳���Ϸ\n");
			break;
		default:
			printf("ѡ�����\n");
			break;
		}
	} while (input);
	return 0;
}