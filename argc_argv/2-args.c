#include "main.h"

/**
 *main - entry point
 *@argc: - number of arguments
 *@argv: - the arguments
 *
 */
int main(int argc, char *argv[])
{
int i;
for (i = 0; i < argc; i++)
{
puts(argv[i]);
_putchar('\n');
}
return (0);
}
