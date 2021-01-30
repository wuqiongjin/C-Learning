#include "game.h"


void Initboard(char board[ROWS][COLS], int rows, int cols, char ch)
{
	int i = 0;
	int j = 0;
	for (i = 0;i < rows;i++)
	{
		for (j = 0;j < cols;j++)
		{
			board[i][j] = ch;//��Ҫ��ʼ�������ݸ���ÿ��λ��
		}
	}
}

void Displayboard(char board[ROWS][COLS], int row, int col)
{
	int i = 0;
	int j = 0;
	for (i = 0;i <= row;i++)//���������
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
	int num = MINE_NUM;//�׵�����
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

static int Count_Mine(char board[ROWS][COLS], int x, int y)//������Χ8�����׵�����
{
	return (board[x - 1][y - 1] + board[x][y - 1] + board[x + 1][y - 1]
		+ board[x - 1][y] + board[x + 1][y]
		+ board[x - 1][y + 1] + board[x][y + 1] + board[x + 1][y + 1] - 8 * 48);
}

void FindMine(char Mineboard[ROWS][COLS], char Showboard[ROWS][COLS], int row, int col)
{
	int count = 0;
	int win = 0;//ͳ����ȷ�Ų鵽���׵Ĵ���
	while (win < row*col - MINE_NUM)
	{
		printf("����������������ɨ��\n");
		int x;
		int y;
		scanf("%d%d", &x, &y);
		//�ж�����ĺϷ���
		if (x >= 1 && x <= row && y >= 1 && y <= col && Showboard[x][y] == '*')
		{
			if (Mineboard[x][y] == '1')//������
			{
				printf("�������㱻ը����\n");
				Displayboard(Mineboard, row, col);
				break;
			}
			else
			{
				//���㸽���׵ĸ���
				count = Count_Mine(Mineboard, x, y);
				Showboard[x][y] = count + '0';//�����ַ�0����������ַ�����
				Displayboard(Showboard, row, col);
				win++;
			}
		}
		else
		{
			printf("�����������Ƿ�������������\n");
		}
	}
	if (win == row * col - MINE_NUM)
	{
		printf("��ϲ�㣬ɨ�׳ɹ���\n");
		Displayboard(Mineboard, row, col);
	}
}

