#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include "game.h"

void game()
{
	char board[ROW][COL] = { 0 };
	char ret = 0;
	Initboard(board, ROW, COL);
	Displayboard(board, ROW, COL);
	while (1)
	{
		PlayerMove(board, ROW, COL);
		Displayboard(board, ROW, COL);
		ret = IsWin(board, ROW, COL);
		if (ret != 'C')
			break;
		ComputerMove(board, ROW, COL);
		Displayboard(board, ROW, COL);
		ret = IsWin(board, ROW, COL);
		if (ret != 'C')
			break;
	}
	if (ret == '*')
		printf("玩家赢\n");
	else if (ret == '#')
		printf("电脑赢\n");
	else
		printf("平局\n");
}

void menu()
{
	printf("***********************\n");
	printf("*** 1.play  0.exit ***\n");
	printf("***********************\n");
}

void test()
{
	int input = 0;
	do
	{
		menu();
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			printf("三子棋\n");
			game();
			break;
		case 0:
			printf("退出游戏\n");
			break;
		default :
			printf("非法输入，请重新输入\n");
			break;
		}
	} while (input);
	
}
int main()
{
	srand((unsigned int)time(NULL));
	test();
	return 0;

}