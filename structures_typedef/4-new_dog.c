#include "dog.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 *new_dog - a function to add a dog to the sistem
 *@name: - the name of the dog
 *@age: - the age of the dog
 *@owner: - the owner of the dog
 *Return: a dog
 */
dog_t *new_dog(char *name, float age, char *owner)
{
dog_t *d;
if (name == NULL || age < 0 || owner == NULL)
{
return (NULL);
}
d = malloc(sizeof(dog_t));
if (d == NULL)
{
free(d);
return (NULL);
}
d->name = malloc(sizeof(name) + 1);
if (d->name == NULL)
{
free(d->name);
return (NULL);
}
d->owner = malloc(sizeof(owner) + 1);
if (d->owner == NULL)
{
free(d->owner);
return (NULL);
}
d->name = strcpy(d->name,name);
d->owner = strcpy(d->owner,owner);
d->age = age;
return (d);
}
