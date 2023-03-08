#include "main.h"
#include <stdlib.h>
#include <ctype.h>

/**
 *oddone - a function to look every caracter of the string
 *@alpha: - the string I want to check
 *Return: 0 or 1
 */
int oddone(char *alpha)
{
int j;
int s;
int a;
s = strlen(alpha);
for (j = 0; j < s; j++)
{
a = isalpha(alpha[j]);
if (a != 0)
{
return (1);
}
}
return (0);
}

/**
 *main - entry point
 *@argc: - number of arguments
 *@argv: - the arguments
 *Return: 0
 */
int main(int argc, char *argv[])
{
int i;
int a;
int r;
int s;
r = 0;
for (i = 1; i < argc; i++)
{
s = oddone(argv[i]);
if (s != 0)
{
puts("Error");
return (1);
}
else
{
a = atoi(argv[i]);
r = r + a;
}
}
printf("%d\n", r);
return (0);
}
