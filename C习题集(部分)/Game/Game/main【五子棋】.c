#include "game�������塿.h"


void menu()
{
	printf("**********************\n");
	printf("**1.Play	0.Exit****\n");
	printf("**********************\n");
}
//void game(char board, int row, int col);
int main(void)
{
		int n = 1;
		char board[ROW][COL] = { 0 };
		srand((unsigned int)time(NULL));
		menu();
		do
		{
			printf("������1��0������\n");
			scanf("%d", &n);
			switch (n)
			{
				case 1:
					game(board, ROW, COL);
					break;
				case 0:
					printf("�˳���Ϸ��\n");
					break;
				default:
					break;
			}
		} while (n);
	return 0;
}