#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

//int main()
//{
//	char* arr[5] = { 0 };
//	char* (*pc)[5] = &arr;//数组指针存放的是数组的地址
//
//	char ch = 'w';
//	char* p1 = &ch;
//	char** p2 = &p2;//二级指针存放的是一级指针变量的地址
//	return 0;
//}
//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int* p = arr;
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d ", *(p + i));
//	}
//	//int(*p)[10] = &arr;
//
//	//int i = 0;
//	//int sz = sizeof(arr) / sizeof(arr[0]);
//	//for (i = 0; i < sz; i++)
//	//{
//	//	printf("%d ", *(*p + i));//p是指向数组的，*p相当于数组名，数组名又相当于数组首元素的地址
//	//	//所以*p相当于数组首元素的地址
//	//}
//	//return 0;
//}
//void print1(int arr[3][5], int r, int c)
//{
//	int i = 0;
//	for (i = 0; i < r; i++)
//	{
//		int j = 0;
//		for (j = 0; j < c; j++)
//		{
//			printf("%d ", arr[i][j]);
//		}
//		printf("\n");
//	}
//}
//void print2(int(*p)[5], int r, int c)
//{
//	int i = 0;
//	for (i = 0; i < r; i++)
//	{
//		int j = 0;
//		for (j = 0; j < c; j++)
//		{
//			printf("%d ", *(*(p + i) + j));
//		}
//		printf("\n");
//	}
//}
//int main()
//{
//	int arr[3][5] = { 1,2,3,4,5,2,3,4,5,6,3,4,5,6,7 };
//	print2(arr, 3, 5);
//	return 0;
//}
//一维数组传参
//void test(int arr[])//ok
//void test(int arr[10])//ok
//void test(int* arr)//ok
//void test2(int* arr[20])//ok
//void test2(int** arr)//ok
//int main()
//{
//	int arr[10] = 0;
//	int* arr2[10] = 0;
//	test(arr);
//	test2(arr2);
//}
//二维数组传参
//void test(int arr[3][5])//ok
//void test(int arr[][])//no
//void test(int arr[][5])//ok
//void test(int* arr)//no
//void test(int* arr[5])//no
//void test(int (*arr)[5])//ok
//void test(int** arr)//no
//int main()
//{
//	int arr[3][5] = { 0 };
//	test(arr);
//}
//函数指针——指向函数的指针
//int Add(int x, int y)
//{
//	return x + y;
//}
//void calc(int(*pf)(int, int))
//{
//	int a = 3;
//	int b = 5;
//	int ret = pf(a, b);
//	printf("%d\n", ret);
//}
//int main()
//{
//	calc(Add);
//	return 0;
//}
//int main()
//{
//	int arr[5] = { 0 };
//	int(*p)[5] = &arr;
//	//对于函数来说，&函数名和函数名都是函数的地址
//	//int (*pf)(int, int) = &Add;//函数指针
//	int (*pf)(int, int) = Add;//函数指针
//	//int ret = (*pf)(2, 3);
//	int ret = (pf)(2, 3);
//	printf("%d\n", ret);
//}
