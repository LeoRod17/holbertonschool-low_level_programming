#include "main.h"
#include <string.h>
/**
 **_strcat - a function that concatenates
 *@dest: - the second string
 *@src: - the first string
 *Return: the combined string of dest and src
 */

char *_strcat(char *dest, char *src)
{
int i;
int a;
int b;
a = strlen(src);
b = strlen(dest);
for (i = 0; i < a; i++)
{
dest[b] = src[i];
b++;
}
return (dest);
}
