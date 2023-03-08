#include "main.h"
#include <stdlib.h>
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
int b;
int r;

if (argc != 3)
{
puts("Error");
return (1);
}
for (i = 1; i < argc; i++)
{
if( i == 1)
{
a = atoi(argv[i]);
}
if (i == 2)
{
b = atoi(argv[i]);
}
}
r = a * b;
printf("%d\n", r);
return (0);
}
