#include "main.h"
#include <string.h>
/**
 *char *_strchr
 *@s: - the pointer to an array
 *@c: - the character to look
 *Return: s
 */
char *_strchr(char *s, char c)
{
int i;
int a;
char *r;
a = strlen(s);
for(i = 0; i < a; i++)
{
if(s[i] == c)
{
return (s);
}
}
return 0;
}
