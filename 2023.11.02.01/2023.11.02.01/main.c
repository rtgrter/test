#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

//int main()
//{
//	char* arr[5] = { 0 };
//	char* (*pc)[5] = &arr;//����ָ���ŵ�������ĵ�ַ
//
//	char ch = 'w';
//	char* p1 = &ch;
//	char** p2 = &p2;//����ָ���ŵ���һ��ָ������ĵ�ַ
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
//	//	printf("%d ", *(*p + i));//p��ָ������ģ�*p�൱�������������������൱��������Ԫ�صĵ�ַ
//	//	//����*p�൱��������Ԫ�صĵ�ַ
//	//}
//	//return 0;
//}
void print1(int arr[3][5], int r, int c)
{
	int i = 0;
	for (i = 0; i < r; i++)
	{
		int j = 0;
		for (j = 0; j < c; j++)
		{
			printf("%d ", arr[i][j]);
		}
		printf("\n");
	}
}
void print2(int(*p)[5], int r, int c)
{
	int i = 0;
	for (i = 0; i < r; i++)
	{
		int j = 0;
		for (j = 0; j < c; j++)
		{
			printf("%d ", *(*(p + i) + j));
		}
		printf("\n");
	}
}
int main()
{
	int arr[3][5] = { 1,2,3,4,5,2,3,4,5,6,3,4,5,6,7 };
	print2(arr, 3, 5);
	return 0;
}