#include "main.h"

/**
 *_raiz - a function to calculate the value of the root
 *@n: - the number to do the natural square root
 *@r: - the value of the result of the root
 *Return: an int
 */
int _raiz(int n, int r)
{
if (r * r == n)
{
return (r);
}
else
{
return (_raiz(n, r + 1));
}
}

/**
 *_sqrt_recursion - a function to get the square root of an int
 *@n: - the number to do the natural square root
 *Return: an int
 */
int _sqrt_recursion(int n)
{
if (n <= 0)
{
return (-1);
}
else
{
return (_raiz(n, 1));
}
}
