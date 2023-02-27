#include "main.h"

/**
 *swap_int - it is a function to swap the number of two int pointers
 *@a: - the first value to change
 *@b: - the second value to change
 *Return: 0
 */

void swap_int(int *a, int *b)
{
int swap;
swap = *a;
*a = *b;
*b = swap; 
}
