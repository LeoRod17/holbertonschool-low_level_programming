#include "3-calc.h"

/**
 **get_op_func - a function to call one of the aritmetic functions
 *@s: - the operator passed as argument to the program
 *
 */

int (*get_op_func(char *s))(int , int )
{
op_t ops[] = {
{"+", op_add},
{"-", op_sub},
{"*", op_mul},
{"/", op_div},
{"%", op_mod},
{NULL, NULL}
};
int i;
while (s != ops->op)
{
i++;
if (i > 6)
{
printf("Error");
printf("\n");
exit(99);
}
}
ops ->op = s;
return (ops ->f);
}
