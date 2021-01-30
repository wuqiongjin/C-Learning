#include "game.h"


void Initboard(char board[ROWS][COLS], int rows, int cols, char ch)
{
	int i = 0;
	int j = 0;
	for (i = 0;i < rows;i++)
	{
		for (j = 0;j < cols;j++)
		{
			board[i][j] = ch;//将要初始化的内容赋给每个位置
		}
	}
}

void Displayboard(char board[ROWS][COLS], int row, int col)
{
	int i = 0;
	int j = 0;
	for (i = 0;i <= row;i++)//加坐标序号
		printf("%d ", i);
	printf("\n");
	for (i = 1;i <= row;i++)
	{
		printf("%d ", i);
		for (j = 1;j <= col;j++)
		{
			printf("%c ", board[i][j]);
		}
		printf("\n");
	}
}

void SetMine(char board[ROWS][COLS], int row, int col)
{
	int num = MINE_NUM;//雷的数量
	while (num)
	{
		int x = rand() % row + 1;
		int y = rand() % col + 1;
		while (board[x][y] == '0')
		{
			board[x][y] = '1';
			num--;
		}
	}
}

static int Count_Mine(char board[ROWS][COLS], int x, int y)//计算周围8个的雷的数量
{
	return (board[x - 1][y - 1] + board[x][y - 1] + board[x + 1][y - 1]
		+ board[x - 1][y] + board[x + 1][y]
		+ board[x - 1][y + 1] + board[x][y + 1] + board[x + 1][y + 1] - 8 * 48);
}

void FindMine(char Mineboard[ROWS][COLS], char Showboard[ROWS][COLS], int row, int col)
{
	int count = 0;
	int win = 0;//统计正确排查到非雷的次数
	while (win < row*col - MINE_NUM)
	{
		printf("请输入坐标来进行扫雷\n");
		int x;
		int y;
		scanf("%d%d", &x, &y);
		//判断坐标的合法性
		if (x >= 1 && x <= row && y >= 1 && y <= col && Showboard[x][y] == '*')
		{
			if (Mineboard[x][y] == '1')//踩雷了
			{
				printf("哈哈，你被炸死了\n");
				Displayboard(Mineboard, row, col);
				break;
			}
			else
			{
				//计算附近雷的个数
				count = Count_Mine(Mineboard, x, y);
				Showboard[x][y] = count + '0';//加上字符0，让它变成字符数字
				Displayboard(Showboard, row, col);
				win++;
			}
		}
		else
		{
			printf("你输入的坐标非法，请重新输入\n");
		}
	}
	if (win == row * col - MINE_NUM)
	{
		printf("恭喜你，扫雷成功！\n");
		Displayboard(Mineboard, row, col);
	}
}

