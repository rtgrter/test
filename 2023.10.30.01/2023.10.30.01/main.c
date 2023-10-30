#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
//输入一个整数数组，实现一个函数
//来调整该数组中数字的顺序，使得所有奇数位于数组的前半部分，所有偶数位于数组的后半部分
void move_odd_even(int arr[], int sz)
{
	int left = 0;
	int right = sz - 1;
	while (left < right)
	{
		//从左往右找一个偶数，停下来
		while ((left < right) && (arr[left] % 2 == 1))
		{
			left++;
		}
		//从右往左找一个奇数，停下来
		while ((left < right) && (arr[right] % 2 == 0))
		{
			right--;
		}
		//交换奇数和偶数
		if (left < right)
		{
			int tmp = arr[left];
			arr[left] = arr[right];
			arr[right] = tmp;
			left++;
			right--;
		}
	}
}
int main()
{
	int arr[10] = { 0 };
	int i = 0;
	int sz = sizeof(arr) / sizeof(arr[0]);
	//输入
	for (i = 0; i < 10; i++)
	{
		scanf("%d", &arr[i]);
	}
	//调整
	move_odd_even(arr, sz);
	//输出
	for (i = 0; i < 10; i++)
	{
		printf("%d ",arr[i]);
	}
	return 0;
}