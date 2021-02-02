#include <stdio.h>
#include <time.h>
#include <stdlib.h>

#define ROW 3
#define COL 3

void initBoard(char board[ROW][COL], int row, int col);//初始化棋盘内容为space
void DisplayBoard(char board[ROW][COL], int row, int col);//展示棋盘
void Playermove(char board[ROW][COL], int row, int col);//玩家下棋
void Computermove(char board[ROW][COL], int row, int col);//电脑下棋
char Is_Win(char board[ROW][COL], int row, int col);//判断输赢
