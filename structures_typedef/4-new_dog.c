#include "dog.h"
#include <stdio.h>
#include <stdlib.h>
/**
 *new_dog - a function to add a dog to the sistem
 *@name: - the name of the dog
 *@age: - the age of the dog
 *@owner - the owner of the dog
 */
dog_t *new_dog(char *name, float age, char *owner)
{
dog_t *d;
if(name == NULL || age < 0 || owner == NULL)
{
return (NULL);
}
d = malloc(sizeof(dog_t));
if(d == NULL)
{
return (NULL);
}
name = malloc(sizeof(name));
if (name == NULL)
{
return (NULL);
}
owner = malloc(sizeof(owner));
if(owner == NULL)
{
return (NULL);
}
d->name = name;
d->age = age;
d->owner = owner;
return (d);
}
