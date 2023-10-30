#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>


int Facl(int n)
{
	int i = 0;
	int ret = 1;

	for (i = 1; i <= n; i++)
	{
		ret *= i;
	}
	return ret;
}
int main()
{
	int n = 0;
	int ret = 0;
	scanf("%d", &n);
	ret = Facl(n);
	printf("%d\n", ret);
	return 0;
}
//int my_strlen(char* str)
//{
//	if (*str != '\0')
//		return 1 + my_strlen(str + 1);
//	else
//		return 0;
//}
//int main()
//{
//	char arr[] = "hklajsfhkj";
//	int len = my_strlen(arr);
//	printf("len = %d\n", len);
//}
//void print(int n)
//{
//	if (n > 9)
//	{
//		print(n / 10);
//	}
//	printf("%d ", n%10);
//}
//
//int main()
//{
//	int n = 54232574;
//	print(n);
//	return 0;
//}