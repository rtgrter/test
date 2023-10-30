#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <math.h>
//
//int main()
//{
//    int a = 0;
//    int b = 0;
//    int c = 0;
//    while (scanf("%d %d %d", &a, &b, &c) == 3)
//    {
//        if ((a + b > c) && (a + c > b) && (b + c > a))
//        {
//            if ((a == b) && (b == c))
//            {
//                printf("Equilateral triangle!\n");
//            }
//            //else if (a == b || b == c || a == c)
//            else if (((a == b) && (b != c)) || ((a == c) && (c != b)) || ((b == c) && (c != a)))
//            {
//                printf("Isosceles triangle!\n");
//            }
//            else
//            {
//                printf("Ordinary triangle!\n");
//            }
//        }
//        else
//        {
//            printf("Not a triangle!\n");
//        }
//    }
//    return 0;
//}

//void print(int* p, int sz)
//{
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", *(p + i));
//	}
//	printf("\n");
//}
//
//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	print(arr, sz);
//	return 0;
//}

//int main()
//{
//    char arr[10001] = { 0 };
//    gets(arr);
//    int left = 0;
//    int right = strlen(arr) - 1;
//    while (left < right)
//    {
//        char tmp = arr[left];
//        arr[left] = arr[right];
//        arr[right] = tmp;
//        left++;
//        right--;
//    }
//    printf("%s", arr);
//    return 0;
//}

//int main()
//{
//	int a = 0;
//	int n = 0;
//	scanf("%d %d", &a, &n);
//	int i = 0;
//	int k = 0;
//	int sum = 0;
//	for (i = 0; i < n; i++)
//	{
//		k = k * 10 + a;
//		sum += k;
//	}
//	printf("%d\n", sum);
//	return 0;
//}



//int is_narcissistic_number(int i)
//{
//	int n = 1;
//	int tmp = i;
//	int sum = 0;
//	tmp = i;
//	while (tmp)
//	{
//		sum += pow(tmp % 10, n);
//		tmp /= 10;
//	}
//	return sum == i;
//	//if (sum == i)
//	//{
//	//	return 1;
//	//}
//	//else
//	//{
//	//	return 0;
//	//}
//}
//int main()
//{
//	int i = 0;
//	for (i = 0; i <= 100000; i++)
//	{
//		if(is_narcissistic_number(i))
//		{
//			printf("%d ", i);
//		}
//	}
//	return 0;
//}

//int main()//打印菱形
//{
//	int line = 0;
//	scanf("%d", &line);
//	int i = 0;
//	for (i = 0; i < line; i++)
//	{
//		int j = 0;
//		for (j = 0; j < line - 1 - i; j++)
//		{
//			printf(" ");
//		}
//		for (j = 0; j < 2 * i + 1; j++)
//		{
//			printf("*");
//		}
//		printf("\n");
//	}
//	for (i = 0; i < line - 1; i++)
//	{
//		int j = 0;
//		for (j = 0; j <= i; j++)
//		{
//			printf(" ");
//		}
//		for (j = 0; j < 2 * (line - 1 - i) - 1; j++)
//		{
//			printf("*");
//		}
//		printf("\n");
//	}
//	return 0;
//}

//int main()//瓶子换汽水问题，不可借一还一，一块钱买一瓶汽水，2个空瓶换一瓶汽水，则y=2x-1
//{
//	int money = 0;
//	scanf("%d", &money);
//	/*int total = money;
//	int empty = money;
//	while (empty >= 2)
//	{
//		total += empty / 2;
//		empty = empty / 2 + empty % 2;
//	}*/
//	if (money > 0)
//		printf("%d\n", 2 * money - 1);
//	else
//		printf("%d\n", 0);
//}