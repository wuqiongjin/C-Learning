#include <stdio.h>
#include <time.h>
#include <stdlib.h>

#define ROW 3
#define COL 3

void initBoard(char board[ROW][COL], int row, int col);//��ʼ����������Ϊspace
void DisplayBoard(char board[ROW][COL], int row, int col);//չʾ����
void Playermove(char board[ROW][COL], int row, int col);//�������
void Computermove(char board[ROW][COL], int row, int col);//��������
char Is_Win(char board[ROW][COL], int row, int col);//�ж���Ӯ
