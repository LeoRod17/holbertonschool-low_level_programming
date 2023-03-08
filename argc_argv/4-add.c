#include "main.h"
#include <stdlib.h>
#include <ctype.h>
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
if (argc < 0)
{
puts("Error");
return (1);
}
if (argc == 0)
{
puts("0");
}
for (i = 1; i < argc; i++)
{
if (isalpha(*argv[i]) > 0)
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
