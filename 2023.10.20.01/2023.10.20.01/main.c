#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <ctype.h>
#include <math.h>

///*
//(变种水仙花数)Lily Number 把任意的数字，从中间拆分成两个数字，
//如果拆分后的乘积之和等于自身，则是一个Lily Number
//*/
//int main()
//{
//	int i = 0;1
//	for (i = 10000; i <= 99999; i++)
//	{
//		int sum = 0;
//		int j = 0;
//		for (j = 1; j <= 4; j++)
//		{
//			int k = (int)pow(10, j);
//			sum += (i % k)* (i / k);
//		}
//		if (sum == i)
//			printf("%d ", i);
//	}
//	return 0;
//}
//int main()
//{
//	int i = 0;
//	int max = 0;
//	int score = 0;
//	for (i = 0; i < 3; i++)
//	{
//		scanf("%d", &score);
//		if (score > max)
//			max = score;
//	}
//	printf("max = %d\n", max);
//	return 0;
//}
//int main()
//{
//	char ch = 0;
//	while (scanf("%c", &ch) == 1)
//	{
//		//if ((ch >= 'A' && ch <= 'Z') || (ch >= 'a' && ch <= 'z'))
//		if(isalpha(ch))
//			printf("%c is an alphabet.\n",ch);
//		else
//			printf("%c is not an alphabet.\n",ch);
//		getchar();//取走\n
//	}
//	return 0;
//}
//int main()
//{
//	char ch = 0;
//	while (scanf("%c", &ch) != EOF)
//	{
//		if (islower(ch))
//			printf("%c\n", toupper(ch));
//		else if (isupper(ch))
//			printf("%c\n", tolower(ch));
//		getchar();
//	}
//	return 0;
//}

//int main()
//{
//	char ch = 0;
//	while (scanf("%c", &ch)!=EOF)
//	{
//		if (ch >= 'a' && ch <= 'z')
//			printf("%c\n", ch - 32);
//		else if (ch >= 'A' && ch <= 'Z')
//			printf("%c\n", ch + 32);
//		getchar();
//	}
//	return 0;
//}
//int main()//最高分和最低分之差
//{
//	int n = 0;
//	scanf("%d", &n);
//	int arr[10];
//	int i = 0;
//	int min = 100;
//	int max = 0;
//	for (i = 0; i < n; i++)
//	{
//		scanf("%d", &arr[i]);
//		if (arr[i] > max)
//			max = arr[i];
//		if (arr[i] < min)
//			min = arr[i];
//	}
//	
//	
//	printf("%d", max - min);
//	return 0;
//}
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int arr[50];
//	int i = 0;
//	for (i = 0; i < n; i++)
//	{
//		scanf("%d", &arr[i]);
//	}
//	int del = 0;
//	scanf("%d", &del);
//	int j = 0;
//	for (i = 0; i < n; i++)
//	{
//		if (arr[i] != del)
//		{
//			arr[j++] = arr[i];
//		}
//	}
//	for (i = 0; i < j; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	return 0;
//}
//int fib(int n)
//{
//	if (n <= 2)
//	{
//		return n;
//	}
//	else
//		return fib(n - 1) + fib(n - 2);
//}
//
//int main()//青蛙跳台阶问题
//{
//	int n = 0;
//	scanf("%d", &n);
//	int m = fib(n);
//	printf("%d\n", m);
//
//	return 0;
//}