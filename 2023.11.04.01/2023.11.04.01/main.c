#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
//typedef void(*pf_t)(int);//��void(*)(int)����������Ϊpf_t
//int main()
//{
//	(*(void(*)())0)();
//	//ǿ������ת��
//	//void(*signal(int, void(*)(int)))(int);
//	pf_t signal(int, pf_t);
//	//������signal������һ��������int���ͣ��ڶ��������Ǻ���ָ�����ͣ��ú���ָ��ָ��ĺ�������
//	//������int,����������void,signal�����ķ�������Ҳ��һ������ָ�룬�ú���ָ��ָ��ĺ���������
//	//������int,����������void��
//}

//����ָ�����;
//дһ��������
//�ӷ����������˷�������
//�ص�����

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
	printf("������������:>\n");
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
		printf("��ѡ��:>\n");
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
				printf("�˳�������\n");
				break;
			default:
				printf("ѡ�����\n");
				break;
		}
	} while (input);
	return 0;
}