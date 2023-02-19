#include "main.h"
#include <ctype.h>
/**
 *_isalpha - Indicates if is a lleter or somethig else
 *@c: - the number I recieve from main
 *Return: 0
 */

int _isalpha(int c)
{
if (isalpha(c) != 0)
{
return (1);
}
else
{
return (0);
}
}
