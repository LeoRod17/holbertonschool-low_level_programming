#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: 0
 */
int main(void)
{
printf("Size of a char: %zu bytes\n", sizeof(char));
printf("Size of a int: %zu bytes \n", sizeof(int));
printf("Size of a long int: %zu bytes\n", sizeof(int long));
printf("Size of a long long: %zu bytes\n", sizeof(long));
printf("Size of a float: %zu bytes\n", sizeof(float));
return (0);
}