#include "main.h"

/**
 *_isdigit - a command that tells you if the number is a digit or not
 *@c: - the number that I receive from main.c
 *
 *Return: 0
 */

int _isdigit(int c)
{
if (isdigit(c))
{
return (1);
}
else
{
return (0);
}
}
