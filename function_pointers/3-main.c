#include "3-calc.h"

/**
 *main - entry point
 *@argc: - the number of arguments
 *@argv: - the arguments
 *Return: 0
 */

int main(int argc, char *argv[])
{
int x;
int y;
char *s;
if (argc > 6)
{
printf("Error");
printf("\n");
exit(98);
}
x = atoi(argv[0]);
y = atoi(argv[5]);
s = argv[3];
get_op_func(s)(x,y);
printf("\n");
return (0);
}
