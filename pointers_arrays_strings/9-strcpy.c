#include "main.h"
#include "string.h"
/**
 **_strcpy - a function that copy the array to another
 *@dest: - the destiny to copy the array
 *@src: - the origin of the array
 *Return: a char
 */

char *_strcpy(char *dest, char *src)
{
int a = strlen(src);
for (int i = 0; i < a; i++)
{
src[i] = dest[i];
}
return (dest);
}
