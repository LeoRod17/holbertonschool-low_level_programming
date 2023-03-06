#include "main.h"

/**
 *_pow_recursion - a function to raise a a int elevated to the other
 *@x: - the value to be raised
 *@y: - the value of the raised
 *Return: 0
 */
int _pow_recursion(int x, int y)
{
if (y < 0)
{
return (-1);
}
if (y >= 0)
{
x = x *x;
y--;
_pow_recursion(x, y);
return (x);
}
return (0);
}
