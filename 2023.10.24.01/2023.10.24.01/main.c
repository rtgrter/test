#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

//int is_leap_year(int y)
//{
//	return (((y % 4 == 0) && (y % 100 != 0)) || (y % 400 == 0));
//}
//int main()
//{
//	int y = 0;
//	int m = 0;
//	int d = 0;
//	int days[13] = { 0,31,28,31,30,31,30,31,31,30,31,30,31 };
//	while (scanf("%d %d", &y, &m) == 2)
//	{
//		int d = days[m];
//		if (is_leap_year(y) == 1 && (m = 2))
//		{
//			d++;
//		}
//		printf("%d", d);
//	}
//	return 0;
//}

//void test2()
//{
//	printf("hehe\n");
//}
//
//void test1()
//{
//	test2();
//}
//
//void test()
//{
//	test1();
//}
//
//int main()
//{
//	test();
//	return 0;
//}
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int i = 0;
//	int sum = 0;
//	int j = 0;
//	for (j = 1; j <= n; j++)
//	{
//		int ret = 1;
//		for (i = 1; i <= j; i++)
//		{
//			ret *= i;
//		}
//		sum += ret;
//	}
//	printf("%d\n", sum);
//	return 0;
//int main()
//{
//	int i = 0;
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	for (i = 0; i <= 14; i++)
//	{
//		arr[i] = 0;
//		printf("hehe\n");
//	}
//}
#include <string.h>

//void my_strcpy(char* dest, char* src)
//{
//	while (*src != '\0')
//	{
//		*dest = *src;
//		dest++;
//		src++;
//	}
//	*dest = *src;
//}
//void my_strcpy(char* dest, char* src)
//{
//	while (*src != '\0')
//	{
//		*dest++ = *src++;
//	}
//	*dest = *src;
//}
#include <assert.h>
char* my_strcpy(char* dest, const char* src)
{
	char* ret = dest;
	assert(src != NULL);
	assert(dest != NULL);
	while (*dest++ = *src++)
	{
		;
	}
	return ret;
}
int main()
{
	char arr1[20] = "*************";
	char arr2[] =   "hello bit";
	/*char* p = NULL;*/
	
	printf("%s", my_strcpy(arr1, arr2));
	return 0;
}