#include "main.h"

/**
 *int _pow_recursion(int x, int y)
 *@x: - the value to be raised
 *y: - the value of the raised
 *Return 0
 */
int _pow_recursion(int x, int y)
{
if (y < 0)
{
return (-1);
}
else if(y > 0)
{
x = x * x;
y--;
_pow_recursion(x,y);
}
else
{
return (x);
}
return (0);
}
