#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

int main()//�ж�100����200֮�������  ������ֻ�ܱ�1��������������
{
	int i = 0;
	int count = 0;
	for (i = 100; i <= 200; i++)
	{
		int j;
		for (j = 2; j < i; j++)
		{
			if (i % j == 0)
			{
				break;
			}
		}
		if (i == j)
		{
			count++;
			printf("%d ", i);
		}
	}
	printf("\ncount=%d\n", count);
}
//int main()
//{
//	int year = 0;
//	int count = 0;
//	for (year = 1000; year <= 2000; year++)
//	{
//		if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0 && year % 3200 != 0))
//		{
//			printf("%d ", year);
//			count++;
//		}
//		///*if (year % 4 == 0 && year % 100 != 0)
//		//{
//		//	printf("%d ", year);
//		//	count++;
//		//}
//		//else if (year % 400 == 0 && year % 3200 != 0)
//		//{
//		//	printf("%d ", year);
//		//	count++;
//		//}*/
//
//	}
//	printf("\ncount=%d\n", count);
//}

//int main()//շת����������Լ��
//{
//	int m;
//	int n;
//	int r;
//	scanf("%d%d", &m, &n);
//	while (r=m % n)
//	{
//		r = m % n;
//		m = n;
//		n = r;
//	}
//	printf("%d", n);
//	return 0;
//}

//int main()
//{
//	int i;
//	for (i = 1; i <= 100; i++)
//	{
//		if (i % 3 == 0)
//		{
//			printf("%d ", i);
//		}
//	}
//	return 0;
//}