#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <math.h>
int main()
{
	int i = 0;
	int count = 0;
	for (i = 1; i <= 100; i++)
	{
		if (i % 10 == 9)
		{
			count++;
		}
		if (i / 10 == 9)
		{
			count++;
		}
			
	}
	printf("count=%d\n", count);
}
//int zhishu(int i)//数学方法求质数
//{
//	int j;
//	for (j = 2; j <= sqrt(i); j++)
//	{
//		if (i % j == 0)
//		{
//			return 1;
//			break;
//		}
//	}
//}
//
//int main()
//{
//	int i;
//	int count=0;
//	for (i = 101; i <= 200; i += 2)
//	{
//		if (zhishu(i) != 1)
//		{
//			count++;
//			printf("%d ", i);
//		}
//	}
//	printf("\ncount=%d\n", count);
//	return 0;
//}