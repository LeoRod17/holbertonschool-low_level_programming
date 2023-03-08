#include "main.h"

/**
 *main - entry point
 *@argc: - number of arguments
 *@argv: - the arguments
 *Return: 0
 */
int main(int argc, char *argv[])
{
int i;
for (i = 0; i < argc; i++)
{
if(argv[i] != '\0')
{
puts(argv[i]);
_putchar('\n');
}
}
return (0);
}
