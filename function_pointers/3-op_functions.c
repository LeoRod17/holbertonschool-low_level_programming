#include "3-calc.h"

/**
 *op_add - a function that sums two ints
 *@a: - the first number to sum
 *@b: - the second number to sum
 *Return: the sum
 */
int op_add(int a, int b)
{
int res;
res = a + b;
return (res);
}


/**
 *op_sub - a function that returna the diference of two numbers
 *@a: - the first number
 *@b: - the second number
 *Return: the diference
 */

int op_sub(int a, int b)
{
int res;
res = a - b;
return (res);
}

/**
 *op_mul - a function to multiply two numbers
 *@a: - the first number to multiply
 *@b: - the second number to multiply
 *Return: the result
 */
int op_mul(int a, int b)
{
int res;
res = a * b;
return (res);
}

/**
 *op_div - a function that divide a number
 *@a: - the number to be divided
 *@b: - the divisor
 *Return: the result of the division
 */
int op_div(int a, int b)
{
int res;
if (b == 0)
{
printf("Error");
printf("Error");
exit(100);
}
else
{
res = a / b;
return (res);
}
}

/**
 *op_mod - a function to get the remainder of a division
 *@a: - the number to be divided
 *@b: - the divisor
 *Return: the remainder of the division
 */

int op_mod(int a, int b)
{
int res;
if (b == 0)
{
printf("Error");
printf("\n");
exit(100);
}
else
{
res = a % b;
return (res);
}
}
