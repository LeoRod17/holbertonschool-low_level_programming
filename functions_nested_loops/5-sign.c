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
_putchar(45);
return (1);
}
else if (n > 0)
{
_putchar(43);
return(1);
}
else if(n == 0)
{
_putchar(48);
return (0);
}
else
return (0);
}
