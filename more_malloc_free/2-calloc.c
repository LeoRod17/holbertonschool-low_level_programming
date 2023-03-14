#include "main.h"

/**
 **_calloc - a function to alocate the memory of an array with malloc
 *@nmemb: - the number of elements on the array
 *@size: -the weight on byte of the variable
 *Return: 0
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
unsigned int i;
char *p;
if (nmemb < 1 || size < 1)
{
return (NULL);
}
p = malloc(size * nmemb);
for (i = 0; i < nmemb * size; i++)
{
p[i] = 0;
}
return (p);
}
