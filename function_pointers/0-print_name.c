#include <stdio.h>
#include "function_pointers.h"
/**
 *print_name - it writes a name
 *@name: -  the name to print
 *@f: - a pointer
 *Return: 0
 */
void print_name(char *name, void (*f)(char *))
{
f(name);
}
