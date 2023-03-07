#include "main.h"

/**
 *_sqrt_recursion
 *@n: - the number to do the natural square root
 *
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
return (_raiz(n,2));
}
}
