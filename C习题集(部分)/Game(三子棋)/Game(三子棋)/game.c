#include "game.h"

void initBoard(char board[ROW][COL], int row, int col)
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

void DisplayBoard(char board[ROW][COL], int row, int col)
{
	int i = 0;
	int j = 0;
	for (i = 0;i < row;i++)
	{
		for (j = 0;j < col;j++)
		{
			printf(" %c ", board[i][j]);
			if (j != col - 1)
				printf("|");
		}
		printf("\n");
		for (j = 0;j < col;j++)
		{
			if (i != row - 1)
			{
				printf("---");
				if (j != col - 1)
					printf("|");
			}
		}
		printf("\n");
	}
}

//	   |   |   
 // ---|---|---
 //    |   |  
 // ---|---|---
 //    |   |

void Playermove(char board[ROW][COL], int row, int col)
{
	while (1)
	{
		int x = 0;
		int y = 0;
		printf("���������̶�Ӧ��������������\n");
		scanf("%d%d", &x, &y);
		if (board[x - 1][y - 1] == ' ')
		{
			board[x - 1][y - 1] = '#';
			break;
		}
		else
		{
			printf("�������λ�ò���ȷ��\n");
		}
	}
}

void Computermove(char board[ROW][COL], int row, int col)
{
	while (1)
	{
		int x = rand() % row;
		int y = rand() % col;
		if (board[x][y] == ' ')
		{
			board[x][y] = '*';
			break;
		}
	}
}

	
char Is_Win(char board[ROW][COL], int row, int col)
{
	//���Ӯ/����Ӯ
	int i = 0;
	int j = 0;
	for (i = 0;i < row;i++)
	{
		if (board[i][0] == board[i][1] && board[i][1] == board[i][2] && board[i][1]!=' ')
			return board[i][1];
	}
	for (j = 0;j < col;j++)
	{
		if (board[0][j] == board[1][j] && board[1][j] == board[2][j] && board[1][j] && board[1][j]!=' ')
			return board[1][j];
	}
	if (board[0][0] == board[1][1] && board[1][1] == board[2][2] && board[1][1] != ' ')
		return board[1][1];
	if (board[0][2] == board[1][1] && board[1][1] == board[2][0] && board[1][1] != ' ')
		return board[1][1];
	for (i = 0;i < row;i++)
	{
		for (j = 0;j < col;j++)
		{
			if(board[i][j] == ' ')
				return 1;//ֻҪ����û���ͷ���1
		}
	}
	return 0;//������������������㣬��ô���̾������ģ�Ҳ����ƽ��
}
