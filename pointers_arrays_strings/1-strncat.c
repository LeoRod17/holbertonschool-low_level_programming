#include "main.h"
#include <string.h>
/**
 **_strncat - a function that sums a string togheter untill n
 *@dest: - the value of an first array
 *@src: - the value of the second array
 *@n: - the value of the length of the array
 */

char *_strncat(char *dest, char *src, int n)
{
int s;
int i;
s = strlen(dest);
for (i = 0; i < n; i++)
{
dest[s] = src[i];
s++;
}
return (dest);
}
