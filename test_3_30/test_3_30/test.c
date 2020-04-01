#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//int sys_check()
//{
//	int a = 1;
//	char* p = (char*)&a;
//	if (*p == 1)
//	{
//		return 0;//小端
//	}
//	else
//		return 1;//小端
//}
//int main()
//{
//	int ret=sys_check();
//	if (ret)
//	{
//		printf("小端\n");
//	}
//	else
//		printf("大端\n");
//	return 0;
//}



void reverse(char *left, char *right)
{
	while (left < right)
	{
		char tmp = *left;
		*left = *right;
		*right = tmp;
		left++;
		right--;
	}
}
void reverse_str(char arr[], int sz)
{
	char *left = arr;
	char *right = arr + sz - 1;
	char *start = arr;
	char *end = arr;
	reverse(left, right);
	while (*end != '\0')
	{
		while ((*end != ' ') && (*end != '\0'))
		{
			end++;
		}
		reverse(start, end - 1);
		if (*end != '\0')
		{
			start = end + 1;


		}
	}
}
int main()
{
	char arr[] = "hello bit";
	int len = strlen(arr);
	reverse_str(arr, len);
	printf("%s\n", arr);
	return 0;
}
//int main()
//{
//	int i = -20;
//	unsigned int j = 10;
//	printf("%d\n", i + j);
//}

//int main()
//{
//	char a[1000];
//	int i;
//	for (i = 0; i < 1000; i++)
//	{
//		a[i] = -1 - i;
//	}
//	printf("%d", strlen(a));
//	return 0;
//}

//unsigned char i = 0;
//int main()
//{
//	for (i = 0; i <= 255; i++)
//	{
//		puts("hello world\n");
//	}
//	return 0;
//}


