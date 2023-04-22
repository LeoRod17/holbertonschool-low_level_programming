#include "main.h"
#include <string.h>
/**
 *_strlen - a function that shows the prints the lenght of the array
 *
 *@s: - the array
 *Return: the size of the string
 */

int _strlen(char *s)
{
int a = 0;
while (s[a] != '\0')
{
a++;
}
return (a);
}
