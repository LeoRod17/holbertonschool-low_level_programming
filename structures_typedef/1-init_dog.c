#include "dog.h"
#include <stdio.h>
/**
 *init_dog - initiate a variable of type dog
 *@d: - the dog
 *@name: - the name of the dog
 *@age: - the age of the dog
 *@owner: - te owner of the dog
 *Return: 0
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
if (d == NULL)
{
printf("Ok");
}
else
{
d->name = name;
d->age = age;
d->owner = owner;
}
}
