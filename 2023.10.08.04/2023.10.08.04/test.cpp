#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int main()//关机程序
{
	char input[20] = { 0 };
	system("shutdown -s -t 60");
	while(1)
	{
		printf("请注意，你的电脑将在1分钟内关机，如果输入：我是帅比，就取消关机\n请输入:>");
		scanf("%s", input);
		if (strcmp(input, "我是帅比") == 0)
		{
			system("shutdown -a");
			break;
		}
	}
}
//int main()//关机程序
//{
//	char input[20] = { 0 };
//	system("shutdown -s -t 60");
//again:
//	printf("请注意，你的电脑将在1分钟内关机，如果输入：我是帅比，就取消关机\n请输入:>");
//	scanf("%s", input);
//	if (strcmp(input, "我是帅比") == 0)
//	{
//		system("shutdown -a");
//	}
//	else
//	{
//		goto again;
//	}
//}