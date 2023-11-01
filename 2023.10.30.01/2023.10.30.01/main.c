#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
//����һ���������飬ʵ��һ������
//�����������������ֵ�˳��ʹ����������λ�������ǰ�벿�֣�����ż��λ������ĺ�벿��
void move_odd_even(int arr[], int sz)
{
	int left = 0;
	int right = sz - 1;
	while (left < right)
	{
		//����������һ��ż����ͣ����
		while ((left < right) && (arr[left] % 2 == 1))
		{
			left++;
		}
		//����������һ��������ͣ����
		while ((left < right) && (arr[right] % 2 == 0))
		{
			right--;
		}
		//����������ż��
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
	//����
	for (i = 0; i < 10; i++)
	{
		scanf("%d", &arr[i]);
	}
	//����
	move_odd_even(arr, sz);
	//���
	for (i = 0; i < 10; i++)
	{
		printf("%d ",arr[i]);
	}
	return 0;
}