#include "game.h"

void menu()
{
	printf("**************************\n");
	printf("*******  1. Play  ********\n");
	printf("*******  0. Exit  ********\n");
	printf("**************************\n");
}

void game()
{
	char Mineboard[ROWS][COLS];
	char Showboard[ROWS][COLS];
	//1.布置雷
	//初始化棋盘
	Initboard(Mineboard, ROWS, COLS, '0');//为了让初始化的内容不同，也传过去初始化的内容
	Initboard(Showboard, ROWS, COLS, '*');
	//Displayboard(Mineboard, ROW, COL);//展示棋盘
	Displayboard(Showboard, ROW, COL);
	//设置雷
	SetMine(Mineboard, ROW, COL);//设置雷
	//Displayboard(Mineboard, ROW, COL);
	//2.扫雷
	FindMine(Mineboard, Showboard, ROW, COL);
}

int main()
{
	srand((size_t)time(NULL));//生成随机数种子
	int input = 0;
	do
	{
		menu();
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			game();
			break;
		case 0:
			printf("退出游戏！\n");
			break;
		default:
			printf("输入错误，请重新输入\n");
			break;
		}
	} while (input);
	return 0;
}