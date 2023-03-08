#include "main.h"

/**
 *main - entry point of the function
 *@argc: - the count of the arguments 
 *@argv: - the arguments
 *
 */

int main(int argc, char *argv[])
{
int i;
for (i = 0; i < argc; i++)
{
printf("%s\n", argv[i]);
}
return (0);
}
