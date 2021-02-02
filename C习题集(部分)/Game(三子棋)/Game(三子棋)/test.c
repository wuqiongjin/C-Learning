#include "game.h"

void menu()
{
	printf("*********************\n");
	printf("*****  1. Play	*****\n");
	printf("*****  0. Exit	*****\n");
	printf("*********************\n");
}


void game()
{
	char board[ROW][COL] = { 0 };
	initBoard(board, ROW, COL);
	DisplayBoard(board, ROW, COL);
	char ret = 0;
	while (1)
	{
		Playermove(board, ROW, COL);
		ret = Is_Win(board, ROW, COL);
		if (ret != 1)
			break;
		DisplayBoard(board, ROW, COL);
		Computermove(board, ROW, COL);
		DisplayBoard(board, ROW, COL);
		ret = Is_Win(board, ROW, COL);
		if (ret != 1)
			break;
	}
	if (ret == '#')
	{
		printf("恭喜你赢了\n");
	}
	if (ret == '*')
	{
		printf("你输了！\n");
	}
	if (ret == 0)
	{
		printf("平局！\n");
	}
}

int main()
{
	int input = 0;
	srand((size_t)time(NULL));
	do
	{
		menu();
		printf("请输入数字去选择\n");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			game();
			break;
		case 0:
			printf("退出成功!\n");
			break;
		default:
			printf("选择错误！\n");
			break;
		}
	} while (input);
	return 0;
}