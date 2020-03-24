#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

//判断大小端
//int check_sys()
//{
//	int i = 1;
//	return (*(char*)&i);
//}
//int main()
//{
//	int ret = check_sys();
//	if (ret == 1)
//	{
//		printf("小端存储\n");
//	}
//	else
//	{
//		printf("大端存储\n");
//	}
//	return 0;
//}



//int main()
//{
//	char a = -1;//-1
//	signed char b = -1;//-1
//	unsigned char c = -1;//255
//	printf("a=%d,b=%d,c=%d", a, b, c);
//	return 0;
//}


//int main()
//{
//	char a = 128;
//	printf("%u\n", a);
//	return 0;
//}


//strcpy字符串拷贝
//#include<string.h>
//int main()
//{
//	char arr1[20] = "########";
//	char arr2[20] = "bit";
//	strcpy(arr1, arr2);//起始位置的地址
//
//	printf("%s\n", arr1);
//	return 0;
//}


//memset-内存设置
//void* memset(void* ptr, int value, size_int num)
//int main()
//{
//	char arr[] = "hello bit";
//	memset(arr, '*', bit);
//}


//int get_max(int x, int y)
//{
//	return(x > y ? x : y);
//}
//int main()
//{
//	int a = 10;
//	int b = 20;
//	int max=get_max(a,b);
//	printf("max=%d\n", max);
//	return 0;
//}


//快捷键f11进入函数内部
//Swap1(int x, int y)//形参
//{
//	int tmp = 0;
//	tmp = x;
//	x = y;
//	y = tmp;
//}
//Swap2(int* x, int* y)//形参
//{
//	int tmp = 0;
//	tmp = *x;
//	*x = *y;
//	*y = tmp;
//}
//int main()
//{
//	int a = 10;
//	int b = 20;
//	//Swap1(a, b);//实参，把实参传给形参的时候，形参是实参的一份临时拷贝，对形参的改变不能改变实参的值
//	Swap2(&a, &b);
//	printf("a=%d,b=%d", a, b);
//	return 0;
//}


//函数判断闰年
//int is_leap_year(int year)
//{
//	if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0))
//		return 1;
//	else
//		return 0;
//}
//int main()
//{
//	int year = 0;
//	int count = 0;
//	for (year = 1000; year <= 2000; year++)
//	{
//		if (is_leap_year(year) == 1)
//		{
//			count++;
//			printf("%d ", year);
//		}
//	}
//	printf("\ncount=%d\n", count);
//	return 0;
//}

//#include<math.h>
//int is_prime(int n)
//{
//	int j = 0;
//	for (j = 2; j <=sqrt(n); j++)
//	{
//		if (n%j == 0)
//			return 0;
//	}
//	return 1;
//}
//int main()
//{
//	int i = 0;
//	int count = 0;
//	for (i = 101; i <= 200; i+=2)
//	{
//		if (is_prime(i) == 1)
//		{
//			count++;
//			printf("%d ", i);
//		}
//	}
//	printf("\ncount=%d\n", count);
//}



//int binary_search(int arr[], int k, int sz)
//{
//	int left = 0;
//	int right = sz - 1;
//	while (left <= right)
//	{
//		int mid = (left + right) / 2;
//		if (arr[mid] < k)
//		{
//			left = mid + 1;
//		}
//		else if (arr[mid] >k)
//		{
//			right = mid - 1;
//		}
//		else 
//		{
//			return mid;
//		}
//	}
//	return -1;
//}
//int main()
//{
//	int arr[] = { 1, 2, 3, 4, 5, 6, 7, 8,9, 10 };
//	int k = 0;
//	scanf("%d", &k);
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int ret=binary_search(arr,k,sz);
//	if (ret == -1)
//	{
//		printf("找不到\n");
//	}
//	else
//		printf("找到了下标是：%d\n",ret);
//	return 0;
//}


//Add(int *p)
//{
//	(*p)++;
//
//}
//int main()
//{
//	int num = 0;
//	Add(&num);
//	printf("%d\n", num);
//}


//int main()
//{
//	printf("%d", printf("%d", printf("%d", 43)));
//	return 0;
//}

//int Add(int x,int y);
//int main()
//{
//	int a = 10;
//	int b = 20;
//	int sum = Add(a, b);
//	printf("sum=%d\n", sum);
//	return 0;
//}
//int Add(int x, int y)
//{
//	int z = x + y;
//	return z;
//}