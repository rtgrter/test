#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>
#include <windows.h>

int is_prime(int n)
{
	int a = 0;
	for (a = 2; a < sqrt(n); a++)
	{
		if ( sqrt(n) % a != 0)
		{
			return 0;
		}
		return 1;
	}
}

int main()
{
	int i;
	for (i = 100; i <= 200; i++)
	{
		if (is_prime(i) == 1)
		{
			printf("%d ", i);
		}
	}
	return 0;
}
//int main()
//{
//	int a, b, c;
//	scanf("%d%d%d", &a, &b, &c);
//	if (a < b)
//	{
//		int temp = a;
//		a = b;
//		b = temp;
//	}
//	 if (a < c)
//	{
//		int temp = a;
//		a = c;
//		c = temp;
//	}
//	if (b < c)
//	{
//		int temp = b;
//		b = c;
//		c = temp;
//	}
//	printf("%d %d %d\n", a, b, c);
//	return 0;
//}
//int main()
//{
//	int i = 0;
//	char password[20] = { 0 };
//	for (i = 0; i < 3; i++)
//	{
//		printf("请输入密码:>\n");
//		scanf("%s", password);
//		if (strcmp(password, "123456") == 0)
//		{
//			printf("密码正确\n");
//			break;
//		}
//		else
//		{
//			printf("密码错误\n");
//		}
//	}
//	if (i == 3)
//	{
//		printf("密码三次均错误，退出登录\n");
//	}
//	return 0;
//}
//int main()
//{
//	char arr1[] = "welcome to bit!";
//	char arr2[] = "$$$$$$$$$$$$$$$";
//	int left = 0;
//	int right = strlen(arr2) - 1;
//	while (left <= right)
//	{
//		arr2[left] = arr1[left];
//		arr2[right] = arr1[right];
//		printf("%s", arr2);
//		Sleep(1000);
//		system("cls");
//		left++;
//		right--;
//	}
//	return 0;
//}


//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int k = 7;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int left = 0;
//	int right = sz - 1;
//	while (left <= right)
//	{
//		int mid = (left + right) / 2;
//		if (arr[mid] < k)
//		{
//			left = mid + 1;
//		}
//		else if (arr[mid] > k)
//		{
//			right = mid - 1;
//		}
//		else
//		{
//			printf("找到了，下标是%d\n", mid);
//			break;
//		}
//	}
//	if (left > right)
//	{
//		printf("找不到\n");
//	}
//	return 0;
//}
//int main()
//{
//	int i;
//	int ret = 1;
//	int sum = 0;
//	int n;
//	printf("计算1-n的阶乘的和，请输入n:>\n");
//	scanf("%d", &n);
//	for (i = 1; i <= n; i++)
//	{
//		ret *= i;
//		sum += ret;
//	}
//	printf("sum=%d\n",sum);
//	return 0;
//}
//int main()
//{
//	int ch = 0;
//	while (ch = getchar() != EOF)
//	{
//		putchar(ch);
//	}
//	return 0;
//}
//int main()
//{
//	int n = 1;
//	int m = 2;
//	switch (n)
//	{
//	case 1:m++;
//	case 2:n++;
//	case 3:
//		switch (n)
//		{
//		case 1:n++;
//		case 2:m++; n++; break;
//		}
//	case 4:m++; break;
//	default:
//		printf("输入错误\n");
//		break;
//	}
//	printf("m=%d,n=%d\n", m, n);
//	return 0;
//
//}
//int main()
//{
//	int a = 1;
//	scanf("%d", &a);
//	printf("%d", a);
//	return 0;
//}