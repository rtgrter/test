#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdlib.h>

int main()
{
	char arr1[] = "abc";
	char arr2[] = { 'a','b','c' };
	int l1 = sizeof(arr1);
	int l2 = sizeof(arr2);
	int l3 = strlen(arr1);
	int l4 = strlen(arr2);
	printf("%d %d %d %d", l1, l2, l3, l4);
	return 0;
}
//double Pow(int n, int k)
//{
//	if (k > 0)
//	{
//		return n * Pow(n, k - 1);
//	}
//	else if (k == 0)
//	{
//		return 1;
//	}
//	else
//	{
//		return 1.0 / Pow(n, -k);
//	}
//}
//
//int main()
//{
//	int n = 0;
//	int k = 0;
//	scanf("%d%d", &n, &k);
//	double ret = Pow(n, k);
//	printf("%lf", ret);
//	return 0;
//}
//int DigitSum(int i)
//{
//	if (i > 9)
//	{
//		return (i % 10) + DigitSum(i / 10);
//	}
//	return(i % 10);
//	
//}
//
//int main()
//{
//	unsigned int i = 0;
//	int j = 0;
//	scanf("%d", &i);
//	j=DigitSum(i);
//	printf("%d", j);
//	return 0;
//}
//int my_strlen(char* str)
//{
//	int count = 0;
//	while (*str != '\0')
//	{
//		count++;
//		str++;
//	}
//	return count;
//}
//void reverse(char* str)
//{
//	char tmp = *str;
//	int len = my_strlen(str);
//	*str = *(str + len - 1);
//	*(str + len - 1) = '\0';
//	if (my_strlen(str + 1) >= 2)
//	{
//		reverse(str + 1);
//	}
//	*(str + len - 1) = tmp;
//}
//void reverse(char arr[], int left, int right)//Ò»´®×Ö·û´®ÄæÐò
//{
//	int tmp = arr[left];
//	arr[left] = arr[right];
//	arr[right] = tmp;
//	if (left < right)
//		reverse(arr, left + 1, right - 1);
//}
//
//int main()
//{
//	char arr[] = "abcdefg";
//	int left = 0;
//	int right = my_strlen(arr) - 1;
//	
//	reverse(arr,left,right);
//	printf("%s\n", arr);
//	return 0;
//}
//void print(int i)
//{
//	if (i > 9)
//	{
//		print(i / 10);
//	}
//	printf("%d ", i%10);
//}
//int main()
//{
//	int i = 0;
//	scanf("%d", &i);
//	print(i);
//	return 0;
//}