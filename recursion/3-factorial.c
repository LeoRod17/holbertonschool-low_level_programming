#include "main.h"

/**
 *factorial - a function that does the factorial of a int
 *@n: - the number to do a factorial
 *Return: 0
 */
int factorial(int n)
{
if (n == 0)
{
return (1);
}
if (n < 0)
{
return (-1);
}
return (n * factorial(n - 1));
}
