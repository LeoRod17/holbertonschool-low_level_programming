#include "main.h"

/**
 *print_chessboard - a function to print a chesboard
 *@a: - a pointer to the array to go
 *
 *
 */
void print_chessboard(char (*a)[8])
{
int i;
int j;
char r;
char s;
for (i = 0; i < 8; i++)
{
for (j = 0; j < 8; j++)
{
_putchar(a[i][j]);
}
}
}
