#include "main.h"
/**
 *_prime - a function to check if a number is prime
 *@n: an int to check if is orime number
 *@a: an int to check and calculate
 *@b: an int to check and calculate
 *Return: 0 or 1
 */
int _prime(int n, int a, int b)
{
if (a * b == n && b != n)
{
return (1);
}
if (a < n)
{
return (_prime(n, (a + 1), b));
}
if (a == n && b != b)
{
return (_prime(n, 2, (b + 1)));
}
return (0);
}

/**
 *is_prime_number - a function that tells you if the function is a prime number
 *@n: - the int to value of int
 *Return: 0 or 1
 */

int is_prime_number(int n)
{
return (_prime(n, 2, 2));
}
