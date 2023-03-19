#include "main.h"

/**
 *free_grid - a function that frees a 2 dimentional gid
 *@grid: - the grid I got from the other excersise 
 *@height: - the hight of the grid
 *Return: 0
 */
void free_grid(int **grid, int height)
{
int i;

for (i = 0; i < height; i++)
{
_putchar(grid[i]);
}
free(grid);
}
