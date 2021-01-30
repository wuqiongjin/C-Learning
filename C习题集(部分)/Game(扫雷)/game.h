#include <stdio.h>
#include <time.h>
#include <stdlib.h>

#define ROW 9
#define COL 9
#define ROWS ROW+2
#define COLS COL+2
#define MINE_NUM 10//设置雷的数量

void Initboard(char board[ROWS][COLS], int rows, int cols, char ch);
void Displayboard(char board[ROWS][COLS], int row, int col);
void SetMine(char board[ROWS][COLS], int row, int col);
void FindMine(char Mineboard[ROWS][COLS], char Showboard[ROWS][COLS], int row, int col);