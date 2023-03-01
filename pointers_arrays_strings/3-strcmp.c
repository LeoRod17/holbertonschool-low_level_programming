#include "main.h"
#include <string.h>

/**
 *_strcmp - a function that comapre two string
 *@s1: - the first pointer to the string
 *@s2: - the second pointer to the string
 *Return: an int
 */
int _strcmp(char *s1, char *s2)
{
int a;
int b;
int i;
int d;
int s;

d = 0;
s = strlen(s1);
for (i = 0; i < s; i++)
{
if (s1[i] != s2[i])
{
a = s1[i]-'0';
b = s2[i]-'0';
d = a - b;
break;
}
else
{
d = 0;
}
}
return (d); 
}
