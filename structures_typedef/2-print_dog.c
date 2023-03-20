#include "dog.h"
#include <stdio.h>

/**
 *print_dog - print the data of a dog
 *@d: - the data of the dog
 *
 *Return: 0
 */
void print_dog(struct dog *d)
{
if (d->name == NULL)
{
d->name = "nil";
}
if (d->owner == NULL)
{
d->owner = "nil";
}
if (d != NULL)
{
printf("Name: %s\n", d->name);
if (d->age == 0)
{
printf("Age: nil\n");
}
else
{
printf("Age: %f\n", d->age);
}
printf("Owner: %s\n", d->owner);
}
}
