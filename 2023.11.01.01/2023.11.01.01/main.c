#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

//int main()
//{
//	char ch = 'a';
//	char* pc = &ch;
//	*pc = 'c';
//	printf("%c", ch);
//	return 0;
//}
//int main()
//{
//	 const char* p = "abcdef";//p�����ŵ���'a'�ĵ�ַ��%s��ӡ�ַ���������\0����
//	printf("%s", p);
//	return 0;
//}
//int main()
//{
//	const char* p1 = "abcdef";
//	const char* p2 = "abcdef";
//
//	char arr1[] = "abcdef";
//	char arr2[] = "abcdef";
//
//	if (p1 == p2)
//		printf("p1==p2\n");
//	else
//		printf("p1!=p2\n");
//
//	if (arr1 == arr2)
//		printf("arr1==arr2\n");
//	else
//		printf("arr1!=arr2\n");
//
//	return 0;
//}
//int main()
//{
//	int arr1[] = { 1,2,3,4,5 };
//	int arr2[] = { 2,3,4,5,6 };
//	int arr3[] = { 3,4,5,6,7 };
//
//	int* parr[3] = { arr1,arr2,arr3 };
//
//	int i = 0;
//	for (i = 0; i < 3; i++)
//	{
//		int j = 0;
//		for (j = 0; j < 5; j++)
//		{
//			//*(p+i)=p[i];
//			//printf("%d ", *(parr[i] + j));
//			printf("%d ", parr[i][j]);
//		}
//		printf("\n");
//	}
//	return 0;
//}
// ����ָ�����������һ��ָ������ĵ�ַ
//������ͨ��������ʾ������Ԫ�صĵ�ַ
//��������������
//1.sizeof(�����������������������ʾ�������飬���������������Ĵ�С
//2.&���������������������ʾ���������������飬����&������ȡ��������������ĵ�ַ
//int main()
//{
//	//int arr[10] = { 0 };
//	//printf("%p\n", arr);
//	//printf("%p\n", arr+1);
//	//printf("%p\n", &arr[0]);
//	//printf("%p\n", &arr[0]+1);
//	//printf("%p\n", &arr);
//	//printf("%p\n", &arr+1);
//	//return 0;
//	int arr[10] = { 0 };
//	int* p = arr;
//	int(*p2)[10] = &arr;
//}