#include "main.h"
#include <string.h>
/**
 **_memset - a functionthat fills the memory with a constant byte
 *@s: - the pointer to the array
 *@b: - what the memory will be
 *@n: - what space will it replace
 *Return: a char
 */
char *_memset(char *s, char b, unsigned int n)
{
int i;
int m;
m = n;
for (i = 0; i < m; i++)
{
s[i] = b;
}
return (s);
}
