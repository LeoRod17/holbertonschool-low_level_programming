#include "dog.h"
#include <stdio.h>
#include <stdlib.h>

/**
 *free_dog - a function to free a dog
 *@d: - the dog to be freed
 *Return: 0
 */
void free_dog(dog_t *d)
{
if (d != NULL)
{
free(d->name);
free(d->owner);
free(d);
}
}
