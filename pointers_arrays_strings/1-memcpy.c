#include "main.h"

/**
 *_memcpy: - a function that copies a pointer memory area
 *@dest: - the pointer of the array that will be copied
 *@src: - the pointer of the array source
 *@n: - the amount of space that will be replaced
 *Return: a char
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
int i;
int s;
s = n;
for (i = 0; i < s; i++)
{
dest[i] = src[i];
}
return (dest);
}
