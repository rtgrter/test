#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int main()//�ػ�����
{
	char input[20] = { 0 };
	system("shutdown -s -t 60");
	while(1)
	{
		printf("��ע�⣬��ĵ��Խ���1�����ڹػ���������룺����˧�ȣ���ȡ���ػ�\n������:>");
		scanf("%s", input);
		if (strcmp(input, "����˧��") == 0)
		{
			system("shutdown -a");
			break;
		}
	}
}
//int main()//�ػ�����
//{
//	char input[20] = { 0 };
//	system("shutdown -s -t 60");
//again:
//	printf("��ע�⣬��ĵ��Խ���1�����ڹػ���������룺����˧�ȣ���ȡ���ػ�\n������:>");
//	scanf("%s", input);
//	if (strcmp(input, "����˧��") == 0)
//	{
//		system("shutdown -a");
//	}
//	else
//	{
//		goto again;
//	}
//}