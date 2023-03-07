#include "main.h"

/**
 *_sqrt_recursion - a function to get the the root of a number
 *@n: - the number to do the natural square root
 *
 *_raiz - a function to calculate the value of the root
 *@n: - the number to do the natural square root
 *@r: - the value of the result of the root
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

int _sqrt_recursion(int n)
{
if (n <= 0)
{
return (-1);
}
else
{
return (_raiz(n,1));
}
}
