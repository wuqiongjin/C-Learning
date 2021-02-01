#include "game【五子棋】.h"
void Initboard(char board[ROW][COL], int row, int col)
{
	int i = 0;
	int j = 0;
	for (i = 0;i < row;i++)
	{
		for (j = 0;j < col;j++)
		{
			board[i][j] = ' ';
		}
	}
}
void Displayboard(char board[ROW][COL], int row, int col)
{
	//	   |   |
	//	---|---|---
	//	   |   |
	//	---|---|---
	//	   |   |   
	int i, j = 0;
	for (i = 0;i < row;i++)
	{
		for (j = 0;j < col;j++)
		{
			if (j == 2)
			{
				printf(" %c ", board[i][j]);
				break;
			}
			printf(" %c |", board[i][j]);
		}
		printf("\n");
		for (j = 0;j < col;j++)
		{
			if (i < 2)
			{
				if (j == 2)
				{
					printf("---");
					break;
				}
				printf("---|");
			}
			/*if (i == 2)
			{
				if (j == 2)
				{
					printf("   ");
					break;
				}
				printf("   |");
			}*/
			
		}
		printf("\n");
	}
}

void PlayerMove(char board[ROW][COL], int row, int col)
{
	printf("请输入相应的坐标来进行游戏\n");
	int x, y = 0;
	while (1)
	{
		scanf("%d %d", &x, &y);
		if (x < ROW + 1 && y < COL + 1)
		{
			if (board[x - 1][y - 1] == ' ')
			{
				board[x - 1][y - 1] = '*';
				break;
			}
			else
				printf("您输入的坐标已经填写过了！\n");
		}
		else
			printf("您输入的坐标不正确！\n");
	}
}
void ComputerMove(char board[ROW][COL], int row, int col)
{
	int x, y = 0;
	int flag = 1;
	printf("电脑正在行动【准备杀马神器】\n");
	do
	{
		x = rand() % 3;
		y = rand() % 3;
		if (board[x][y] == ' ')
		{
			board[x][y] = '#';
			flag = 0;
		}
			
	} while (board[x][y] != ' '&& flag == 1);
	
}
char J_Win(char board[ROW][COL], int row, int col)
{
	int i, j = 0;
	for (i = 0;i < row;i++)
	{
		if (board[i][0] == board[i][1] && board[i][1] == board[i][2] && board[i][1] != ' ')
			return board[i][1];
	}
	for (j - 0;j < col;j++)
	{
		if (board[0][j] == board[1][j] && board[1][j] == board[2][j] && board[1][j] != ' ')
			return board[1][j];
	}	
		if (board[0][0] == board[1][1] && board[1][1] == board[2][2] && board[1][1] != ' ')
			return board[1][1];
		if (board[0][2] == board[1][1] && board[1][1] == board[2][0] && board[1][1] != ' ')
			return board[1][1];
		if (1 == J_Full(board, ROW, COL))
			return 'Q';
		return 'C';
}
int J_Full(char board[ROW][COL], int row, int col)
{
	int i, j = 0;
	for (i = 0;i < row;i++)
	{
		for (j = 0;j < col;j++)
		{
			if (board[i][j] == ' ')
				return 0;
		}
	}
	return 1;
}
void game(char board[ROW][COL], int row, int col)
{
	Initboard(board, ROW, COL);
	char ret = 0;
	Displayboard(board, ROW, COL);
	while (1)
	{
		PlayerMove(board, ROW, COL);
		Displayboard(board, ROW, COL);
		//1.玩家赢--'*'
		//2.电脑赢--'#'
		//3.平局  --'Q'
		//4.继续游戏'C'
		ret = J_Win(board, ROW, COL);
		if (ret != 'C')
		{
			if (ret == '*')
			{
				printf("恭喜你赢了！！！\n");
				break;
			}
			if (ret == 'Q')
			{
				printf("平局了，你真fw，建议重开\n");
				break;
			}	
		}
		ComputerMove(board, ROW, COL);
		Displayboard(board, ROW, COL);
		ret = J_Win(board, ROW, COL);
		if (ret != 'C')
		{
			if (ret == '#')
			{
				printf("这波啊，是你站在第5层，让电脑赢了真是有够不容易呢O(∩_∩)O\n");
				break;
			}
			if (ret == 'Q')
			{
				printf("平局了，彳亍\n");
				break;
			}
		}
	}
}