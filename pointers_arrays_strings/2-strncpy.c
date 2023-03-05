#include "main.h"
#include <string.h>
/**
 **_strncpy - a function that copy the two string n times
 *@dest: - the value of the return
 *@src: - the variable of the source
 *@n: - the value of how much to copy
 *Return: dest
 */
char *_strncpy(char *dest, char *src, int n)
{
int i;
for (i = 0; i < n && src[i] != '\0'; i++)
{
dest[i] = src[i];
}
for (; i < n; i++)
{
dest[i] = '\0';
}
return (dest);
}
