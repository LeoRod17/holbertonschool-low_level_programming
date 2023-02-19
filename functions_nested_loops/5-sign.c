#include "main.h"
/**
 *print_sign - ir prints a sign depending if it is positive or negative
 *
 *@n: - is the value I get from the main
 */

int print_sign(int n)
{
if(n < 0)
{
putchar(45);
}
if (n > 0)
{
putchar(43);
}
if (n == 0)
{
putchar(48);
}
return (0);
}
