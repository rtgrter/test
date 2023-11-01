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
//	 const char* p = "abcdef";//p里面存放的是'a'的地址，%s打印字符串，遇到\0结束
//	printf("%s", p);
//	return 0;
//}
int main()
{
	const char* p1 = "abcdef";
	const char* p2 = "abcdef";

	char arr1[] = "abcdef";
	char arr2[] = "abcdef";

	if (p1 == p2)
		printf("p1==p2\n");
	else
		printf("p1!=p2\n");

	if (arr1 == arr2)
		printf("arr1==arr2\n");
	else
		printf("arr1!=arr2\n");

	return 0;
}