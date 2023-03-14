#include "main.h"

/**
 ***alloc_grid - prints a 2 dimentional array
 *@width: - how long will the array be
 *@height: - how high will the array be
 *Return: a pointer
 */
int **alloc_grid(int width, int height)
{
int *M;
if (width < 1 || height < 1)
{
return (NULL);
}
M = malloc(sizeof(int) * 2);
if (M == NULL)
{
return (NULL);
}
M = &M[width][height]; 
return (*M);
}
