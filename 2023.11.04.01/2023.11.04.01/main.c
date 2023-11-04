#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
//typedef void(*pf_t)(int);//把void(*)(int)类型重命名为pf_t
//int main()
//{
//	(*(void(*)())0)();
//	//强制类型转化
//	//void(*signal(int, void(*)(int)))(int);
//	pf_t signal(int, pf_t);
//	//声明的signal函数第一个参数是int类型，第二个参数是函数指针类型，该函数指针指向的函数参数
//	//类型是int,返回类型是void,signal函数的返回类型也是一个函数指针，该函数指针指向的函数参数，
//	//类型是int,返回类型是void。
//}

//函数指针的用途
//写一个计算器
//加法、减法、乘法、除法
//回调函数

void menu()
{
	printf("******************************\n");
	printf("****   1.add     2.sub    ****\n");
	printf("****   3.mul     4.div    ****\n");
	printf("****   0.exit             ****\n");
	printf("******************************\n");
}
int Add(int x, int y)
{
	return x + y;
}
int Sub(int x, int y)
{
	return x - y;
}
int Mul(int x, int y)
{
	return x * y;
}
int Div(int x, int y)
{
	return x / y;
}
void calc(int (*pf)(int, int))
{
	int x = 0;
	int y = 0;
	int ret = 0;
	printf("请输入两个数:>\n");
	scanf("%d%d", &x, &y);
	ret = pf(x, y);
	printf("%d\n", ret);
}
int main()
{
	int input = 0;
	
	do
	{
		menu();
		printf("请选择:>\n");
		scanf("%d", &input);
		switch (input)
		{
			case 1:
				calc(Add);
				break;
			case 2:
				calc(Sub);
				break;
			case 3:
				calc(Mul);
				break;
			case 4:
				calc(Div);
				break;
			case 0:
				printf("退出计算器\n");
				break;
			default:
				printf("选择错误\n");
				break;
		}
	} while (input);
	return 0;
}