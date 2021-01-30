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
	//1.������
	//��ʼ������
	Initboard(Mineboard, ROWS, COLS, '0');//Ϊ���ó�ʼ�������ݲ�ͬ��Ҳ����ȥ��ʼ��������
	Initboard(Showboard, ROWS, COLS, '*');
	//Displayboard(Mineboard, ROW, COL);//չʾ����
	Displayboard(Showboard, ROW, COL);
	//������
	SetMine(Mineboard, ROW, COL);//������
	//Displayboard(Mineboard, ROW, COL);
	//2.ɨ��
	FindMine(Mineboard, Showboard, ROW, COL);
}

int main()
{
	srand((size_t)time(NULL));//�������������
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
			printf("�˳���Ϸ��\n");
			break;
		default:
			printf("�����������������\n");
			break;
		}
	} while (input);
	return 0;
}