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
			end = start;
		}
	}
}
int main()
{
	char arr[] = "student a am i";
	int sz = sizeof(arr) / sizeof(arr[0]);
	reverse_str(arr, sz);
	printf("%s\n", arr);
	return 0;
}
