#include "main.h"

/**
 ***alloc_grid - prints a 2 dimentional array
 *@width: - how long will the array be
 *@height: - how high will the array be
 *Return: a pointer
 */
int **alloc_grid(int width, int height)
{
int i;
int c;
int *m;
int **M;
if (width < 1 || height < 1)
{
return (NULL);
}
c = width * height;
M = malloc(sizeof(int) * c);
if (M == NULL)
{
free(M);
return (NULL);
}
for (i = 0; i <= height; i++)
{
m[i] = 0;
}
for (; i <= c; i++)
{
m[i] = 0;
}
M = &m;
return (M);
}
