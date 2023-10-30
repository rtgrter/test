#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>


//int cnt = 0;
//int fib(int n)
//{
//	cnt++;
//	if (n == 0)
//		return 1;
//	else if (n == 1)
//		return 2;
//	else
//		return fib(n - 1) + fib(n - 2);
//}
//void main()
//{
//	fib(8); 
//	printf("%d", cnt);
//}

int main()
{
    int a = 0;
    int b = 0;
    scanf("%d %d", &a, &b);
    int m = (a > b ? a : b);
    while (1)
    {
        if ((m % a == 0) && (m % b == 0))
        {
            break;
        }
        m++;
    }
    printf("%d\n", m);
    return 0;
}
//int main()
//{
//    int a = 0;
//    int b = 0;
//    int i = 1;
//    scanf("%d %d", &a, &b);
//    while (a * i % b)
//    {
//        i++;
//    }
//    printf("%d\n", i * a);
//    return 0;
//}
//#include <assert.h>
//void reverse(char* left, char* right)
//{
//    assert(left);
//    assert(right);
//    while (left < right)
//    {
//        char tmp = *left;
//        *left = *right;
//        *right = tmp;
//        left++;
//        right--;
//    }
//}
//
//int main()
//{
//    char arr[101] = { 0 };
//    gets(arr);
//    int len = strlen(arr);
//    reverse(arr, arr + len - 1);
//    char* start = arr;
//    while (*start)
//    {
//        char* end = start;
//        while (*end != ' ' && *end != '\0')
//        {
//            end++;
//        }
//        reverse(start, end - 1);
//        if (*end != '\0')
//            end++;
//        start = end;
//    }
//    printf("%s\n", arr);
//    return 0;
//}
			
