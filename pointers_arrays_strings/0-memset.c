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
for (i = 0; i < n; i++)
{
s[i] = b;
}
return (s);
}
